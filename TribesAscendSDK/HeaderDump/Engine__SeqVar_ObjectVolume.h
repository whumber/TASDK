#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.SeqVar_ObjectVolume." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.SeqVar_ObjectVolume." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.SeqVar_ObjectVolume." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class SeqVar_ObjectVolume : public SeqVar_Object
	{
	public:
			ADD_VAR( ::BoolProperty, bCollidingOnly, 0x1 )
			ADD_VAR( ::FloatProperty, LastUpdateTime, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
