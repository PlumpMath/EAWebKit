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

#include "JSAudioListener.h"

#include "AudioListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSAudioListenerTableValues[] =
{
    { "dopplerFactor", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerDopplerFactor), (intptr_t)setJSAudioListenerDopplerFactor },
    { "speedOfSound", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerSpeedOfSound), (intptr_t)setJSAudioListenerSpeedOfSound },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioListenerConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSAudioListenerTable = { 8, 7, JSAudioListenerTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSAudioListenerConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSAudioListenerConstructorTable = { 1, 0, JSAudioListenerConstructorTableValues, 0 };
const ClassInfo JSAudioListenerConstructor::s_info = { "AudioListenerConstructor", &Base::s_info, &JSAudioListenerConstructorTable, 0, CREATE_METHOD_TABLE(JSAudioListenerConstructor) };

JSAudioListenerConstructor::JSAudioListenerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioListenerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSAudioListenerPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSAudioListenerConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioListenerConstructor, JSDOMWrapper>(exec, JSAudioListenerConstructorTable, jsCast<JSAudioListenerConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSAudioListenerPrototypeTableValues[] =
{
    { "setPosition", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetPosition), (intptr_t)3 },
    { "setOrientation", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetOrientation), (intptr_t)6 },
    { "setVelocity", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsAudioListenerPrototypeFunctionSetVelocity), (intptr_t)3 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSAudioListenerPrototypeTable = { 8, 7, JSAudioListenerPrototypeTableValues, 0 };
const ClassInfo JSAudioListenerPrototype::s_info = { "AudioListenerPrototype", &Base::s_info, &JSAudioListenerPrototypeTable, 0, CREATE_METHOD_TABLE(JSAudioListenerPrototype) };

JSObject* JSAudioListenerPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioListener>(vm, globalObject);
}

bool JSAudioListenerPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSAudioListenerPrototype* thisObject = jsCast<JSAudioListenerPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSAudioListenerPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSAudioListener::s_info = { "AudioListener", &Base::s_info, &JSAudioListenerTable, 0 , CREATE_METHOD_TABLE(JSAudioListener) };

JSAudioListener::JSAudioListener(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioListener> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSAudioListener::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSAudioListener::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSAudioListenerPrototype::create(vm, globalObject, JSAudioListenerPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSAudioListener::destroy(JSC::JSCell* cell)
{
    JSAudioListener* thisObject = static_cast<JSAudioListener*>(cell);
    thisObject->JSAudioListener::~JSAudioListener();
}

JSAudioListener::~JSAudioListener()
{
    releaseImplIfNotNull();
}

bool JSAudioListener::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSAudioListener* thisObject = jsCast<JSAudioListener*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSAudioListener, Base>(exec, JSAudioListenerTable, thisObject, propertyName, slot);
}

JSValue jsAudioListenerDopplerFactor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioListener& impl = castedThis->impl();
    JSValue result = jsNumber(impl.dopplerFactor());
    return result;
}


JSValue jsAudioListenerSpeedOfSound(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioListener& impl = castedThis->impl();
    JSValue result = jsNumber(impl.speedOfSound());
    return result;
}


JSValue jsAudioListenerConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAudioListener* domObject = jsCast<JSAudioListener*>(asObject(slotBase));
    return JSAudioListener::getConstructor(exec->vm(), domObject->globalObject());
}

void JSAudioListener::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSAudioListener* thisObject = jsCast<JSAudioListener*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSAudioListener, Base>(exec, propertyName, value, JSAudioListenerTable, thisObject, slot);
}

void setJSAudioListenerDopplerFactor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(thisObject);
    AudioListener& impl = castedThis->impl();
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl.setDopplerFactor(nativeValue);
}


void setJSAudioListenerSpeedOfSound(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(thisObject);
    AudioListener& impl = castedThis->impl();
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl.setSpeedOfSound(nativeValue);
}


JSValue JSAudioListener::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioListenerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSAudioListener::info()))
        return throwVMTypeError(exec);
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSAudioListener::info());
    AudioListener& impl = castedThis->impl();
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.setPosition(x, y, z);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetOrientation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSAudioListener::info()))
        return throwVMTypeError(exec);
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSAudioListener::info());
    AudioListener& impl = castedThis->impl();
    if (exec->argumentCount() < 6)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float xUp(exec->argument(3).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float yUp(exec->argument(4).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float zUp(exec->argument(5).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.setOrientation(x, y, z, xUp, yUp, zUp);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsAudioListenerPrototypeFunctionSetVelocity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSAudioListener::info()))
        return throwVMTypeError(exec);
    JSAudioListener* castedThis = jsCast<JSAudioListener*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSAudioListener::info());
    AudioListener& impl = castedThis->impl();
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    float x(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float y(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float z(exec->argument(2).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.setVelocity(x, y, z);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSAudioListener* jsAudioListener)
{
    if (jsAudioListener->hasCustomProperties())
        return true;
    return false;
}

bool JSAudioListenerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSAudioListener* jsAudioListener = jsCast<JSAudioListener*>(handle.get().asCell());
    if (!isObservable(jsAudioListener))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSAudioListenerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSAudioListener* jsAudioListener = jsCast<JSAudioListener*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsAudioListener->impl(), jsAudioListener);
    jsAudioListener->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioListener* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAudioListener>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to AudioListener.
    COMPILE_ASSERT(!__is_polymorphic(AudioListener), AudioListener_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<AudioListener>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSAudioListener>(exec, globalObject, impl);
}

AudioListener* toAudioListener(JSC::JSValue value)
{
    return value.inherits(JSAudioListener::info()) ? &jsCast<JSAudioListener*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEB_AUDIO)
