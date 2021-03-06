/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtQuick module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef ITEMPARTICLE_H
#define ITEMPARTICLE_H
#include "qquickparticlepainter_p.h"
#include <QPointer>
#include <QSet>
#include <private/qquickanimation_p_p.h>
QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

class QQuickVisualDataModel;
class QQuickItemParticleAttached;

class QQuickItemParticle : public QQuickParticlePainter
{
    Q_OBJECT
    Q_PROPERTY(bool fade READ fade WRITE setFade NOTIFY fadeChanged)
    Q_PROPERTY(QQmlComponent* delegate READ delegate WRITE setDelegate NOTIFY delegateChanged)
public:
    explicit QQuickItemParticle(QQuickItem *parent = 0);
    ~QQuickItemParticle();

    bool fade() const { return m_fade; }

    virtual QSGNode *updatePaintNode(QSGNode *, UpdatePaintNodeData *);

    static QQuickItemParticleAttached *qmlAttachedProperties(QObject *object);
    QQmlComponent* delegate() const
    {
        return m_delegate;
    }

signals:
    void fadeChanged();

    void delegateChanged(QQmlComponent* arg);

public slots:
    //TODO: Add a follow mode, where moving the delegate causes the logical particle to go with it?
    void freeze(QQuickItem* item);
    void unfreeze(QQuickItem* item);
    void take(QQuickItem* item,bool prioritize=false);//take by modelparticle
    void give(QQuickItem* item);//give from modelparticle

    void setFade(bool arg){if (arg == m_fade) return; m_fade = arg; emit fadeChanged();}
    void setDelegate(QQmlComponent* arg)
    {
        if (m_delegate != arg) {
            m_delegate = arg;
            emit delegateChanged(arg);
        }
    }

protected:
    virtual void reset();
    virtual void commit(int gIdx, int pIdx);
    virtual void initialize(int gIdx, int pIdx);
    void prepareNextFrame();
private:
    void tick(int time = 0);
    QList<QQuickItem* > m_deletables;
    QList< QQuickParticleData* > m_loadables;
    bool m_fade;

    QList<QQuickItem*> m_pendingItems;
    QList<int> m_available;
    QSet<QQuickItem*> m_stasis;
    qreal m_lastT;
    int m_activeCount;
    QQmlComponent* m_delegate;

    typedef QTickAnimationProxy<QQuickItemParticle, &QQuickItemParticle::tick> Clock;
    Clock *clock;
};

class QQuickItemParticleAttached : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQuickItemParticle* particle READ particle CONSTANT);
public:
    QQuickItemParticleAttached(QObject* parent)
        : QObject(parent), m_mp(0)
    {;}
    QQuickItemParticle* particle() {return m_mp;}
    void detach(){emit detached();}
    void attach(){emit attached();}
private:
    QQuickItemParticle* m_mp;
    friend class QQuickItemParticle;
Q_SIGNALS:
    void detached();
    void attached();
};

QT_END_NAMESPACE

QML_DECLARE_TYPEINFO(QQuickItemParticle, QML_HAS_ATTACHED_PROPERTIES)

QT_END_HEADER
#endif // ITEMPARTICLE_H
