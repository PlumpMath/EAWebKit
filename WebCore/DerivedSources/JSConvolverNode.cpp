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

#if ENABLE(WEB_AUDIO)

#include "JSConvolverNode.h"

#include "AudioBuffer.h"
#include "ConvolverNode.h"
#include "JSAudioBuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSConvolverNodeTableValues[] =
{
    { "buffer", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConvolverNodeBuffer), (intptr_t)setJSConvolverNodeBuffer },
    { "normalize", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConvolverNodeNormalize), (intptr_t)setJSConvolverNodeNormalize },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConvolverNodeConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSConvolverNodeTable = { 8, 7, JSConvolverNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSConvolverNodeConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSConvolverNodeConstructorTable = { 1, 0, JSConvolverNodeConstructorTableValues, 0 };
const ClassInfo JSConvolverNodeConstructor::s_info = { "ConvolverNodeConstructor", &Base::s_info, &JSConvolverNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSConvolverNodeConstructor) };

JSConvolverNodeConstructor::JSConvolverNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSConvolverNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSConvolverNodePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSConvolverNodeConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSConvolverNodeConstructor, JSDOMWrapper>(exec, JSConvolverNodeConstructorTable, jsCast<JSConvolverNodeConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSConvolverNodePrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSConvolverNodePrototypeTable = { 1, 0, JSConvolverNodePrototypeTableValues, 0 };
const ClassInfo JSConvolverNodePrototype::s_info = { "ConvolverNodePrototype", &Base::s_info, &JSConvolverNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSConvolverNodePrototype) };

JSObject* JSConvolverNodePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSConvolverNode>(vm, globalObject);
}

const ClassInfo JSConvolverNode::s_info = { "ConvolverNode", &Base::s_info, &JSConvolverNodeTable, 0 , CREATE_METHOD_TABLE(JSConvolverNode) };

JSConvolverNode::JSConvolverNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ConvolverNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSConvolverNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSConvolverNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSConvolverNodePrototype::create(vm, globalObject, JSConvolverNodePrototype::createStructure(vm, globalObject, JSAudioNodePrototype::self(vm, globalObject)));
}

bool JSConvolverNode::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSConvolverNode* thisObject = jsCast<JSConvolverNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSConvolverNode, Base>(exec, JSConvolverNodeTable, thisObject, propertyName, slot);
}

JSValue jsConvolverNodeBuffer(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSConvolverNode* castedThis = jsCast<JSConvolverNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ConvolverNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.buffer()));
    return result;
}


JSValue jsConvolverNodeNormalize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSConvolverNode* castedThis = jsCast<JSConvolverNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ConvolverNode& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.normalize());
    return result;
}


JSValue jsConvolverNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSConvolverNode* domObject = jsCast<JSConvolverNode*>(asObject(slotBase));
    return JSConvolverNode::getConstructor(exec->vm(), domObject->globalObject());
}

void JSConvolverNode::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSConvolverNode* thisObject = jsCast<JSConvolverNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSConvolverNode, Base>(exec, propertyName, value, JSConvolverNodeTable, thisObject, slot);
}

void setJSConvolverNodeBuffer(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSConvolverNode* castedThis = jsCast<JSConvolverNode*>(thisObject);
    ConvolverNode& impl = castedThis->impl();
    AudioBuffer* nativeValue(toAudioBuffer(value));
    if (exec->hadException())
        return;
    impl.setBuffer(nativeValue);
}


void setJSConvolverNodeNormalize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSConvolverNode* castedThis = jsCast<JSConvolverNode*>(thisObject);
    ConvolverNode& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setNormalize(nativeValue);
}


JSValue JSConvolverNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSConvolverNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7ConvolverNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore13ConvolverNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ConvolverNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSConvolverNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7ConvolverNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore13ConvolverNodeE[2];
#if COMPILER(CLANG)
    // If this fails ConvolverNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(ConvolverNode), ConvolverNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // ConvolverNode has subclasses. If ConvolverNode has subclasses that get passed
    // to toJS() we currently require ConvolverNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<ConvolverNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSConvolverNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
