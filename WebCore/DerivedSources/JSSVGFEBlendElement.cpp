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

#include "JSSVGFEBlendElement.h"

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEBlendElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEBlendElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementIn1), (intptr_t)0 },
    { "in2", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementIn2), (intptr_t)0 },
    { "mode", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementMode), (intptr_t)0 },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementX), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementY), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementWidth), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementHeight), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementResult), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEBlendElementTable = { 34, 31, JSSVGFEBlendElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEBlendElementConstructorTableValues[] =
{
    { "SVG_FEBLEND_MODE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_NORMAL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_MULTIPLY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_SCREEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_DARKEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_LIGHTEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEBlendElementConstructorTable = { 16, 15, JSSVGFEBlendElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEBlendElementConstructor::s_info = { "SVGFEBlendElementConstructor", &Base::s_info, &JSSVGFEBlendElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEBlendElementConstructor) };

JSSVGFEBlendElementConstructor::JSSVGFEBlendElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEBlendElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEBlendElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEBlendElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEBlendElementConstructor, JSDOMWrapper>(exec, JSSVGFEBlendElementConstructorTable, jsCast<JSSVGFEBlendElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEBlendElementPrototypeTableValues[] =
{
    { "SVG_FEBLEND_MODE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_NORMAL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_MULTIPLY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_SCREEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_DARKEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN), (intptr_t)0 },
    { "SVG_FEBLEND_MODE_LIGHTEN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEBlendElementPrototypeTable = { 16, 15, JSSVGFEBlendElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEBlendElementPrototype::s_info = { "SVGFEBlendElementPrototype", &Base::s_info, &JSSVGFEBlendElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEBlendElementPrototype) };

JSObject* JSSVGFEBlendElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEBlendElement>(vm, globalObject);
}

bool JSSVGFEBlendElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEBlendElementPrototype* thisObject = jsCast<JSSVGFEBlendElementPrototype*>(object);
    return getStaticValueSlot<JSSVGFEBlendElementPrototype, JSObject>(exec, JSSVGFEBlendElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGFEBlendElement::s_info = { "SVGFEBlendElement", &Base::s_info, &JSSVGFEBlendElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEBlendElement) };

JSSVGFEBlendElement::JSSVGFEBlendElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEBlendElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEBlendElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFEBlendElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEBlendElementPrototype::create(vm, globalObject, JSSVGFEBlendElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFEBlendElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEBlendElement* thisObject = jsCast<JSSVGFEBlendElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFEBlendElement, Base>(exec, JSSVGFEBlendElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGFEBlendElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEBlendElementIn2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEBlendElementMode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.modeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEBlendElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEBlendElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* castedThis = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEBlendElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEBlendElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEBlendElement* domObject = jsCast<JSSVGFEBlendElement*>(asObject(slotBase));
    return JSSVGFEBlendElement::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGFEBlendElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEBlendElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_NORMAL(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_MULTIPLY(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_SCREEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_DARKEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsSVGFEBlendElementSVG_FEBLEND_MODE_LIGHTEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
