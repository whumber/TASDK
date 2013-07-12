#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " TribesGame.TrSubDevice_ForceField." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty TribesGame.TrSubDevice_ForceField." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty TribesGame.TrSubDevice_ForceField." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrSubDevice_ForceField : public TrSubDevice
	{
	public:
			ADD_VAR( ::FloatProperty, m_MinSpeed, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, m_MaxSpeed, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, m_MinDamage, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, m_MaxDamage, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
