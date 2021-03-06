#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.GFxTrPage_Extras." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.GFxTrPage_Extras." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.GFxTrPage_Extras." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class GFxTrPage_Extras : public GFxTrPage
	{
	public:
			ADD_VAR( ::StrProperty, PromoPopupTitle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, C1P3, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, C1P2, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, C1P1, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bWaitingForClaimPromoPopup, 0x2 )
			ADD_VAR( ::BoolProperty, bWaitingForCheatCodePopup, 0x1 )
			ADD_VAR( ::IntProperty, CheatCodeAction, 0xFFFFFFFF )
			ADD_VAR( ::IntProperty, ClaimPromotionAction, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
