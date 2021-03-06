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
#include "JSXMLHttpRequest.h"

#include "Document.h"
#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSXMLHttpRequestUpload.h"
#include "URL.h"
#include "XMLHttpRequest.h"
#include "XMLHttpRequestUpload.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSXMLHttpRequestTableValues[] =
{
    { "onabort", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnabort), (intptr_t)setJSXMLHttpRequestOnabort },
    { "onerror", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnerror), (intptr_t)setJSXMLHttpRequestOnerror },
    { "onload", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnload), (intptr_t)setJSXMLHttpRequestOnload },
    { "onloadend", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnloadend), (intptr_t)setJSXMLHttpRequestOnloadend },
    { "onloadstart", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnloadstart), (intptr_t)setJSXMLHttpRequestOnloadstart },
    { "onprogress", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnprogress), (intptr_t)setJSXMLHttpRequestOnprogress },
#if ENABLE(XHR_TIMEOUT)
    { "ontimeout", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOntimeout), (intptr_t)setJSXMLHttpRequestOntimeout },
#endif
    { "onreadystatechange", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOnreadystatechange), (intptr_t)setJSXMLHttpRequestOnreadystatechange },
#if ENABLE(XHR_TIMEOUT)
    { "timeout", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestTimeout), (intptr_t)setJSXMLHttpRequestTimeout },
#endif
    { "readyState", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestReadyState), (intptr_t)0 },
    { "withCredentials", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestWithCredentials), (intptr_t)setJSXMLHttpRequestWithCredentials },
    { "upload", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUpload), (intptr_t)0 },
    { "responseText", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestResponseText), (intptr_t)0 },
    { "responseXML", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestResponseXML), (intptr_t)0 },
    { "responseType", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestResponseType), (intptr_t)setJSXMLHttpRequestResponseType },
    { "response", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestResponse), (intptr_t)0 },
    { "status", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestStatus), (intptr_t)0 },
    { "statusText", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestStatusText), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXMLHttpRequestTable = { 65, 63, JSXMLHttpRequestTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSXMLHttpRequestConstructorTableValues[] =
{
    { "UNSENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUNSENT), (intptr_t)0 },
    { "OPENED", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOPENED), (intptr_t)0 },
    { "HEADERS_RECEIVED", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestHEADERS_RECEIVED), (intptr_t)0 },
    { "LOADING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestLOADING), (intptr_t)0 },
    { "DONE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestDONE), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXMLHttpRequestConstructorTable = { 16, 15, JSXMLHttpRequestConstructorTableValues, 0 };

COMPILE_ASSERT(0 == XMLHttpRequest::UNSENT, XMLHttpRequestEnumUNSENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == XMLHttpRequest::OPENED, XMLHttpRequestEnumOPENEDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == XMLHttpRequest::HEADERS_RECEIVED, XMLHttpRequestEnumHEADERS_RECEIVEDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == XMLHttpRequest::LOADING, XMLHttpRequestEnumLOADINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == XMLHttpRequest::DONE, XMLHttpRequestEnumDONEIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSXMLHttpRequestConstructor::constructJSXMLHttpRequest(ExecState* exec)
{
    JSXMLHttpRequestConstructor* castedThis = jsCast<JSXMLHttpRequestConstructor*>(exec->callee());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "XMLHttpRequest constructor associated document is unavailable"));
    RefPtr<XMLHttpRequest> object = XMLHttpRequest::create(context);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

static const HashTable& getJSXMLHttpRequestConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSXMLHttpRequestConstructorTable);
}

const ClassInfo JSXMLHttpRequestConstructor::s_info = { "XMLHttpRequestConstructor", &Base::s_info, 0, getJSXMLHttpRequestConstructorTable, CREATE_METHOD_TABLE(JSXMLHttpRequestConstructor) };

JSXMLHttpRequestConstructor::JSXMLHttpRequestConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXMLHttpRequestConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSXMLHttpRequestPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSXMLHttpRequestConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestConstructor, JSDOMWrapper>(exec, getJSXMLHttpRequestConstructorTable(exec), jsCast<JSXMLHttpRequestConstructor*>(object), propertyName, slot);
}

