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

#ifndef JSMediaStreamCapabilities_h
#define JSMediaStreamCapabilities_h

#if ENABLE(MEDIA_STREAM)

#include "JSDOMBinding.h"
#include "MediaStreamCapabilities.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSMediaStreamCapabilities : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSMediaStreamCapabilities* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStreamCapabilities> impl)
    {
        JSMediaStreamCapabilities* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamCapabilities>(globalObject->vm().heap)) JSMediaStreamCapabilities(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSMediaStreamCapabilities();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    MediaStreamCapabilities& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    MediaStreamCapabilities* m_impl;
protected:
    JSMediaStreamCapabilities(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MediaStreamCapabilities>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSMediaStreamCapabilitiesOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, MediaStreamCapabilities*)
{
    DEFINE_STATIC_LOCAL(JSMediaStreamCapabilitiesOwner, jsMediaStreamCapabilitiesOwner, ());
    return &jsMediaStreamCapabilitiesOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, MediaStreamCapabilities*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, MediaStreamCapabilities*);
MediaStreamCapabilities* toMediaStreamCapabilities(JSC::JSValue);

class JSMediaStreamCapabilitiesPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSMediaStreamCapabilitiesPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaStreamCapabilitiesPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamCapabilitiesPrototype>(vm.heap)) JSMediaStreamCapabilitiesPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaStreamCapabilitiesPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};


} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)

#endif
