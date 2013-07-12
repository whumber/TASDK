#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " Engine.ExponentialHeightFogComponent." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty Engine.ExponentialHeightFogComponent." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty Engine.ExponentialHeightFogComponent." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class ExponentialHeightFogComponent : public ActorComponent
	{
	public:
			ADD_VAR( ::FloatProperty, LightInscatteringBrightness, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, OppositeLightBrightness, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, LightTerminatorAngle, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, StartDistance, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, FogMaxOpacity, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, FogHeightFalloff, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, FogDensity, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, FogHeight, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bEnabled, 0x1 )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
