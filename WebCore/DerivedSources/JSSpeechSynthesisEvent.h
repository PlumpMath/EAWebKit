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

#ifndef JSSpeechSynthesisEvent_h
#define JSSpeechSynthesisEvent_h

#if ENABLE(SPEECH_SYNTHESIS)

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "SpeechSynthesisEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSpeechSynthesisEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSSpeechSynthesisEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SpeechSynthesisEvent> impl)
    {
        JSSpeechSynthesisEvent* ptr = new (NotNull, JSC::allocateCell<JSSpeechSynthesisEvent>(globalObject->vm().heap)) JSSpeechSynthesisEvent(structure, globalObject, impl);
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
    SpeechSynthesisEvent& impl() const
    {
        return static_cast<SpeechSynthesisEvent&>(Base::impl());
    }
protected:
    JSSpeechSynthesisEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SpeechSynthesisEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSpeechSynthesisEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSSpeechSynthesisEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSpeechSynthesisEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSSpeechSynthesisEventPrototype>(vm.heap)) JSSpeechSynthesisEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSpeechSynthesisEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSpeechSynthesisEventConstructor : public DOMConstructorObject {
private:
    JSSpeechSynthesisEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSpeechSynthesisEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSpeechSynthesisEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSSpeechSynthesisEventConstructor>(vm.heap)) JSSpeechSynthesisEventConstructor(structure, globalObject);
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
};

// Attributes

JSC::JSValue jsSpeechSynthesisEventCharIndex(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSpeechSynthesisEventElapsedTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSpeechSynthesisEventName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSpeechSynthesisEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SPEECH_SYNTHESIS)

#endif
