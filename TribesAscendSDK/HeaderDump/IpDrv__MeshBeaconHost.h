#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " IpDrv.MeshBeaconHost." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty IpDrv.MeshBeaconHost." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty IpDrv.MeshBeaconHost." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class MeshBeaconHost : public MeshBeacon
	{
	public:
			ADD_VAR( ::IntProperty, ConnectionBacklog, 0xFFFFFFFF )
			ADD_VAR( ::BoolProperty, bAllowBandwidthTesting, 0x1 )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
