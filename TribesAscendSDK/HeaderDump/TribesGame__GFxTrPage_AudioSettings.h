#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.GFxTrPage_AudioSettings." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.GFxTrPage_AudioSettings." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.GFxTrPage_AudioSettings." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class GFxTrPage_AudioSettings : public GFxTrPage
	{
	public:
			ADD_VAR( ::BoolProperty, bWaitingForAudioEntry, 0x1 )
			ADD_VAR( ::IntProperty, AudioIndex, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
