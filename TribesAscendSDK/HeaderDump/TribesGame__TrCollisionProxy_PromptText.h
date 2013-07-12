#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " TribesGame.TrCollisionProxy_PromptText." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty TribesGame.TrCollisionProxy_PromptText." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty TribesGame.TrCollisionProxy_PromptText." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrCollisionProxy_PromptText : public TrCollisionProxy
	{
	public:
			ADD_VAR( ::FloatProperty, m_fPromptTextRemovalTime, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, m_nPromptMessageIndex, 0xFFFFFFFF )
			ADD_OBJECT( Pawn, m_LocalPawn )
			ADD_VAR( ::StrProperty, m_LastUpgradeMsg, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, m_nLastUpgradeLevel, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
