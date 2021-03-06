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

#ifndef JSMediaKeyNeededEvent_h
#define JSMediaKeyNeededEvent_h

#if ENABLE(ENCRYPTED_MEDIA_V2)

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "MediaKeyNeededEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDictionary;

class JSMediaKeyNeededEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSMediaKeyNeededEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaKeyNeededEvent> impl)
    {
        JSMediaKeyNeededEvent* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyNeededEvent>(globalObject->vm().heap)) JSMediaKeyNeededEvent(structure, globalObject, impl);
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
    MediaKeyNeededEvent& impl() const
    {
        return static_cast<MediaKeyNeededEvent&>(Base::impl());
    }
protected:
    JSMediaKeyNeededEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MediaKeyNeededEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSMediaKeyNeededEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSMediaKeyNeededEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaKeyNeededEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyNeededEventPrototype>(vm.heap)) JSMediaKeyNeededEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaKeyNeededEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSMediaKeyNeededEventConstructor : public DOMConstructorObject {
private:
    JSMediaKeyNeededEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaKeyNeededEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaKeyNeededEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyNeededEventConstructor>(vm.heap)) JSMediaKeyNeededEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaKeyNeededEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

bool fillMediaKeyNeededEventInit(MediaKeyNeededEventInit&, JSDictionary&);

// Attributes

JSC::JSValue jsMediaKeyNeededEventInitData(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaKeyNeededEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(ENCRYPTED_MEDIA_V2)

#endif
