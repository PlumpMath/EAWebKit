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

#include "JSMediaTrackConstraintSet.h"

#include "MediaTrackConstraintSet.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSMediaTrackConstraintSetPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaTrackConstraintSetPrototypeTable = { 1, 0, JSMediaTrackConstraintSetPrototypeTableValues, 0 };
const ClassInfo JSMediaTrackConstraintSetPrototype::s_info = { "MediaTrackConstraintSetPrototype", &Base::s_info, &JSMediaTrackConstraintSetPrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaTrackConstraintSetPrototype) };

JSObject* JSMediaTrackConstraintSetPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaTrackConstraintSet>(vm, globalObject);
}

const ClassInfo JSMediaTrackConstraintSet::s_info = { "MediaTrackConstraintSet", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSMediaTrackConstraintSet) };

JSMediaTrackConstraintSet::JSMediaTrackConstraintSet(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaTrackConstraintSet> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMediaTrackConstraintSet::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSMediaTrackConstraintSet::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaTrackConstraintSetPrototype::create(vm, globalObject, JSMediaTrackConstraintSetPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSMediaTrackConstraintSet::destroy(JSC::JSCell* cell)
{
    JSMediaTrackConstraintSet* thisObject = static_cast<JSMediaTrackConstraintSet*>(cell);
    thisObject->JSMediaTrackConstraintSet::~JSMediaTrackConstraintSet();
}

JSMediaTrackConstraintSet::~JSMediaTrackConstraintSet()
{
    releaseImplIfNotNull();
}

static inline bool isObservable(JSMediaTrackConstraintSet* jsMediaTrackConstraintSet)
{
    if (jsMediaTrackConstraintSet->hasCustomProperties())
        return true;
    return false;
}

bool JSMediaTrackConstraintSetOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMediaTrackConstraintSet* jsMediaTrackConstraintSet = jsCast<JSMediaTrackConstraintSet*>(handle.get().asCell());
    if (!isObservable(jsMediaTrackConstraintSet))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaTrackConstraintSetOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMediaTrackConstraintSet* jsMediaTrackConstraintSet = jsCast<JSMediaTrackConstraintSet*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaTrackConstraintSet->impl(), jsMediaTrackConstraintSet);
    jsMediaTrackConstraintSet->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MediaTrackConstraintSet@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore23MediaTrackConstraintSetE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaTrackConstraintSet* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaTrackConstraintSet>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MediaTrackConstraintSet@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore23MediaTrackConstraintSetE[2];
#if COMPILER(CLANG)
    // If this fails MediaTrackConstraintSet does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MediaTrackConstraintSet), MediaTrackConstraintSet_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MediaTrackConstraintSet has subclasses. If MediaTrackConstraintSet has subclasses that get passed
    // to toJS() we currently require MediaTrackConstraintSet you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<MediaTrackConstraintSet>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaTrackConstraintSet>(exec, globalObject, impl);
}

MediaTrackConstraintSet* toMediaTrackConstraintSet(JSC::JSValue value)
{
    return value.inherits(JSMediaTrackConstraintSet::info()) ? &jsCast<JSMediaTrackConstraintSet*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(MEDIA_STREAM)
