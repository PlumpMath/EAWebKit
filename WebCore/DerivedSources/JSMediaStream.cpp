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

#if ENABLE(MEDIA_STREAM)

#include "JSMediaStream.h"

#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSMediaStream.h"
#include "JSMediaStreamTrack.h"
#include "MediaStream.h"
#include "MediaStreamTrack.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMediaStreamTableValues[] =
{
    { "id", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamId), (intptr_t)0 },
    { "ended", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamEnded), (intptr_t)0 },
    { "onended", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamOnended), (intptr_t)setJSMediaStreamOnended },
    { "onaddtrack", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamOnaddtrack), (intptr_t)setJSMediaStreamOnaddtrack },
    { "onremovetrack", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamOnremovetrack), (intptr_t)setJSMediaStreamOnremovetrack },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaStreamTable = { 17, 15, JSMediaStreamTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSMediaStreamConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaStreamConstructorTable = { 1, 0, JSMediaStreamConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSMediaStreamConstructor::constructJSMediaStream1(ExecState* exec)
{
    JSMediaStreamConstructor* castedThis = jsCast<JSMediaStreamConstructor*>(exec->callee());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "MediaStream constructor associated document is unavailable"));
    RefPtr<MediaStream> object = MediaStream::create(context);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSMediaStreamConstructor::constructJSMediaStream2(ExecState* exec)
{
    JSMediaStreamConstructor* castedThis = jsCast<JSMediaStreamConstructor*>(exec->callee());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    MediaStream* stream(toMediaStream(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "MediaStream constructor associated document is unavailable"));
    RefPtr<MediaStream> object = MediaStream::create(context, stream);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSMediaStreamConstructor::constructJSMediaStream3(ExecState* exec)
{
    JSMediaStreamConstructor* castedThis = jsCast<JSMediaStreamConstructor*>(exec->callee());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    Vector<RefPtr<MediaStreamTrack> > tracks((toRefPtrNativeArray<MediaStreamTrack, JSMediaStreamTrack>(exec, exec->argument(0), &toMediaStreamTrack)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "MediaStream constructor associated document is unavailable"));
    RefPtr<MediaStream> object = MediaStream::create(context, tracks);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSMediaStreamConstructor::constructJSMediaStream(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    if (argsCount == 0)
        return JSMediaStreamConstructor::constructJSMediaStream1(exec);
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(JSMediaStream::info()))))
        return JSMediaStreamConstructor::constructJSMediaStream2(exec);
    if ((argsCount == 1 && (arg0.isObject() && isJSArray(arg0))))
        return JSMediaStreamConstructor::constructJSMediaStream3(exec);
    return throwVMTypeError(exec);
}

const ClassInfo JSMediaStreamConstructor::s_info = { "webkitMediaStreamConstructor", &Base::s_info, &JSMediaStreamConstructorTable, 0, CREATE_METHOD_TABLE(JSMediaStreamConstructor) };

JSMediaStreamConstructor::JSMediaStreamConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaStreamPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSMediaStreamConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaStreamConstructor, JSDOMWrapper>(exec, JSMediaStreamConstructorTable, jsCast<JSMediaStreamConstructor*>(object), propertyName, slot);
}

ConstructType JSMediaStreamConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaStream;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaStreamPrototypeTableValues[] =
{
    { "getAudioTracks", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionGetAudioTracks), (intptr_t)0 },
    { "getVideoTracks", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionGetVideoTracks), (intptr_t)0 },
    { "addTrack", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionAddTrack), (intptr_t)1 },
    { "removeTrack", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionRemoveTrack), (intptr_t)1 },
    { "getTrackById", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionGetTrackById), (intptr_t)1 },
    { "clone", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionClone), (intptr_t)0 },
    { "addEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaStreamPrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaStreamPrototypeTable = { 33, 31, JSMediaStreamPrototypeTableValues, 0 };
const ClassInfo JSMediaStreamPrototype::s_info = { "webkitMediaStreamPrototype", &Base::s_info, &JSMediaStreamPrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaStreamPrototype) };

JSObject* JSMediaStreamPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStream>(vm, globalObject);
}

