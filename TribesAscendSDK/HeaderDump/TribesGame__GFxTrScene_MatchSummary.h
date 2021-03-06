#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.GFxTrScene_MatchSummary." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.GFxTrScene_MatchSummary." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.GFxTrScene_MatchSummary." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class GFxTrScene_MatchSummary : public GFxTrScene
	{
	public:
			ADD_VAR( ::BoolProperty, bUseSNS, 0x1 )
			ADD_OBJECT( TrSummaryHelper, SummaryHelper )
			ADD_VAR( ::IntProperty, Team2Score, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, Team1Score, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MatchDate, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MatchDuration, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MatchGameType, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MatchMapId, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MatchId, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, WinningTeam, 0xFFFFFFFF )
			ADD_OBJECT( GFxObject, ScoreboardDataList )
			ADD_OBJECT( GFxObject, AccoladeDataList )
			ADD_OBJECT( GFxObject, AwardDataList )
			ADD_OBJECT( GFxObject, MiscDataList )
			ADD_VAR( ::IntProperty, ScoreboardDataCount, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, AccoladeDataCount, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, AwardDataCount, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, MiscDataCount, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, SCOREBOARD_SIZE, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
