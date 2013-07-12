#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " Engine.SeqEvent_SequenceActivated." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty Engine.SeqEvent_SequenceActivated." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty Engine.SeqEvent_SequenceActivated." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class SeqEvent_SequenceActivated : public SequenceEvent
	{
	public:
			ADD_VAR( ::StrProperty, InputLabel, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
