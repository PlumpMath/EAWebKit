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

#if ENABLE(WORKERS)

#include "JSWorkerLocation.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include "WorkerLocation.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWorkerLocationTableValues[] =
{
    { "href", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHref), (intptr_t)0 },
    { "protocol", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationProtocol), (intptr_t)0 },
    { "host", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHost), (intptr_t)0 },
    { "hostname", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHostname), (intptr_t)0 },
    { "port", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationPort), (intptr_t)0 },
    { "pathname", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationPathname), (intptr_t)0 },
    { "search", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationSearch), (intptr_t)0 },
    { "hash", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationHash), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerLocationConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWorkerLocationTable = { 35, 31, JSWorkerLocationTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWorkerLocationConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWorkerLocationConstructorTable = { 1, 0, JSWorkerLocationConstructorTableValues, 0 };
static const HashTable& getJSWorkerLocationConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSWorkerLocationConstructorTable);
}

const ClassInfo JSWorkerLocationConstructor::s_info = { "WorkerLocationConstructor", &Base::s_info, 0, getJSWorkerLocationConstructorTable, CREATE_METHOD_TABLE(JSWorkerLocationConstructor) };

JSWorkerLocationConstructor::JSWorkerLocationConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWorkerLocationConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWorkerLocationPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWorkerLocationConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWorkerLocationConstructor, JSDOMWrapper>(exec, getJSWorkerLocationConstructorTable(exec), jsCast<JSWorkerLocationConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSWorkerLocationPrototypeTableValues[] =
{
    { "toString", DontDelete | DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWorkerLocationPrototypeFunctionToString), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWorkerLocationPrototypeTable = { 2, 1, JSWorkerLocationPrototypeTableValues, 0 };
static const HashTable& getJSWorkerLocationPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSWorkerLocationPrototypeTable);
}

const ClassInfo JSWorkerLocationPrototype::s_info = { "WorkerLocationPrototype", &Base::s_info, 0, getJSWorkerLocationPrototypeTable, CREATE_METHOD_TABLE(JSWorkerLocationPrototype) };

JSObject* JSWorkerLocationPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWorkerLocation>(vm, globalObject);
}

bool JSWorkerLocationPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWorkerLocationPrototype* thisObject = jsCast<JSWorkerLocationPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, getJSWorkerLocationPrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSWorkerLocationTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSWorkerLocationTable);
}

const ClassInfo JSWorkerLocation::s_info = { "WorkerLocation", &Base::s_info, 0, getJSWorkerLocationTable , CREATE_METHOD_TABLE(JSWorkerLocation) };

JSWorkerLocation::JSWorkerLocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WorkerLocation> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWorkerLocation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWorkerLocation::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWorkerLocationPrototype::create(vm, globalObject, JSWorkerLocationPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSWorkerLocation::destroy(JSC::JSCell* cell)
{
    JSWorkerLocation* thisObject = static_cast<JSWorkerLocation*>(cell);
    thisObject->JSWorkerLocation::~JSWorkerLocation();
}

JSWorkerLocation::~JSWorkerLocation()
{
    releaseImplIfNotNull();
}

bool JSWorkerLocation::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWorkerLocation* thisObject = jsCast<JSWorkerLocation*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSWorkerLocation, Base>(exec, getJSWorkerLocationTable(exec), thisObject, propertyName, slot);
}

JSValue jsWorkerLocationHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.href());
    return result;
}


JSValue jsWorkerLocationProtocol(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.protocol());
    return result;
}


JSValue jsWorkerLocationHost(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.host());
    return result;
}


JSValue jsWorkerLocationHostname(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hostname());
    return result;
}


JSValue jsWorkerLocationPort(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.port());
    return result;
}


JSValue jsWorkerLocationPathname(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pathname());
    return result;
}


JSValue jsWorkerLocationSearch(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.search());
    return result;
}


JSValue jsWorkerLocationHash(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerLocation& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hash());
    return result;
}


JSValue jsWorkerLocationConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWorkerLocation* domObject = jsCast<JSWorkerLocation*>(asObject(slotBase));
    return JSWorkerLocation::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSWorkerLocation::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWorkerLocationConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWorkerLocationPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWorkerLocation::info()))
        return throwVMTypeError(exec);
    JSWorkerLocation* castedThis = jsCast<JSWorkerLocation*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWorkerLocation::info());
    WorkerLocation& impl = castedThis->impl();

    JSC::JSValue result = jsStringWithCache(exec, impl.toString());
    return JSValue::encode(result);
}

static inline bool isObservable(JSWorkerLocation* jsWorkerLocation)
{
    if (jsWorkerLocation->hasCustomProperties())
        return true;
    return false;
}

bool JSWorkerLocationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWorkerLocation* jsWorkerLocation = jsCast<JSWorkerLocation*>(handle.get().asCell());
    if (!isObservable(jsWorkerLocation))
        return false;
    WorkerLocation* root = &jsWorkerLocation->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSWorkerLocationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWorkerLocation* jsWorkerLocation = jsCast<JSWorkerLocation*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWorkerLocation->impl(), jsWorkerLocation);
    jsWorkerLocation->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WorkerLocation* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWorkerLocation>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to WorkerLocation.
    COMPILE_ASSERT(!__is_polymorphic(WorkerLocation), WorkerLocation_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<WorkerLocation>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWorkerLocation>(exec, globalObject, impl);
}

WorkerLocation* toWorkerLocation(JSC::JSValue value)
{
    return value.inherits(JSWorkerLocation::info()) ? &jsCast<JSWorkerLocation*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WORKERS)
