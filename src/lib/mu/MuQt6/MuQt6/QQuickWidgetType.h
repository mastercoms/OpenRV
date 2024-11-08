//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the qt2mu.py script.
//            If it is not possible, manual editing is ok but it could be lost in future generations.

#ifndef __MuQt6__QQuickWidgetType__h__
#define __MuQt6__QQuickWidgetType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <MuQt6/Bridge.h>

namespace Mu {
class MuQt_QQuickWidget;

class QQuickWidgetType : public Class
{
  public:

    typedef MuQt_QQuickWidget MuQtType;
    typedef QQuickWidget QtType;

    //
    //  Constructors
    //

    QQuickWidgetType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QQuickWidgetType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[31];
};

// Inheritable object

class MuQt_QQuickWidget : public QQuickWidget
{
  public:
    virtual ~MuQt_QQuickWidget();
    MuQt_QQuickWidget(Pointer muobj, const CallEnvironment*, QWidget * parent) ;
    MuQt_QQuickWidget(Pointer muobj, const CallEnvironment*, QQmlEngine * engine, QWidget * parent) ;
    MuQt_QQuickWidget(Pointer muobj, const CallEnvironment*, const QUrl & source, QWidget * parent) ;
  protected:
    virtual void dragEnterEvent(QDragEnterEvent * e) ;
    virtual void dragLeaveEvent(QDragLeaveEvent * e) ;
    virtual void dragMoveEvent(QDragMoveEvent * e) ;
    virtual void dropEvent(QDropEvent * e) ;
    virtual bool event(QEvent * e) ;
    virtual void focusInEvent(QFocusEvent * event) ;
    virtual bool focusNextPrevChild(bool next) ;
    virtual void focusOutEvent(QFocusEvent * event) ;
    virtual void hideEvent(QHideEvent * _p13) ;
    virtual void keyPressEvent(QKeyEvent * e) ;
    virtual void keyReleaseEvent(QKeyEvent * e) ;
    virtual void mouseDoubleClickEvent(QMouseEvent * e) ;
    virtual void mouseMoveEvent(QMouseEvent * e) ;
    virtual void mousePressEvent(QMouseEvent * e) ;
    virtual void mouseReleaseEvent(QMouseEvent * e) ;
    virtual void paintEvent(QPaintEvent * event) ;
    virtual void showEvent(QShowEvent * _p13) ;
    virtual void wheelEvent(QWheelEvent * e) ;
  public:
    virtual bool hasHeightForWidth() const;
    virtual int heightForWidth(int w) const;
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const;
    virtual QSize minimumSizeHint() const;
    virtual QSize sizeHint() const;
  protected:
    virtual void changeEvent(QEvent * event) ;
    virtual void closeEvent(QCloseEvent * event) ;
    virtual void contextMenuEvent(QContextMenuEvent * event) ;
    virtual void leaveEvent(QEvent * event) ;
    virtual void moveEvent(QMoveEvent * event) ;
    virtual void resizeEvent(QResizeEvent * event) ;
    virtual void tabletEvent(QTabletEvent * event) ;
    virtual int metric(QPaintDevice::PaintDeviceMetric m) const;
  public:
    void dragEnterEvent_pub(QDragEnterEvent * e)  { dragEnterEvent(e); }
    void dragEnterEvent_pub_parent(QDragEnterEvent * e)  { QQuickWidget::dragEnterEvent(e); }
    void dragLeaveEvent_pub(QDragLeaveEvent * e)  { dragLeaveEvent(e); }
    void dragLeaveEvent_pub_parent(QDragLeaveEvent * e)  { QQuickWidget::dragLeaveEvent(e); }
    void dragMoveEvent_pub(QDragMoveEvent * e)  { dragMoveEvent(e); }
    void dragMoveEvent_pub_parent(QDragMoveEvent * e)  { QQuickWidget::dragMoveEvent(e); }
    void dropEvent_pub(QDropEvent * e)  { dropEvent(e); }
    void dropEvent_pub_parent(QDropEvent * e)  { QQuickWidget::dropEvent(e); }
    bool event_pub(QEvent * e)  { return event(e); }
    bool event_pub_parent(QEvent * e)  { return QQuickWidget::event(e); }
    void focusInEvent_pub(QFocusEvent * event)  { focusInEvent(event); }
    void focusInEvent_pub_parent(QFocusEvent * event)  { QQuickWidget::focusInEvent(event); }
    bool focusNextPrevChild_pub(bool next)  { return focusNextPrevChild(next); }
    bool focusNextPrevChild_pub_parent(bool next)  { return QQuickWidget::focusNextPrevChild(next); }
    void focusOutEvent_pub(QFocusEvent * event)  { focusOutEvent(event); }
    void focusOutEvent_pub_parent(QFocusEvent * event)  { QQuickWidget::focusOutEvent(event); }
    void hideEvent_pub(QHideEvent * _p13)  { hideEvent(_p13); }
    void hideEvent_pub_parent(QHideEvent * _p13)  { QQuickWidget::hideEvent(_p13); }
    void keyPressEvent_pub(QKeyEvent * e)  { keyPressEvent(e); }
    void keyPressEvent_pub_parent(QKeyEvent * e)  { QQuickWidget::keyPressEvent(e); }
    void keyReleaseEvent_pub(QKeyEvent * e)  { keyReleaseEvent(e); }
    void keyReleaseEvent_pub_parent(QKeyEvent * e)  { QQuickWidget::keyReleaseEvent(e); }
    void mouseDoubleClickEvent_pub(QMouseEvent * e)  { mouseDoubleClickEvent(e); }
    void mouseDoubleClickEvent_pub_parent(QMouseEvent * e)  { QQuickWidget::mouseDoubleClickEvent(e); }
    void mouseMoveEvent_pub(QMouseEvent * e)  { mouseMoveEvent(e); }
    void mouseMoveEvent_pub_parent(QMouseEvent * e)  { QQuickWidget::mouseMoveEvent(e); }
    void mousePressEvent_pub(QMouseEvent * e)  { mousePressEvent(e); }
    void mousePressEvent_pub_parent(QMouseEvent * e)  { QQuickWidget::mousePressEvent(e); }
    void mouseReleaseEvent_pub(QMouseEvent * e)  { mouseReleaseEvent(e); }
    void mouseReleaseEvent_pub_parent(QMouseEvent * e)  { QQuickWidget::mouseReleaseEvent(e); }
    void paintEvent_pub(QPaintEvent * event)  { paintEvent(event); }
    void paintEvent_pub_parent(QPaintEvent * event)  { QQuickWidget::paintEvent(event); }
    void showEvent_pub(QShowEvent * _p13)  { showEvent(_p13); }
    void showEvent_pub_parent(QShowEvent * _p13)  { QQuickWidget::showEvent(_p13); }
    void wheelEvent_pub(QWheelEvent * e)  { wheelEvent(e); }
    void wheelEvent_pub_parent(QWheelEvent * e)  { QQuickWidget::wheelEvent(e); }
    void changeEvent_pub(QEvent * event)  { changeEvent(event); }
    void changeEvent_pub_parent(QEvent * event)  { QQuickWidget::changeEvent(event); }
    void closeEvent_pub(QCloseEvent * event)  { closeEvent(event); }
    void closeEvent_pub_parent(QCloseEvent * event)  { QQuickWidget::closeEvent(event); }
    void contextMenuEvent_pub(QContextMenuEvent * event)  { contextMenuEvent(event); }
    void contextMenuEvent_pub_parent(QContextMenuEvent * event)  { QQuickWidget::contextMenuEvent(event); }
    void leaveEvent_pub(QEvent * event)  { leaveEvent(event); }
    void leaveEvent_pub_parent(QEvent * event)  { QQuickWidget::leaveEvent(event); }
    void moveEvent_pub(QMoveEvent * event)  { moveEvent(event); }
    void moveEvent_pub_parent(QMoveEvent * event)  { QQuickWidget::moveEvent(event); }
    void resizeEvent_pub(QResizeEvent * event)  { resizeEvent(event); }
    void resizeEvent_pub_parent(QResizeEvent * event)  { QQuickWidget::resizeEvent(event); }
    void tabletEvent_pub(QTabletEvent * event)  { tabletEvent(event); }
    void tabletEvent_pub_parent(QTabletEvent * event)  { QQuickWidget::tabletEvent(event); }
    int metric_pub(QPaintDevice::PaintDeviceMetric m) const { return metric(m); }
    int metric_pub_parent(QPaintDevice::PaintDeviceMetric m) const { return QQuickWidget::metric(m); }
  public:
    const QQuickWidgetType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QQuickWidgetType::cachedInstance(const QQuickWidgetType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QQuickWidgetType__h__