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

#ifndef JSAudioStreamTrack_h
#define JSAudioStreamTrack_h

#if ENABLE(MEDIA_STREAM)

#include "AudioStreamTrack.h"
#include "JSDOMBinding.h"
#include "JSMediaStreamTrack.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSAudioStreamTrack : public JSMediaStreamTrack {
public:
    typedef JSMediaStreamTrack Base;
    static JSAudioStreamTrack* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioStreamTrack> impl)
    {
        JSAudioStreamTrack* ptr = new (NotNull, JSC::allocateCell<JSAudioStreamTrack>(globalObject->vm().heap)) JSAudioStreamTrack(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    AudioStreamTrack& impl() const
    {
        return static_cast<AudioStreamTrack&>(Base::impl());
    }
protected:
    JSAudioStreamTrack(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AudioStreamTrack>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSAudioStreamTrackOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, AudioStreamTrack*)
{
    DEFINE_STATIC_LOCAL(JSAudioStreamTrackOwner, jsAudioStreamTrackOwner, ());
    return &jsAudioStreamTrackOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, AudioStreamTrack*)
{
    return &world;
}


class JSAudioStreamTrackPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSAudioStreamTrackPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioStreamTrackPrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioStreamTrackPrototype>(vm.heap)) JSAudioStreamTrackPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSAudioStreamTrackPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSAudioStreamTrackConstructor : public DOMConstructorObject {
private:
    JSAudioStreamTrackConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioStreamTrackConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioStreamTrackConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioStreamTrackConstructor>(vm.heap)) JSAudioStreamTrackConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSAudioStreamTrack(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Attributes

JSC::JSValue jsAudioStreamTrackConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)

#endif
