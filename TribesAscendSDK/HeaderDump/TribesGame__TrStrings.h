#pragma once
#define ADD_VAR( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( #x " TribesGame.TrStrings." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_STRUCT( x, y, z ) ( ##x ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "StructProperty TribesGame.TrStrings." #y ); \
	return ( ##x( this, script_property->offset, z ) ); \
}
#define ADD_OBJECT( x, y ) ( class x* ) var_##y() \
{ \
	static ScriptProperty *script_property = ScriptObject::Find< ScriptProperty >( "ObjectProperty TribesGame.TrStrings." #y ); \
	return *( x** )( this + script_property->offset ); \
}
namespace UnrealScript
{
	class TrStrings : public Object
	{
	public:
			ADD_VAR( ::StrProperty, KilledBy, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, UsingWeapon, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, UsingPerks, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Loading, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Quit, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Game, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, QuitGameBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BACK, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Leave, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Match, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, LeaveMatchBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Cancel, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FailedToJoin, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OK, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, EULAAgreement, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Accept, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Decline, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Status, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Active, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrClass, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NoBoost, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OneDayleft, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, DaysLeft, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrHour, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Left, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Unlocked, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Acquired, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Complete, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, VIP, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrServer, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Time, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Added, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ClanTag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Removed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FWOTD, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Redeemed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrServers, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Full, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, PleaseWait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Estimated, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Wait, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OverAnHour, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrMinutes, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrSeconds, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BecomeAVIP, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BecomeVIP, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Visit, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Store, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, LostConn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, LostConnBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, YouWereKicked, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, YouWereKickedBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Login, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Failed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Purchasing, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Item, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Password, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Required, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ServerPasswordBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Friend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, YouAdded, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AsAFriend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Already, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Friends, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AlreadyFriendsBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Transaction, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NotEnough, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Gold, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NotEnoughGoldBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, XP, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, VIPMessage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BoostMessage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, EarnMoreXP, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CodeNotAccepted, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Failure, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NameAlreadyTaken, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NameNotAllowed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, EnterGamerName, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Enter, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Welcome, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, STEAMTransaction, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, STEAMPendingTransaction, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, STEAMCompletingTransaction, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, STEAMDeclinedTransaction, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, STEAMBadUserData, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Warning, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, VideoWarning, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Convert, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ConvertPortalToGold, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Error, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BackToGame, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Teammate, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Limit, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Reached, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrClassBanned, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Mastered, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Locked, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrNew, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Items, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Unlock, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Available, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Upgrade, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Accolades, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Earned, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Page, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Category, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Enabled, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Disabled, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Off, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SetAudioLevel, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Badges, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Completed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NotEarned, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Buy, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BundlePack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Bundle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Requires, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AllItemsOwned, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BundleRequiresBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, VisitClassPage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Owned, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BundleOwnedBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Purchase, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrFor, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Or, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Remove, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Map, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SelectTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AddClanTag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Use, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Confirm, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChangeClanTagTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, RenameLoadout, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SelectToRenameThisLoadout, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Loadout, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Primary, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Secondary, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Belt, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Pack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Perk, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NoInfoFound, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AreYouSureYouWantTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SpawnLimitReached, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Denied, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, No, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Videos, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Viewers, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Video, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Change, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FOV, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Sensitivity, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, JoiningServer, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AttemptingToJoin, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SetMapName, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Filter, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Set, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrName, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CustomServerBrowser, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FavoriteInitial, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, PasswordInitial, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Slots, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Ping, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Type, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Rules, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Lvl, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, All, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MeAndFriends, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CustomReticule, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Base, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Upgrades, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, UpgradeDesc, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Mastery, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Ratings, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Damage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FireRate, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Radius, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Range, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ClipSize, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Ammo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AreYouSureYouWantToUnlockAllUpgradesForXX, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, EnterCode, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CodeAccepted, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Message, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Offline, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Team, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Select, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChooseYourTeam, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ToSpawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Unlocks, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Modify, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrClasses, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Online, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Follower, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Followers, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Shown, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Hidden, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Visible, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChangeBindingBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ResetAllToDefault, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Streams, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Not, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CreateParty, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, LearnMore, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Your, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, DealoftheDay, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrHours, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrMinute, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrSecond, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Recommended, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ClanTags, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Party, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Queue, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SearchingForAMatch, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SelectToManage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CreateNewServer, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CreateNewServerBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SelectToAddMap, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChangeNameTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InGame, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InQueue, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, LeaderOnly, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Add, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SendMessage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, KickFromParty, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AddedNewFriend, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InviteByName, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InviteSent, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InvitationSentTo, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InviteFailed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CouldNotFindPlayer, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, PendingInvite, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Actions, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FlagsMoveEveryCap, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Featured, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AvailableAtLevel, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Player, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Overview, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Level, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Account, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Boosted, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrClassUsage, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Most, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Played, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Stats, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Matches, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Score, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Total, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, PerHour, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Won, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Lost, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Win, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Loss, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Combat, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Kills, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Assists, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Midairs, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FastestSki, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Objective, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Flag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Defense, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Caps, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Gens, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Destroyed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, DestroyedAbb, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Objs, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, MostRecentAwards, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrNone, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrSecondsAbb, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrMinutesAbb, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrHoursInitial, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrMinutesInitial, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Join, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TeamDeathmatch, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CaptureTheFlag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Rabbit, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Arena, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Enable, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, EnableServerBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ServerExpiredBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Disable, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, DisableServerBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Kill, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, KillServerBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, GoToNextMap, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, GoToNextMapBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Kick, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, KickPlayerBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Ban, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BanPlayerBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AddRentalTimeToThisServer, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Edit, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Banned, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Only, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OutOfBounds, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ValueMustBeWithin, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, And, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Allowed, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Free, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Credits, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Price, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Cooldown, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Buildup, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Value, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, KPH, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ToWin, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrLocal, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Display, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Description, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Admin, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrPublic, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrDefault, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Max, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Players, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, BaseDestReq, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Balanced, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Unbalanced, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, AutoAssign, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Warmup, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Gametime, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Overtime, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Respawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Health, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Multiplier, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, PerTeam, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Bundles, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Of, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Resolution, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ResolutionChangeBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Revert, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Resolutions, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Other, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ComingSoon, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Stream, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Spectate, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FireToSpectate, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, FireToRespawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OutOfRespawns, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, OutOfTeamRespawns, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TimeUntilRespawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Testing, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SpawningAs, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Pending, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TeamScoreBoard, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NextMap, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, GameType, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, GameRules, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, GameTip, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, LoggingIn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, PartyInvite, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, InvitesYouToJoinAParty, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Block, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, ChangeClanTag, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, SelectToGoBack, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NewBundleDescription, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NewBundleTitle, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, CustomServer, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, TrSpawn, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, Exit, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, NotEnoguhGoldBody, 0xFFFFFFFF )
			ADD_VAR( ::StrProperty, HoursLeft, 0xFFFFFFFF )
	};
}

#undef ADD_VAR
#undef ADD_STRUCT
#undef ADD_OBJECT
