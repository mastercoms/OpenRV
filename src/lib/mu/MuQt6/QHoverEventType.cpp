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

#include <MuQt6/qtUtils.h>
#include <MuQt6/QHoverEventType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <QtNetwork/QtNetwork>
#include <MuQt6/QWidgetType.h>
#include <MuQt6/QActionType.h>
#include <MuQt6/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt6/QPointFType.h>
#include <MuQt6/QPointType.h>

namespace Mu {
using namespace std;

QHoverEventType::QHoverEventType(Context* c, const char* name, Class* super)
    : Class(c, name, super)
{
}

QHoverEventType::~QHoverEventType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

Pointer qt_QHoverEvent_oldPos_QPoint_QHoverEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QHoverEvent * arg0 = getqpointer<QHoverEventType>(param_this);
    return makeqtype<QPointType>(c,arg0->oldPos(),"qt.QPoint");
}

Pointer qt_QHoverEvent_oldPosF_QPointF_QHoverEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QHoverEvent * arg0 = getqpointer<QHoverEventType>(param_this);
    return makeqtype<QPointFType>(c,arg0->oldPosF(),"qt.QPointF");
}


static NODE_IMPLEMENTATION(_n_oldPos0, Pointer)
{
    NODE_RETURN(qt_QHoverEvent_oldPos_QPoint_QHoverEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_oldPosF0, Pointer)
{
    NODE_RETURN(qt_QHoverEvent_oldPosF_QPointF_QHoverEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}



void
QHoverEventType::load()
{
    USING_MU_FUNCTION_SYMBOLS;
    MuLangContext* c = static_cast<MuLangContext*>(context());
    Module* global = globalModule();
    
    const string typeName        = name();
    const string refTypeName     = typeName + "&";
    const string fullTypeName    = fullyQualifiedName();
    const string fullRefTypeName = fullTypeName + "&";
    const char*  tn              = typeName.c_str();
    const char*  ftn             = fullTypeName.c_str();
    const char*  rtn             = refTypeName.c_str();
    const char*  frtn            = fullRefTypeName.c_str();

    scope()->addSymbols(new ReferenceType(c, rtn, this),

                        new Function(c, tn, BaseFunctions::dereference, Cast,
                                     Return, ftn,
                                     Args, frtn, End),

                        EndArguments);
    
    addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate, None,
                            Return, ftn,
                            End),

               new MemberVariable(c, "native", "qt.NativeObject"),

               EndArguments );


addSymbols(
    EndArguments);

addSymbols(
    // enums
    // member functions
    // MISSING: QHoverEvent (QHoverEvent; QHoverEvent this, flags QEvent::Type type, QPointF scenePos, QPointF globalPos, QPointF oldPos, flags Qt::KeyboardModifiers modifiers, "const QPointingDevice *" device)
    new Function(c, "oldPos", _n_oldPos0, None, Compiled, qt_QHoverEvent_oldPos_QPoint_QHoverEvent, Return, "qt.QPoint", Parameters, new Param(c, "this", "qt.QHoverEvent"), End),
    new Function(c, "oldPosF", _n_oldPosF0, None, Compiled, qt_QHoverEvent_oldPosF_QPointF_QHoverEvent, Return, "qt.QPointF", Parameters, new Param(c, "this", "qt.QHoverEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);

}

} // Mu