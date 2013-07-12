#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( #x " TribesGame.TrGameMessage." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "StructProperty TribesGame.TrGameMessage." #y ) ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ( ScriptProperty* )( ScriptObject::Find( "ObjectProperty TribesGame.TrGameMessage." #y ) ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrGameMessage : public UTLocalMessage
	{
	public:
			ADD_OBJECT( SoundCue, m_sMatchStartDiamondSword )
			ADD_OBJECT( SoundCue, m_sMatchStartBloodEagle )
			ADD_VAR( ::StrProperty, WaitingForPlayers, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OvertimeNotification, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, YouAreOnDiamondSwordMessage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, YouAreOnBloodEagleMessage, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
