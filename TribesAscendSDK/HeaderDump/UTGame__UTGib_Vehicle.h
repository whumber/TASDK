#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " UTGame.UTGib_Vehicle." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty UTGame.UTGib_Vehicle." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty UTGame.UTGib_Vehicle." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class UTGib_Vehicle : public UTGib
	{
	public:
			ADD_OBJECT( ParticleSystem, PS_GibExplosionEffect )
			ADD_OBJECT( ParticleSystem, PS_GibTrailEffect )
			ADD_VAR( ::FloatProperty, TimeBeforeGibExplosionEffect, 0xFFFFFFFF )
			ADD_OBJECT( MaterialInstanceTimeVarying, MITV )
			ADD_VAR( ::FloatProperty, BurnDuration, 0xFFFFFFFF )
			ADD_VAR( ::NameProperty, BurnName, 0xFFFFFFFF )
			ADD_OBJECT( SoundCue, LoopedSound )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