bool JSMediaStreamPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaStreamPrototype* thisObject = jsCast<JSMediaStreamPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSMediaStreamPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSMediaStream::s_info = { "webkitMediaStream", &Base::s_info, &JSMediaStreamTable, 0 , CREATE_METHOD_TABLE(JSMediaStream) };

JSMediaStream::JSMediaStream(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStream> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMediaStream::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSMediaStream::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaStreamPrototype::create(vm, globalObject, JSMediaStreamPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSMediaStream::destroy(JSC::JSCell* cell)
{
    JSMediaStream* thisObject = static_cast<JSMediaStream*>(cell);
    thisObject->JSMediaStream::~JSMediaStream();
}

JSMediaStream::~JSMediaStream()
{
    releaseImplIfNotNull();
}

bool JSMediaStream::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaStream* thisObject = jsCast<JSMediaStream*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaStream, Base>(exec, JSMediaStreamTable, thisObject, propertyName, slot);
}

JSValue jsMediaStreamId(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStream& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.id());
    return result;
}


JSValue jsMediaStreamEnded(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStream& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.ended());
    return result;
}


JSValue jsMediaStreamOnended(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStream& impl = castedThis->impl();
    if (EventListener* listener = impl.onended()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsMediaStreamOnaddtrack(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStream& impl = castedThis->impl();
    if (EventListener* listener = impl.onaddtrack()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsMediaStreamOnremovetrack(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaStream& impl = castedThis->impl();
    if (EventListener* listener = impl.onremovetrack()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsMediaStreamConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaStream* domObject = jsCast<JSMediaStream*>(asObject(slotBase));
    return JSMediaStream::getConstructor(exec->vm(), domObject->globalObject());
}

void JSMediaStream::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSMediaStream* thisObject = jsCast<JSMediaStream*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSMediaStream, Base>(exec, propertyName, value, JSMediaStreamTable, thisObject, slot);
}

void setJSMediaStreamOnended(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(thisObject);
    MediaStream& impl = castedThis->impl();
    impl.setOnended(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSMediaStreamOnaddtrack(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(thisObject);
    MediaStream& impl = castedThis->impl();
    impl.setOnaddtrack(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSMediaStreamOnremovetrack(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(thisObject);
    MediaStream& impl = castedThis->impl();
    impl.setOnremovetrack(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSMediaStream::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionGetAudioTracks(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();

    JSC::JSValue result = jsArray(exec, castedThis->globalObject(), impl.getAudioTracks());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionGetVideoTracks(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();

    JSC::JSValue result = jsArray(exec, castedThis->globalObject(), impl.getVideoTracks());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionAddTrack(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    MediaStreamTrack* track(toMediaStreamTrack(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.addTrack(track, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionRemoveTrack(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    MediaStreamTrack* track(toMediaStreamTrack(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.removeTrack(track, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionGetTrackById(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& trackId(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getTrackById(trackId)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionClone(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.clone()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaStreamPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaStream::info()))
        return throwVMTypeError(exec);
    JSMediaStream* castedThis = jsCast<JSMediaStream*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaStream::info());
    MediaStream& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(event, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSMediaStream::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSMediaStream* thisObject = jsCast<JSMediaStream*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

static inline bool isObservable(JSMediaStream* jsMediaStream)
{
    if (jsMediaStream->hasCustomProperties())
        return true;
    if (jsMediaStream->impl().hasEventListeners())
        return true;
    return false;
}

bool JSMediaStreamOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMediaStream* jsMediaStream = jsCast<JSMediaStream*>(handle.get().asCell());
    if (jsMediaStream->impl().isFiringEventListeners())
        return true;
    if (!isObservable(jsMediaStream))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaStreamOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMediaStream* jsMediaStream = jsCast<JSMediaStream*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaStream->impl(), jsMediaStream);
    jsMediaStream->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MediaStream@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11MediaStreamE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaStream* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaStream>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MediaStream@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11MediaStreamE[2];
#if COMPILER(CLANG)
    // If this fails MediaStream does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MediaStream), MediaStream_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MediaStream has subclasses. If MediaStream has subclasses that get passed
    // to toJS() we currently require MediaStream you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<MediaStream>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaStream>(exec, globalObject, impl);
}

MediaStream* toMediaStream(JSC::JSValue value)
{
    return value.inherits(JSMediaStream::info()) ? &jsCast<JSMediaStream*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(MEDIA_STREAM)