ConstructType JSXMLHttpRequestConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSXMLHttpRequest;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestPrototypeTableValues[] =
{
    { "UNSENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestUNSENT), (intptr_t)0 },
    { "OPENED", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestOPENED), (intptr_t)0 },
    { "HEADERS_RECEIVED", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestHEADERS_RECEIVED), (intptr_t)0 },
    { "LOADING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestLOADING), (intptr_t)0 },
    { "DONE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXMLHttpRequestDONE), (intptr_t)0 },
    { "open", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionOpen), (intptr_t)2 },
    { "setRequestHeader", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionSetRequestHeader), (intptr_t)2 },
    { "send", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionSend), (intptr_t)0 },
    { "abort", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionAbort), (intptr_t)0 },
    { "getAllResponseHeaders", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders), (intptr_t)0 },
    { "getResponseHeader", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionGetResponseHeader), (intptr_t)1 },
    { "overrideMimeType", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionOverrideMimeType), (intptr_t)1 },
    { "addEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXMLHttpRequestPrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXMLHttpRequestPrototypeTable = { 37, 31, JSXMLHttpRequestPrototypeTableValues, 0 };
static const HashTable& getJSXMLHttpRequestPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSXMLHttpRequestPrototypeTable);
}

const ClassInfo JSXMLHttpRequestPrototype::s_info = { "XMLHttpRequestPrototype", &Base::s_info, 0, getJSXMLHttpRequestPrototypeTable, CREATE_METHOD_TABLE(JSXMLHttpRequestPrototype) };

JSObject* JSXMLHttpRequestPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXMLHttpRequest>(vm, globalObject);
}

bool JSXMLHttpRequestPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXMLHttpRequestPrototype* thisObject = jsCast<JSXMLHttpRequestPrototype*>(object);
    return getStaticPropertySlot<JSXMLHttpRequestPrototype, JSObject>(exec, getJSXMLHttpRequestPrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSXMLHttpRequestTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSXMLHttpRequestTable);
}

const ClassInfo JSXMLHttpRequest::s_info = { "XMLHttpRequest", &Base::s_info, 0, getJSXMLHttpRequestTable , CREATE_METHOD_TABLE(JSXMLHttpRequest) };

JSXMLHttpRequest::JSXMLHttpRequest(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequest> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSXMLHttpRequest::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSXMLHttpRequest::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSXMLHttpRequestPrototype::create(vm, globalObject, JSXMLHttpRequestPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSXMLHttpRequest::destroy(JSC::JSCell* cell)
{
    JSXMLHttpRequest* thisObject = static_cast<JSXMLHttpRequest*>(cell);
    thisObject->JSXMLHttpRequest::~JSXMLHttpRequest();
}

JSXMLHttpRequest::~JSXMLHttpRequest()
{
    releaseImplIfNotNull();
}

bool JSXMLHttpRequest::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXMLHttpRequest* thisObject = jsCast<JSXMLHttpRequest*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSXMLHttpRequest, Base>(exec, getJSXMLHttpRequestTable(exec), thisObject, propertyName, slot);
}

JSValue jsXMLHttpRequestOnabort(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onabort()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestOnload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestOnloadend(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onloadend()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestOnloadstart(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onloadstart()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsXMLHttpRequestOnprogress(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onprogress()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(XHR_TIMEOUT)
JSValue jsXMLHttpRequestOntimeout(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.ontimeout()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}

#endif

JSValue jsXMLHttpRequestOnreadystatechange(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    if (EventListener* listener = impl.onreadystatechange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(XHR_TIMEOUT)
JSValue jsXMLHttpRequestTimeout(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    JSValue result = jsNumber(impl.timeout());
    return result;
}

#endif

JSValue jsXMLHttpRequestReadyState(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    JSValue result = jsNumber(impl.readyState());
    return result;
}


JSValue jsXMLHttpRequestWithCredentials(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.withCredentials());
    return result;
}


JSValue jsXMLHttpRequestUpload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.upload()));
    return result;
}


JSValue jsXMLHttpRequestResponseText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    return castedThis->responseText(exec);
}


JSValue jsXMLHttpRequestResponseXML(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    ExceptionCode ec = 0;
    XMLHttpRequest& impl = castedThis->impl();
    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.responseXML(ec)));
    setDOMException(exec, ec);
    return result;
}


JSValue jsXMLHttpRequestResponseType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XMLHttpRequest& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.responseType());
    return result;
}


JSValue jsXMLHttpRequestResponse(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    return castedThis->response(exec);
}


JSValue jsXMLHttpRequestStatus(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    ExceptionCode ec = 0;
    XMLHttpRequest& impl = castedThis->impl();
    JSC::JSValue result = jsNumber(impl.status(ec));
    setDOMException(exec, ec);
    return result;
}


JSValue jsXMLHttpRequestStatusText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    ExceptionCode ec = 0;
    XMLHttpRequest& impl = castedThis->impl();
    JSC::JSValue result = jsStringWithCache(exec, impl.statusText(ec));
    setDOMException(exec, ec);
    return result;
}


