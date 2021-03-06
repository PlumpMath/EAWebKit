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

#ifndef JSHTMLTableCellElement_h
#define JSHTMLTableCellElement_h

#include "HTMLTableCellElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLTableCellElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLTableCellElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableCellElement> impl)
    {
        JSHTMLTableCellElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableCellElement>(globalObject->vm().heap)) JSHTMLTableCellElement(structure, globalObject, impl);
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
    HTMLTableCellElement& impl() const
    {
        return static_cast<HTMLTableCellElement&>(Base::impl());
    }
protected:
    JSHTMLTableCellElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLTableCellElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSHTMLTableCellElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSHTMLTableCellElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLTableCellElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableCellElementPrototype>(vm.heap)) JSHTMLTableCellElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLTableCellElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSHTMLTableCellElementConstructor : public DOMConstructorObject {
private:
    JSHTMLTableCellElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLTableCellElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLTableCellElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableCellElementConstructor>(vm.heap)) JSHTMLTableCellElementConstructor(structure, globalObject);
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

// Attributes

JSC::JSValue jsHTMLTableCellElementCellIndex(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTableCellElementAbbr(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementAbbr(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementAxis(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementAxis(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementBgColor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementCh(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementCh(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementChOff(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementChOff(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementColSpan(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementColSpan(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementHeaders(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementHeaders(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementNoWrap(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementNoWrap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementRowSpan(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementRowSpan(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementScope(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementScope(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementVAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementVAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTableCellElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTableCellElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
