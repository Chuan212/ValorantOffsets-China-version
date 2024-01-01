//Valorant
//2024-01-01 22:05:13
//build by Chuan212  for China version
//Happy New Year
auto GameBase = 0x140000000;
namespace Offsets{ 
    constexpr auto WorldPtr            = 0x7821870;
    constexpr auto GObject             = 0x7821840;
    constexpr auto NamePool            = 0x7a3d740;
    constexpr auto NameKeyPtr          = 0x7821820;
    constexpr auto ULevel              = 0x38;
    constexpr auto AActorArray         = 0xa0; //Level -> AActors
    constexpr auto GameState           = 0x140;
    constexpr auto PlayerArray         = 0x3f0;//GameState ->PlayerArray  only players
    constexpr auto GameInstance        = 0x1a0;
    constexpr auto LocalPlayers        = 0x40;
    constexpr auto PlayerController    = 0x38;
    constexpr auto RootComponent       = 0x238;
    constexpr auto RelativeLocation    = 0x164;
    constexpr auto AcknowledgedPawn    = 0x468;
    constexpr auto PlayerCameraManager = 0x480;
    constexpr auto CameraCachePrivate  = 0x2650;
    constexpr auto PlayerState         = 0x3f8;
    constexpr auto Mesh                = 0x438;
    constexpr auto ComponentToWorld    = 0x250;
    constexpr auto BoneArray           = 0x5c8;
    constexpr auto BoneArrayCache      = 0x5d8;
    constexpr auto TeamComponent       = 0x630;
    constexpr auto BombTeam            = 0xf8;
    constexpr auto DamageHandler       = 0x9f0;
    constexpr auto CachedLife          = 0x1b0;//Health 
    constexpr auto Inventory           = 0x990;
    constexpr auto CurrentEquippable   = 0x248;
} 
