#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " UTGame.UTAnimBlendByPhysicsVolume." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty UTGame.UTAnimBlendByPhysicsVolume." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty UTGame.UTAnimBlendByPhysicsVolume." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class UTAnimBlendByPhysicsVolume : public UDKAnimBlendByPhysicsVolume
	{
	public:
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
