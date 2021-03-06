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

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGComponentTransferFunctionElement.h"

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedNumberList.h"
#include "SVGComponentTransferFunctionElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGComponentTransferFunctionElementTableValues[] =
{
    { "type", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementType), (intptr_t)0 },
    { "tableValues", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementTableValues), (intptr_t)0 },
    { "slope", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSlope), (intptr_t)0 },
    { "intercept", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementIntercept), (intptr_t)0 },
    { "amplitude", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementAmplitude), (intptr_t)0 },
    { "exponent", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementExponent), (intptr_t)0 },
    { "offset", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementOffset), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGComponentTransferFunctionElementTable = { 19, 15, JSSVGComponentTransferFunctionElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGComponentTransferFunctionElementConstructorTableValues[] =
{
    { "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGComponentTransferFunctionElementConstructorTable = { 17, 15, JSSVGComponentTransferFunctionElementConstructorTableValues, 0 };
const ClassInfo JSSVGComponentTransferFunctionElementConstructor::s_info = { "SVGComponentTransferFunctionElementConstructor", &Base::s_info, &JSSVGComponentTransferFunctionElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGComponentTransferFunctionElementConstructor) };

JSSVGComponentTransferFunctionElementConstructor::JSSVGComponentTransferFunctionElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGComponentTransferFunctionElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGComponentTransferFunctionElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGComponentTransferFunctionElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGComponentTransferFunctionElementConstructor, JSDOMWrapper>(exec, JSSVGComponentTransferFunctionElementConstructorTable, jsCast<JSSVGComponentTransferFunctionElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGComponentTransferFunctionElementPrototypeTableValues[] =
{
    { "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR), (intptr_t)0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGComponentTransferFunctionElementPrototypeTable = { 17, 15, JSSVGComponentTransferFunctionElementPrototypeTableValues, 0 };
const ClassInfo JSSVGComponentTransferFunctionElementPrototype::s_info = { "SVGComponentTransferFunctionElementPrototype", &Base::s_info, &JSSVGComponentTransferFunctionElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGComponentTransferFunctionElementPrototype) };

JSObject* JSSVGComponentTransferFunctionElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGComponentTransferFunctionElement>(vm, globalObject);
}

bool JSSVGComponentTransferFunctionElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGComponentTransferFunctionElementPrototype* thisObject = jsCast<JSSVGComponentTransferFunctionElementPrototype*>(object);
    return getStaticValueSlot<JSSVGComponentTransferFunctionElementPrototype, JSObject>(exec, JSSVGComponentTransferFunctionElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGComponentTransferFunctionElement::s_info = { "SVGComponentTransferFunctionElement", &Base::s_info, &JSSVGComponentTransferFunctionElementTable, 0 , CREATE_METHOD_TABLE(JSSVGComponentTransferFunctionElement) };

JSSVGComponentTransferFunctionElement::JSSVGComponentTransferFunctionElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGComponentTransferFunctionElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGComponentTransferFunctionElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGComponentTransferFunctionElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGComponentTransferFunctionElementPrototype::create(vm, globalObject, JSSVGComponentTransferFunctionElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGComponentTransferFunctionElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGComponentTransferFunctionElement* thisObject = jsCast<JSSVGComponentTransferFunctionElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGComponentTransferFunctionElement, Base>(exec, JSSVGComponentTransferFunctionElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGComponentTransferFunctionElementType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.typeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementTableValues(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumberList> obj = impl.tableValuesAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementSlope(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.slopeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementIntercept(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.interceptAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementAmplitude(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.amplitudeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementExponent(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.exponentAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* castedThis = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGComponentTransferFunctionElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.offsetAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGComponentTransferFunctionElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGComponentTransferFunctionElement* domObject = jsCast<JSSVGComponentTransferFunctionElement*>(asObject(slotBase));
    return JSSVGComponentTransferFunctionElement::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGComponentTransferFunctionElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGComponentTransferFunctionElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_IDENTITY(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_TABLE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_DISCRETE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_LINEAR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSVGComponentTransferFunctionElementSVG_FECOMPONENTTRANSFER_TYPE_GAMMA(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
