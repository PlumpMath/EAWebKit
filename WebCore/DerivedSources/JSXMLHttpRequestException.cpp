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
#include "JSXMLHttpRequestException.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include "XMLHttpRequestException.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSXMLHttpRequestExceptionTableValues[] =
{
    { "code", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionCode), (intptr_t)0 },
    { "name", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionName), (intptr_t)0 },
    { "message", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionMessage), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXMLHttpRequestExceptionTable = { 10, 7, JSXMLHttpRequestExceptionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSXMLHttpRequestExceptionConstructorTableValues[] =
{
    { "NETWORK_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionNETWORK_ERR), (intptr_t)0 },
    { "ABORT_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionABORT_ERR), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXMLHttpRequestExceptionConstructorTable = { 4, 3, JSXMLHttpRequestExceptionConstructorTableValues, 0 };
static const HashTable& getJSXMLHttpRequestExceptionConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSXMLHttpRequestExceptionConstructorTable);
}

const ClassInfo JSXMLHttpRequestExceptionConstructor::s_info = { "XMLHttpRequestExceptionConstructor", &Base::s_info, 0, getJSXMLHttpRequestExceptionConstructorTable, CREATE_METHOD_TABLE(JSXMLHttpRequestExceptionConstructor) };

JSXMLHttpRequestExceptionConstructor::JSXMLHttpRequestExceptionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXMLHttpRequestExceptionConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSXMLHttpRequestExceptionPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSXMLHttpRequestExceptionConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestExceptionConstructor, JSDOMWrapper>(exec, getJSXMLHttpRequestExceptionConstructorTable(exec), jsCast<JSXMLHttpRequestExceptionConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestExceptionPrototypeTableValues[] =
{
    { "NETWORK_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionNETWORK_ERR), (intptr_t)0 },
    { "ABORT_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestExceptionABORT_ERR), (intptr_t)0 },
    { "toString", DontDelete | DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestExceptionPrototypeFunctionToString), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXMLHttpRequestExceptionPrototypeTable = { 8, 7, JSXMLHttpRequestExceptionPrototypeTableValues, 0 };
static const HashTable& getJSXMLHttpRequestExceptionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSXMLHttpRequestExceptionPrototypeTable);
}

const ClassInfo JSXMLHttpRequestExceptionPrototype::s_info = { "XMLHttpRequestExceptionPrototype", &Base::s_info, 0, getJSXMLHttpRequestExceptionPrototypeTable, CREATE_METHOD_TABLE(JSXMLHttpRequestExceptionPrototype) };

JSObject* JSXMLHttpRequestExceptionPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXMLHttpRequestException>(vm, globalObject);
}

bool JSXMLHttpRequestExceptionPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXMLHttpRequestExceptionPrototype* thisObject = jsCast<JSXMLHttpRequestExceptionPrototype*>(object);
    return getStaticPropertySlot<JSXMLHttpRequestExceptionPrototype, JSObject>(exec, getJSXMLHttpRequestExceptionPrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSXMLHttpRequestExceptionTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSXMLHttpRequestExceptionTable);
}

const ClassInfo JSXMLHttpRequestException::s_info = { "XMLHttpRequestException", &Base::s_info, 0, getJSXMLHttpRequestExceptionTable , CREATE_METHOD_TABLE(JSXMLHttpRequestException) };

JSXMLHttpRequestException::JSXMLHttpRequestException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequestException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSXMLHttpRequestException::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSXMLHttpRequestException::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSXMLHttpRequestExceptionPrototype::create(vm, globalObject, JSXMLHttpRequestExceptionPrototype::createStructure(vm, globalObject, globalObject->errorPrototype()));
}

void JSXMLHttpRequestException::destroy(JSC::JSCell* cell)
{
    JSXMLHttpRequestException* thisObject = static_cast<JSXMLHttpRequestException*>(cell);
    thisObject->JSXMLHttpRequestException::~JSXMLHttpRequestException();
}

JSXMLHttpRequestException::~JSXMLHttpRequestException()
{
    releaseImplIfNotNull();
}

bool JSXMLHttpRequestException::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXMLHttpRequestException* thisObject = jsCast<JSXMLHttpRequestException*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSXMLHttpRequestException, Base>(exec, getJSXMLHttpRequestExceptionTable(exec), thisObject, propertyName, slot);
}

JSValue jsXMLHttpRequestExceptionCode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequestException* castedThis = jsCast<JSXMLHttpRequestException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestException& impl = castedThis->impl();
    JSValue result = jsNumber(impl.code());
    return result;
}


JSValue jsXMLHttpRequestExceptionName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequestException* castedThis = jsCast<JSXMLHttpRequestException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestException& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return result;
}


JSValue jsXMLHttpRequestExceptionMessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequestException* castedThis = jsCast<JSXMLHttpRequestException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequestException& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.message());
    return result;
}


JSValue jsXMLHttpRequestExceptionConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequestException* domObject = jsCast<JSXMLHttpRequestException*>(asObject(slotBase));
    return JSXMLHttpRequestException::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSXMLHttpRequestException::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXMLHttpRequestExceptionConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequestException::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequestException* castedThis = jsCast<JSXMLHttpRequestException*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequestException::info());
    XMLHttpRequestException& impl = castedThis->impl();

    JSC::JSValue result = jsStringWithCache(exec, impl.toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsXMLHttpRequestExceptionNETWORK_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(101));
}

JSValue jsXMLHttpRequestExceptionABORT_ERR(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(102));
}

static inline bool isObservable(JSXMLHttpRequestException* jsXMLHttpRequestException)
{
    if (jsXMLHttpRequestException->hasCustomProperties())
        return true;
    return false;
}

bool JSXMLHttpRequestExceptionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSXMLHttpRequestException* jsXMLHttpRequestException = jsCast<JSXMLHttpRequestException*>(handle.get().asCell());
    if (!isObservable(jsXMLHttpRequestException))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSXMLHttpRequestExceptionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSXMLHttpRequestException* jsXMLHttpRequestException = jsCast<JSXMLHttpRequestException*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsXMLHttpRequestException->impl(), jsXMLHttpRequestException);
    jsXMLHttpRequestException->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XMLHttpRequestException* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXMLHttpRequestException>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to XMLHttpRequestException.
    COMPILE_ASSERT(!__is_polymorphic(XMLHttpRequestException), XMLHttpRequestException_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<XMLHttpRequestException>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSXMLHttpRequestException>(exec, globalObject, impl);
}

XMLHttpRequestException* toXMLHttpRequestException(JSC::JSValue value)
{
    return value.inherits(JSXMLHttpRequestException::info()) ? &jsCast<JSXMLHttpRequestException*>(asObject(value))->impl() : 0;
}

}