JSValue jsXMLHttpRequestConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSXMLHttpRequest* domObject = jsCast<JSXMLHttpRequest*>(asObject(slotBase));
    return JSXMLHttpRequest::getConstructor(exec->vm(), domObject->globalObject());
}

void JSXMLHttpRequest::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSXMLHttpRequest* thisObject = jsCast<JSXMLHttpRequest*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSXMLHttpRequest, Base>(exec, propertyName, value, getJSXMLHttpRequestTable(exec), thisObject, slot);
}

void setJSXMLHttpRequestOnabort(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnabort(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnerror(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestOnload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnload(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestOnloadend(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnloadend(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestOnloadstart(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnloadstart(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSXMLHttpRequestOnprogress(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnprogress(createJSAttributeEventListener(exec, value, thisObject));
}


#if ENABLE(XHR_TIMEOUT)
void setJSXMLHttpRequestOntimeout(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOntimeout(createJSAttributeEventListener(exec, value, thisObject));
}

#endif

void setJSXMLHttpRequestOnreadystatechange(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    impl.setOnreadystatechange(createJSAttributeEventListener(exec, value, thisObject));
}


#if ENABLE(XHR_TIMEOUT)
void setJSXMLHttpRequestTimeout(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    ExceptionCode ec = 0;
    unsigned nativeValue(toUInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setTimeout(nativeValue, ec);
    setDOMException(exec, ec);
}

#endif

void setJSXMLHttpRequestWithCredentials(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    ExceptionCode ec = 0;
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setWithCredentials(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSXMLHttpRequestResponseType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(thisObject);
    XMLHttpRequest& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    if (nativeValue != "" && nativeValue != "arraybuffer" && nativeValue != "blob" && nativeValue != "document" && nativeValue != "json" && nativeValue != "text")
        return;
    impl.setResponseType(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSXMLHttpRequest::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXMLHttpRequestConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionOpen(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    return JSValue::encode(castedThis->open(exec));
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionSetRequestHeader(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& header(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& value(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.setRequestHeader(header, value, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionSend(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    return JSValue::encode(castedThis->send(exec));
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionAbort(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    impl.abort();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionGetAllResponseHeaders(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    ExceptionCode ec = 0;

    JSC::JSValue result = jsStringOrUndefined(exec, impl.getAllResponseHeaders(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionGetResponseHeader(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& header(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl.getResponseHeader(header, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionOverrideMimeType(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& override(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.overrideMimeType(override);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSXMLHttpRequest::info()))
        return throwVMTypeError(exec);
    JSXMLHttpRequest* castedThis = jsCast<JSXMLHttpRequest*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXMLHttpRequest::info());
    XMLHttpRequest& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

// Constant getters

JSValue jsXMLHttpRequestUNSENT(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsXMLHttpRequestOPENED(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsXMLHttpRequestHEADERS_RECEIVED(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsXMLHttpRequestLOADING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsXMLHttpRequestDONE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

static inline bool isObservable(JSXMLHttpRequest* jsXMLHttpRequest)
{
    if (jsXMLHttpRequest->hasCustomProperties())
        return true;
    if (jsXMLHttpRequest->impl().hasEventListeners())
        return true;
    return false;
}

bool JSXMLHttpRequestOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSXMLHttpRequest* jsXMLHttpRequest = jsCast<JSXMLHttpRequest*>(handle.get().asCell());
    if (jsXMLHttpRequest->impl().hasPendingActivity())
        return true;
    if (jsXMLHttpRequest->impl().isFiringEventListeners())
        return true;
    if (!isObservable(jsXMLHttpRequest))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSXMLHttpRequestOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSXMLHttpRequest* jsXMLHttpRequest = jsCast<JSXMLHttpRequest*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsXMLHttpRequest->impl(), jsXMLHttpRequest);
    jsXMLHttpRequest->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7XMLHttpRequest@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14XMLHttpRequestE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XMLHttpRequest* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXMLHttpRequest>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7XMLHttpRequest@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14XMLHttpRequestE[2];
#if COMPILER(CLANG)
    // If this fails XMLHttpRequest does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(XMLHttpRequest), XMLHttpRequest_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // XMLHttpRequest has subclasses. If XMLHttpRequest has subclasses that get passed
    // to toJS() we currently require XMLHttpRequest you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<XMLHttpRequest>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSXMLHttpRequest>(exec, globalObject, impl);
}

XMLHttpRequest* toXMLHttpRequest(JSC::JSValue value)
{
    return value.inherits(JSXMLHttpRequest::info()) ? &jsCast<JSXMLHttpRequest*>(asObject(value))->impl() : 0;
}

}
