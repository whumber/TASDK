#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " Engine.NavMeshPathGoalEvaluator." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty Engine.NavMeshPathGoalEvaluator." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty Engine.NavMeshPathGoalEvaluator." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class NavMeshPathGoalEvaluator : public Object
	{
	public:
			ADD_VAR( ::IntProperty, NumNodesProcessed, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, NumNodesThrownOut, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bAlwaysCallEvaluateGoal, 0x1 )
			ADD_VAR( ::IntProperty, MaxPathVisits, 0xFFFFFFFF )
			ADD_OBJECT( NavMeshPathGoalEvaluator, NextEvaluator )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
