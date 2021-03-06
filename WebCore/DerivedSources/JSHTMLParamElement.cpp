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

#include "config.h"
#include "JSHTMLParamElement.h"

#include "HTMLNames.h"
#include "HTMLParamElement.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLParamElementTableValues[] =
{
    { "name", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParamElementName), (intptr_t)setJSHTMLParamElementName },
    { "type", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParamElementType), (intptr_t)setJSHTMLParamElementType },
    { "value", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParamElementValue), (intptr_t)setJSHTMLParamElementValue },
    { "valueType", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParamElementValueType), (intptr_t)setJSHTMLParamElementValueType },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLParamElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLParamElementTable = { 18, 15, JSHTMLParamElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLParamElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLParamElementConstructorTable = { 1, 0, JSHTMLParamElementConstructorTableValues, 0 };
const ClassInfo JSHTMLParamElementConstructor::s_info = { "HTMLParamElementConstructor", &Base::s_info, &JSHTMLParamElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLParamElementConstructor) };

JSHTMLParamElementConstructor::JSHTMLParamElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLParamElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLParamElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLParamElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLParamElementConstructor, JSDOMWrapper>(exec, JSHTMLParamElementConstructorTable, jsCast<JSHTMLParamElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLParamElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLParamElementPrototypeTable = { 1, 0, JSHTMLParamElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLParamElementPrototype::s_info = { "HTMLParamElementPrototype", &Base::s_info, &JSHTMLParamElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLParamElementPrototype) };

JSObject* JSHTMLParamElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLParamElement>(vm, globalObject);
}

const ClassInfo JSHTMLParamElement::s_info = { "HTMLParamElement", &Base::s_info, &JSHTMLParamElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLParamElement) };

JSHTMLParamElement::JSHTMLParamElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLParamElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLParamElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLParamElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLParamElementPrototype::create(vm, globalObject, JSHTMLParamElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLParamElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLParamElement* thisObject = jsCast<JSHTMLParamElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLParamElement, Base>(exec, JSHTMLParamElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLParamElementName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLParamElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return result;
}


JSValue jsHTMLParamElementType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLParamElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLParamElementValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLParamElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::valueAttr));
    return result;
}


JSValue jsHTMLParamElementValueType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLParamElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::valuetypeAttr));
    return result;
}


JSValue jsHTMLParamElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLParamElement* domObject = jsCast<JSHTMLParamElement*>(asObject(slotBase));
    return JSHTMLParamElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLParamElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLParamElement* thisObject = jsCast<JSHTMLParamElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLParamElement, Base>(exec, propertyName, value, JSHTMLParamElementTable, thisObject, slot);
}

void setJSHTMLParamElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLParamElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::typeAttr, nativeValue);
}


void setJSHTMLParamElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::valueAttr, nativeValue);
}


void setJSHTMLParamElementValueType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLParamElement* castedThis = jsCast<JSHTMLParamElement*>(thisObject);
    HTMLParamElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::valuetypeAttr, nativeValue);
}


JSValue JSHTMLParamElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLParamElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
