/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtQml module of the Qt Toolkit.
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

#ifndef QSGCONTEXTPLUGIN_H
#define QSGCONTEXTPLUGIN_H

#include <private/qtquickglobal_p.h>
#include <QtQuick/qquickimageprovider.h>
#include <QtCore/qplugin.h>
#include <QtCore/qfactoryinterface.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

class QSGContext;

class QQuickWindowManager;

struct Q_QUICK_PRIVATE_EXPORT QSGContextFactoryInterface : public QFactoryInterface
{
    virtual QSGContext *create(const QString &key) const = 0;

    virtual QQuickTextureFactory *createTextureFactoryFromImage(const QImage &image) = 0;
    virtual QQuickWindowManager *createWindowManager() = 0;
};

#define QSGContextFactoryInterface_iid \
        "org.qt-project.Qt.QSGContextFactoryInterface"
Q_DECLARE_INTERFACE(QSGContextFactoryInterface, QSGContextFactoryInterface_iid)

class Q_QUICK_PRIVATE_EXPORT QSGContextPlugin : public QObject, public QSGContextFactoryInterface
{
    Q_OBJECT
    Q_INTERFACES(QSGContextFactoryInterface:QFactoryInterface)
public:
    explicit QSGContextPlugin(QObject *parent = 0);
    virtual ~QSGContextPlugin();

    virtual QStringList keys() const = 0;
    virtual QSGContext *create(const QString &key) const = 0;

    virtual QQuickTextureFactory *createTextureFactoryFromImage(const QImage &) { return 0; }
    virtual QQuickWindowManager *createWindowManager() { return 0; }
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QSGCONTEXTPLUGIN_H
