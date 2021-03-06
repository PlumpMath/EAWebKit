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

#include "JSRTCDTMFToneChangeEvent.h"

#include "RTCDTMFToneChangeEvent.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSRTCDTMFToneChangeEventTableValues[] =
{
    { "tone", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDTMFToneChangeEventTone), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRTCDTMFToneChangeEventTable = { 2, 1, JSRTCDTMFToneChangeEventTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSRTCDTMFToneChangeEventPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRTCDTMFToneChangeEventPrototypeTable = { 1, 0, JSRTCDTMFToneChangeEventPrototypeTableValues, 0 };
const ClassInfo JSRTCDTMFToneChangeEventPrototype::s_info = { "RTCDTMFToneChangeEventPrototype", &Base::s_info, &JSRTCDTMFToneChangeEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSRTCDTMFToneChangeEventPrototype) };

JSObject* JSRTCDTMFToneChangeEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRTCDTMFToneChangeEvent>(vm, globalObject);
}

const ClassInfo JSRTCDTMFToneChangeEvent::s_info = { "RTCDTMFToneChangeEvent", &Base::s_info, &JSRTCDTMFToneChangeEventTable, 0 , CREATE_METHOD_TABLE(JSRTCDTMFToneChangeEvent) };

JSRTCDTMFToneChangeEvent::JSRTCDTMFToneChangeEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RTCDTMFToneChangeEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSRTCDTMFToneChangeEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSRTCDTMFToneChangeEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRTCDTMFToneChangeEventPrototype::create(vm, globalObject, JSRTCDTMFToneChangeEventPrototype::createStructure(vm, globalObject, JSEventPrototype::self(vm, globalObject)));
}

bool JSRTCDTMFToneChangeEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRTCDTMFToneChangeEvent* thisObject = jsCast<JSRTCDTMFToneChangeEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSRTCDTMFToneChangeEvent, Base>(exec, JSRTCDTMFToneChangeEventTable, thisObject, propertyName, slot);
}

JSValue jsRTCDTMFToneChangeEventTone(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDTMFToneChangeEvent* castedThis = jsCast<JSRTCDTMFToneChangeEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDTMFToneChangeEvent& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.tone());
    return result;
}



}

#endif // ENABLE(MEDIA_STREAM)
