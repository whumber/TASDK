#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " Engine.MaterialExpressionDepthBiasedAlpha." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty Engine.MaterialExpressionDepthBiasedAlpha." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty Engine.MaterialExpressionDepthBiasedAlpha." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class MaterialExpressionDepthBiasedAlpha : public MaterialExpression
	{
	public:
			ADD_VAR( ::FloatProperty, BiasScale, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bNormalize, 0x1 )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
