/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLTableSectionElement_h
#define JSHTMLTableSectionElement_h

#include "HTMLTableSectionElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLTableSectionElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLTableSectionElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableSectionElement> impl)
    {
        JSHTMLTableSectionElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableSectionElement>(globalObject->vm().heap)) JSHTMLTableSectionElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    HTMLTableSectionElement& impl() const
    {
        return static_cast<HTMLTableSectionElement&>(Base::impl());
    }
protected:
    JSHTMLTableSectionElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLTableSectionElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

HTMLTableSectionElement* toHTMLTableSectionElement(JSC::JSValue);

class JSHTMLTableSectionElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSHTMLTableSectionElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLTableSectionElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableSectionElementPrototype>(vm.heap)) JSHTMLTableSectionElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLTableSectionElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLTableSectionElementConstructor : public DOMConstructorObject {
private:
    JSHTMLTableSectionElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLTableSectionElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLTableSectionElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableSectionElementConstructor>(vm.heap)) JSHTMLTableSectionElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionInsertRow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableSectionElementPrototypeFunctionDeleteRow(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLTableSectionElementAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableSectionElementCh(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementCh(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableSectionElementChOff(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementChOff(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableSectionElementVAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableSectionElementVAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableSectionElementRows(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTableSectionElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif