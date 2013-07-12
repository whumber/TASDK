#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty Engine.AnimationCompressionAlgorithm_RemoveTrivialKeys." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class AnimationCompressionAlgorithm_RemoveTrivialKeys : public AnimationCompressionAlgorithm
	{
	public:
			ADD_VAR( ::FloatProperty, MaxAngleDiff, 0xFFFFFFFF )
			ADD_VAR( ::FloatProperty, MaxPosDiff, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
