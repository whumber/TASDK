#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " Engine.ParticleModuleLocationPrimitiveBase." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty Engine.ParticleModuleLocationPrimitiveBase." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty Engine.ParticleModuleLocationPrimitiveBase." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class ParticleModuleLocationPrimitiveBase : public ParticleModuleLocationBase
	{
	public:
			ADD_VAR( ::BoolProperty, Velocity, 0x80 )
			ADD_VAR( ::BoolProperty, SurfaceOnly, 0x40 )
			ADD_VAR( ::BoolProperty, Negative_Z, 0x20 )
			ADD_VAR( ::BoolProperty, Negative_Y, 0x10 )
			ADD_VAR( ::BoolProperty, Negative_X, 0x8 )
			ADD_VAR( ::BoolProperty, Positive_Z, 0x4 )
			ADD_VAR( ::BoolProperty, Positive_Y, 0x2 )
			ADD_VAR( ::BoolProperty, Positive_X, 0x1 )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
