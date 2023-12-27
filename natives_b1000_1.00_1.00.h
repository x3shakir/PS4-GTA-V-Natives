#pragma once

namespace SYSTEM
{
	static void WAIT(int ms) { invoke<Void>(0x4EDE34FBADD967A6, ms); } // 0x4EDE34FBADD967A6 0x7715C03B b323
	static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0xE81651AD79516E48, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E b323
	static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4 b323
	static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0xEB1C67C3A5333A92, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D b323
	static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4 b323
	static int TIMERA() { return invoke<int>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B 0x45C8C188 b323
	static int TIMERB() { return invoke<int>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 0x330A9C0C b323
	static void SETTIMERA(int value) { invoke<Void>(0xC1B1E9A034A63A62, value); } // 0xC1B1E9A034A63A62 0x35785333 b323
	static void SETTIMERB(int value) { invoke<Void>(0x5AE11BC36633DE4E, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6 b323
	static float TIMESTEP() { return invoke<float>(0x0000000050597EE2); } // 0x0000000050597EE2 0x50597EE2 b323
	static float SIN(float value) { return invoke<float>(0x0BADBFA3B172435F, value); } // 0x0BADBFA3B172435F 0xBF987F58 b323
	static float COS(float value) { return invoke<float>(0xD0FFB162F40A139C, value); } // 0xD0FFB162F40A139C 0x00238FE9 b323
	static float SQRT(float value) { return invoke<float>(0x71D93B57D07F9804, value); } // 0x71D93B57D07F9804 0x145C7701 b323
	static float POW(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8 b323
	static float LOG10(float value) { return invoke<float>(0xE816E655DE37FE20, value); } // 0xE816E655DE37FE20 b1493
	static float VMAG(float x, float y, float z) { return invoke<float>(0x652D2EEEF1D3E62C, x, y, z); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD b323
	static float VMAG2(float x, float y, float z) { return invoke<float>(0xA8CEACB4F35AE058, x, y, z); } // 0xA8CEACB4F35AE058 0xE796E629 b323
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7 b323
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F b323
	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD b323
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA b323
	static int FLOOR(float value) { return invoke<int>(0xF34EE736CF047844, value); } // 0xF34EE736CF047844 0x32E9BE04 b323
	static int CEIL(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); } // 0x11E019C8F43ACC8A 0xD536A1DF b323
	static int ROUND(float value) { return invoke<int>(0xF2DB717A73826179, value); } // 0xF2DB717A73826179 0x323B0E24 b323
	static float TO_FLOAT(int value) { return invoke<float>(0xBBDA792448DB5A89, value); } // 0xBBDA792448DB5A89 0x67116627 b323
	static void SET_THIS_THREAD_PRIORITY(int priority) { invoke<Void>(0x42B65DEEF2EDF2A1, priority); } // 0x42B65DEEF2EDF2A1 b877
}

namespace APP
{
	static BOOL APP_DATA_VALID() { return invoke<BOOL>(0xCB45B0); } // 0x846AA8E7D55EE5B6 0x72BDE002 b323
	static int APP_GET_INT(const char* property) { return invoke<int>(0xCB45D0, property); } // 0xD3A58A12C77D9D4B 0x2942AAD2 b323
	static float APP_GET_FLOAT(const char* property) { return invoke<float>(0xCB4690, property); } // 0x1514FB24C02C2322 0xD87F3A1C b323
	static const char* APP_GET_STRING(const char* property) { return invoke<const char*>(0xCB4760, property); } // 0x749B023950D2311C 0x849CEB80 b323
	static void APP_SET_INT(const char* property, int value) { invoke<Void>(0xCB4830, property, value); } // 0x607E8E3D3E4F9611 0x1B509C32 b323
	static void APP_SET_FLOAT(const char* property, float value) { invoke<Void>(0xCB4840, property, value); } // 0x25D7687C68E0DAA4 0xF3076135 b323
	static void APP_SET_STRING(const char* property, const char* value) { invoke<Void>(0xCB4860, property, value); } // 0x3FF2FCEC4B7721B4 0x23DF19A8 b323
	static void APP_SET_APP(const char* appName) { invoke<Void>(0xCB4870, appName); } // 0xCFD0406ADAF90D2B 0x8BAC4146 b323
	static void APP_SET_BLOCK(const char* blockName) { invoke<Void>(0xCB4930, blockName); } // 0x262AB456A3D21F93 0xC2D54DD9 b323
	static void APP_CLEAR_BLOCK() { invoke<Void>(0xCB4970); } // 0x5FE1DF3342DB7DBA 0xDAB86A18 b323
	static void APP_CLOSE_APP() { invoke<Void>(0xCB49D0); } // 0xE41C65E07A5F05FC 0x03767C7A b323
	static void APP_CLOSE_BLOCK() { invoke<Void>(0xCB4A10); } // 0xE8E3FCF72EAC0EF8 0xED97B202 b323
	static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xCB4A40); } // 0x71EEE69745088DA0 0xD368BA15 b323
	static BOOL APP_HAS_SYNCED_DATA(const char* appName) { return invoke<BOOL>(0xCB4A60, appName); } // 0xCA52279A7271517F 0x1DE2A63D b323
	static void APP_SAVE_DATA() { invoke<Void>(0xCB4AA0); } // 0x95C5D356CDA6E85F 0x84A3918D b323
	static int APP_GET_DELETED_FILE_STATUS() { return invoke<int>(0xCB4AC0); } // 0xC9853A2BE3DED1A6 0x784D550B b323
	static BOOL APP_DELETE_APP_DATA(const char* appName) { return invoke<BOOL>(0xCB4AE0, appName); } // 0x44151AEA95C8A003 0x2A2FBD1C b323
}

namespace AUDIO
{
	static void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0xCBAD60, ringtoneName, ped, p2); } // 0xF9E56683CA8E11A5 0x1D530E47 b323
	static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0xCBAD80, ped); } // 0x1E8E5E20937E3137 0xFE576EE4 b323
	static void STOP_PED_RINGTONE(Ped ped) { invoke<Void>(0xCBADF0, ped); } // 0x6C5AE23EFA885092 0xFEEA107C b323
	static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xCBAE40); } // 0x7497D2CE2C30D24C 0x4ED1400A b323
	static BOOL IS_MOBILE_INTERFERENCE_ACTIVE() { return invoke<BOOL>(0xCBAE80); } // 0xC8B1B2425604CDD0 0x16FB88B5 b323
	static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xCBAEA0); } // 0xD2C91A0B572AAE56 0xB2BC25F8 b323
	static void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0xCBAEC0, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC5EF963405593646 0x96CD0513 b323
	static void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { invoke<Void>(0xCBAFB0, index, ped, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86 b323
	static void SET_POSITION_FOR_NULL_CONV_PED(Any p0, float p1, float p2, float p3) { invoke<Void>(0xCBB030, p0, p1, p2, p3); } // 0x33E3C6C6F2F0B506 0x73C6F979 b323
	static void SET_ENTITY_FOR_NULL_CONV_PED(int p0, Entity entity) { invoke<Void>(0xCBB0A0, p0, entity); } // 0x892B6AB8F33606F5 0x88203DDA b323
	static void SET_MICROPHONE_POSITION(BOOL toggle, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xCBB100, toggle, x1, y1, z1, x2, y2, z2, x3, y3, z3); } // 0xB6AE90EDDE95C762 0xAD7BB191 b323
	static void SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(BOOL p0) { invoke<Void>(0xCBB1F0, p0); } // 0x0B568201DD99F0EB 0x1193ED6E b323
	static void SET_CONVERSATION_AUDIO_PLACEHOLDER(BOOL p0) { invoke<Void>(0xCBB210, p0); } // 0x61631F5DF50D1C34 b323
	static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xCBB230, p0, p1); } // 0x252E5F915EABB675 0x38E42D07 b323
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xCBB280, p0, p1); } // 0x6004BCB0E226AAEA 0x9ACB213A b323
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xCBB2D0, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC 0xE5DE7D9D b323
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xCBB330, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 0xDDF5C579 b323
	static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xCBB390); } // 0x23641AFE870AF385 0xA170261B b323
	static BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return invoke<BOOL>(0xCBB3B0); } // 0xE73364DB90778FFA 0x336F3D35 b323
	static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xCBB3E0); } // 0x16754C556D2EDE3D 0xCB8FD96F b323
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xCBB420); } // 0xDF0D54BE7A776737 0xE1870EA9 b323
	static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0xCBB450); } // 0x480357EE890C295A 0x9620E41F b323
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xCBB480, p0); } // 0x8530AD776CD72B12 0xE2C9C6F8 b323
	static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xCBB4B0); } // 0x9AEB285D1818C9AC 0x6CB24B56 b323
	static int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<int>(0xCBB4D0, p0); } // 0xD79DEEFB53455EBA 0xAB77DA7D b323
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0xCBB500); } // 0x9663FE6B7A61EB00 0x85C98304 b323
	static void INTERRUPT_CONVERSATION(Ped ped, const char* voiceline, const char* speaker) { invoke<Void>(0xCBB510, ped, voiceline, speaker); } // 0xA018A12E5C5C2FA6 0xF3A67AF3 b323
	static int GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(Any* p0) { return invoke<int>(0xCBB590, p0); } // 0xAA19F5572C38B564 0xB58B8FF3 b323
	static void SET_NO_DUCKING_FOR_CONVERSATION(BOOL p0) { invoke<Void>(0xCBB5F0, p0); } // 0xB542DE8C3D1CB210 0x789D8C6C b323
	static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0xCBB610, p0); } // 0xC6ED9D5092438D91 0xA6203643 b323
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0xCBB620); } // 0xA8638BE228D4751A 0x66728EFE b323
	static BOOL REQUEST_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xCBB630, audioBank, p1, p2); } // 0x7345BDD95E62E0F2 0x916E37CA b323
	static BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xCBB670, audioBank, p1, p2); } // 0xFE02FFBED8CA9D99 0x23C88BC7 b323
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xCBB6B0, audioBank, p1, p2); } // 0x2F844A8B08D76685 0x21322887 b323
	static BOOL HINT_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xCBB6F0, audioBank, p1, p2); } // 0x8F8C0E370AE62F5C 0xF1850DDC b323
	static BOOL HINT_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xCBB710, audioBank, p1, p2); } // 0xFB380A29641EC31A 0x41FA0E51 b323
	static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xCBB730); } // 0x0EC92A1BF0857187 0x8E8824C7 b323
	static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xCBB740); } // 0x65475A218FFAA93D 0x8C938784 b323
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xCBB750, audioBank); } // 0x77ED170667F50170 0x16707ABC b323
	static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xCBB770); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5 b323
	static void UNHINT_AMBIENT_AUDIO_BANK() { invoke<Void>(0xCBB780); } // 0x19AF7ED9B9D23058 0xA58BBF4F b323
	static int GET_SOUND_ID() { return invoke<int>(0xCBB790); } // 0x430386FE9BF80B45 0x6AE0AD56 b323
	static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xCBB7C0, soundId); } // 0x353FC880830B88FA 0x9C080899 b323
	static void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0xCBB7E0, soundId, audioName, audioRef, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F b323
	static void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { invoke<Void>(0xCBB820, soundId, audioName, audioRef, p3); } // 0x67C540AA08E4A6F5 0x2E458F74 b323
	static void PLAY_DEFERRED_SOUND_FRONTEND(const char* soundName, const char* soundsetName) { invoke<Void>(0xCBB840, soundName, soundsetName); } // 0xCADA5A0D0702381E 0xC70E6CFA b323
	static void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { invoke<Void>(0xCBB8A0, soundId, audioName, entity, audioRef, isNetwork, p5); } // 0xE65F427EB70AB1ED 0x95AE00F8 b323
	static void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { invoke<Void>(0xCBB930, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); } // 0x8D8686B622B88120 0xCAD3E2D5 b323
	static void STOP_SOUND(int soundId) { invoke<Void>(0xCBB9C0, soundId); } // 0xA3B0C41BA5CC0BB5 0xCD7F4030 b323
	static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0xCBB9E0, soundId); } // 0x2DE3F0A134FFBC0D 0x2576F610 b323
	static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0xCBBA10, netId); } // 0x75262FD12D0A1C84 0xD064D4DC b323
	static void SET_VARIABLE_ON_SOUND(int soundId, const char* variable, float p2) { invoke<Void>(0xCBBA40, soundId, variable, p2); } // 0xAD6B3148A78AE9B6 0x606EE5FA b323
	static void SET_VARIABLE_ON_STREAM(const char* variable, float p1) { invoke<Void>(0xCBBA60, variable, p1); } // 0x2F9D3834AEB9EF79 0xF67BB44C b323
	static void OVERRIDE_UNDERWATER_STREAM(const char* p0, BOOL p1) { invoke<Void>(0xCBBA80, p0, p1); } // 0xF2A9CDABCEA04BD6 0x9A083B7E b323
	static void SET_VARIABLE_ON_UNDER_WATER_STREAM(const char* variableName, float value) { invoke<Void>(0xCBBAA0, variableName, value); } // 0x733ADF241531E5C2 0x62D026BE b323
	static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0xCBBAC0, soundId); } // 0xFCBDCE714A7C88E5 0xE85AEC2E b323
	static void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xCBBAF0, ped, speechName, speechParam, p3); } // 0x8E04FEDD28D42462 0x5C57B85D b323
	static void PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xCBBB10, ped, speechName, speechParam, p3); } // 0xC6941B4A3A8FBBB9 0x444180DB b323
	static void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { invoke<Void>(0xCBBB30, ped, speechName, voiceName, speechParam, p4); } // 0x3523634255FC3318 0x8386AE28 b323
	static void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) { invoke<Void>(0xCBBB60, speechName, voiceName, x, y, z, speechParam); } // 0xED640017ED337E45 0xA1A1402E b323
	static void OVERRIDE_TREVOR_RAGE(const char* voiceEffect) { invoke<Void>(0xCBBBF0, voiceEffect); } // 0x13AD665062541A7E 0x05B9B5CF b323
	static void RESET_TREVOR_RAGE() { invoke<Void>(0xCBBC10); } // 0xE78503B10C4314E0 0xE80CF0D4 b323
	static void SET_PLAYER_ANGRY(Ped ped, BOOL toggle) { invoke<Void>(0xCBBC20, ped, toggle); } // 0xEA241BB04110F091 0x782CA58D b323
	static void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { invoke<Void>(0xCBBC90, ped, painID, p1, p3); } // 0xBC9AE166038A5CEC 0x874BD6CB b323
	static void RELEASE_WEAPON_AUDIO() { invoke<Void>(0xCBBCB0); } // 0xCE4AC0439F607045 0x6096504C b323
	static void ACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xCBBCC0, mode); } // 0xD01005D2BA2EB778 0x59A3A17D b323
	static void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xCBBD00, mode); } // 0xDDC635D5B3262C56 0x0E387BFE b323
	static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { invoke<Void>(0xCBBD40, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1 b323
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { invoke<Void>(0xCBBDB0, ped); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF b323
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xCBBE10, ped); } // 0x9072C8B49907BFAD 0x1972E8AA b323
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0xCBBE80, p0); } // 0xCC9AA18DCC7084F4 0x2C653904 b323
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xCBBEF0, ped); } // 0x729072355FA39EC9 0x2B74A6D6 b323
	static BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL p2) { return invoke<BOOL>(0xCBBF80, ped, speechName, p2); } // 0x49B99BF3FDA89A7A 0x8BD5F11E b323
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0xCBC010, ped); } // 0x049E937F18F4020C 0x7B2F0743 b323
	static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0xCBC080, ped, toggle); } // 0x95D2D383D5396B8A 0xD2EA77A3 b323
	static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, int p1, const char* speechName) { invoke<Void>(0xCBC0E0, pedHandle, p1, speechName); } // 0xEE066C7006C49C0A 0x498849F3 b323
	static BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return invoke<BOOL>(0xCBC150, pedHandle); } // 0xC265DF9FB44A9FBD 0x0CBAF2EF b323
	static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0xCBC1C0, animal, mood); } // 0xCC97B29285B1DC3B 0x3EA7C6CB b323
	static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0xCBC220); } // 0xB35CE999E8EF317E 0x6E502A5B b323
	static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0xCBC230, state); } // 0xBF286C554784F3DF 0xE1E0ED34 b323
	static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xCBC250); } // 0xE8AF77C4C06ADC93 0x1C4946AC b323
	static const char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<const char*>(0xCBC290); } // 0xF6D733C32076AD03 0xD909C107 b323
	static const char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<const char*>(0xCBC2C0, radioStation); } // 0xB28ECA15046CA8B9 0x3DF493BC b323
	static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0xCBC300); } // 0xA571991A7FE6CCEB 0x872CF0EA b323
	static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xCBC330); } // 0xA151A7394A214E65 0xCF29097B b323
	static void SET_RADIO_RETUNE_UP() { invoke<Void>(0xCBC360); } // 0xFF266D1D0EB1195D 0x53DB6994 b323
	static void SET_RADIO_RETUNE_DOWN() { invoke<Void>(0xCBC380); } // 0xDD6BCF9E94425DF9 0xD70ECC80 b323
	static void SET_RADIO_TO_STATION_NAME(const char* stationName) { invoke<Void>(0xCBC3A0, stationName); } // 0xC69EDA28699D5107 0x7B36E35E b323
	static void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { invoke<Void>(0xCBC3C0, vehicle, radioStation); } // 0x1B9C0099CB942AC6 0xE391F55F b323
	static void SET_VEH_FORCED_RADIO_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xCBC460, vehicle); } // 0xC1805D05E6D4FE10 0x7ABB89D2 b323
	static void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation, Any p2) { invoke<Void>(0xCBC4B0, emitterName, radioStation, p2); } // 0xACF57305B12AF907 0x87431585 b323
	static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { invoke<Void>(0xCBC4D0, emitterName, toggle); } // 0x399D2D3B33F1B8EB 0x91F72E92 b323
	static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0xCBC500, radioStation); } // 0xA619B168B8A8570F 0x1D82766D b323
	static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0xCBC520, active); } // 0xF7F26C6E9CC9EBB8 0xB1172075 b323
	static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0xCBC570, newsStory); } // 0xB165AB7C248B2DC1 0xCCD9ABE4 b323
	static BOOL IS_MISSION_NEWS_STORY_UNLOCKED(int newsStory) { return invoke<BOOL>(0xCBC580, newsStory); } // 0x66E49BF55B4B1874 0x27305D37 b323
	static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xCBC5A0); } // 0x50B196FC9ED6545B 0xA2B88CA7 b323
	static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0xCBC5D0, play); } // 0xCD536C4D33DCC900 0x8E88B3CC b323
	static void SKIP_RADIO_FORWARD() { invoke<Void>(0xCBC600); } // 0x6DDBBDD98E2E9C25 0x10D36630 b323
	static void FREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xCBC610, radioStation); } // 0x344F393B027E38C3 0x286BF543 b323
	static void UNFREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xCBC650, radioStation); } // 0xFC00454CF60B91DD 0x4D46202C b323
	static void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { invoke<Void>(0xCBC670, toggle); } // 0xC1AA9F53CE982990 0xA40196BF b323
	static void SET_INITIAL_PLAYER_STATION(const char* radioStation) { invoke<Void>(0xCBC690, radioStation); } // 0x88795F13FACDA88D 0x9B069233 b323
	static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { invoke<Void>(0xCBC6C0, toggle); } // 0x19F21E63AE6EAE4E 0x52E054CE b323
	static void SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) { invoke<Void>(0xCBC710, radioStation, radioTrack); } // 0xB39786F201FEE30B 0x76E96212 b323
	static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBC750, vehicle, toggle); } // 0xBB6F1CAEC68B0BCE 0x8D9EDD99 b323
	static BOOL CAN_VEHICLE_RECEIVE_CB_RADIO(Vehicle vehicle) { return invoke<BOOL>(0xCBC7B0, vehicle); } // 0x032A116663A4D5AC 0xCBA99F4A b323
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { invoke<Void>(0xCBC830, toggle); } // 0x1098355A16064BB3 0x990085F0 b323
	static BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return invoke<BOOL>(0xCBC880); } // 0x109697E2FFBAC8A1 0x46B0C696 b323
	static BOOL IS_PLAYER_VEH_RADIO_ENABLE() { return invoke<BOOL>(0xCBC8C0); } // 0x5F43D83FD6738741 0x2A3E5E8B b323
	static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBC900, vehicle, toggle); } // 0x3B988190C0AA6C0B 0x6F812CAB b323
	static void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { invoke<Void>(0xCBC980, radioStation, trackListName, p2); } // 0x4E404A9361F75BB2 0x128C3873 b323
	static void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { invoke<Void>(0xCBCA00, radioStation); } // 0x1654F24A88A8E3FE 0x1D766976 b323
	static int GET_NUM_UNLOCKED_RADIO_STATIONS() { return invoke<int>(0xCBCA20); } // 0xF1620ECB50E01DE7 0xCC91FCF5 b323
	static int FIND_RADIO_STATION_INDEX(Hash stationNameHash) { return invoke<int>(0xCBCA30, stationNameHash); } // 0x8D67489793FF428B 0xECA1512F b323
	static void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { invoke<Void>(0xCBCA70, radioStation, toggle); } // 0x774BD811F656A122 0xB1FF7137 b323
	static void SET_RADIO_FRONTEND_FADE_TIME(float fadeTime) { invoke<Void>(0xCBCAA0, fadeTime); } // 0x2C96CDB04FCA358E 0xC8B514E2 b323
	static void UNLOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xCBCAC0, radioStation, trackListName); } // 0x031ACB6ABA18C729 0xBE998184 b323
	static void SET_VEHICLE_MISSILE_WARNING_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBCB00, vehicle, toggle); } // 0xF3365489E0DD50F9 0x8AFC488D b323
	static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { invoke<Void>(0xCBCB70, zoneName, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9 b323
	static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { invoke<Void>(0xCBCBB0, zoneName, p1); } // 0x218DD44AAAC964FF 0xCDFF3C82 b323
	static void SET_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xCBCBF0, ambientZone, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412 b323
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1) { invoke<Void>(0xCBCC80, ambientZone, p1); } // 0x120C48C614909FA4 0x38B9B8D4 b323
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xCBCD00, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672 b323
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xCBCD40, ambientZone, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605 b323
	static BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return invoke<BOOL>(0xCBCDD0, ambientZone); } // 0x01E2817A479A7F9B 0xBFABD872 b323
	static void SET_CUTSCENE_AUDIO_OVERRIDE(const char* name) { invoke<Void>(0xCBCE30, name); } // 0x3B4BF5F0859204D9 0xCE1332B7 b323
	static void SET_VARIABLE_ON_SYNCH_SCENE_AUDIO(const char* variableName, float value) { invoke<Void>(0xCBCE60, variableName, value); } // 0xBCC29F935ED07688 0xD63CF33A b323
	static int PLAY_POLICE_REPORT(const char* name, float p1) { return invoke<int>(0xCBCEA0, name, p1); } // 0xDFEBD56D9BD1EB16 0x3F277B62 b323
	static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xCBCED0, vehicle); } // 0x1B9025BDA76822B6 0xC0EB6924 b323
	static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL override, int hornHash) { invoke<Void>(0xCBCF20, vehicle, override, hornHash); } // 0x3CDC1E622CCE0356 0x2ACAB783 b323
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xCBCFA0, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0 b323
	static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0xCBD000, toggle); } // 0x395BF71085D1B1D9 0x01D6EABE b323
	static void SET_RADIO_POSITION_AUDIO_MUTE(BOOL p0) { invoke<Void>(0xCBD020, p0); } // 0x02E93C796ABD3A97 0x3C395AEE b323
	static void SET_VEHICLE_CONVERSATIONS_PERSIST(BOOL p0, BOOL p1) { invoke<Void>(0xCBD030, p0, p1); } // 0x58BB377BEC7CD5F4 0x8CE63FA1 b323
	static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xCBD060); } // 0xD11FA52EB849D978 0xF1F51A14 b323
	static int GET_STREAM_PLAY_TIME() { return invoke<int>(0xCBD090); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56 b323
	static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0xCBD0C0, streamName, soundSet); } // 0x1F1F957154EC51DF 0x0D89599D b323
	static BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return invoke<BOOL>(0xCBD100, streamName, startOffset, soundSet); } // 0x59C16B79F53B3712 0xE5B5745C b323
	static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0xCBD140, ped); } // 0x89049DD63C08B5D1 0xA1D7FABE b323
	static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xCBD190, vehicle); } // 0xB70374A758007DFA 0xF8E4BDA2 b323
	static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xCBD1E0, object); } // 0xEBAA9B64D76356FD 0xC5266BF7 b323
	static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xCBD230); } // 0x58FCE43488F9F5F4 0x2C2A16BC b323
	static void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { invoke<Void>(0xCBD240, x, y, z); } // 0x21442F412E8DE56B 0x6FE5D865 b323
	static void STOP_STREAM() { invoke<Void>(0xCBD2A0); } // 0xA4718A1419D18151 0xD1E364DE b323
	static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xCBD2B0, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D b323
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xCBD310, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F b323
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xCBD370, ped); } // 0x932C2D096A2C3FFF 0x109D1F89 b323
	static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBD3E0, vehicle, toggle); } // 0x1FEF0683B96EBCF2 0x77182D58 b323
	static void SET_HORN_PERMANENTLY_ON(Vehicle vehicle) { invoke<Void>(0xCBD450, vehicle); } // 0x9C11908013EA4715 0xDE8BA3CD b323
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBD4B0, vehicle, toggle); } // 0x76D683C108594D0E 0x6EB92D05 b323
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xCBD510, vehicle, p1); } // 0xE5564483E407F914 0x271A9766 b323
	static void SET_HORN_PERMANENTLY_ON_TIME(Vehicle vehicle, float time) { invoke<Void>(0xCBD570, vehicle, time); } // 0x9D3AF56E94C9AE98 0x2F0A16D1 b323
	static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBD5F0, vehicle, toggle); } // 0xFA932DE350266EF8 0xC6BC16F3 b323
	static void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle vehicle, const char* audioName) { invoke<Void>(0xCBD660, vehicle, audioName); } // 0x4F0C413926060B38 0x33B0B007 b323
	static void SET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle, const char* p1, const char* p2) { invoke<Void>(0xCBD6C0, vehicle, p1, p2); } // 0xF1F8157B8C3F171C 0x1C0C5E4C b323
	static void RESET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle) { invoke<Void>(0xCBD6E0, vehicle); } // 0xD2DCCD8E16E20997 b323
	static BOOL IS_VEHICLE_AUDIBLY_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xCBD740, vehicle); } // 0x5DB8010EE71FDEF2 0x6E660D3F b323
	static void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(Vehicle vehicle, float damageFactor) { invoke<Void>(0xCBD7C0, vehicle, damageFactor); } // 0x59E7B488451F4D3A 0x23BE6432 b323
	static void SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Vehicle vehicle, float intensity) { invoke<Void>(0xCBD820, vehicle, intensity); } // 0x01BB4D577D38BD9E 0xE81FAC68 b323
	static void ENABLE_VEHICLE_FANBELT_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBD880, vehicle, toggle); } // 0x1C073274E065C6D2 0x9365E042 b323
	static void ENABLE_VEHICLE_EXHAUST_POPS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBD900, vehicle, toggle); } // 0x2BE4BC731D039D5A 0x2A60A90E b323
	static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBD980, vehicle, toggle); } // 0x4A04DE7CAB2739A1 0x072F15F2 b323
	static void SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBDA10, vehicle, toggle); } // 0x6FDDAD856E36988A 0x934BE749 b323
	static void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { invoke<Void>(0xCBDA80, doorHash, toggle); } // 0x06C0023BED16DD6B 0xE61110A2 b323
	static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xCBDAD0, vehicle, doorId); } // 0x3A539D52857EA82D 0x84930330 b323
	static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xCBDB60, vehicle, doorId); } // 0x62A456AA4769EF34 0xBA2CF407 b323
	static void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCBDBF0, vehicle, toggle); } // 0xC15907D667F7CFB2 0x563B635D b323
	static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0xCBDC60); } // 0x6D28DC1671E334FD 0x7643170D b323
	static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0xCBDC90, active); } // 0x3BD3F52BA9B1E4E8 0x0FC3379A b323
	static void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { invoke<Void>(0xCBDCB0, audioName); } // 0xB138AAB8A70D3C69 0x3033EA1D b323
	static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xCBDCD0); } // 0x19A30C23F5827F8A 0x939982A1 b323
	static BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return invoke<BOOL>(0xCBDD00); } // 0x6F259F82D873B8B8 0xCBE09AEC b323
	static void BLOCK_DEATH_JINGLE(BOOL toggle) { invoke<Void>(0xCBDD20, toggle); } // 0xF154B8D1775B2DEC 0xD2858D8A b323
	static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0xCBDD40, scene); } // 0x013A80FC08F6E4F2 0xE48D757B b323
	static void STOP_AUDIO_SCENE(const char* scene) { invoke<Void>(0xCBDD80, scene); } // 0xDFE8422B3B94E688 0xA08D8C58 b323
	static void STOP_AUDIO_SCENES() { invoke<Void>(0xCBDDB0); } // 0xBAC7FC81A75EC1A1 0xF6C7342A b323
	static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0xCBDDC0, scene); } // 0xB65B60556E2A9225 0xACBED05C b323
	static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { invoke<Void>(0xCBDE00, scene, variable, value); } // 0xEF21A9EF089A2668 0x19BB3CE8 b323
	static void SET_AUDIO_SCRIPT_CLEANUP_TIME(int time) { invoke<Void>(0xCBDE20, time); } // 0xA5F377B175A699C5 0xE812925D b323
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { invoke<Void>(0xCBDE40, entity, groupName, p2); } // 0x153973AB99FE8980 0x2BC93264 b323
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { invoke<Void>(0xCBDED0, entity, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC b323
	static BOOL AUDIO_IS_MUSIC_PLAYING() { return invoke<BOOL>(0xCBDF50); } // 0x845FFC3A4FEEFA3E b323
	static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xCBDF80, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C b323
	static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xCBDFF0, eventName); } // 0x5B17A90291133DA5 0x89FF942D b323
	static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xCBE030, eventName); } // 0x706D57B0F50DA710 0xB6094948 b323
	static BOOL IS_MUSIC_ONESHOT_PLAYING() { return invoke<BOOL>(0xCBE070); } // 0xA097AB275061FB21 0x2705C4D5 b323
	static int GET_MUSIC_PLAYTIME() { return invoke<int>(0xCBE090); } // 0xE7A0D23DC414507B 0xD633C809 b323
	static void RECORD_BROKEN_GLASS(float x, float y, float z, float radius) { invoke<Void>(0xCBE0B0, x, y, z, radius); } // 0xFBE20329593DEC9D 0x53FC3FEC b323
	static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xCBE110); } // 0xB32209EFFDC04913 0xE6B033BF b323
	static void SCRIPT_OVERRIDES_WIND_ELEVATION(BOOL p0, Any p1) { invoke<Void>(0xCBE130, p0, p1); } // 0x70B8EC8FC108A634 0x95050CAD b323
	static void SET_PED_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xCBE190, p0, p1); } // 0x149AEE66F0CB3A99 0xE64F97A0 b323
	static void FORCE_PED_PANIC_WALLA() { invoke<Void>(0xCBE1B0); } // 0x062D5EAD4DA2FA6A 0xD87AF337 b323
	static BOOL PREPARE_ALARM(const char* alarmName) { return invoke<BOOL>(0xCBE1C0, alarmName); } // 0x9D74AE343DB65533 0x084932E8 b323
	static void START_ALARM(const char* alarmName, BOOL p2) { invoke<Void>(0xCBE1F0, alarmName, p2); } // 0x0355EF116C4C97B2 0x703F524B b323
	static void STOP_ALARM(const char* alarmName, BOOL toggle) { invoke<Void>(0xCBE210, alarmName, toggle); } // 0xA1CADDCD98415A41 0xF987BE8C b323
	static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0xCBE230, stop); } // 0x2F794A877ADD4C92 0xC3CB9DC6 b323
	static BOOL IS_ALARM_PLAYING(const char* alarmName) { return invoke<BOOL>(0xCBE250, alarmName); } // 0x226435CB96CCFC8C 0x9D8E1D23 b323
	static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0xCBE2B0, vehicle); } // 0x02165D55000219AC 0xE84ABC19 b323
	static Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return invoke<Hash>(0xCBE320, vehicle); } // 0xACB5DCCA1EC76840 0xFD4B5B3B b323
	static void RESET_PED_AUDIO_FLAGS(Ped ped) { invoke<Void>(0xCBE390, ped); } // 0xF54BB7B61036F335 0xDF720C86 b323
	static void OVERRIDE_PLAYER_GROUND_MATERIAL(Hash hash, BOOL toggle) { invoke<Void>(0xCBE3E0, hash, toggle); } // 0xD2CC78CD3D0B50F9 0xC307D531 b323
	static void OVERRIDE_MICROPHONE_SETTINGS(Hash hash, BOOL toggle) { invoke<Void>(0xCBE450, hash, toggle); } // 0x75773E11BA459E90 b323
	static void DISTANT_COP_CAR_SIRENS(BOOL value) { invoke<Void>(0xCBE4C0, value); } // 0x552369F549563AD5 0x13EB5861 b323
	static void SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Vehicle vehicle, BOOL p1) { invoke<Void>(0xCBE560, vehicle, p1); } // 0x43FA0DFC5DF87815 0x7BED1872 b323
	static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { invoke<Void>(0xCBE610, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0 b323
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioEvent, Any p1) { return invoke<BOOL>(0xCBE670, audioEvent, p1); } // 0xC7ABCACA4985A766 0xE1D91FD0 b323
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int sceneID, const char* audioEvent) { return invoke<BOOL>(0xCBE6A0, sceneID, audioEvent); } // 0x029FE7CD1B7E2E75 0x7652DD49 b323
	static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xCBE6F0, sceneID); } // 0x8B2FD4560E55DD2D 0x507F3241 b323
	static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xCBE730, sceneID); } // 0x92D6A88E64A94430 0xADEED2B4 b323
	static void INIT_SYNCH_SCENE_AUDIO_WITH_POSITION(const char* audioEvent, float x, float y, float z) { invoke<Void>(0xCBE770, audioEvent, x, y, z); } // 0xC8EDE9BDBCCBA6D4 0x55A21772 b323
	static void INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY(const char* audioEvent, Entity entity) { invoke<Void>(0xCBE7E0, audioEvent, entity); } // 0x950A154B8DAB6185 0xA17F9AB0 b323
	static void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { invoke<Void>(0xCBE860, mode); } // 0x12561FCBB62D5B9C 0x62B43677 b323
	static void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { invoke<Void>(0xCBE880, p0, p1); } // 0x044DBAD7A7FA2BE5 0x8AD670EC b323
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xCBE890, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C b323
	static void STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS() { invoke<Void>(0xCBE8A0); } // 0xE4E6DD5566D28C82 0x7262B5BA b323
	static int GET_MUSIC_VOL_SLIDER() { return invoke<int>(0xCBE8B0); } // 0x3A48AB4445D499BE 0x93A44A1F b323
	static void REQUEST_TENNIS_BANKS(Ped ped) { invoke<Void>(0xCBE8E0, ped); } // 0x4ADA3F19BE4A6047 0x13777A0B b323
	static void UNREQUEST_TENNIS_BANKS() { invoke<Void>(0xCBE930); } // 0x0150B6FF25A9E2E5 0x1134F68B b323
	static void SET_SKIP_MINIGUN_SPIN_UP_AUDIO(BOOL p0) { invoke<Void>(0xCBE940, p0); } // 0xBEF34B1D9624D5DD 0xE0047BFD b323
}

namespace BRAIN
{
	static void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { invoke<Void>(0xCBF070, name, model, p2, p3); } // 0x4EE5367468A65CCC 0xECC76C3D b323
	static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { invoke<Void>(0xCBF150, scriptName, modelHash, p2, activationRange, p4, p5); } // 0x0BE84C318BA6EC22 0xB6BCC608 b323
	static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0xCBF220, object); } // 0xCCBA154209823057 0xBA4CAA56 b323
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { invoke<Void>(0xCBF2D0, scriptName, activationRange, p2); } // 0x3CDC7136613284BD 0x725D91F7 b323
	static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0xCBF380); } // 0xC5042CC6F5E3D450 0x2CF305A0 b323
	static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xCBF3A0, brainSet); } // 0x67AA4D73F0CFA86B 0x2765919F b323
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xCBF3C0, brainSet); } // 0x14D8518E9760F08F 0xFBD13FAD b323
	static void REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xCBF3E0); } // 0x0B40ED49D7D6FF84 0x19B27825 b323
	static void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xCBF3F0); } // 0x4D953DF78EBF8158 0xF3A3AB08 b323
	static void REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xCBF400, scriptName); } // 0x6D6840CEE8845831 0x949FE53E b323
	static void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xCBF410, scriptName); } // 0x6E91B04E08773030 0x29CE8BAA b323
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { invoke<Void>(0xCC6890, render, ease, easeTime, p3, p4, p5); } // 0x07E5B515DB0636FC 0x74337969 b323
	static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float p1, int p2, Any p3) { invoke<Void>(0xCC6920, render, p1, p2, p3); } // 0xC819F3CBB62BF692 0xD3C08183 b323
	static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0xCC6980, camName, p1); } // 0xC3981DCE61D9E13F 0xE9BF2A7D b323
	static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xCC6A00, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0xB51194800B257161 0x23B02F15 b323
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xCC6B60, camHash, p1); } // 0x5E3CF89C6BCCA67D 0x5D6739AE b323
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0xCC6BE0, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x6ABFA3E16460F22D 0x0688BE9A b323
	static void DESTROY_CAM(Cam cam, BOOL bScriptHostCam) { invoke<Void>(0xCC6D40, cam, bScriptHostCam); } // 0x865908C81A2C22E9 0xC39302BD b323
	static void DESTROY_ALL_CAMS(BOOL bScriptHostCam) { invoke<Void>(0xCC6DA0, bScriptHostCam); } // 0x8E5FB15663F79120 0x10C151CE b323
	static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xCC6DE0, cam); } // 0xA7A932170592B50E 0x1EF89DC0 b323
	static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0xCC6E20, cam, active); } // 0x026FB97D0A425F84 0x064659C2 b323
	static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xCC6E90, cam); } // 0xDFB2B516207D3534 0x4B58F177 b323
	static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0xCC6EE0, cam); } // 0x02EC0AF5C5A49B7A 0x6EC6B5B2 b323
	static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xCC6F50); } // 0x5234F9F10919EABA 0x0FCF4DF1 b323
	static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0xCC6FA0, cam); } // 0xBAC038F7459AE5AE 0x7C40F09C b323
	static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0xCC7040, cam, rotationOrder); } // 0x7D304C1C955E3E12 0xDAC84C9F b323
	static float GET_CAM_FOV(Cam cam) { return invoke<float>(0xCC7120, cam); } // 0xC3330A45CCCDB26A 0xD6E9FCF5 b323
	static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0xCC7180, cam); } // 0xC520A34DAFBF24B1 0xCFCD35EE b323
	static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xCC71E0, cam); } // 0xB60A9CFEB21CA6AA 0x09F119B8 b323
	static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0xCC7240, cam); } // 0x255F8DAFD540D397 0x98C5CCE9 b323
	static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { invoke<Void>(0xCC72A0, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); } // 0xBFD8727AEA3CCEBA 0x2167CEBF b323
	static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0xCC72E0, cam, posX, posY, posZ); } // 0x4D41783FB745E42E 0x7A8053AF b323
	static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0xCC7380, cam, rotX, rotY, rotZ, rotationOrder); } // 0x85973643155D0B07 0xEE38B3C1 b323
	static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0xCC73A0, cam, fieldOfView); } // 0xB13C14F66A00D047 0xD3D5D74F b323
	static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0xCC7450, cam, nearClip); } // 0xC7848EFCCC545182 0x46DB13B1 b323
	static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0xCC74C0, cam, farClip); } // 0xAE306F2A904BF86E 0x0D23E381 b323
	static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0xCC7550, cam, strength); } // 0x6F0F77FBA9A8F2E6 0xFD6E0D67 b323
	static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0xCC75D0, cam, nearDOF); } // 0x3FA4BF0A7AB7DE2C 0xF28254DF b323
	static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0xCC7640, cam, farDOF); } // 0xEDD91296CD01AEE0 0x58515E8E b323
	static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0xCC76B0, cam, dofStrength); } // 0x5EE29B4D7D5DF897 0x3CC4EB3F b323
	static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0xCC7730, cam, p1, p2, p3, p4); } // 0x3CF48F6F96E749DC 0xAD6C2B8F b323
	static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0xCC77E0, cam, toggle); } // 0x16A96863A17552BB 0x8306C256 b323
	static void SET_USE_HI_DOF() { invoke<Void>(0xCC7850); } // 0xA13B0222F3D94A94 0x8BBF2950 b323
	static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xCC7870, camera, p1); } // 0xF55E4046F6F831DC b323
	static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(Any p0, float p1) { invoke<Void>(0xCC7940, p0, p1); } // 0xE111A7C0D200CBC5 b323
	static void SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { invoke<Void>(0xCC7A10, camera, p1); } // 0x7DD234D6F3914C5B b323
	static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xCC7AE0, camera, p1); } // 0xC3654A441402562D b323
	static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { invoke<Void>(0xCC7BA0, camera, p1); } // 0x2C654B4943BDDF7C b323
	static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xCC7C60, cam, entity, xOffset, yOffset, zOffset, isRelative); } // 0xFEDB7D269E8C60E3 0xAD7C45F6 b323
	static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xCC7C80, cam, ped, boneIndex, x, y, z, heading); } // 0x61A3DBA14AB7F411 0x506BB35C b323
	static void DETACH_CAM(Cam cam) { invoke<Void>(0xCC7CA0, cam); } // 0xA2FABBE87F4BAD82 0xF4FBF14A b323
	static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { invoke<Void>(0xCC7D10, cam, p1); } // 0x45F1DE9C34B93AE6 0xE4BD5342 b323
	static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0xCC7D20, cam, x, y, z); } // 0xF75497BB865F0803 0x914BC21A b323
	static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xCC7DE0, cam, entity, p2, p3, p4, p5); } // 0x5640BFF86B16E8DC 0x7597A0F7 b323
	static void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xCC7E00, cam, ped, boneIndex, x, y, z, p6); } // 0x68B2B5F33BA63C41 0x09F47049 b323
	static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xCC7E20, cam); } // 0xF33AB75780BA57DE 0x5435F6A5 b323
	static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0xCC7E90, cam, toggle); } // 0x8C1DC7770C51DC8D 0x0C74F9AF b323
	static void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam cam, BOOL toggle) { invoke<Void>(0xCC7F20, cam, toggle); } // 0x661B5C8654ADD825 0xE1A0B2F1 b323
	static void SET_CAM_IS_INSIDE_VEHICLE(Cam cam, BOOL toggle) { invoke<Void>(0xCC7FD0, cam, toggle); } // 0xA2767257A320FC82 b323
	static void ALLOW_MOTION_BLUR_DECAY(Any p0, BOOL p1) { invoke<Void>(0xCC8060, p0, p1); } // 0x271017B9BA825366 0x43220969 b323
	static void SET_CAM_DEBUG_NAME(Cam camera, const char* name) { invoke<Void>(0xCC80F0, camera, name); } // 0x1B93E0107865DD40 0x9B00DF3F b323
	static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int smoothingStyle, int rotationOrder) { invoke<Void>(0xCC8100, camera, x, y, z, xRot, yRot, zRot, length, smoothingStyle, rotationOrder); } // 0x8609C75EC438FB3B 0xAD3C7EAA b323
	static void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xCC8120, cam, cam2, length, p3); } // 0x0A9F2A468B328E74 0x30510511 b323
	static void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xCC8140, cam, cam2, length, p3); } // 0x0FB82563989CF4FB 0xBA6C085B b323
	static void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(Cam cam, int length, int p2) { invoke<Void>(0xCC8160, cam, length, p2); } // 0x609278246A29CA34 0xB4737F03 b323
	static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0xCC81F0, cam, p1); } // 0x242B5874F0A4E052 0xF0AED233 b323
	static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0xCC8280, cam); } // 0xB5349E36C546509A 0x39784DD9 b323
	static float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return invoke<float>(0xCC8310, cam); } // 0xD9D0E694C8282C96 0x7B9522F6 b323
	static void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { invoke<Void>(0xCC83A0, cam, timeDuration); } // 0x1381539FEE034CDA 0x3E91FC8A b323
	static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { invoke<Void>(0xCC8410, cam, smoothingStyle); } // 0xD1B0F412F109EA5D 0x15E141CE b323
	static int GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return invoke<int>(0xCC8480, cam); } // 0xB22B17DF858716A6 0xF8AEB6BD b323
	static void SET_CAM_SPLINE_NODE_EASE(Cam cam, int easingFunction, int p2, float p3) { invoke<Void>(0xCC8500, cam, easingFunction, p2, p3); } // 0x83B8201ED82A9A2D 0x21D275DA b323
	static void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(Cam cam, int p1, float scale) { invoke<Void>(0xCC85B0, cam, p1, scale); } // 0xA6385DEB180F319F 0xA3BD9E94 b323
	static void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xCC8670, cam, p1, p2, p3); } // 0x40B62FA033EB0346 0x326A17E2 b323
	static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xCC8730, cam, p1, p2, p3); } // 0x7DCF7C708D292D55 0x633179E6 b323
	static void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(Cam cam, int p1, int flags) { invoke<Void>(0xCC87F0, cam, p1, flags); } // 0x7BF1A54AE67AC070 0xC90B2DDC b323
	static BOOL IS_CAM_SPLINE_PAUSED(Cam cam) { return invoke<BOOL>(0xCC8810, cam); } // 0x0290F35C0AD97864 0x60B34FF5 b323
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0xCC88A0, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x9FBDA379383A52A4 0x7983E7F0 b323
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xCC88C0, cam); } // 0x036F97C908C2B52C 0x7159CB5D b323
	static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { invoke<Void>(0xCC88F0, cam, type, amplitude); } // 0x6A25241C340D3822 0x1D4211B0 b323
	static void ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) { invoke<Void>(0xCC8980, cam, p1, p2, p3, amplitude); } // 0xA2746EEAE3E577CD 0xE1168767 b323
	static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xCC8A20, cam); } // 0x6B24BFE83A2BE47B 0x0961FD9B b323
	static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0xCC8A90, cam, amplitude); } // 0xD93DB43B82BC0D00 0x60FF6382 b323
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0xCC8B00, cam, p1); } // 0xBDECF64367884AC3 0x40D0EB87 b323
	static void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { invoke<Void>(0xCC8B70, p0, p1); } // 0xF4C8CF9E353AFECA 0x2B0F05CD b323
	static void ANIMATED_SHAKE_SCRIPT_GLOBAL(const char* p0, const char* p1, const char* p2, float p3) { invoke<Void>(0xCC8BB0, p0, p1, p2, p3); } // 0xC2EAE3FB8CDBED31 0xCB75BD9C b323
	static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0xCC8C00); } // 0xC912AF078AF19212 0x6AEFE6A5 b323
	static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { invoke<Void>(0xCC8C30, p0); } // 0x1C9D7949FA533490 0x26FCFB96 b323
	static BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0xCC8C60, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0x9A2D0FB2E7852392 0xBCEFB87E b323
	static BOOL IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xCC8CA0, cam, animName, animDictionary); } // 0xC90621D8A0CEECF2 0xB998CB49 b323
	static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0xCC8D50, cam, phase); } // 0x4145A4C44FF3B5A6 0x3CB1D17F b323
	static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xCC8DC0, cam); } // 0xA10B2DB49E92A6B0 0x345F72D0 b323
	static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xCC8E10, p0, p1, animName, animDictionary); } // 0xE32EFE9AB4A9AA0C 0x9458459E b323
	static void SET_FLY_CAM_HORIZONTAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xCC8E40, cam, p1, p2, p3); } // 0x503F5920162365B2 0x56F9ED27 b323
	static void SET_FLY_CAM_MAX_HEIGHT(Cam cam, float height) { invoke<Void>(0xCC8EF0, cam, height); } // 0xF9D02130ECDD1D77 0x71570DBA b323
	static void SET_FLY_CAM_COORD_AND_CONSTRAIN(Cam cam, float x, float y, float z) { invoke<Void>(0xCC8F70, cam, x, y, z); } // 0xC91C6C55199308CA 0x60B345DE b323
	static void SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(Cam cam) { invoke<Void>(0xCC9010, cam); } // 0xC8B5C4A79CC18B94 0x44473EFC b323
	static BOOL WAS_FLY_CAM_CONSTRAINED_ON_PREVIOUS_UDPATE(Cam cam) { return invoke<BOOL>(0xCC9080, cam); } // 0x5C48A1D6E3B33179 0xDA931D65 b323
	static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xCC9100); } // 0xB16FCE9DDC7BA182 0x9CAA05FA b323
	static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xCC9120); } // 0x5A859503B0C08678 0x4F37276D b323
	static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xCC9140); } // 0x797AC7CB535BA28F 0x79275A57 b323
	static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xCC9160); } // 0x5C544BC6C57AC575 0xC7C82800 b323
	static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0xCC9180, duration); } // 0xD4E8E24955024033 0x66C1BDEE b323
	static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0xCC9190, duration); } // 0x891B5B39AC6302AF 0x89D01805 b323
	static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0xCC91A0, p0, p1); } // 0xDCD4EA924F42D01A 0x1A75DC9A b323
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xCC91C0); } // 0x14D6F5678D8F1B37 0x9388CF79 b323
	static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xCC9200, rotationOrder); } // 0x837765A25378F0BB 0x13A010B5 b323
	static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0xCC92A0); } // 0x65019750A0324133 0x4D6B3BFA b323
	static void SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(float p0) { invoke<Void>(0xCC92D0, p0); } // 0x487A82C650EB7799 0xA6E73135 b323
	static void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float p0) { invoke<Void>(0xCC9310, p0); } // 0x0225778816FDC28C 0x1126E37C b323
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0xCC9360); } // 0x743607648ADD4587 0xCAF839C2 b323
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0xCC9390, heading); } // 0xB4EC2312F4E5B1F1 0x20C6217C b323
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0xCC9470); } // 0x3A6867B4845BEDA2 0xFC5A4946 b323
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float angle, float scalingFactor) { invoke<Void>(0xCC94A0, angle, scalingFactor); } // 0x6D0858B8EDFD2B7D 0x6381B963 b323
	static void SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(float yaw) { invoke<Void>(0xCC9510, yaw); } // 0x103991D4A307D472 b323
	static void SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(float pitch) { invoke<Void>(0xCC9550, pitch); } // 0x759E13EBC1C15C5A b323
	static void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(BOOL p0) { invoke<Void>(0xCC95B0, p0); } // 0x469F2ECDEC046337 b323
	static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { invoke<Void>(0xCC95D0, shakeName, intensity); } // 0xFD55E49555E017CF 0xF2EFE660 b323
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0xCC9610); } // 0x016C090630DF1F89 0x3457D681 b323
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xCC9640, amplitude); } // 0xA87E00932DB4D85D 0x9219D44A b323
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xCC9670, p0); } // 0x0EF93E9F3D08C178 0xFD569E4E b323
	static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { invoke<Void>(0xCC96A0, ped); } // 0x8BBACBF51DA047A8 0x7D3007A2 b323
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0xCC9710); } // 0x39B5D1B10383F0C8 0x0EF276DA b323
	static BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return invoke<BOOL>(0xCC9740); } // 0x3044240D2E0FA842 0xC0B00C20 b323
	static BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS() { return invoke<BOOL>(0xCC9780); } // 0x705A276EBFF3133D 0x60C23785 b323
	static void SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(BOOL p0) { invoke<Void>(0xCC97C0, p0); } // 0xDB90C6CCA48940F1 0x20BFF6E5 b323
	static void DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE() { invoke<Void>(0xCC97F0); } // 0xEA7F0AD7E9BA676F 0xA61FF9AC b323
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xCC9810); } // 0x70FDA869F3317EA9 0x33C83F17 b323
	static void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity entity) { invoke<Void>(0xCC9840, entity); } // 0x2AED6301F67007D5 0x2701A9AD b323
	static void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { invoke<Void>(0xCC98B0, entity); } // 0x49482F9FCD825AAA 0xC4736ED3 b323
	static void SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Entity entity) { invoke<Void>(0xCC9910, entity); } // 0xFD3151CD37EA2245 b323
	static void SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE() { invoke<Void>(0xCC9980); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57 b323
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xCC99A0, x, y, z, radius); } // 0xE33D59DA70B58FDF 0xDD1329E2 b323
	static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0xCC9A10); } // 0xC6D3D26810C8E0F9 0x9F9E856C b323
	static BOOL SET_FOLLOW_PED_CAM_THIS_UPDATE(const char* camName, int p1) { return invoke<BOOL>(0xCC9A40, camName, p1); } // 0x44A113DD6FFC48D1 0x1425F6AC b323
	static void USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(BOOL p0, BOOL p1) { invoke<Void>(0xCC9AD0, p0, p1); } // 0x271401846BD26E92 0x8DC53629 b323
	static void SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE() { invoke<Void>(0xCC9B20); } // 0xC8391C309684595A 0x1F9DE6E4 b323
	static void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xCC9B50, minimum, maximum); } // 0x8F993D26E0CA5E8E 0x749909AC b323
	static void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xCC9BF0, minimum, maximum); } // 0xA516C198B7DCA1E1 0xFA3A16E7 b323
	static void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float p0, float distance) { invoke<Void>(0xCC9C90, p0, distance); } // 0xDF2E1F7742402E81 0x77340650 b323
	static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { invoke<Void>(0xCC9CC0, p0, p1); } // 0xE9EA16D6E54CDCA4 0x4B22C5CB b323
	static void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { invoke<Void>(0xCC9D30); } // 0xDE2EF5DA284CC8DF b323
	static void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { invoke<Void>(0xCC9D50); } // 0x59424BD75174C9B1 b323
	static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0xCC9D60); } // 0x33E6C8EFD0CD93E9 0x57583DF1 b323
	static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xCC9D80); } // 0x8D4D46230B2C353A 0xA65FF946 b323
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xCC9DA0, viewMode); } // 0x5A4F9EDF1673F704 0x495DBE8D b323
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xCC9DB0); } // 0xCBBDE6D335D6D496 0x8DD49B77 b323
	static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_THIS_UPDATE(BOOL p0) { invoke<Void>(0xCC9DE0, p0); } // 0x91EF6EE6419E5B97 0x9DB5D391 b323
	static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(BOOL p0, BOOL p1) { invoke<Void>(0xCC9E10, p0, p1); } // 0x9DFE13ECDC1EC196 0x92302899 b323
	static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xCC9E40); } // 0xEE82280AB767B690 0x8CD67DE3 b323
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0xCC9E60, zoomLevel); } // 0x19464CB6E4078C8A 0x8F55EBBE b323
	static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xCC9E70); } // 0xA4FF579AC0E3AAAE 0xA4B4DB03 b323
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xCC9E90, viewMode); } // 0xAC253D7842768F48 0xC4FBBBD3 b323
	static int GET_CAM_VIEW_MODE_FOR_CONTEXT(int context) { return invoke<int>(0xCC9EA0, context); } // 0xEE778F8C7E1142E2 0xF3B148A6 b323
	static void SET_CAM_VIEW_MODE_FOR_CONTEXT(int context, int viewMode) { invoke<Void>(0xCC9EC0, context, viewMode); } // 0x2A2173E46DAECD12 0x1DEBCB45 b323
	static int GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() { return invoke<int>(0xCC9ED0); } // 0x19CAFA3C87F7C2FF b323
	static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xCC9F00); } // 0x68EDDA28A5976D07 0xC24B4F6F b323
	static BOOL IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE() { return invoke<BOOL>(0xCC9F60); } // 0x74BD83EA840F6BC9 0x8F320DE4 b323
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xCC9FA0); } // 0x5E346D934122613F 0xD6280468 b323
	static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<Void>(0xCC9FD0); } // 0x1A31FE0049E542F6 0x1BAA7182 b323
	static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke<float>(0xCCA010); } // 0x7EC52CC40597D170 0x33951005 b323
	static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float zoomFactor) { invoke<Void>(0xCCA030, zoomFactor); } // 0x70894BD0915C5BCA 0x9F4AF763 b323
	static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xCCA050, p0, p1); } // 0xCED08CBE8EBB97C7 0x68BA0730 b323
	static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xCCA070, p0, p1); } // 0x2F7F2B26DD3F18EE 0x2F29F0D5 b323
	static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xCCA1E0, p0, p1); } // 0xBCFC632DB7673BF0 0x76DAC96C b323
	static void SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xCCA280, p0); } // 0x0AF7B437918103B3 0x0E21069D b323
	static void SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xCCA2C0, p0); } // 0x42156508606DE65E 0x71E9C63E b323
	static void SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(BOOL p0) { invoke<Void>(0xCCA300, p0); } // 0x4008EDF7D6E48175 0xD1EEBC45 b323
	static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<Vector3>(0xCCA330); } // 0xA200EB1EE790F448 0x9C84BDA0 b323
	static Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xCCA370, rotationOrder); } // 0x5B4E4C817FCC2DFB 0x1FFBEFC5 b323
	static Vector3 GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_ROT(Player player, int rotationOrder) { return invoke<Vector3>(0xCCA400, player, rotationOrder); } // 0x26903D9CD1175F2C 0xACADF916 b323
	static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0xCCA500); } // 0x80EC114669DAEFF4 0x721B763B b323
	static float GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_FOV(Player player) { return invoke<float>(0xCCA520, player); } // 0x5F35F6732C3FBBA0 0x23E3F106 b323
	static float GET_FINAL_RENDERED_CAM_NEAR_CLIP() { return invoke<float>(0xCCA570); } // 0xD0082607100D7193 0x457AE195 b323
	static float GET_FINAL_RENDERED_CAM_FAR_CLIP() { return invoke<float>(0xCCA590); } // 0xDFC8CBC606FDB0FC 0x46CB3A49 b323
	static float GET_FINAL_RENDERED_CAM_NEAR_DOF() { return invoke<float>(0xCCA5B0); } // 0xA03502FC581F7D9B 0x19297A7A b323
	static float GET_FINAL_RENDERED_CAM_FAR_DOF() { return invoke<float>(0xCCA5D0); } // 0x9780F32BCAF72431 0xF24777CA b323
	static float GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH() { return invoke<float>(0xCCA5F0); } // 0x162F9D995753DC19 0x38992E83 b323
	static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int p6) { invoke<Void>(0xCCA610, x, y, z, duration, blendOutDuration, blendInDuration, p6); } // 0xD51ADCD2D8BC0FB3 0xF27483C9 b323
	static void SET_GAMEPLAY_PED_HINT(Ped ped, float x1, float y1, float z1, BOOL p4, int duration, int blendOutDuration, int blendInDuration) { invoke<Void>(0xCCA6A0, ped, x1, y1, z1, p4, duration, blendOutDuration, blendInDuration); } // 0x2B486269ACD548D3 0x7C27343E b323
	static void SET_GAMEPLAY_VEHICLE_HINT(Vehicle vehicle, float offsetX, float offsetY, float offsetZ, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xCCA770, vehicle, offsetX, offsetY, offsetZ, p4, time, easeInTime, easeOutTime); } // 0xA2297E18F3E71C2E 0x2C9A11D8 b323
	static void SET_GAMEPLAY_OBJECT_HINT(Object object, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xCCA840, object, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime); } // 0x83E87508A2CA2AC6 0x2ED5E2F8 b323
	static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime, int p8) { invoke<Void>(0xCCA910, entity, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime, p8); } // 0x189E955A8313E298 0x66C32306 b323
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xCCA9E0); } // 0xE520FF1AD2785B40 0xAD8DA205 b323
	static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xCCAA20, p0); } // 0xF46C581C61718916 0x1BC28B7B b323
	static void STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(BOOL p0) { invoke<Void>(0xCCAA60, p0); } // 0xCCD078C2665D2973 0xCAFEE798 b323
	static void STOP_CODE_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xCCAA70, p0); } // 0x247ACBC4ABBC9D1C b323
	static BOOL IS_CODE_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xCCAAB0); } // 0xBF72910D0F26F025 b323
	static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0xCCAAE0, FOV); } // 0x513403FB9C56211F 0x96FD173B b323
	static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float value) { invoke<Void>(0xCCAB30, value); } // 0xF8BDBF3D573049A1 0x72E8CD3A b323
	static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float value) { invoke<Void>(0xCCAB70, value); } // 0xD1F8363DFAD03848 0x79472AE3 b323
	static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float xOffset) { invoke<Void>(0xCCABB0, xOffset); } // 0x5D7B620DAE436138 0xFC7464A0 b323
	static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float yOffset) { invoke<Void>(0xCCABF0, yOffset); } // 0xC92717EF615B6704 0x3554AA0E b323
	static void SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(BOOL toggle) { invoke<Void>(0xCCAC30, toggle); } // 0xE3433EADAAF7EE40 0x2F0CE859 b323
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0xCCAC60, p0); } // 0x51669F7D1FB53D9F 0x3FBC5D00 b323
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xCCACA0); } // 0xB15162CB5826E9E8 0x80471AD9 b323
	static void SHAKE_CINEMATIC_CAM(const char* shakeType, float amount) { invoke<Void>(0xCCACD0, shakeType, amount); } // 0xDCE214D9ED58F3CF 0x61815F31 b323
	static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0xCCAD10); } // 0xBBC08F6B4CB8FF0A 0x8376D939 b323
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0xCCAD40, p0); } // 0xC724C701C30B2FE7 0x67510C4B b323
	static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0xCCAD70, p0); } // 0x2238E588E588A6D7 0x71C12904 b323
	static void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xCCADA0); } // 0xADFF1B2A555F5FBA 0x5AC6DAC9 b323
	static void DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE() { invoke<Void>(0xCCADC0); } // 0x62ECFCFDEE7885D6 0x837F8581 b323
	static void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { invoke<Void>(0xCCADE0); } // 0x9E4CFFF989258472 0x65DDE8AF b323
	static void INVALIDATE_IDLE_CAM() { invoke<Void>(0xCCAE00); } // 0xF4F2C0D4EE209E20 0xD75CDD75 b323
	static BOOL IS_CINEMATIC_IDLE_CAM_RENDERING() { return invoke<BOOL>(0xCCAE20); } // 0xCA9D2AA3E326D720 0x96A07066 b323
	static BOOL IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING() { return invoke<BOOL>(0xCCAE50); } // 0x4F32C0D5A90A9B40 b323
	static void CREATE_CINEMATIC_SHOT(Hash p0, int time, BOOL p2, Entity entity) { invoke<Void>(0xCCAE80, p0, time, p2, entity); } // 0x741B0129D4560F31 0xAC494E35 b323
	static BOOL IS_CINEMATIC_SHOT_ACTIVE(Hash p0) { return invoke<BOOL>(0xCCAEA0, p0); } // 0xCC9F3371A7C28BC9 0xA4049042 b323
	static void STOP_CINEMATIC_SHOT(Hash p0) { invoke<Void>(0xCCAF10, p0); } // 0x7660C6E75D3A078E 0xD78358C5 b323
	static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL toggle) { invoke<Void>(0xCCAF70, toggle); } // 0xA41BCD7213805AAC 0xFBB85E02 b323
	static void SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE() { invoke<Void>(0xCCAFB0); } // 0xDC9DA9E8789F5246 0x4938C82F b323
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { invoke<Void>(0xCCAFD0, toggle); } // 0xDCF0754AC3D6FD4E 0x2009E747 b323
	static BOOL IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING() { return invoke<BOOL>(0xCCB010); } // 0x1F2300CB7FA7B7F6 0x6739AD55 b323
	static void BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE() { invoke<Void>(0xCCB030); } // 0xDB629FFD9285FA06 b323
	static void STOP_CUTSCENE_CAM_SHAKING(Any p0) { invoke<Void>(0xCCB050, p0); } // 0x324C5AA411DA7737 b323
	static void SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xCCB080, p0); } // 0x12DED8CA53D47EA5 0x067BA6F5 b323
	static Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Ped>(0xCCB0C0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x89215EC747DF244A 0xFD99BE2B b323
	static void DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE() { invoke<Void>(0xCCB120); } // 0x5A43C76F7FC7BA5F 0xE206C450 b323
	static void SET_CAM_DEATH_FAIL_EFFECT_STATE(int p0) { invoke<Void>(0xCCB130, p0); } // 0x80C8B1846639BB19 0xB06CCD38 b323
	static void SET_FIRST_PERSON_FLASH_EFFECT_TYPE(Any p0) { invoke<Void>(0xCCB140, p0); } // 0x5C41E6BABC9E2112 b323
	static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME(const char* vehicleName) { invoke<Void>(0xCCB170, vehicleName); } // 0x21E253A7F8DA5DFB b323
	static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(Hash vehicleModel) { invoke<Void>(0xCCB1A0, vehicleModel); } // 0x11FA5D3479C7DD47 b323
}

namespace CLOCK
{
	static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xCCB650, hour, minute, second); } // 0x47C3B5848C3E45D8 0x26F6AF14 b323
	static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xCCB680, toggle); } // 0x4055E40BD2DBEC1D 0xB02D6124 b323
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xCCB6A0, hour, minute, second); } // 0xC8CA9670B9D83B3B 0x57B8DA7C b323
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xCCB6C0, hours, minutes, seconds); } // 0xD716F30D8C8980E2 0xCC40D20D b323
	static int GET_CLOCK_HOURS() { return invoke<int>(0xCCB6E0); } // 0x25223CA6B4D20B7F 0x7EF8316F b323
	static int GET_CLOCK_MINUTES() { return invoke<int>(0xCCB6F0); } // 0x13D2B8ADD79640F2 0x94AAC486 b323
	static int GET_CLOCK_SECONDS() { return invoke<int>(0xCCB700); } // 0x494E97C2EF27C470 0x099C927E b323
	static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xCCB710, day, month, year); } // 0xB096419DF0D06CE7 0x96891C94 b323
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xCCB730); } // 0xD972E4BD7AEB235F 0x84E4A289 b323
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xCCB740); } // 0x3D10BC92A4DB1D35 0xC7A5ACB7 b323
	static int GET_CLOCK_MONTH() { return invoke<int>(0xCCB750); } // 0xBBC72712E80257A1 0x3C48A3D5 b323
	static int GET_CLOCK_YEAR() { return invoke<int>(0xCCB760); } // 0x961777E64BDAF717 0xB8BECF15 b323
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0xCCB770); } // 0x2F8B4D1C595B11DB 0x3B74095C b323
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xCCB780, year, month, day, hour, minute, second); } // 0xDA488F299A5B164E 0xE15A5281 b323
	static void GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xCCB7A0, year, month, day, hour, minute, second); } // 0x8117E09A19EEF4D3 0xC589CD7D b323
	static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xCCB7C0, year, month, day, hour, minute, second); } // 0x50C7A99057A69748 0x124BCFA2 b323
}

namespace CUTSCENE
{
	static void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { invoke<Void>(0xCCDA40, cutsceneName, flags); } // 0x7A86743F475D9E09 0xB5977853 b323
	static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { invoke<Void>(0xCCDAA0, cutsceneName, playbackFlags, flags); } // 0xC23DE0E91C30B58C 0xD98F656A b323
	static void REMOVE_CUTSCENE() { invoke<Void>(0xCCDB20); } // 0x440AF51A3462B86F 0x8052F533 b323
	static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xCCDB50); } // 0xC59F528E9AB9F339 0xF9998582 b323
	static BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xCCDB80, cutsceneName); } // 0x228D3D94F8A11C3C 0x3C5619F2 b323
	static void SET_SCRIPT_CAN_START_CUTSCENE(int threadId) { invoke<Void>(0xCCDBD0, threadId); } // 0x8D9DF6ECA8768583 0x25A2CABC b323
	static BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return invoke<BOOL>(0xCCDBF0); } // 0xB56BBBCC2955D9CB 0xDD8878E9 b323
	static BOOL IS_CUTSCENE_PLAYBACK_FLAG_SET(int flag) { return invoke<BOOL>(0xCCDC30, flag); } // 0x71B74D2AE19338D0 0x7B93CDAA b323
	static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { invoke<Void>(0xCCDC70, cutsceneEntName, p1, p2); } // 0x4C61C75BEE8184C2 0x47DB08A9 b323
	static void START_CUTSCENE(int flags) { invoke<Void>(0xCCDC90, flags); } // 0x186D5CB5E7B0FF7B 0x210106F6 b323
	static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int flags) { invoke<Void>(0xCCDCC0, x, y, z, flags); } // 0x1C9ADDA3244A1FBF 0x58BEA436 b323
	static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xCCDCD0, p0); } // 0xC7272775B4DC786E 0x5EE84DC7 b323
	static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xCCDD10); } // 0xD220BDD222AC4A1E 0xF528A2AD b323
	static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<Void>(0xCCDD40, x, y, z, p3, p4); } // 0xB812B3FD1C01CF27 0xB0AD7792 b323
	static void SET_CUTSCENE_ORIGIN_AND_ORIENTATION(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { invoke<Void>(0xCCDD60, x1, y1, z1, x2, y2, z2, p6); } // 0x011883F41211432A b323
	static int GET_CUTSCENE_TIME() { return invoke<int>(0xCCDD70); } // 0xE625BEABBAFFDAB9 0x53F5B5AB b323
	static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xCCDDA0); } // 0xEE53B14A19E480D4 0x0824EBE8 b323
	static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xCCDDF0); } // 0x40C8656EDAEDD569 0xC9B6949D b323
	static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xCCDE20); } // 0x7C0A893088881D57 0x5DED14B4 b323
	static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xCCDE50); } // 0x991251AFC3981F84 0xCCE2FE9D b323
	static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xCCDE80); } // 0xD3C2E180A40F031E 0xA3A78392 b323
	static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0xCCDEB0); } // 0x49010A6A396553D8 0x1026F0D6 b323
	static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xCCDED0, cutsceneEntName, modelHash); } // 0x0A2E9FDB9A8C62F6 0x1D09ABC7 b323
	static int GET_CUTSCENE_CONCAT_SECTION_PLAYING() { return invoke<int>(0xCCDF80); } // 0x583DF8E3D4AFBD98 0x5AE68AE6 b323
	static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0xCCDFB0, cutscenePed, cutsceneEntName, p2, modelHash, p4); } // 0xE40C1C56DF95C2E8 0x7CBC3EC7 b323
	static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xCCDFD0, cutsceneEntName, modelHash); } // 0xC0741A26499654CD 0x46D18755 b323
	static void SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Hash modelHash) { invoke<Void>(0xCCE000, modelHash); } // 0x7F96F23FA9B73327 b323
	static void SET_CUTSCENE_TRIGGER_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xCCE020, x1, y1, z1, x2, y2, z2); } // 0x9896CE4721BE84BA 0x9D76D9DE b323
	static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xCCE0C0, cutsceneEntName, modelHash); } // 0x645D0B458D8E17B5 0x55C30B26 b323
	static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xCCE140, cutsceneEntName, modelHash); } // 0x4C6A6451C79E4662 0x8FF5D3C4 b323
	static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xCCE1C0, p0); } // 0xB2CBCD0930DFB420 0xEDAE6C02 b323
	static void SET_PAD_CAN_SHAKE_DURING_CUTSCENE(BOOL toggle) { invoke<Void>(0xCCE200, toggle); } // 0xC61B86C9F61EB404 0x35721A08 b323
	static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xCCE240, p0, p1, p2, p3); } // 0x8093F23ABACCC7D4 0xD19EF0DD b323
	static void NETWORK_SET_MOCAP_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xCCE2F0, p0); } // 0x2F137B508DE238F2 0x8338DA1D b323
	static void SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(BOOL p0) { invoke<Void>(0xCCE330, p0); } // 0xE36A98D8AB3D3C66 0x04377C10 b323
	static BOOL CAN_USE_MOBILE_PHONE_DURING_CUTSCENE() { return invoke<BOOL>(0xCCE370); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708 b323
	static void SET_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xCCE3C0, p0); } // 0x41FAA8FB2ECE8720 0x28D54A7F b323
	static void SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE() { invoke<Void>(0xCCE400); } // 0x2131046957F31B04 0xB60CFBB9 b323
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xCCE430, cutsceneEntName, componentId, drawableId, textureId, modelHash); } // 0xBA01E7B6DEEFBBC9 0x6AF994A1 b323
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0xCCE450, cutsceneEntName, ped, modelHash); } // 0x2A56C06EBEF2B0D9 0x1E7DA95E b323
	static BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xCCE470, cutsceneEntName, modelHash); } // 0x499EF20C5DB25C59 0x58E67409 b323
	static void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xCCE510, cutsceneEntName, componentId, drawableId, textureId, modelHash); } // 0x0546524ADE2E9723 0x22E9A9DE b323
	static BOOL HAS_CUTSCENE_CUT_THIS_FRAME() { return invoke<BOOL>(0xCCE5D0); } // 0x708BDD8CD795B043 0x4315A7C5 b323
}

namespace DATAFILE
{
	static void DATAFILE_WATCH_REQUEST_ID(int requestId) { invoke<Void>(0xCD1930, requestId); } // 0xAD6875BBC0FC899C 0x621388FF b323
	static BOOL DATAFILE_SELECT_ACTIVE_FILE(int requestId, Any p1) { return invoke<BOOL>(0xCD1940, requestId, p1); } // 0x22DA66936E0FFF37 0xB41064A4 b323
	static BOOL DATAFILE_DELETE_REQUESTED_FILE(int requestId) { return invoke<BOOL>(0xCD19F0, requestId); } // 0x8F5EA1C01D65A100 0x9DB63CFF b323
	static BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p7) { return invoke<BOOL>(0xCD1A20, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish, p7); } // 0xC84527E235FCA219 0xF09157B0 b323
	static BOOL UGC_CREATE_MISSION(const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p5) { return invoke<BOOL>(0xCD1A70, contentName, description, tagsCsv, contentTypeName, publish, p5); } // 0xA5EFC3E847D60507 0xD96860FC b323
	static BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p7) { return invoke<BOOL>(0xCD1AB0, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName, p7); } // 0x648E7A5434AF7969 0x459F2683 b323
	static BOOL UGC_UPDATE_MISSION(const char* contentId, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p5) { return invoke<BOOL>(0xCD1AF0, contentId, contentName, description, tagsCsv, contentTypeName, p5); } // 0x4645DE9980999E93 0xDBB83E2B b323
	static BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName, Any p3) { return invoke<BOOL>(0xCD1B30, contentId, rating, contentTypeName, p3); } // 0x692D808C34A82143 0xBB6321BD b323
	static BOOL DATAFILE_SELECT_UGC_DATA(int p0, Any p1) { return invoke<BOOL>(0xCD1C20, p0, p1); } // 0xA69AC4ADE82B57A4 0xE8D56DA2 b323
	static BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1, Any p2) { return invoke<BOOL>(0xCD1C50, p0, p1, p2); } // 0x9CB0BFA7A9342C3D 0xCB6A351E b323
	static BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0, Any p1) { return invoke<BOOL>(0xCD1C80, p0, p1); } // 0x52818819057F2B40 0xA4D1B30E b323
	static BOOL DATAFILE_SELECT_CREATOR_STATS(int p0, Any p1) { return invoke<BOOL>(0xCD1CB0, p0, p1); } // 0x01095C95CD46B624 0xB8515B2F b323
	static BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename, Any p1) { return invoke<BOOL>(0xCD1CE0, filename, p1); } // 0xC5238C011AF405E4 0x660C468E b323
	static void DATAFILE_CREATE(int p0) { invoke<Void>(0xCD1D10, p0); } // 0xD27058A1CA2B13EE 0x95F8A221 b323
	static void DATAFILE_DELETE(int p0) { invoke<Void>(0xCD1DA0, p0); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A b323
	static void DATAFILE_STORE_MISSION_HEADER(int p0) { invoke<Void>(0xCD1E60, p0); } // 0x2ED61456317B8178 0x4E03F632 b323
	static void DATAFILE_FLUSH_MISSION_HEADER() { invoke<Void>(0xCD1E70); } // 0xC55854C7D7274882 0xF11F956F b323
	static Any* DATAFILE_GET_FILE_DICT(int p0) { return invoke<Any*>(0xCD1F30, p0); } // 0x906B778CA1DC72B6 0x86DDF9C2 b323
	static BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename, Any p1) { return invoke<BOOL>(0xCD1F50, filename, p1); } // 0x83BCCE3224735F05 0x768CBB35 b323
	static BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return invoke<BOOL>(0xCD1FB0, p0); } // 0x4DFDD9EB705F8140 0x0B4087F7 b323
	static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xCD2000); } // 0xBEDB96A7584AA8CF 0x5DCD0796 b323
	static void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { invoke<Void>(0xCD2020, objectData, key, value); } // 0x35124302A556A325 0x9B29D99B b323
	static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { invoke<Void>(0xCD2040, objectData, key, value); } // 0xE7E035450A7948D5 0xEFCF554A b323
	static void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { invoke<Void>(0xCD2060, objectData, key, value); } // 0xC27E1CC2D795105E 0xE972CACF b323
	static void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { invoke<Void>(0xCD2080, objectData, key, value); } // 0x8FF3847DADD8E30C 0xD437615C b323
	static void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0xCD20A0, objectData, key, valueX, valueY, valueZ); } // 0x4CD49B76338C7DEE 0x75FC6C3C b323
	static Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xCD20D0, objectData, key); } // 0xA358F56F10732EE1 0x96A8E05F b323
	static Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xCD2100, objectData, key); } // 0x5B11728527CA6E5F 0x03939B8D b323
	static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0xCD2130, objectData, key); } // 0x1186940ED72FFEEC 0x8876C872 b323
	static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0xCD21E0, objectData, key); } // 0x78F06F6B1FB5A80C 0xA6C68693 b323
	static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0xCD2280, objectData, key); } // 0x06610343E73B9727 0xA92C1AF4 b323
	static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0xCD2340, objectData, key); } // 0x3D2FD9E763B24472 0x942160EC b323
	static Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<Vector3>(0xCD23F0, objectData, key); } // 0x46CD3CB66E0825CC 0xE84A127A b323
	static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xCD24C0, objectData, key); } // 0xB6B9DDC412FCEEE2 0xC9C13D8D b323
	static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xCD2560, objectData, key); } // 0x7A983AA9DA2659ED 0x1F2F7D00 b323
	static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0xCD2600, objectData, key); } // 0x031C55ED33227371 0x2678342A b323
	static void DATAARRAY_ADD_BOOL(Any* arrayData, BOOL value) { invoke<Void>(0xCD26A0, arrayData, value); } // 0xF8B0F5A43E928C76 0x08174B90 b323
	static void DATAARRAY_ADD_INT(Any* arrayData, int value) { invoke<Void>(0xCD26C0, arrayData, value); } // 0xCABDB751D86FE93B 0xF29C0B36 b323
	static void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0xCD26E0, arrayData, value); } // 0x57A995FD75D37F56 0xE4302123 b323
	static void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { invoke<Void>(0xCD2700, arrayData, value); } // 0x2F0661C155AEEEAA 0xF3C01350 b323
	static void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xCD2720, arrayData, valueX, valueY, valueZ); } // 0x407F8D034F70F0C2 0x16F464B6 b323
	static Any* DATAARRAY_ADD_DICT(Any* arrayData) { return invoke<Any*>(0xCD2750, arrayData); } // 0x6889498B3E19C797 0xC174C71B b323
	static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xCD2780, arrayData, arrayIndex); } // 0x50C1B2874E50C114 0xA2E5F921 b323
	static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0xCD27F0, arrayData, arrayIndex); } // 0x3E5AE19425CD74BE 0xBB120CFC b323
	static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xCD2850, arrayData, arrayIndex); } // 0xC0C527B525D7CFB5 0x08AD2CC2 b323
	static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0xCD28C0, arrayData, arrayIndex); } // 0xD3F2FFEB8D836F52 0x93F985A6 b323
	static Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0xCD2930, arrayData, arrayIndex); } // 0x8D2064E5B64A628A 0x80E3DA55 b323
	static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0xCD29B0, arrayData, arrayIndex); } // 0x8B5FADCC4E3A145F 0xECE81278 b323
	static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0xCD2A10, arrayData); } // 0x065DB281590CEA2D 0xA8A21766 b323
	static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xCD2A30, arrayData, arrayIndex); } // 0x3A0014ADB172A3C5 0xFA2402C8 b323
}

namespace DECORATOR
{
	static BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return invoke<BOOL>(0xCD39E0, entity, propertyName, timestamp); } // 0x95AED7B8E39ECAA4 0xBBAEEF94 b323
	static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0xCD3A10, entity, propertyName, value); } // 0x6B1E8E2ED1335B71 0x8E101F5C b323
	static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0xCD3AF0, entity, propertyName, value); } // 0x0CE3AA5E1CA19E10 0xDB718B21 b323
	static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0xCD3BC0, entity, propertyName); } // 0xDACE671663F2F5DB 0xDBCE51E0 b323
	static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xCD3C80, entity, propertyName); } // 0xA06C969B02A97298 0xDDDE59B5 b323
	static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0xCD3D40, entity, propertyName); } // 0x05661B80A8C9165F 0x74EF9C40 b323
	static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0xCD3DC0, entity, propertyName); } // 0x00EE9F297C738720 0xE0E2640B b323
	static void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0xCD3E40, propertyName, type); } // 0x9FD90732F56403CE 0x68BD42A9 b323
	static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0xCD3E70, propertyName, type); } // 0x4F14F9F870D6FBC8 0x7CF0971D b323
	static void DECOR_REGISTER_LOCK() { invoke<Void>(0xCD3EE0); } // 0xA9D14EEA259F9248 0x7F3F1C02 b323
}

namespace DLC
{
	static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0xD22780, dlcHash); } // 0x812595A0644CE1DE 0x1F321943 b323
	static BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return invoke<BOOL>(0xD22810); } // 0xF2E07819EF1A5289 0x881B1FDB b323
	static int GET_EXTRACONTENT_CLOUD_RESULT() { return invoke<int>(0xD22820); } // 0x9489659372A81585 0xC2169164 b323
	static BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return invoke<BOOL>(0xD22830); } // 0xA213B11DFF526300 0xF79A97F5 b323
	static BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return invoke<BOOL>(0xD22840); } // 0x8D30F648014A92B5 0xF69B729C b323
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xD22860); } // 0x10D0A8F259E93EC9 0x517B601B b323
	static BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return invoke<BOOL>(0xD22880, p0, unused); } // 0x46E2B844905BC5F0 0x6087C10C b323
	static void ON_ENTER_SP() { invoke<Void>(0xD228A0); } // 0xD7C10C4A637992C9 0x8BF60FC3 b323
	static void ON_ENTER_MP() { invoke<Void>(0xD228D0); } // 0x0888C3502DBBEEF5 0xC65586A9 b323
}

namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xCE22C0, entity); } // 0x7239B21A38F536BA 0x3AC90869 b323
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0xCE2320, entity, p1); } // 0xDDE6DF5AE89981D2 0xACFEB3F9 b323
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xCE23A0, entity); } // 0x060D6E96F8B8E48D 0xA5B33300 b323
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xCE2400, entity); } // 0xDA95EA3317CC5064 0x9BCD2979 b323
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0xCE2460, entity, animDict, animName, p3); } // 0x20B711662962B472 0x1D9CAB92 b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xCE2490, entity); } // 0x95EB9964FF5C5C65 0x6B74582E b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xCE24F0, entity); } // 0x605F5A140F202491 0x53FD4A25 b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xCE2550, entity); } // 0xDFD5033FDBA0A9C8 0x878C2CE0 b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0xCE25B0, entity1, entity2, p2); } // 0xC86D67D52A707CF8 0x07FC77E0 b323
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xCE25E0, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7 b323
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0xCE2610, entity1, entity2); } // 0x0267D00AF114F17A 0x210D87C8 b323
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0xCE2640, entity); } // 0x8BAD02F0368D9E14 0x662A2F41 b323
	static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xCE26C0, entity); } // 0x5C3D0A935F535C4C 0xC0E3AA47 b323
	static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0xCE27A0, entity); } // 0xE465D4AB7CA6AE72 0xAB415C07 b323
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0xCE28A0, entity); } // 0x40FDEDB72F8293B2 0x58D9775F b323
	static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xCE2910, entity, animDict, animName); } // 0x346D81500D088F42 0x83943F41 b323
	static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xCE2940, entity, animDict, animName); } // 0x50BD2730B191E360 0x433A9D18 b323
	static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0xCE2970, animDict, animName); } // 0xFEDDF04D62B8D790 0x8B5E3E3D b323
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xCE29B0, entity); } // 0x48C2BED9180FE123 0xFE1589F9 b323
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xCE2A40, entity, alive); } // 0x3FEF770D40960D5A 0x1647F1CB b323
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0xCE2AF0, entity); } // 0x0A794A5A57F8DF91 0x84DCECBF b323
	static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xCE2BA0, entity); } // 0x8BB4EF4214E0E6D5 0x49FAE914 b323
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xCE2C10, entity); } // 0x866A4A5FAE349510 0x9E2F917C b323
	static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xCE2C80, entity); } // 0xE83D4F9BA2A38914 0x972CC383 b323
	static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xCE2D30, entity); } // 0xEEF059FAD016D209 0x8E3222B7 b323
	static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xCE2D90, entity); } // 0x15D757606D170C3C 0xC7AE6AA1 b323
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0xCE2DF0, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8 b323
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0xCE2E40, entity, X, Y, Z, atTop, inWorldCoords); } // 0x5A504562485944DD 0xEE443481 b323
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xCE2E80, entity); } // 0x1DD55701034110E5 0x57F56A4D b323
	static void GET_ENTITY_MATRIX(Entity entity, Vector3* forwardVector, Vector3* rightVector, Vector3* upVector, Vector3* position) { invoke<Void>(0xCE2F10, entity, forwardVector, rightVector, upVector, position); } // 0xECB2FC7235A7D137 0xEB9EB001 b323
	static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0xCE3060, entity); } // 0x9F47B058362C84B5 0xDAFCB3EC b323
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0xCE3080, entity, posX, posY, posZ); } // 0x2274BC1C4885E333 0x6477EC9E b323
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xCE31A0, entity, offsetX, offsetY, offsetZ); } // 0x1899F328B0E12848 0xABCF043A b323
	static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xCE3260, entity); } // 0xD45DC2893621E1FE 0xFCE6ECE5 b323
	static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xCE3290, entity, x, y, z, w); } // 0x7B3703D2D32DFA18 0x5154EC90 b323
	static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0xCE33D0, entity); } // 0x831E0242595560DF 0x36610842 b323
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0xCE3400, entity, rotationOrder); } // 0xAFBD61CC738D9EB9 0x8FF45B04 b323
	static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0xCE3570, entity); } // 0x213B91045D09B983 0x9BF8A73F b323
	static const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<const char*>(0xCE3650, entity, script); } // 0xA6E9C38DB51D7748 0xB7F70784 b323
	static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xCE36B0, entity); } // 0xD5037BA82E12416F 0x9E1E4798 b323
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0xCE3760, entity, relative); } // 0x9A8D700A51CB7B0D 0x3ED2B997 b323
	static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0xCE38A0, entity); } // 0x95EED5A694951F9F 0xF4268190 b323
	static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0xCE38F0, entity); } // 0x4805D2B1D8CF94A9 0xC14C9B6B b323
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xCE39C0, entity); } // 0xD7E3B9735C0F89D6 0xBC5A9C58 b323
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0xCE39D0, entity); } // 0x04A2A40C73395041 0xC46F74AC b323
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xCE39E0, entity); } // 0x4B53F92932ADFAC0 0xC69CF43D b323
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0xCE39F0, entity, boneIndex); } // 0x44A8FCB8ED227738 0x7C6339DF b323
	static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xCE3A60, entity); } // 0x7196842CB375CDB3 0xCE17FDEC b323
	static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xCE3AA0, entity, team); } // 0x4DC9A62F844D9337 0xB1808F56 b323
	static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xCE3AE0, entity); } // 0x8ACD366038D14505 0x0B1BD08D b323
	static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xCE3B50, entity); } // 0xF6F5161F4534EDFF 0xFC30DDFF b323
	static BOOL IS_AN_ENTITY(ScrHandle handle) { return invoke<BOOL>(0xCE3BC0, handle); } // 0x731EC8A916BD11A1 0xD4B9715A b323
	static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0xCE3C00, entity); } // 0x524AC5ECEA15343E 0x55D33EAB b323
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0xCE3C60, entity); } // 0x0A7B270912999B3C 0x2632E124 b323
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0xCE3CC0, entity); } // 0x6AC7003FA6E5575E 0xBE800B01 b323
	static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xCE3D20, entity); } // 0x8D68C8FD0FACA94E 0x3F52E561 b323
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0xCE3D80, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); } // 0x20B60995556D004F 0xD749B606 b323
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xCE3DD0, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0x751B70C3D034E187 0xDABDCB52 b323
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xCE3E20, entity); } // 0xB346476EF1A64897 0xEC1479D5 b323
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xCE3EB0, entity); } // 0xCF511840CEEDE0CC 0x0B5DE340 b323
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xCE3F40, entity); } // 0xB1632E9A5F988D11 0x9D7A609C b323
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xCE3FD0, entity); } // 0x26AA915AD89BFB4B 0xDE5C995E b323
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0xCE4060, from, to); } // 0xEFBE71898A993728 0xB0ABFEA8 b323
	static BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return invoke<BOOL>(0xCE4090, entity, p1); } // 0x5F9532F3B5CC2551 0xB6F7CBAC b323
	static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xCE4130, entity); } // 0x886E37EC497200B6 0xA4157987 b323
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ, Any p10) { return invoke<BOOL>(0xCE4160, entity, x1, y1, z1, x2, y2, z2, width, debug, includeZ, p10); } // 0x51210CED3DA1C78A 0x883622FA b323
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xCE41B0, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x54736AA40E271165 0x8C2DFA9D b323
	static BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return invoke<BOOL>(0xCE4200, entity, zone); } // 0xB6463CF6AF527071 0x45C82B21 b323
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xCE42F0, entity); } // 0xCFB0A0D8EDD145A3 0x4C3C2508 b323
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xCE4320, entity); } // 0xE81AFC1BC4CC41CE 0x0170F68C b323
	static void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity entity, BOOL toggle) { invoke<Void>(0xCE4390, entity, toggle); } // 0x694E00132F2823ED 0x40C84A74 b323
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xCE43F0, entity); } // 0xE659E47AF827484B 0xC1FEC5ED b323
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0xCE4490, entity, animDict, animName, taskFlag); } // 0x1F0B79228E461EC9 0x0D130D34 b323
	static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0xCE44C0, entity); } // 0x1218E6886D3D8327 0x928E12E9 b323
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0xCE4520, entity, targetEntity); } // 0x17FFC1B2BA35A494 0x6B931477 b323
	static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xCE4550, entity, modelHash); } // 0x0F42323798A58C8C 0x307E7611 b323
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xCE4580, entity, angle); } // 0x5333F526F6AB19AA 0x3BCDF4E1 b323
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xCE4610, entity); } // 0x1DBD58820FA61D71 0x5ACAA48F b323
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xCE4680, entity); } // 0x47D6F43D77935C75 0x120B4ED5 b323
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xCE46E0, entity); } // 0xD796CB5BA8F20E32 0x5D240E9D b323
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xCE4760, entity); } // 0xE31C2C72B8692B64 0x46BC5B40 b323
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xCE4790, entityModelHash, x, y, z, p4); } // 0xEE5D2A122E09EC42 0xEA127CBC b323
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xCE47D0, entity); } // 0xD05BFF0C0A12C68F 0x00AB7A4A b323
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0xCE4830, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); } // 0x18FF00FC7EFF559E 0x28924E98 b323
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0xCE48D0, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A b323
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15) { invoke<Void>(0xCE4950, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15); } // 0x6B9BBD38AB0796DF 0xEC024237 b323
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xCE49D0, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); } // 0xC3675780C92F90F9 0x0547417F b323
	static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0xCE4A70, entity); } // 0xF4080490ADC51C6F 0x6909BA59 b323
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0xCE4A80, entity, boneName); } // 0xFB71170B7E76ACBA 0xE4ECAC22 b323
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0xCE4B50, entity); } // 0xA72CD9CA74A5ECBA 0x2B83F43B b323
	static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xCE4BB0, entity); } // 0xAE3CBE5BF394C9C9 0xFAA3D236 b323
	static void DETACH_ENTITY(Entity entity, BOOL dynamic, BOOL collision) { invoke<Void>(0xCE4BC0, entity, dynamic, collision); } // 0x961AC54BF0613F5D 0xC8EFCB41 b323
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xCE4BE0, entity, toggle); } // 0x428CA6DBD1094446 0x65C16D57 b323
	static void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { invoke<Void>(0xCE4C00, entity, toggle); } // 0x3910051CCECDB00C 0xD3850671 b323
	static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0xCE4CE0, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); } // 0x7FB218262B810701 0x878753D5 b323
	static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xCE4D50, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0xC77720A12FE14A86 0x012760AA b323
	static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2, const char* p6, const char* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xCE4DA0, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9, p10, p11); } // 0xB9C54555ED30FBC4 0xEB4CBA74 b323
	static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2) { return invoke<BOOL>(0xCE4E90, x1, y1, z1, x2, y2, z2); } // 0x11E79CAB7183B6F5 0x7253D5B2 b323
	static BOOL STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<BOOL>(0xCE4F30, entity, animation, animGroup, p3); } // 0x28004F88151E03E0 0xC4769830 b323
	static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xCE4F50, entity, p1, p2); } // 0x43D3807C077261E3 0xE27D2FC1 b323
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0xCE4F90, entity, actionHash); } // 0xEAF4CD9EA3E7E922 0x66571CA0 b323
	static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xCE4FC0, animDictionary, animName, p2, p3, p4); } // 0x07F1BE2BCCAA27A7 0xC41DDA62 b323
	static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { invoke<Void>(0xCE5000, entity, animDictionary, animName, time); } // 0x4487C259F0F70977 0x99D90735 b323
	static void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { invoke<Void>(0xCE5020, entity, animDictionary, animName, speedMultiplier); } // 0x28D1A16553C51776 0x3990C90A b323
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xCE5040, entity, p1, p2); } // 0xAD738C3085FE7E11 0x5D1F9E0F b323
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0xCE5060, entity); } // 0xB736A491E64A32CF 0xADF2267C b323
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0xCE5070, ped); } // 0x2595DD4236549CE3 0x9A388380 b323
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0xCE5080, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE b323
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xCE5090, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F b323
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xCE50A0, entity, toggle); } // 0x1760FFA8AB074D66 0x60B6E744 b323
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0xCE5120, entity, bCanBeDamaged, relGroup); } // 0xE22D8FDE858B8119 0x34165B5D b323
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xCE51B0, entity, toggle); } // 0xD3997889736FD899 0x3B13797C b323
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xCE52C0, entity, toggle, keepPhysics); } // 0x1A9205C1B9EE827F 0x139FD37D b323
	static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0xCE52F0, entity); } // 0xCCF1E97BEFDAE480 0xE8C0C629 b323
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xCE5350, entity, toggle, keepPhysics); } // 0x9EBC85ED0FFFE51C 0xBD0D4831 b323
	static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xCE5380, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x06843DA7060A026B 0xDF70B41B b323
	static void SET_ENTITY_COORDS_WITHOUT_PLANTS_RESET(Entity entity, float xPos, float yPos, float zPos, BOOL alive, BOOL deadFlag, BOOL ragdollFlag, BOOL clearArea) { invoke<Void>(0xCE53D0, entity, xPos, yPos, zPos, alive, deadFlag, ragdollFlag, clearArea); } // 0x621873ECE1178967 0x749B282E b323
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0xCE5420, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); } // 0x239A3351AC1DA385 0x4C83DE8D b323
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0xCE5450, entity, toggle); } // 0x1718DE8E3F2823CA 0x236F525B b323
	static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0xCE54D0, entity, heading); } // 0x8E2530AA8ADA980E 0xE0FF064D b323
	static void SET_ENTITY_HEALTH(Entity entity, int health, int p2) { invoke<Void>(0xCE54E0, entity, health, p2); } // 0x6B76DC1F3AE6E6A3 0xFBCD1831 b323
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0xCE54F0, entity, toggle); } // 0x3882114BDE571AD4 0xC1213A21 b323
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0xCE5560, entity, p1, p2); } // 0xEA02E132F5C68722 0x9729EE32 b323
	static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0xCE5580, entity, toggle); } // 0x7CFBA6A80BDF3874 0xE8FC85AF b323
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { invoke<Void>(0xCE5600, entity, toggle, p2); } // 0x0DC7CABAB1E9B67E 0xC52F295B b323
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xCE5650, entity); } // 0xE9676F61BC0B3321 0x851687F9 b323
	static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xCE56C0, entity, speed); } // 0x0E46A3FCBDE2A1B1 0x46AFFED3 b323
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0xCE5720, entity, toggle); } // 0x79F020FF9EDC0748 0x4B707F50 b323
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xCE5780, entity, p1, p2); } // 0x7022BD828FA0B082 0x202237E2 b323
	static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL p7, BOOL waterProof) { invoke<Void>(0xCE5820, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, waterProof); } // 0xFAEE099C6F890BB8 0x7E9EAB66 b323
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xCE5930, entity, x, y, z, w); } // 0x77B21BE7AC540F07 0x83B6046F b323
	static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0xCE5B00, entity, toggle); } // 0x0A50A1EEDAD01E65 0x6B189A1A b323
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0xCE5B50, entity, pitch, roll, yaw, rotationOrder, p5); } // 0x8524A8B0171D5E07 0x0A345EFE b323
	static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL p2) { invoke<Void>(0xCE5B70, entity, toggle, p2); } // 0xEA1C610A04DB6BBB 0xD043E8E1 b323
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xCE5C00, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988 b323
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xCE5C90, entity, toggle); } // 0x4A4722448F18EEF5 0xE2F262BF b323
	static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xCE5CF0, entity, value); } // 0x5927F96A78577363 0xD7ACC7AD b323
	static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xCE5D40, entity); } // 0x4159C2762B5791D6 0x4DA3D51F b323
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0xCE5DA0, entity, alphaLevel, skin); } // 0x44A0870B7E92D7C0 0xAE667CB0 b323
	static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0xCE5DC0, entity); } // 0x5A47B3B5E63E94C6 0x1560B017 b323
	static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0xCE5E20, entity); } // 0x9B1E824FFBB7027A 0x8A30761C b323
	static void SET_ENTITY_SORT_BIAS(Entity entity, float p1) { invoke<Void>(0xCE5E30, entity, p1); } // 0x5C3B791D580E0BC2 b323
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0xCE5E90, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A b323
	static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0xCE5EF0, entity, toggle); } // 0x730F5F8D3F0F2050 0xAAC9317B b323
	static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0xCE5F50, entity, state); } // 0x57C5DB656185EAC4 0xC47F5B91 b323
	static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xCE5FB0, x, y, z, radius, originalModel, newModel, p6); } // 0x92C47782FDA8B2A3 0x0BC12F9E b323
	static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xCE6090, x, y, z, radius, originalModel, newModel, p6); } // 0x033C0F9A64E229AE 0xCE0AA8BC b323
	static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xCE6120, x, y, z, radius, modelHash, p5); } // 0x8A97BCA30A0CE478 0x7BD5CF2F b323
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xCE61F0, x, y, z, radius, modelHash, p5); } // 0x3A52AE588830BF7F 0x07AAF22C b323
	static void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xCE62C0, x, y, z, radius, modelHash, p5); } // 0xD9E3006FB3CBD765 0x993DBC10 b323
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0xCE6350, x, y, z, p3, modelHash, p5); } // 0x150E808B375A385A 0x335190A2 b323
	static void REMOVE_FORCED_OBJECT(float x, float y, float z, float p3, Hash modelHash) { invoke<Void>(0xCE6420, x, y, z, p3, modelHash); } // 0x61B6775E83C0DB6F 0xAED73ADD b323
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { invoke<Void>(0xCE64A0, entity1, entity2, thisFrameOnly); } // 0xA53ED5520C07654A 0x1E11BFE9 b323
	static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xCE64C0, entity, toggle); } // 0x295D82A8559F9150 0xE90005B8 b323
	static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xCE6520, entity, toggle); } // 0xE12ABE5E3A389A6C 0x44767B31 b323
	static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xCE6580, entity, toggle); } // 0xA80AE305E0A3044F 0xE224A6A5 b323
	static void SET_ENTITY_NOWEAPONDECALS(Entity entity, BOOL p1) { invoke<Void>(0xCE65E0, entity, p1); } // 0x2C2E3DC128F44309 b323
	static void SET_ENTITY_USE_MAX_DISTANCE_FOR_WATER_REFLECTION(Entity entity, BOOL p1) { invoke<Void>(0xCE6650, entity, p1); } // 0x1A092BB0C3808B96 b323
}

namespace EVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0xCE7E60, ped, name); } // 0xB604A2942ADED0EE 0x19CEAC9E b323
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { invoke<Void>(0xCE7EC0, name, eventType); } // 0x4FC9381A7AEE8968 0x07ABD94D b323
	static void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xCE7F00, name, eventType); } // 0xE42FCDFD0E4196F7 0x57506EA6 b323
	static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xCE7F30, name, eventType); } // 0xD7CD9CF34F2C99E8 0x62A3161D b323
	static int ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return invoke<int>(0xCE7F70, eventType, x, y, z, duration); } // 0xD9F8455409B525E9 0x0B30F779 b323
	static int ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return invoke<int>(0xCE8000, eventType, entity, duration); } // 0x7FD8F3BE76F89422 0xA81B5B71 b323
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0xCE80B0, eventType, x, y, z, radius); } // 0x1374ABB7C15BAB92 0x2F98823E b323
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0xCE80E0, event); } // 0x2CDA538C44C6CCE5 0xF82D5A87 b323
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xCE8110, p0); } // 0xEAABE8FDFA21274C 0x64DF6282 b323
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xCE8130); } // 0x340F1415B68AEADE 0xA0CE89C8 b323
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xCE8140); } // 0x2F9A292AD0A3BD89 0x4CC674B5 b323
	static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int eventType) { invoke<Void>(0xCE8150, eventType); } // 0x3FD2EC8BF1F1CF30 0xA0FDCB82 b323
	static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0xCE8170); } // 0x5F3B7749C112D552 0x80340396 b323
}

namespace FILES
{
	static int GET_NUM_TATTOO_SHOP_DLC_ITEMS(int character) { return invoke<int>(0xCD5560, character); } // 0x278F76C3B0A8F109 0x71D0CF3E b323
	static BOOL GET_TATTOO_SHOP_DLC_ITEM_DATA(int characterType, int decorationIndex, Any* outComponent) { return invoke<BOOL>(0xCD5590, characterType, decorationIndex, outComponent); } // 0xFF56381874F82086 0x2E9D628C b323
	static void INIT_SHOP_PED_COMPONENT(Any* outComponent) { invoke<Void>(0xCD5640, outComponent); } // 0x1E8C308FD312C036 0xB818C7FC b323
	static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0xCD5680, outProp); } // 0xEB0A2B758F7B850F 0xF5659E50 b323
	static int SETUP_SHOP_PED_APPAREL_QUERY(int p0, int p1, int p2, int p3) { return invoke<int>(0xCD56C0, p0, p1, p2, p3); } // 0x50F457823CE6EB5F 0xC937FF3D b323
	static int SETUP_SHOP_PED_APPAREL_QUERY_TU(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xCD5740, character, p1, p2, p3, p4, componentId); } // 0x9BDF59818B1E38C1 0x594E862C b323
	static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0xCD57B0, componentId, outComponent); } // 0x249E310B2D920699 0xC0718904 b323
	static void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { invoke<Void>(0xCD57C0, componentHash, outComponent); } // 0x74C0E2A57EC66760 0xB39677C5 b323
	static void GET_SHOP_PED_QUERY_PROP(int componentId, Any* outProp) { invoke<Void>(0xCD57D0, componentId, outProp); } // 0xDE44A00999B2837D 0x1D3C1466 b323
	static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0xCD57E0, entity, componentId, drawableVariant, textureVariant); } // 0x0368B3A838070348 0xC8A4BF12 b323
	static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0xCD5820, entity, componentId, propIndex, propTextureIndex); } // 0x5D6160275CAEC8DD 0x7D876DC0 b323
	static int GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xCD5860, componentHash); } // 0xC17AD0E5752BECDA 0x159751B4 b323
	static void GET_VARIANT_COMPONENT(Hash componentHash, int variantComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xCD5890, componentHash, variantComponentIndex, nameHash, enumValue, componentType); } // 0x6E11F282F11863B6 0xE4FF7103 b323
	static int GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xCD58C0, componentHash); } // 0xC6B9DB42C04DD8C3 0xCE70F183 b323
	static void GET_FORCED_COMPONENT(Hash componentHash, int forcedComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xCD58F0, componentHash, forcedComponentIndex, nameHash, enumValue, componentType); } // 0x6C93ED8C2F74859B 0x382C70BE b323
	static BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return invoke<BOOL>(0xCD5920, componentHash, restrictionTagHash, componentId); } // 0x341DE7ED1D2A1BFD 0x8E2C7FD5 b323
	static int SETUP_SHOP_PED_OUTFIT_QUERY(int character, BOOL p1) { return invoke<int>(0xCD5950, character, p1); } // 0xF3FBE2D50A6A8C28 0x1ECD23E7 b323
	static void GET_SHOP_PED_QUERY_OUTFIT(int outfitIndex, Any* outfit) { invoke<Void>(0xCD5990, outfitIndex, outfit); } // 0x6D793F03A631FE56 0x2F8013A1 b323
	static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xCD59A0, p0, p1); } // 0xB7952076E444979D 0xCAFE9209 b323
	static int GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return invoke<int>(0xCD59B0, p0); } // 0x073CA26B079F956E 0x2798F56F b323
	static BOOL GET_SHOP_PED_OUTFIT_PROP_VARIANT(Hash outfitHash, int variantIndex, Any* outPropVariant) { return invoke<BOOL>(0xCD59F0, outfitHash, variantIndex, outPropVariant); } // 0xA9F9C2E0FDE11CBB 0x6641A864 b323
	static BOOL GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Hash outfitHash, int variantIndex, Any* outComponentVariant) { return invoke<BOOL>(0xCD5A70, outfitHash, variantIndex, outComponentVariant); } // 0x19F2A026EDF0013F 0x818534AC b323
	static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xCD5AF0); } // 0xA7A866D21CD2329B 0x8EAF9CF6 b323
	static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xCD5B10, dlcVehicleIndex); } // 0xECC01B7C5763333C 0xA2201E09 b323
	static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, Any* outData) { return invoke<BOOL>(0xCD5B40, dlcVehicleIndex, outData); } // 0x33468EDC08E371F6 0xCF428FA4 b323
	static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0xCD5B90, dlcVehicleIndex); } // 0x5549EE11FA22FCF2 0xAB12738C b323
	static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xCD5BD0); } // 0xEE47635F352DA367 0x2B757E6C b323
	static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xCD5BF0, dlcWeaponIndex, outData); } // 0x79923CD21BECE14E 0xD88EC8EA b323
	static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0xCD5C20, dlcWeaponIndex); } // 0x405425358A7D61FE 0x476B23A9 b323
	static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xCD5C50, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x6CF598A2957C2BF8 0x4B83FCAF b323
	static BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return invoke<BOOL>(0xCD5C80, itemHash); } // 0xD4D7B033C3AA243C 0x06396058 b323
	static BOOL IS_DLC_VEHICLE_MOD(Hash hash) { return invoke<BOOL>(0xCD5CB0, hash); } // 0x0564B9FF9631B82C 0x35BCA844 b323
	static Hash GET_DLC_VEHICLE_MOD_LOCK_HASH(Hash hash) { return invoke<Hash>(0xCD5D10, hash); } // 0xC098810437312FFF 0x59352658 b323
}

namespace FIRE
{
	static FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<FireId>(0xCE8DF0, X, Y, Z, maxChildren, isGasFire); } // 0x6B83617E04503888 0xE7529357 b323
	static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { invoke<Void>(0xCE8EC0, fireHandle); } // 0x7FF548385680673F 0x6B21FE26 b323
	static FireId START_ENTITY_FIRE(Entity entity) { return invoke<FireId>(0xCE8F00, entity); } // 0xF6A9D9708F6F23DF 0x8928428E b323
	static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0xCE8F80, entity); } // 0x7F0DD2EBBB651AFF 0xCE8C9066 b323
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0xCE8FF0, entity); } // 0x28D3FED7190D3A0B 0x8C73E64F b323
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xCE9060, x, y, z, radius); } // 0x50CAD495A460B305 0x654D93B7 b323
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xCE90A0, x, y, z, radius); } // 0x056A8A219B8E829F 0x725C7205 b323
	static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xCE90D0, outPosition, x, y, z); } // 0x352A9F6BCF90081F 0xC4977B47 b323
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { invoke<Void>(0xCE91A0, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); } // 0xE3AD2BDBAEE269AC 0x10AF5258 b323
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xCE91D0, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x172AA1B624FA1013 0x27EE0D67 b323
	static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xCE9210, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x36DD3FE58B5E5212 0xCF358946 b323
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xCE9240, explosionType, x1, y1, z1, x2, y2, z2); } // 0x2E2EBA0EE7CED0E0 0xFB40075B b323
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xCE9310, explosionType, x, y, z, radius); } // 0xAB0F816885B0E483 0xD455A7F3 b323
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<BOOL>(0xCE9390, explosionType, x1, y1, z1, x2, y2, z2, width); } // 0xA079A6C51525DC4B 0x0128FED9 b323
	static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xCE9420, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x14BA4BA137AF6CEC 0xAEC0D176 b323
}

namespace GRAPHICS
{
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0xCF4D90, enabled); } // 0x175B6BFC15CDD0C5 0x1418CA37 b323
	static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xCF4DA0, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x7FDFADE676AA3CB0 0xABF783AB b323
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0xCF4DB0, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0xD8B9A8AC5608FF94 0xE8BFF632 b323
	static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4DC0, x, y, z, radius, red, green, blue, alpha); } // 0xAAD68E1AB39DA632 0x304D0EEF b323
	static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xCF4DD0, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x083A2CA4F2E573BD 0x8524A848 b323
	static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4DE0, x, y, z, size, red, green, blue, alpha); } // 0x73B1189623049839 0xB6DF3709 b323
	static void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4DF0, text, x, y, z, red, green, blue, alpha); } // 0x3903E216620488E8 0x269B006F b323
	static void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4E00, text, x, y, z, red, green, blue, alpha); } // 0xA3BB2E9555C05A8F 0x528B973B b323
	static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4E10, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0x6B7256074AE34680 0xB3426BCC b323
	static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4EE0, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); } // 0xAC26716048436851 0xABD19253 b323
	static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xCF4FC0, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0xD3A9971CADAC7252 0xCD4D9DD5 b323
	static void SET_BACKFACECULLING(BOOL toggle) { invoke<Void>(0xCF5090, toggle); } // 0x23BA6B0C2AD7B0D3 0xC44C2F44 b323
	static BOOL BEGIN_TAKE_MISSION_CREATOR_PHOTO() { return invoke<BOOL>(0xCF50B0); } // 0x1DD2139A9A20DCE8 0xBA9AD458 b323
	static int GET_STATUS_OF_TAKE_MISSION_CREATOR_PHOTO() { return invoke<int>(0xCF50D0); } // 0x90A78ECAA4E78453 0xADBBA287 b323
	static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { invoke<Void>(0xCF50F0); } // 0x0A46AF8A78DC5E0A 0x9E553002 b323
	static BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xCF5100, p0, p1, p2, p3); } // 0x4862437A486F91B0 0x56C1E488 b323
	static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return invoke<int>(0xCF5160, p0); } // 0x1670F8D05056F257 0x226B08EA b323
	static BOOL BEGIN_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<BOOL>(0xCF5190); } // 0x7FA5D82B8F58EC06 0x1F3CADB0 b323
	static int GET_STATUS_OF_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<int>(0xCF51C0); } // 0x5B0316762AFD4A64 0xA9DC8558 b323
	static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_PREVIEW() { invoke<Void>(0xCF51F0); } // 0x346EF3ECAAAB149E 0x88EAF398 b323
	static BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke<BOOL>(0xCF5200); } // 0xA67C35C56EB1BD9D 0x47B0C137 b323
	static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xCF5220); } // 0x0D6CA79EEEBD8CA3 0x65376C9B b323
	static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { invoke<Void>(0xCF5240); } // 0xD801CC02177FA3F1 0x9CBA682A b323
	static BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return invoke<BOOL>(0xCF5250, unused); } // 0x3DEC726C25A11BAC 0x3B15D33C b323
	static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xCF5270); } // 0x0C0C4E81E1AC60A0 0xEC5D0317 b323
	static BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Any p0) { return invoke<BOOL>(0xCF5290, p0); } // 0x759650634F07B6B4 0x25D569EB b323
	static int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int p0) { return invoke<int>(0xCF52C0, p0); } // 0xCB82A0BF0E3E3265 0xCFCDC518 b323
	static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { invoke<Void>(0xCF52E0); } // 0x6A12D88881435DCA 0x108F36CC b323
	static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { invoke<Void>(0xCF52F0, p0, p1); } // 0x1072F115DAB0717E 0xE9F2B68F b323
	static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xCF5310); } // 0x34D23450F028B0BF 0x727AA63F b323
	static int GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xCF5320); } // 0xDC54A7AF8B3A14EF 0x239272BD b323
	static int GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xCF5330); } // 0x473151EBC762C6DA 0x21DBF0C9 b323
	static BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(Any p0) { return invoke<BOOL>(0xCF5350, p0); } // 0x2A893980E96B659A 0x199FABF0 b323
	static int GET_STATUS_OF_SORTED_LIST_OPERATION(Any p0) { return invoke<int>(0xCF5380, p0); } // 0xF5BED327CEA362B1 0x596B900D b323
	static void CLEAR_STATUS_OF_SORTED_LIST_OPERATION() { invoke<Void>(0xCF53B0); } // 0x4AF92ACD3141D96C 0xC9EF81ED b323
	static BOOL DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(Any p0) { return invoke<BOOL>(0xCF53C0, p0); } // 0xE791DF1F73ED2C8B 0x9D84554C b323
	static BOOL LOAD_HIGH_QUALITY_PHOTO(Any p0) { return invoke<BOOL>(0xCF53D0, p0); } // 0xEC72C258667BE5EA 0x9C106AD9 b323
	static int GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(int p0) { return invoke<int>(0xCF53E0, p0); } // 0x40AFB081F8ADD4EE 0x762E5C5F b323
	static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0xCF53F0, posX, posY, posZ, colorR, colorG, colorB, range, intensity); } // 0xF2A1B2771A01DBD4 0x6A396E9A b323
	static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<Void>(0xCF5410, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); } // 0xD0F64B265C8C8B33 0xBDBC410C b323
	static void DRAW_SHADOWED_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<Void>(0xCF5440, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); } // 0x5BCA583A583194DB 0x32BF9598 b323
	static void FADE_UP_PED_LIGHT(float p0) { invoke<Void>(0xCF5480, p0); } // 0xC9B18B4619F48F7B 0x93628786 b323
	static void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { invoke<Void>(0xCF5490, entity); } // 0xDEADC0DEDEADC0DE 0xC12AC47A b323
	static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0xCF54E0, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x28477EC23D892089 0x48D84A02 b323
	static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float diameter, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0xCF55B0, type, posX1, posY1, posZ1, posX2, posY2, posZ2, diameter, red, green, blue, alpha, reserved); } // 0x0134F0835AB6BFCB 0xF541B690 b323
	static void SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(int checkpoint, float scale) { invoke<Void>(0xCF5690, checkpoint, scale); } // 0x4B5B4DA5D79F1943 0x80151CCF b323
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0xCF56E0, checkpoint, nearHeight, farHeight, radius); } // 0x2707AAE9D9297D89 0xFF0F9B22 b323
	static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xCF5750, checkpoint, red, green, blue, alpha); } // 0x7167371E8AD747F7 0xEF9C8CB3 b323
	static void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xCF57D0, checkpoint, red, green, blue, alpha); } // 0xB9EA40907C680580 0xA5456DBB b323
	static void SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0xCF5850, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); } // 0xF51D36185993515D 0x20EABD0F b323
	static void SET_CHECKPOINT_DECAL_ROT_ALIGNED_TO_CAMERA_ROT(int checkpoint) { invoke<Void>(0xCF58D0, checkpoint); } // 0x615D3925E87A3B26 0x1E3A3126 b323
	static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0xCF5910, checkpoint); } // 0xF5ED37F54CD4D52E 0xB66CF3CA b323
	static void DONT_RENDER_IN_GAME_UI(BOOL p0) { invoke<Void>(0xCF5950, p0); } // 0x22A249A53034450A 0x932FDB81 b323
	static void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { invoke<Void>(0xCF5970, toggle); } // 0xDC459CFA0CCE245B 0x7E946E87 b323
	static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { invoke<Void>(0xCF5990, textureDict, p1); } // 0xDFA2EF8E04127DD5 0x4C9B035F b323
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0xCF5A20, textureDict); } // 0x0145F696AAAAD2E4 0x3F436EEF b323
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { invoke<Void>(0xCF5A80, textureDict); } // 0xBE2CACCF5A8AA805 0xF07DDA38 b323
	static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a, BOOL p8) { invoke<Void>(0xCF5AE0, x, y, width, height, r, g, b, a, p8); } // 0x3A618A217E5154F0 0xDD2BFC77 b323
	static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { invoke<Void>(0xCF5B10, toggle); } // 0xC6372ECD45D73BCD 0xF8FBCC25 b323
	static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { invoke<Void>(0xCF5B30, drawOrder); } // 0x61BB1D9B3A95D802 0xADF81D24 b323
	static void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { invoke<Void>(0xCF5BC0, horizontalAlign, verticalAlign); } // 0xB8A850F20A067EB6 0x228A2598 b323
	static void RESET_SCRIPT_GFX_ALIGN() { invoke<Void>(0xCF5BE0); } // 0xE3A3DB414A373DAB 0x3FE33BD6 b323
	static void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { invoke<Void>(0xCF5C00, x, y, w, h); } // 0xF5A2C681787E579D 0x76C641E4 b323
	static void GET_SCRIPT_GFX_ALIGN_POSITION(float x, float y, float* calculatedX, float* calculatedY) { invoke<Void>(0xCF5C40, x, y, calculatedX, calculatedY); } // 0x6DD8F5AA635EB4B2 b323
	static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xCF5CC0); } // 0xBAF107B6BB2C97F0 0x3F0D1A6F b323
	static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11, Any p12) { invoke<Void>(0xCF5CE0, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11, p12); } // 0xE7FFAE5EBF23D890 0x1FEC16B0 b323
	static int ADD_ENTITY_ICON(Entity entity, const char* icon) { return invoke<int>(0xCF5E20, entity, icon); } // 0x9CD43EEE12BF4DD0 0xF3027D21 b323
	static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xCF5EB0, entity, toggle); } // 0xE0E8BEECCA96BA31 0xD1D2FD52 b323
	static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { invoke<Void>(0xCF5F10, entity, red, green, blue, alpha); } // 0x1D5F595CCAE2E238 0x6EE1E946 b323
	static void SET_DRAW_ORIGIN(float x, float y, float z, BOOL p3) { invoke<Void>(0xCF5FB0, x, y, z, p3); } // 0xAA0008F3BBB8F416 0xE10198D5 b323
	static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xCF6070); } // 0xFF0B610F6BE0D7AF 0xDD76B263 b323
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0xCF6080, entity); } // 0x845BAD77CC770633 0x784944DB b323
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0xCF60F0, toggle); } // 0x113D2C5DC57E1774 0x2E0DFA35 b323
	static int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return invoke<int>(0xCF6110, movieMeshSetName); } // 0xB66064452270E8F1 0x9627905C b323
	static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xCF6180, movieMeshSet); } // 0xEB119AA014E89183 0x4FA5501D b323
	static int QUERY_MOVIE_MESH_SET_STATE(Any p0) { return invoke<int>(0xCF61C0, p0); } // 0x9B6E70C5CEEF4EEB 0x9D5D9B38 b323
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xCF6200, x, y); } // 0x888D57E407E63624 0x29F3572F b323
	static float GET_SCREEN_ASPECT_RATIO() { return invoke<float>(0xCF6220); } // 0xB2EBE8CBC58B90E9 b323
	static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0xCF6250); } // 0x30CF4BDA4FCB1905 0xEC717AEF b323
	static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xCF6270); } // 0x84ED31191CC5D2C9 0x1C340359 b323
	static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0xCF6290, toggle); } // 0x18F621F7A5B1F85D 0xD1E5565F b323
	static BOOL GET_USINGNIGHTVISION() { return invoke<BOOL>(0xCF62B0); } // 0x2202A3F42C8E5F79 0x62619061 b323
	static void SET_EXPOSURETWEAK(BOOL toggle) { invoke<Void>(0xCF6300, toggle); } // 0xEF398BEEE4EF45F9 b323
	static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0xCF6320, toggle); } // 0xE787BF1C5CF823C9 0xD576F5DD b323
	static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xCF6340, value); } // 0xCB6A7C3BB17A0C67 0x046B62D9 b323
	static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xCF6360, worldX, worldY, worldZ, screenX, screenY); } // 0x34E82F05DF2974F5 0x1F950E4B b323
	static Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<Vector3>(0xCF63D0, textureDict, textureName); } // 0x35736EE65BD00C11 0x096DAA4D b323
	static void SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(float p0) { invoke<Void>(0xCF6440, p0); } // 0xE2892E7E55D7073A 0x455F1084 b323
	static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0xCF6460, p0, p1, fadeIn, duration, fadeOut); } // 0x0AB84296FED9CFC6 0x7E55A1EE b323
	static void DISABLE_OCCLUSION_THIS_FRAME() { invoke<Void>(0xCF6490); } // 0x3669F1B198DCAA4F 0x0DCC0B8B b323
	static void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { invoke<Void>(0xCF64A0, state); } // 0x1268615ACE24D504 0xAA2A0EAF b323
	static int CREATE_TRACKED_POINT() { return invoke<int>(0xCF64C0); } // 0xE2C9439ED45DEA60 0x3129C31A b323
	static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0xCF64E0, point, x, y, z, radius); } // 0x164ECBB3CF750CB0 0x28689AA4 b323
	static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0xCF6590, point); } // 0xC45CCDAAC9221CA8 0x0BFC4F64 b323
	static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0xCF65C0, point); } // 0xB25DC90BAD56CA42 0x14AC675F b323
	static int SET_GRASS_CULL_SPHERE(float p0, float p1, float p2, float p3) { return invoke<int>(0xCF65D0, p0, p1, p2, p3); } // 0xBE197EAA669238F4 b323
	static void REMOVE_GRASS_CULL_SPHERE(int handle) { invoke<Void>(0xCF65E0, handle); } // 0x61F95E5BB3E0A8C6 b323
	static void PROCGRASS_ENABLE_CULLSPHERE(int handle, float x, float y, float z, float scale) { invoke<Void>(0xCF65F0, handle, x, y, z, scale); } // 0xAE51BC858F32BA66 b323
	static void PROCGRASS_DISABLE_CULLSPHERE(int handle) { invoke<Void>(0xCF6650, handle); } // 0x649C97D52332341A b323
	static void PROCGRASS_ENABLE_AMBSCALESCAN() { invoke<Void>(0xCF6670); } // 0x14FC5833464340A8 b323
	static void PROCGRASS_DISABLE_AMBSCALESCAN() { invoke<Void>(0xCF6680); } // 0x0218BA067D249DEA b323
	static void DISABLE_PROCOBJ_CREATION() { invoke<Void>(0xCF6690); } // 0x1612C45F9E3E0D44 b323
	static void ENABLE_PROCOBJ_CREATION() { invoke<Void>(0xCF66A0); } // 0x5DEBD9C4DC995692 b323
	static void GRASSBATCH_ENABLE_FLATTENING_IN_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6) { invoke<Void>(0xCF66B0, x, y, z, radius, p4, p5, p6); } // 0x6D955F6A9E0295B1 b323
	static void GRASSBATCH_DISABLE_FLATTENING() { invoke<Void>(0xCF6740); } // 0x302C91AB2D477F7E b323
	static void CASCADE_SHADOWS_INIT_SESSION() { invoke<Void>(0xCF6750); } // 0x03FC694AE06C5A20 0x48F16186 b323
	static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(float p0) { invoke<Void>(0xCF6770, p0); } // 0x5F0F3F56635809EF 0x13D4ABC0 b323
	static void CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(float p0) { invoke<Void>(0xCF6780, p0); } // 0x5E9DAF5A20F15908 0xD2157428 b323
	static void CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(float p0) { invoke<Void>(0xCF6790, p0); } // 0x36F6626459D91457 0xC07C64C9 b323
	static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { invoke<Void>(0xCF67A0, toggle); } // 0x80ECBC0C856D3B0B 0xFE903D0F b323
	static void CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(BOOL p0) { invoke<Void>(0xCF67C0, p0); } // 0x25FC3E33A31AD0C9 b323
	static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { invoke<Void>(0xCF67E0, type); } // 0xB11D94BC55F41932 0xDE10BA1F b323
	static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { invoke<Void>(0xCF67F0); } // 0x27CB772218215325 b323
	static void CASCADE_SHADOWS_SET_AIRCRAFT_MODE(BOOL p0) { invoke<Void>(0xCF6800, p0); } // 0x6DDBF9DFFC4AC080 0x9F470BE3 b323
	static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(BOOL p0) { invoke<Void>(0xCF6820, p0); } // 0xD39D13C9FEBF0511 0x4A124267 b323
	static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(float p0) { invoke<Void>(0xCF6840, p0); } // 0x02AC28F3A01FA04A 0xB19B2764 b323
	static void CASCADE_SHADOWS_ENABLE_FREEZER(BOOL p0) { invoke<Void>(0xCF6850, p0); } // 0x0AE73D8DF3A762B2 0x342FA2B4 b323
	static void GOLF_TRAIL_SET_ENABLED(BOOL toggle) { invoke<Void>(0xCF6870, toggle); } // 0xA51C4B86B71652AE 0x5D3BFFC9 b323
	static void GOLF_TRAIL_SET_PATH(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xCF6890, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x312342E1A4874F3F 0xD9653728 b323
	static void GOLF_TRAIL_SET_RADIUS(float p0, float p1, float p2) { invoke<Void>(0xCF68E0, p0, p1, p2); } // 0x2485D34E50A22E84 0x72BA8A14 b323
	static void GOLF_TRAIL_SET_COLOUR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xCF6900, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x12995F2E53FFA601 0x804F444C b323
	static void GOLF_TRAIL_SET_TESSELLATION(int p0, int p1) { invoke<Void>(0xCF6970, p0, p1); } // 0xDBAA5EC848BA2D46 0xBB1A1294 b323
	static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT_ENABLE(BOOL p0) { invoke<Void>(0xCF6980, p0); } // 0xC0416B061F2B7E5E 0x1A1A72EF b323
	static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<Void>(0xCF69A0, type, xPos, yPos, zPos, p4, red, green, blue, alpha); } // 0xB1BB03742917A5D6 0x3BB12B75 b323
	static void GOLF_TRAIL_SET_SHADER_PARAMS(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xCF6A60, p0, p1, p2, p3, p4); } // 0x9CFDD90B2B844BF7 0x4EA70FB4 b323
	static void GOLF_TRAIL_SET_FACING(BOOL p0) { invoke<Void>(0xCF6A90, p0); } // 0x06F761EA47C1D3ED 0x0D830DC7 b323
	static float GOLF_TRAIL_GET_MAX_HEIGHT() { return invoke<float>(0xCF6AB0); } // 0xA4819F5E23E2FFAD 0xA08B46AD b323
	static Vector3 GOLF_TRAIL_GET_VISUAL_CONTROL_POINT(int p0) { return invoke<Vector3>(0xCF6AD0, p0); } // 0xA4664972A9B8F8BA 0xECD470F0 b323
	static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0xCF6B00, toggle); } // 0x7E08924259E08CE0 0x74D4995C b323
	static BOOL GET_USINGSEETHROUGH() { return invoke<BOOL>(0xCF6B40); } // 0x44B80ABAB9D80BD3 0x1FE547F2 b323
	static void SEETHROUGH_RESET() { invoke<Void>(0xCF6B50); } // 0x70A64C0234EF522C 0x310E9B67 b323
	static void SEETHROUGH_SET_HEATSCALE(int index, float heatScale) { invoke<Void>(0xCF6B60, index, heatScale); } // 0xD7D0B00177485411 0x654F0287 b323
	static void SET_MOTIONBLUR_MAX_VEL_SCALER(float p0) { invoke<Void>(0xCF6B90, p0); } // 0xB3C641F3630BF6DA 0xF6B837F0 b323
	static float GET_MOTIONBLUR_MAX_VEL_SCALER() { return invoke<float>(0xCF6BB0); } // 0xE59343E9E96529E7 0xD906A3A9 b323
	static void TOGGLE_PLAYER_DAMAGE_OVERLAY(BOOL toggle) { invoke<Void>(0xCF6BD0, toggle); } // 0xE63D7C6EECECB66B 0xD34A6CBA b323
	static void RESET_ADAPTATION(int p0) { invoke<Void>(0xCF6C00, p0); } // 0xE3E2C1B4C59DBC77 0xD8CC7221 b323
	static BOOL TRIGGER_SCREENBLUR_FADE_IN(float transitionTime) { return invoke<BOOL>(0xCF6C10, transitionTime); } // 0xA328A24AAA6B7FDC 0x5604B890 b323
	static BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return invoke<BOOL>(0xCF6C60, transitionTime); } // 0xEFACC8AEF94430D5 0x46617502 b323
	static void DISABLE_SCREENBLUR_FADE() { invoke<Void>(0xCF6CC0); } // 0xDE81239437E8C5A8 0xDB7AECDA b323
	static float GET_SCREENBLUR_FADE_CURRENT_TIME() { return invoke<float>(0xCF6CD0); } // 0x5CCABFFCA31DDE33 0xEA432A94 b323
	static BOOL IS_SCREENBLUR_FADE_RUNNING() { return invoke<BOOL>(0xCF6CF0); } // 0x7B226C785A52A0A9 0x926B8734 b323
	static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0xCF6D30, toggle); } // 0xDFC252D8A3E15AB7 0x30ADE541 b323
	static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0xCF6D50); } // 0xEB3DAC2C86001E5E 0xD4F5D07D b323
	static void RESET_PAUSED_RENDERPHASES() { invoke<Void>(0xCF6D70); } // 0xE1C8709406F2C41C 0x0113EAE4 b323
	static void GRAB_PAUSEMENU_OWNERSHIP() { invoke<Void>(0xCF6D80); } // 0x851CD923176EBA7C 0xDCBA251B b323
	static void SET_HIDOF_OVERRIDE(BOOL p0, BOOL p1, float nearplaneOut, float nearplaneIn, float farplaneOut, float farplaneIn) { invoke<Void>(0xCF6DA0, p0, p1, nearplaneOut, nearplaneIn, farplaneOut, farplaneIn); } // 0xBA3D65906822BED5 0x513D444B b323
	static BOOL PHONEPHOTOEDITOR_TOGGLE(BOOL p0) { return invoke<BOOL>(0xCF6DF0, p0); } // 0x7AC24EAB6D74118D 0xB2410EAB b323
	static BOOL PHONEPHOTOEDITOR_IS_ACTIVE() { return invoke<BOOL>(0xCF6E50); } // 0xBCEDB009461DA156 0x5AB94128 b323
	static BOOL PHONEPHOTOEDITOR_SET_FRAME_TXD(const char* textureDict, BOOL p1) { return invoke<BOOL>(0xCF6E70, textureDict, p1); } // 0x27FEB5254759CDE3 0xD63FCB3E b323
	static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xCF6EA0, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x25129531F77B9ED3 0xDD79D679 b323
	static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<BOOL>(0xCF6F20, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xF56B8137DF10135D 0x633F8C48 b323
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xCF6FA0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x0E7E72961BA18619 0x53DAEF4E b323
	static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xCF7020, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0xA41B6A43642AC2CF 0x161780C1 b323
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xCF70A0, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0x0D53A3B8DA0809D2 0x9604DAD4 b323
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0xCF7120, r, g, b); } // 0x26143A59EF48B262 0x7B689E20 b323
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0xCF7140, alpha); } // 0x77168D722C58B2FC 0x497EAFF2 b323
	static void SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(BOOL toggle) { invoke<Void>(0xCF7150, toggle); } // 0x8CDE909A0370BB3A b323
	static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0xCF7170, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xE184F4F0DC5910E7 0xD348E3E6 b323
	static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xCF71D0, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xF28DA9F38CD1787C 0xF8FC196F b323
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xCF7230, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x1AE42C1660FD6517 0x0D06FF62 b323
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xCF72A0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xC6EB449E33977F0B 0x23BF0F9B b323
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xCF7310, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, r, g, b, a); } // 0x6F60E89A7B64EE1D 0x110752B2 b323
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xCF7380, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis, r, g, b, a); } // 0xDDE23F30CC5A0F03 0xF478EFCF b323
	static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0xCF73F0, ptfxHandle, p1); } // 0x8F75998877616996 0xD245455B b323
	static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0xCF7410, ptfxHandle, p1); } // 0xC401503DFE8D53CF 0x6BA48C7E b323
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0xCF7430, entity); } // 0xB8FEAEEBCC127425 0xCEDE52E9 b323
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xCF7480, X, Y, Z, radius); } // 0xDD19FA1C6D657305 0x7EB8F275 b323
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0xCF74B0, ptfxHandle); } // 0x74AFEF0D2E1E409B 0xCBF91D2A b323
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xCF74E0, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xF7DDEBEC43483C43 0x641F7790 b323
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { invoke<Void>(0xCF7530, ptfxHandle, propertyName, amount, noNetwork); } // 0x5F0C4B5B1C393BE2 0x1CBC1373 b323
	static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0xCF7550, ptfxHandle, r, g, b, p4); } // 0x7F8F65877F88783B 0x5219D530 b323
	static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0xCF7580, ptfxHandle, alpha); } // 0x726845132380142E 0x5ED49BE1 b323
	static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0xCF7590, ptfxHandle, scale); } // 0xB44250AAA456492D 0x099B8B49 b323
	static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { invoke<Void>(0xCF75A0, ptfxHandle, range); } // 0xDCB194B85EF7B541 0x233DE879 b323
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xCF75B0, p0); } // 0xEEC4047028426510 0x19EC0001 b323
	static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xCF75D0, vehicle, p1); } // 0xACEE6F360FC1F6B6 0x6B125A02 b323
	static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xCF7650, p0); } // 0x96EF97DAEB89BEF5 0xD938DEE0 b323
	static void CLEAR_PARTICLE_FX_SHOOTOUT_BOAT() { invoke<Void>(0xCF76C0); } // 0x2A251AA48B2B46DB b323
	static void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { invoke<Void>(0xCF76F0, p0); } // 0x908311265D42A820 b323
	static void DISABLE_DOWNWASH_PTFX(BOOL toggle) { invoke<Void>(0xCF7730, toggle); } // 0x5F6DF3D92271E8A1 b323
	static void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xCF7760, toggle); } // 0xD821490579791273 0xC61C75E9 b323
	static void ENABLE_ALIEN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xCF77A0, toggle); } // 0x9DCE1F0F78260875 0xCE8B8748 b323
	static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { invoke<Void>(0xCF77E0, scale); } // 0x27E32866E9A5C416 0xC1AD5DDF b323
	static void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float p0) { invoke<Void>(0xCF7820, p0); } // 0xBB90E12CAC1DAB25 0x3968E915 b323
	static void SET_PARTICLE_FX_BULLET_TRACE_NO_ANGLE_REJECT(BOOL p0) { invoke<Void>(0xCF7860, p0); } // 0xCA4AE345A153D573 0x64BA4648 b323
	static void SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(float p0) { invoke<Void>(0xCF7890, p0); } // 0x54E22EA2C1956A8D 0x8BE3D47F b323
	static void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float p0) { invoke<Void>(0xCF78D0, p0); } // 0x949F397A288B28B3 0xE3880F5A b323
	static void FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(BOOL p0) { invoke<Void>(0xCF7910, p0); } // 0x9B079E5221D984D3 b323
	static void USE_PARTICLE_FX_ASSET(const char* name) { invoke<Void>(0xCF7930, name); } // 0x6C38AF3693A69A91 0x9C720B61 b323
	static void WASH_DECALS_IN_RANGE(float x, float y, float z, float range, float p4) { invoke<Void>(0xCF7950, x, y, z, range, p4); } // 0x9C30613D50A6ADEF 0xDEECBC57 b323
	static void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { invoke<Void>(0xCF7990, vehicle, p1); } // 0x5B712761429DBC14 0x2929F11A b323
	static void FADE_DECALS_IN_RANGE(float x, float y, float z, float p3, float p4) { invoke<Void>(0xCF79F0, x, y, z, p3, p4); } // 0xD77EDADB0420E6E0 0xF81E884A b323
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0xCF7A30, x, y, z, range); } // 0x5D6B2D4830A67C62 0x06A619A0 b323
	static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xCF7A70, obj); } // 0xCCF71CBDDF5B6CB9 0x8B67DCA7 b323
	static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xCF7AD0, obj, x, y, z); } // 0xA6F6F70FDC6D144C 0xF4999A55 b323
	static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xCF7B40, vehicle); } // 0xE91F1B65F2B48D57 0x831D06CA b323
	static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<int>(0xCF7BA0, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); } // 0xB302244A1839BDAD 0xEAD0C412 b323
	static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xCF7C30, x, y, z, groundLvl, width, transparency); } // 0x4F5212C7AD880DF8 0x1259DF42 b323
	static void START_PETROL_TRAIL_DECALS(float p0) { invoke<Void>(0xCF7CB0, p0); } // 0x99AC7F0D8B9C893D 0xE3938B0B b323
	static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { invoke<Void>(0xCF7D10, x, y, z, p3); } // 0x967278682CB6967A 0xBAEC6ADD b323
	static void END_PETROL_TRAIL_DECALS() { invoke<Void>(0xCF7D40); } // 0x0A123435A26C36CD 0xCCCA6855 b323
	static void REMOVE_DECAL(int decal) { invoke<Void>(0xCF7D50, decal); } // 0xED3F346429CCD659 0xA4363188 b323
	static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0xCF7D70, decal); } // 0xC694D74949CAFD0C 0xCDD4A61A b323
	static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0xCF7DA0, decal); } // 0x323F647679A09103 0x054448EF b323
	static void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { invoke<Void>(0xCF7DD0); } // 0xD9454B5752C857DC 0xEAB6417C b323
	static void SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME() { invoke<Void>(0xCF7DE0); } // 0x27CFB1B1E078CB2D 0xC2703B88 b323
	static void SET_DISABLE_DECAL_RENDERING_THIS_FRAME() { invoke<Void>(0xCF7DF0); } // 0x4B5CFC83122DF602 0xA706E84D b323
	static BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return invoke<BOOL>(0xCF7E00, xCoord, yCoord, zCoord, radius); } // 0x2F09F7976C512404 0x242C6A04 b323
	static void PATCH_DECAL_DIFFUSE_MAP(int decalType, const char* textureDict, const char* textureName) { invoke<Void>(0xCF7EB0, decalType, textureDict, textureName); } // 0x8A35C742130C6080 0x335695CF b323
	static void UNPATCH_DECAL_DIFFUSE_MAP(int decalType) { invoke<Void>(0xCF7EF0, decalType); } // 0xB7ED70C49521A61D 0x7B786555 b323
	static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xCF7F10, p0, p1); } // 0x84C8D7C2D30D3280 0xCE9E6CF2 b323
	static BOOL ADD_VEHICLE_CREW_EMBLEM(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0xCF7FB0, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); } // 0x428BDCB9DA58DA53 0x12077738 b323
	static void REMOVE_VEHICLE_CREW_EMBLEM(Vehicle vehicle, int p1) { invoke<Void>(0xCF7FF0, vehicle, p1); } // 0xD2300034310557E4 0x667046A8 b323
	static int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return invoke<int>(0xCF8050, vehicle, p1); } // 0xFE26117A5841B2FF 0x4F4D76E8 b323
	static BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return invoke<BOOL>(0xCF80C0, vehicle, p1); } // 0x060D935D3981A275 0x6D58F73B b323
	static void DISABLE_COMPOSITE_SHOTGUN_DECALS(BOOL toggle) { invoke<Void>(0xCF8130, toggle); } // 0x0E4299C549F0D1F1 0x9BABCBA4 b323
	static void DISABLE_SCUFF_DECALS(BOOL toggle) { invoke<Void>(0xCF8160, toggle); } // 0x02369D5C8A51FDCF 0xFDF6D8DA b323
	static void SET_DECAL_BULLET_IMPACT_RANGE_SCALE(float p0) { invoke<Void>(0xCF8190, p0); } // 0x46D1A61A21F566FC 0x2056A015 b323
	static void OVERRIDE_INTERIOR_SMOKE_NAME(const char* name) { invoke<Void>(0xCF81D0, name); } // 0x2A2A52824DB96700 0x0F486429 b323
	static void OVERRIDE_INTERIOR_SMOKE_LEVEL(float level) { invoke<Void>(0xCF8200, level); } // 0x1600FD8CF72EBC12 0xD87CC710 b323
	static void OVERRIDE_INTERIOR_SMOKE_END() { invoke<Void>(0xCF8220); } // 0xEFB55E7C25D3B3BE 0xE29EE145 b323
	static void REGISTER_NOIR_LENS_EFFECT() { invoke<Void>(0xCF8230); } // 0xA44FF770DFBC5DAE b323
	static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0xCF8260, toggle); } // 0xC9F98AC1884E73A2 0x7CFAE36F b323
	static void RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(BOOL p0) { invoke<Void>(0xCF8280, p0); } // 0x03300B57FCAC6DDB 0x60F72371 b323
	static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { invoke<Void>(0xCF82A0, modifierName); } // 0x2C933ABF17A1DF41 0xA81F3638 b323
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xCF8320, strength); } // 0x82E7FFCD5B2326B3 0x458F4F45 b323
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { invoke<Void>(0xCF8340, modifierName, transition); } // 0x3BCF567485E1971C 0xBB2BA72A b323
	static void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float strength) { invoke<Void>(0xCF83A0, strength); } // 0x1CBA05AE7BD7EE05 0x56345F6B b323
	static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xCF83C0); } // 0x0F07E7745A236711 0x8D8DF8EE b323
	static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xCF8400); } // 0xFDF3D97C674AFB66 0x594FEEC4 b323
	static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0xCF8420); } // 0x459FD2C8D0AB78BC 0x03C44E4B b323
	static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0xCF8440); } // 0x58F735290861E6B4 0x7E082045 b323
	static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xCF8450); } // 0x3C8938D7D872211E 0x79D7D235 b323
	static void SET_CURRENT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xCF8460, modifierName); } // 0xBBF327DED94E4DEB 0x85BA15A4 b323
	static void SET_PLAYER_TCMODIFIER_TRANSITION(float value) { invoke<Void>(0xCF8530, value); } // 0xBDEB86F4D5809204 0x9559BB38 b323
	static void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xCF8550, modifierName); } // 0xBF59707B3E5ED531 0x554BA16E b323
	static void ADD_TCMODIFIER_OVERRIDE(const char* modifierName1, const char* modifierName2) { invoke<Void>(0xCF8600, modifierName1, modifierName2); } // 0x1A8E2C8B9CF4549C 0xE8F538B5 b323
	static void CLEAR_ALL_TCMODIFIER_OVERRIDES(const char* p0) { invoke<Void>(0xCF8670, p0); } // 0x15E33297C3E8DC60 b323
	static void SET_EXTRA_TCMODIFIER(const char* modifierName) { invoke<Void>(0xCF8680, modifierName); } // 0x5096FD9CCB49056D b323
	static void CLEAR_EXTRA_TCMODIFIER() { invoke<Void>(0xCF8700); } // 0x92CCC17A7A2285DA b323
	static int GET_EXTRA_TCMODIFIER() { return invoke<int>(0xCF8720); } // 0xBB0527EC6341496D b323
	static void ENABLE_MOON_CYCLE_OVERRIDE(float strength) { invoke<Void>(0xCF8740, strength); } // 0x2C328AF17210F009 b323
	static void DISABLE_MOON_CYCLE_OVERRIDE() { invoke<Void>(0xCF8770); } // 0x2BF72AD5B41AA739 b323
	static int REQUEST_SCALEFORM_MOVIE(const char* scaleformName) { return invoke<int>(0xCF8790, scaleformName); } // 0x11FE353CF9733E6F 0xC67E3DCB b323
	static int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return invoke<int>(0xCF87C0, scaleformName); } // 0xC514489CFB8AF806 0x7CC8057D b323
	static int REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(const char* scaleformName) { return invoke<int>(0xCF87F0, scaleformName); } // 0xBD06C611BB9048C2 b323
	static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0xCF8820, scaleformHandle); } // 0x85F01B8D5B90570E 0xDDFB6448 b323
	static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0xCF8890, scaleformHandle); } // 0x8217150E1217EBFD 0x1DFE8D8A b323
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0xCF88C0, scaleformHandle); } // 0x1D132D614DD86811 0x5FED3BA1 b323
	static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0xCF8930, scaleform, toggle); } // 0x6D8EB211944DCE08 0x18C9DE8D b323
	static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0xCF8990, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); } // 0x54972ADAF0294A93 0x48DA6A58 b323
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int p5) { invoke<Void>(0xCF89C0, scaleform, red, green, blue, alpha, p5); } // 0x0DF606929C105BE1 0x7B48E696 b323
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xCF8A90, scaleform1, scaleform2, red, green, blue, alpha); } // 0xCF537FDE4FBD4CE5 0x9C59FC06 b323
	static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xCF8AB0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); } // 0x87D51D72255D4E78 0xC4F63A89 b323
	static void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xCF8AD0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); } // 0x1CE592FDC749D6F5 0x899933C8 b323
	static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { invoke<Void>(0xCF8AF0, scaleform, method); } // 0xFBD96D87AC96D533 0x7AB77B57 b323
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0xCF8BC0, scaleform, methodName, param1, param2, param3, param4, param5); } // 0xD0837058AE2E4BEE 0x557EDA1D b323
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { invoke<Void>(0xCF8C90, scaleform, methodName, param1, param2, param3, param4, param5); } // 0x51BC1ED3CC44E8F7 0x91A7FCEB b323
	static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { invoke<Void>(0xCF8D80, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0xEF662D8D57E290B1 0x6EAF56DE b323
	static BOOL BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(int hudComponent, const char* methodName) { return invoke<BOOL>(0xCF8E70, hudComponent, methodName); } // 0x98C494FD5BDFBFD5 0x5D66CE1E b323
	static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return invoke<BOOL>(0xCF8EC0, scaleform, methodName); } // 0xF6E48914C7A8694E 0x215ABBE8 b323
	static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return invoke<BOOL>(0xCF8F90, methodName); } // 0xAB58C27C2E6123C6 0xF6015178 b323
	static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(const char* methodName) { return invoke<BOOL>(0xCF8FF0, methodName); } // 0xB9449845F73F5E9C 0x5E219B67 b323
	static void END_SCALEFORM_MOVIE_METHOD() { invoke<Void>(0xCF9050); } // 0xC6796A8FFA375E53 0x02DBF2D7 b323
	static int END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return invoke<int>(0xCF9060); } // 0xC50AA39A577AF886 0x2F38B526 b323
	static BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(int methodReturn) { return invoke<BOOL>(0xCF9080, methodReturn); } // 0x768FF8961BA904D6 0x5CD7C3C0 b323
	static int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(int methodReturn) { return invoke<int>(0xCF90B0, methodReturn); } // 0x2DE7EFA66B906036 0x2CFB0E6D b323
	static const char* GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(int methodReturn) { return invoke<const char*>(0xCF90D0, methodReturn); } // 0xE1E258829A885245 0x516862EB b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { invoke<Void>(0xCF9140, value); } // 0xC3D0841A0CC546A6 0x716777CB b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { invoke<Void>(0xCF9150, value); } // 0xD69736AAE04DB51A 0x9A01FFDA b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { invoke<Void>(0xCF9170, value); } // 0xC58424BA936EB458 0x0D4AE8CB b323
	static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { invoke<Void>(0xCF9190, componentType); } // 0x80338406F3475E55 0x3AC9CB55 b323
	static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0xCF91A0); } // 0x362E2D3FE93A9959 0x386CE0B8 b323
	static void END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING() { invoke<Void>(0xCF91B0); } // 0xAE4E8157D9ECF087 0x2E80DB52 b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { invoke<Void>(0xCF91C0, string); } // 0xBA7148484BD90365 0x4DAAD55B b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { invoke<Void>(0xCF91E0, string); } // 0xE83A3E3557A56640 0xCCBF0334 b323
	static BOOL DOES_LATEST_BRIEF_STRING_EXIST(int p0) { return invoke<BOOL>(0xCF9200, p0); } // 0x5E657EF1099EDD65 0x91A081A1 b323
	static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(int value) { invoke<Void>(0xCF9230, value); } // 0xEC52C631A1831C03 0x83A9811D b323
	static void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xCF92A0, hudComponent); } // 0x9304881D6F6537EA 0x7AF85862 b323
	static BOOL HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(int hudComponent) { return invoke<BOOL>(0xCF92C0, hudComponent); } // 0xDF6E5987D2B4D140 0x79B43255 b323
	static void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xCF92F0, hudComponent); } // 0xF44A5456AC3F4F97 0x03D87600 b323
	static BOOL PASS_KEYBOARD_INPUT_TO_SCALEFORM(int scaleformHandle) { return invoke<BOOL>(0xCF9300, scaleformHandle); } // 0xD1C7CB175E012964 0xE9183D3A b323
	static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xCF9330, channel); } // 0xBAABBB23EB6E484E 0x41A8A627 b323
	static int GET_TV_CHANNEL() { return invoke<int>(0xCF9340); } // 0xFC1E275A90D39995 0x6B96145A b323
	static void SET_TV_VOLUME(float volume) { invoke<Void>(0xCF9350, volume); } // 0x2982BF73F66E9DDC 0xF3504F4D b323
	static float GET_TV_VOLUME() { return invoke<float>(0xCF9360); } // 0x2170813D3DD8661B 0x39555CF0 b323
	static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0xCF9380, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); } // 0xFDDC2B4ED3C69DF0 0x8129EF89 b323
	static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { invoke<Void>(0xCF9430, tvChannel, playlistName, restart); } // 0xF7B38B8305F1FE8B 0xB262DE67 b323
	static void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(int tvChannel, const char* playlistName, int hour) { invoke<Void>(0xCF9450, tvChannel, playlistName, hour); } // 0x2201C576FACAEBE8 0x78C4DCBE b323
	static void CLEAR_TV_CHANNEL_PLAYLIST(int tvChannel) { invoke<Void>(0xCF9470, tvChannel); } // 0xBEB3D46BB7F043C0 0xCBE7068F b323
	static BOOL IS_TVSHOW_CURRENTLY_PLAYING(Hash videoCliphash) { return invoke<BOOL>(0xCF9480, videoCliphash); } // 0x0AD973CA1E077B60 0x4D1EB0FB b323
	static void ENABLE_MOVIE_KEYFRAME_WAIT(BOOL toggle) { invoke<Void>(0xCF94B0, toggle); } // 0x74C180030FDE4B69 0x796DE696 b323
	static void SET_TV_PLAYER_WATCHING_THIS_FRAME(Any p0) { invoke<Void>(0xCF94D0, p0); } // 0xD1C55B110E4DF534 0xD99EC000 b323
	static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0xCF9530, toggle); } // 0x873FA65C778AD970 0xC2DEBA3D b323
	static BOOL UI3DSCENE_IS_AVAILABLE() { return invoke<BOOL>(0xCF9550); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A b323
	static BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return invoke<BOOL>(0xCF9570, presetName); } // 0xF1CEA8A4198D8E9A 0x2E7D9B98 b323
	static BOOL UI3DSCENE_ASSIGN_PED_TO_SLOT(const char* presetName, Ped ped, int slot, float posX, float posY, float posZ) { return invoke<BOOL>(0xCF95E0, presetName, ped, slot, posX, posY, posZ); } // 0x98C4FE6EC34154CA 0x9A0E3BFE b323
	static void UI3DSCENE_CLEAR_PATCHED_DATA() { invoke<Void>(0xCF96D0); } // 0x7A42B2E236E71415 0x431AA036 b323
	static void UI3DSCENE_MAKE_PUSHED_PRESET_PERSISTENT(BOOL toggle) { invoke<Void>(0xCF96F0, toggle); } // 0x108BE26959A9D9BB 0x24A7A7F6 b323
	static void TERRAINGRID_ACTIVATE(BOOL toggle) { invoke<Void>(0xCF9710, toggle); } // 0xA356990E161C9E65 0xA1CB6C94 b323
	static void TERRAINGRID_SET_PARAMS(float x, float y, float z, float forwardX, float forwardY, float forwardZ, float sizeX, float sizeY, float sizeZ, float gridScale, float glowIntensity, float normalHeight, float heightDiff) { invoke<Void>(0xCF9730, x, y, z, forwardX, forwardY, forwardZ, sizeX, sizeY, sizeZ, gridScale, glowIntensity, normalHeight, heightDiff); } // 0x1C4FC5752BCD8E48 0x3B637AA7 b323
	static void TERRAINGRID_SET_COLOURS(int lowR, int lowG, int lowB, int lowAlpha, int r, int g, int b, int alpha, int highR, int highG, int highB, int highAlpha) { invoke<Void>(0xCF9810, lowR, lowG, lowB, lowAlpha, r, g, b, alpha, highR, highG, highB, highAlpha); } // 0x5CE62918F8D703C7 0xDF552973 b323
	static void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { invoke<Void>(0xCF9880, effectName, duration, looped); } // 0x2206BF9A37B7F724 0x1D980479 b323
	static void ANIMPOSTFX_STOP(const char* effectName) { invoke<Void>(0xCF9900, effectName); } // 0x068E835A1D0DC0E3 0x06BB5CDA b323
	static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0xCF9960, effectName); } // 0x36AD3E690DA5ACEB 0x089D5921 b323
	static void ANIMPOSTFX_STOP_ALL() { invoke<Void>(0xCF99D0); } // 0xB4EDDC19532BFB85 0x4E6D875B b323
	static void ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS(const char* effectName) { invoke<Void>(0xCF99F0, effectName); } // 0xD2209BE128B5418C b323
}

namespace HUD
{
	static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(const char* string) { invoke<Void>(0xD037C0, string); } // 0xABA17D7CE615ADBF 0xCB7C8994 b323
	static void END_TEXT_COMMAND_BUSYSPINNER_ON(int busySpinnerType) { invoke<Void>(0xD037D0, busySpinnerType); } // 0xBD12F8228410D9B4 0x903F5EE4 b323
	static void BUSYSPINNER_OFF() { invoke<Void>(0xD037E0); } // 0x10D373323E5B9C0D 0x94119534 b323
	static void PRELOAD_BUSYSPINNER() { invoke<Void>(0xD037F0); } // 0xC65AB383CD91DF98 0x71077FBD b323
	static BOOL BUSYSPINNER_IS_ON() { return invoke<BOOL>(0xD03800); } // 0xD422FCC5F239A915 0xB8B3A5D0 b323
	static void SET_MOUSE_CURSOR_THIS_FRAME() { invoke<Void>(0xD03820); } // 0xAAE7CE1D63167423 b323
	static void SET_MOUSE_CURSOR_STYLE(int spriteId) { invoke<Void>(0xD03830, spriteId); } // 0x8DB8CFFD58B62552 b323
	static void THEFEED_ONLY_SHOW_TOOLTIPS(BOOL toggle) { invoke<Void>(0xD03840, toggle); } // 0x6F1554B0CC2089FA 0xA7C8594B b323
	static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(float pos) { invoke<Void>(0xD03890, pos); } // 0x55598D21339CB998 0x1DA7E41A b323
	static void THEFEED_HIDE_THIS_FRAME() { invoke<Void>(0xD038C0); } // 0x25F87B30C382FCA7 0x1E63088A b323
	static void THEFEED_FLUSH_QUEUE() { invoke<Void>(0xD038E0); } // 0xA8FDB297A8D25FBA 0x5205C6F5 b323
	static void THEFEED_REMOVE_ITEM(int notificationId) { invoke<Void>(0xD03900, notificationId); } // 0xBE4390CB40B3E627 0xECA8ACB9 b323
	static void THEFEED_FORCE_RENDER_ON() { invoke<Void>(0xD03930); } // 0xA13C11E1B5C06BFC 0x520FCB6D b323
	static void THEFEED_FORCE_RENDER_OFF() { invoke<Void>(0xD03950); } // 0x583049884A2EEE3C 0xC8BAB2F2 b323
	static void THEFEED_PAUSE() { invoke<Void>(0xD03970); } // 0xFDB423997FA30340 0x4D0449C6 b323
	static void THEFEED_RESUME() { invoke<Void>(0xD03990); } // 0xE1CD1E48E025E661 0xD3F40140 b323
	static BOOL THEFEED_IS_PAUSED() { return invoke<BOOL>(0xD039B0); } // 0xA9CBFD40B3FA3010 0xC5223796 b323
	static void THEFEED_REPORT_LOGO_ON() { invoke<Void>(0xD039D0); } // 0xD4438C0564490E63 0x709B4BCB b323
	static void THEFEED_REPORT_LOGO_OFF() { invoke<Void>(0xD039F0); } // 0xB695E2CD0A2DA9EE 0x4A4A40A4 b323
	static int THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() { return invoke<int>(0xD03A10); } // 0x82352748437638CA 0x294405D4 b323
	static void THEFEED_AUTO_POST_GAMETIPS_ON() { invoke<Void>(0xD03A40); } // 0x56C8B608CFD49854 0xF881AB87 b323
	static void THEFEED_AUTO_POST_GAMETIPS_OFF() { invoke<Void>(0xD03A60); } // 0xADED7F5748ACAFE6 0x1D6859CA b323
	static void THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(int red, int green, int blue, int alpha) { invoke<Void>(0xD03A80, red, green, blue, alpha); } // 0x17430B918701C342 0xCF14D7F2 b323
	static void THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(int count) { invoke<Void>(0xD03AE0, count); } // 0x17AD8C9706BDD88A 0x24A97AF8 b323
	static void THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(BOOL toggle) { invoke<Void>(0xD03B10, toggle); } // 0x4A0C7C9BB10ABB36 0x44018EDB b323
	static void THEFEED_RESET_ALL_PARAMETERS() { invoke<Void>(0xD03B40); } // 0xFDD85225B2DEA55E 0xA4524B23 b323
	static void THEFEED_FREEZE_NEXT_POST() { invoke<Void>(0xD03B60); } // 0xFDEC055AB549E328 0xAFA1148B b323
	static void THEFEED_CLEAR_FROZEN_POST() { invoke<Void>(0xD03B80); } // 0x80FE4F3AB4E1B62A 0x3CD4307C b323
	static void THEFEED_UPDATE_ITEM_TEXTURE(const char* txdString1, const char* txnString1, const char* txdString2, const char* txnString2) { invoke<Void>(0xD03BA0, txdString1, txnString1, txdString2, txnString2); } // 0x317EBA71D7543F52 0x6A3F747D b323
	static void BEGIN_TEXT_COMMAND_THEFEED_POST(const char* text) { invoke<Void>(0xD03BF0, text); } // 0x202709F4C58A0424 0x574EE85C b323
	static int END_TEXT_COMMAND_THEFEED_POST_STATS(const char* statTitle, int iconEnum, BOOL stepVal, int barValue, BOOL isImportant, const char* pictureTextureDict, const char* pictureTextureName) { return invoke<int>(0xD03C00, statTitle, iconEnum, stepVal, barValue, isImportant, pictureTextureDict, pictureTextureName); } // 0x2B7E9A4EAAA93C89 0xED130FA1 b323
	static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xD03C40, txdName, textureName, flash, iconType, sender, subject); } // 0x1CCD9A37359072CF 0xE7E3C98B b323
	static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration) { return invoke<int>(0xD03CA0, txdName, textureName, flash, iconType, sender, subject, duration); } // 0x1E6611149DB3DB6B 0x0EB382B7 b323
	static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration, const char* clanTag) { return invoke<int>(0xD03D00, txdName, textureName, flash, iconType, sender, subject, duration, clanTag); } // 0x5CBF7BADE20DB93E 0x3E807FE3 b323
	static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(const char* txdName, const char* textureName, BOOL flash, int iconType1, const char* sender, const char* subject, float duration, const char* clanTag, int iconType2, int p9) { return invoke<int>(0xD03D70, txdName, textureName, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); } // 0x531B84E7DA981FB6 0xDEB491C8 b323
	static int END_TEXT_COMMAND_THEFEED_POST_TICKER(BOOL blink, BOOL p1) { return invoke<int>(0xD03DE0, blink, p1); } // 0x2ED7843F8F801023 0x08F7AF78 b323
	static int END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(BOOL blink, BOOL p1) { return invoke<int>(0xD03E20, blink, p1); } // 0x44FA03975424A0EE 0x57B8D0D4 b323
	static int END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(BOOL blink, BOOL p1) { return invoke<int>(0xD03E90, blink, p1); } // 0x378E809BF61EC840 0x02BCAF9B b323
	static int END_TEXT_COMMAND_THEFEED_POST_AWARD(const char* textureDict, const char* textureName, int rpBonus, int colorOverlay, const char* titleLabel) { return invoke<int>(0xD03ED0, textureDict, textureName, rpBonus, colorOverlay, titleLabel); } // 0xAA295B6F28BD587D 0x02DED2B8 b323
	static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0xD03F00, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); } // 0x97C9E4E7024A8F2C 0xA9CCEF66 b323
	static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, const char* playerName, int R, int G, int B) { return invoke<int>(0xD03F80, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); } // 0x137BC35589E34E1E 0x88B9B909 b323
	static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK(const char* gxtLabel1, int p1, const char* gxtLabel2) { return invoke<int>(0xD04010, gxtLabel1, p1, gxtLabel2); } // 0x33EE12743CCD6343 0xE05E7052 b323
	static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(const char* gxtLabel1, int p1, const char* gxtLabel2, int p3) { return invoke<int>(0xD04040, gxtLabel1, p1, gxtLabel2, p3); } // 0xC8F3AAF93D0600BF 0x4FA43BA4 b323
	static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<int>(0xD04080, p0, p1, p2, p3, p4, p5); } // 0x7AE0589093A2E088 0x8C90D22F b323
	static int END_TEXT_COMMAND_THEFEED_POST_MPTICKER(BOOL blink, BOOL p1) { return invoke<int>(0xD040C0, blink, p1); } // 0xF020C96915705B3A 0x8E319AB8 b323
	static int END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU(const char* txdName1, const char* textureName1, int count1, const char* txdName2, const char* textureName2, int count2, int hudColor1, int hudColor2) { return invoke<int>(0xD04140, txdName1, textureName1, count1, txdName2, textureName2, count2, hudColor1, hudColor2); } // 0xB6871B0555B02996 0x5E93FBFA b323
	static void BEGIN_TEXT_COMMAND_PRINT(const char* GxtEntry) { invoke<Void>(0xD04180, GxtEntry); } // 0xB87A37EEB7FAA67D 0xF42C43C7 b323
	static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { invoke<Void>(0xD04190, duration, drawImmediately); } // 0x9D77056A530643F6 0x38F82261 b323
	static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(const char* text) { invoke<Void>(0xD041B0, text); } // 0x853648FD1063A213 0xDD524A11 b323
	static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0xD041C0); } // 0x8A9BA1AB3E237613 0x672EFB45 b323
	static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { invoke<Void>(0xD041E0, text); } // 0x25FBB336DF1804CB 0x3E35563E b323
	static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y, int p2) { invoke<Void>(0xD04210, x, y, p2); } // 0xCD015E5BB0D96A57 0x6F8350CE b323
	static void BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(const char* text) { invoke<Void>(0xD04260, text); } // 0x54CE8AC98E120CAB 0x51E7A037 b323
	static float END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(BOOL p0) { return invoke<float>(0xD04270, p0); } // 0x85F061DA64ED2F67 0xD12A643A b323
	static void BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(const char* entry) { invoke<Void>(0xD042A0, entry); } // 0x521FB041D93DD0E4 0x94B82066 b323
	static int END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(float x, float y) { return invoke<int>(0xD042B0, x, y); } // 0x9040DFB09BE75706 0xAA318785 b323
	static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(const char* inputType) { invoke<Void>(0xD042E0, inputType); } // 0x8509B634FBE7DA11 0xB245FC10 b323
	static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0xD042F0, p0, loop, beep, shape); } // 0x238FFE5C7B0498A6 0xB59B530D b323
	static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* labelName) { invoke<Void>(0xD04320, labelName); } // 0x0A24DA3A41B718F5 0x00E20F2D b323
	static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0xD04330, p0); } // 0x10BDDBFC529428DD 0xF63A13EC b323
	static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(const char* textLabel) { invoke<Void>(0xD04360, textLabel); } // 0xF9113A30DE5C6670 0xF4C211F6 b323
	static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0xD04370, blip); } // 0xBC38B49BCB83BC9B 0xE8E59820 b323
	static void BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(const char* p0) { invoke<Void>(0xD04380, p0); } // 0x23D69E0465570028 0x0E103475 b323
	static void END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xD04390, p0); } // 0xCFDBDF5AE59BA0F4 0x2944A6C5 b323
	static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(const char* text) { invoke<Void>(0xD043B0, text); } // 0xE124FA80A759019C 0x550665AE b323
	static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<Void>(0xD043C0); } // 0xFCC75460ABA29378 0x67785AF2 b323
	static void BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(const char* gxtEntry) { invoke<Void>(0xD043D0, gxtEntry); } // 0x8F9EE5687F8EECCD 0xBF855650 b323
	static void END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(int p0) { invoke<Void>(0xD043E0, p0); } // 0xA86911979638106F 0x6E7FDA1C b323
	static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0xD043F0, value); } // 0x03B504CF259931BC 0xFE272A57 b323
	static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0xD04400, value, decimalPlaces); } // 0xE7DCB5B874BCD96E 0x24D78013 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(const char* labelName) { invoke<Void>(0xD04410, labelName); } // 0xC63CD5D2920ACBE7 0xDCE05406 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { invoke<Void>(0xD04420, gxtEntryHash); } // 0x17299B63C7683A2B 0x150E03B6 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0xD04430, blip); } // 0x80EAD8E2E1D5D52E 0x5DE98F0A b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { invoke<Void>(0xD04440, text); } // 0x6C188BE134E074AA 0x27A244D8 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0xD04450, timestamp, flags); } // 0x1115F16B8AB9E8BF 0x135B3CD0 b323
	static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { invoke<Void>(0xD04460, value, commaSeparated); } // 0x0E4C749FF9DE9CC4 0x12929BDF b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(const char* p0, int p1) { invoke<Void>(0xD04470, p0, p1); } // 0x761B77454205A61D 0x65E1D404 b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(const char* website) { invoke<Void>(0xD04500, website); } // 0x94CF4AC034C9C986 0xC736999E b323
	static void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* string) { invoke<Void>(0xD04510, string); } // 0x5F68520888E69014 0x0829A799 b323
	static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(int hudColor) { invoke<Void>(0xD04520, hudColor); } // 0x39BBF623FC803EAC 0x6F1A1901 b323
	static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(const char* text, int position, int length) { return invoke<const char*>(0xD04530, text, position, length); } // 0x169BD9382084C8C0 0x34A396EE b323
	static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(const char* text, int position, int length, int maxLength) { return invoke<const char*>(0xD04560, text, position, length, maxLength); } // 0xB2798643312205C5 0x0183A66C b323
	static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(const char* text, int startPosition, int endPosition) { return invoke<const char*>(0xD04590, text, startPosition, endPosition); } // 0xCE94AEBA5D82908A 0xFA6373BB b323
	static const char* GET_FILENAME_FOR_AUDIO_CONVERSATION(const char* labelName) { return invoke<const char*>(0xD045D0, labelName); } // 0x7B5280EBA9840C72 0x95C4B5AD b323
	static void CLEAR_PRINTS() { invoke<Void>(0xD04660); } // 0xCC33FA791322B9D9 0x216CB1C5 b323
	static void CLEAR_BRIEF() { invoke<Void>(0xD04670); } // 0x9D292F73ADBD9313 0x9F75A929 b323
	static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xD04690); } // 0x6178F68A87A4D3A0 0x9E5D9198 b323
	static void CLEAR_THIS_PRINT(const char* p0) { invoke<Void>(0xD046A0, p0); } // 0xCF708001E1E536DD 0x06878327 b323
	static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xD047D0); } // 0x2CEA2839313C09AC 0xA869A238 b323
	static BOOL DOES_TEXT_BLOCK_EXIST(const char* gxt) { return invoke<BOOL>(0xD047E0, gxt); } // 0x1C7302E725259789 0x96F74838 b323
	static void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { invoke<Void>(0xD04820, gxt, slot); } // 0x71A78003C8E71424 0x9FA9175B b323
	static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(const char* gxt, int slot) { invoke<Void>(0xD04840, gxt, slot); } // 0x6009F9F1AE90D8A6 0xF4D27EBE b323
	static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0xD04860, slot); } // 0x02245FE4BED318B8 0xB0E56045 b323
	static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0xD04890, p0, p1); } // 0x2A179DF17CCF04CD 0x518141E0 b323
	static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0xD048B0, p0); } // 0x8B6817B71B85EBF0 0xF079E4EB b323
	static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* gxt, int slot) { return invoke<BOOL>(0xD048E0, gxt, slot); } // 0xADBF060E2B30C5BC 0x80A52040 b323
	static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xD04910); } // 0x7984C03AA5CC2F41 0x6A77FE8D b323
	static BOOL DOES_TEXT_LABEL_EXIST(const char* gxt) { return invoke<BOOL>(0xD04930, gxt); } // 0xAC09CA973C564252 0x6ECAE560 b323
	static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(const char* gxt) { return invoke<int>(0xD04960, gxt); } // 0x801BD273D3A23F74 0xA4CA7BE5 b323
	static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0xD049B0, string); } // 0xF030907CCBB8A9FD 0x99379D55 b323
	static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0xD049E0, string); } // 0x43E4111189E54F0E 0x7DBC0764 b323
	static const char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<const char*>(0xD04A10, hash); } // 0xD0EF8A959B8A4CB9 0x1E8E310C b323
	static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xD04AD0); } // 0x1930DFA731813EC4 0xC3BC1B4F b323
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xD04AF0); } // 0x9EB6522EA68F22FE 0x14AEAA28 b323
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xD04B10); } // 0xAD6DACA4BA53E0A4 0x63BA19F5 b323
	static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0xD04B30, toggle); } // 0xA6294919E56FF02A 0xD10E4E31 b323
	static void DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xD04B60); } // 0x7669F9E39DC17063 0xC380AC85 b323
	static void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME() { invoke<Void>(0xD04B80); } // 0x402F9ED62087E898 0xC47AB1B0 b323
	static void DISPLAY_RADAR(BOOL toggle) { invoke<Void>(0xD04BA0, toggle); } // 0xA0EBB943C300E693 0x52816BD4 b323
	static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xD04BD0); } // 0xA86478C6958735C5 0x40BADA1D b323
	static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0xD04BF0); } // 0x157F93B036700462 0x1AB3B954 b323
	static BOOL IS_MINIMAP_RENDERING() { return invoke<BOOL>(0xD04C10); } // 0xAF754F20EB5CD51A 0x9CD18314 b323
	static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xD04C20, blip, enabled); } // 0x4F7D8A9BFB0B43E9 0x3E160C90 b323
	static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0xD04C40, blip, colour); } // 0x837155CD2F63DA09 0xDDE7C65C b323
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xD04C60, p0); } // 0x60296AF4BA14ABC5 0xB58B25BD b323
	static void FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(int p0) { invoke<Void>(0xD04C80, p0); } // 0x57D760D55F54E071 0x9854485F b323
	static void SET_RADAR_ZOOM_PRECISE(float zoom) { invoke<Void>(0xD04CA0, zoom); } // 0xBD12C5EEE184C337 0xDCA3F423 b323
	static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0xD04CE0, zoomLevel); } // 0x096EF57A0C999BBA 0x2A50D1A6 b323
	static void SET_RADAR_ZOOM_TO_BLIP(Blip blip, float zoom) { invoke<Void>(0xD04D80, blip, zoom); } // 0xF98E4B3E56AFC7B1 0x25EC28C0 b323
	static void SET_RADAR_ZOOM_TO_DISTANCE(float zoom) { invoke<Void>(0xD04E50, zoom); } // 0xCB7CC0D58405AD41 0x09CF1CE5 b323
	static void UPDATE_RADAR_ZOOM_TO_BLIP() { invoke<Void>(0xD04E90); } // 0xD2049635DEB9C375 0xE8D3A910 b323
	static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0xD04EA0, hudColorIndex, r, g, b, a); } // 0x7C9C91AB74A0360F 0x63F66A0B b323
	static void SET_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xD04F00, r, g, b, a); } // 0xD68A5FF8A3A89874 0x0E41E45C b323
	static void SET_SECOND_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xD04F20, r, g, b, a); } // 0x16A304E6CB2BFAB9 0x6BE3ACA8 b323
	static void REPLACE_HUD_COLOUR(int hudColorIndex, int hudColorIndex2) { invoke<Void>(0xD04F40, hudColorIndex, hudColorIndex2); } // 0x1CCC708F0F850613 0x3B216749 b323
	static void REPLACE_HUD_COLOUR_WITH_RGBA(int hudColorIndex, int r, int g, int b, int a) { invoke<Void>(0xD04F70, hudColorIndex, r, g, b, a); } // 0xF314CF4F0211894E 0xF6E7E92B b323
	static void FLASH_ABILITY_BAR(int millisecondsToFlash) { invoke<Void>(0xD04F90, millisecondsToFlash); } // 0x02CFBA0C9E9275CE 0x3648960D b323
	static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0xD04FA0, p0, p1); } // 0x9969599CCFF5D85E 0x24E53FD8 b323
	static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0xD04FC0, p0); } // 0xA18AFB39081B6A1F 0x629F866B b323
	static float GET_RENDERED_CHARACTER_HEIGHT(float size, int font) { return invoke<float>(0xD04FE0, size, font); } // 0xDB88A37483346780 0x3330175B b323
	static void SET_TEXT_SCALE(float scale, float size) { invoke<Void>(0xD050A0, scale, size); } // 0x07C837F9A01C34C9 0xB6E15B23 b323
	static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0xD050C0, red, green, blue, alpha); } // 0xBE6B23FFA53FB442 0xE54DD2C8 b323
	static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xD05100, align); } // 0xC02F4DBFB51D988B 0xE26D39A1 b323
	static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0xD05120, toggle); } // 0x6B3C4650BC8BEE47 0x45B60520 b323
	static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0xD05140, justifyType); } // 0x4E096588B13FFECA 0x68CDFA60 b323
	static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xD05160, start, end); } // 0x63145D9C883A1A70 0x6F60AB54 b323
	static void SET_TEXT_LEADING(int p0) { invoke<Void>(0xD05180, p0); } // 0xA50ABC31E3CDFAFF 0x98CE21D4 b323
	static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xD051A0, p0); } // 0x038C1F517D7FDCF8 0xF49D8A08 b323
	static void SET_TEXT_FONT(int fontType) { invoke<Void>(0xD051B0, fontType); } // 0x66E0276CC5F6B9DA 0x80BC530D b323
	static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xD051D0); } // 0x1CA3E9EAC9D93E5E 0xE2A11511 b323
	static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xD051E0, distance, r, g, b, a); } // 0x465C84BC39F1C351 0xE6587517 b323
	static void SET_TEXT_OUTLINE() { invoke<Void>(0xD05200); } // 0x2513DFB0FB8400FE 0xC753412F b323
	static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xD05210, p0, r, g, b, a); } // 0x441603240D202FA6 0x3F1A5DAB b323
	static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0xD05220, renderId); } // 0x5F15302936E07111 0xC5C3B7F3 b323
	static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xD05290); } // 0x52F0982D7FD156B6 0x8188935F b323
	static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0xD052A0, name, p1); } // 0x57D9C12635E25CE3 0xFAE5D6F0 b323
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0xD05360, name); } // 0x78DCDC15C9F116B4 0x284057F5 b323
	static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0xD053A0, name); } // 0xE9F6FFE837354DD4 0xD3F6C892 b323
	static void LINK_NAMED_RENDERTARGET(Hash modelHash) { invoke<Void>(0xD053E0, modelHash); } // 0xF6C09E276AEB3F2D 0x6844C4B9 b323
	static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0xD05490, name); } // 0x1A6478B61C6BDC3B 0xF9D7A401 b323
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0xD054D0, modelHash); } // 0x113750538FA31298 0x8B52601F b323
	static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0xD05590, toggle); } // 0x8DFCED7A656F8802 0xE6D85741 b323
	static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0xD055B0); } // 0xDAD37F45428801AE 0x4B3C9CA9 b323
	static BOOL HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME() { return invoke<BOOL>(0xD05620); } // 0x214CD562A939246A 0x812CBE0E b323
	static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xD05640); } // 0x4D79439A6B55AC67 0xA65F262A b323
	static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xD05660); } // 0x327EDEEEAC55C369 0x3E50AE92 b323
	static int GET_STANDARD_BLIP_ENUM_ID() { return invoke<int>(0xD05680); } // 0x4A9923385BDB9DAD 0x87871CE0 b323
	static int GET_WAYPOINT_BLIP_ENUM_ID() { return invoke<int>(0xD05690); } // 0x186E5D252FA50E7D 0xB9827942 b323
	static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0xD056A0); } // 0x9A3FF3DE163034E8 0x144020FA b323
	static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xD05710, blipSprite); } // 0x14F96AA50D6FBEA7 0x9356E92F b323
	static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xD05730, blipSprite); } // 0x1BEDE233E6CD2A1F 0x64C0273D b323
	static Vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<Vector3>(0xD05760, blip); } // 0xFA7C7F0AADF25D09 0xB7374A66 b323
	static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0xD05810, blip); } // 0x1E314167F701DC3B 0xD0FC19F4 b323
	static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0xD05850, blip); } // 0xBE9B0959FFD0779B 0x501D7B4E b323
	static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xD05890, blip); } // 0x4BA4E2553AFEDC2C 0xA068C40B b323
	static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0xD05900, blip); } // 0x9B6786E4C03DD382 0x86913D37 b323
	static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xD05910, entity); } // 0xBC8DBDCA2436F7E8 0x005A2A47 b323
	static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0xD05930, posX, posY, posZ, radius); } // 0x46818D79B1F7499A 0x4626756C b323
	static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0xD059F0, entity); } // 0x5CDE92C702A8FCE7 0x30822554 b323
	static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xD05A10, pickup); } // 0xBE339365C863BD36 0x16693C3A b323
	static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0xD05A30, x, y, z); } // 0x5A039BB0BCA604B6 0xC6F43D0E b323
	static void TRIGGER_SONAR_BLIP(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0xD05AE0, posX, posY, posZ, radius, p4); } // 0x72DD432F3CDFC0EE 0xBF25E7B2 b323
	static void ALLOW_SONAR_BLIPS(BOOL toggle) { invoke<Void>(0xD05B50, toggle); } // 0x60734CC207C9833C 0xE7E1E32B b323
	static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0xD05B70, blip, posX, posY, posZ); } // 0xAE2AF67E9D9AF65D 0x680A34D4 b323
	static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0xD05C10, blip); } // 0x586AFE3FF72D996E 0xEF6FF47B b323
	static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0xD05CC0, blip, spriteId); } // 0xDF735600A4696DAF 0x8DBBB0B9 b323
	static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xD05CE0, blip); } // 0x1FC877464A04FC4F 0x72FF2E73 b323
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* gxtEntry) { invoke<Void>(0xD05D20, blip, gxtEntry); } // 0xEAA0FFE120D92784 0xAC8A5461 b323
	static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0xD05D60, blip, player); } // 0x127DE7B20C60A6A3 0x03A0B8F9 b323
	static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xD05DA0, blip, alpha); } // 0x45FF974EEE1C8734 0xA791FCCD b323
	static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xD05DE0, blip); } // 0x970F608F0EE6C885 0x297AF6C8 b323
	static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xD05E20, blip, opacity, duration); } // 0x2AEE8F8390D2298C 0xA5999031 b323
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0xD05E50, blip, rotation); } // 0xF87683CDF73C3F6E 0x6B8F44FE b323
	static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xD05E70, blip, duration); } // 0xD3CD6FD297AE87CC 0x8D5DF611 b323
	static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xD05E90, blip, p1); } // 0xAA51DB313C010A7E 0xEAF67377 b323
	static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0xD05EB0, blip, color); } // 0x03D7FB09E75D6B7E 0xBB3C5A41 b323
	static void SET_BLIP_SECONDARY_COLOUR(Blip blip, int r, int g, int b) { invoke<Void>(0xD05ED0, blip, r, g, b); } // 0x14892474891E09EB 0xC6384D32 b323
	static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xD05F50, blip); } // 0xDF729E8D20CF7327 0xDD6A1E54 b323
	static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0xD05F90, blip); } // 0x729B5F1EFBC0AAEE 0xE88B4BC2 b323
	static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xD06030, blip); } // 0xDA5F8727EB75B926 0x1226765A b323
	static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0xD06070, blip); } // 0xE41CA53051197A27 0x258CBA3A b323
	static BOOL DOES_BLIP_HAVE_GPS_ROUTE(Blip blip) { return invoke<BOOL>(0xD060B0, blip); } // 0xDD2238F57B977751 0x3E47F357 b323
	static void SET_BLIP_HIDDEN_ON_LEGEND(Blip blip, BOOL toggle) { invoke<Void>(0xD060F0, blip, toggle); } // 0x54318C915D27E4CE 0x43996428 b323
	static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0xD06110, blip, toggle); } // 0xE2590BC29220CEBB 0xD5842BFF b323
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD06130, blip, toggle); } // 0x24AC0137444F9FD5 0x802FB686 b323
	static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0xD06150, blip); } // 0x26F49BF3381D933D 0x24ACC4E9 b323
	static Blip GET_NEW_SELECTED_MISSION_CREATOR_BLIP() { return invoke<Blip>(0xD06190); } // 0x5C90988E7C8E1AF4 0xFFD7476C b323
	static BOOL IS_HOVERING_OVER_MISSION_CREATOR_BLIP() { return invoke<BOOL>(0xD061D0); } // 0x4167EFE0527D706E 0xC5EB849A b323
	static void SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xD06220, toggle); } // 0xF1A6C18B35BCADE6 0xA2CAAB4F b323
	static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xD06270, blip, toggle); } // 0xB14552383D39CE3E 0xC0047F15 b323
	static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xD06290, blip, toggle); } // 0x2E8D9498C56DD0D1 0x1A81202B b323
	static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xD062B0, blip); } // 0xA5E41FD83AD6CEF0 0x52E111D7 b323
	static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0xD062F0, blip, toggle); } // 0xBE8BE4FE60E27B72 0x5C67725E b323
	static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xD06310, blip, scale); } // 0xD38744167B2FA257 0x1E6EC434 b323
	static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0xD06330, blip, priority); } // 0xAE9FC9EF6A9FAC79 0xCE87DA6F b323
	static void SET_BLIP_DISPLAY(Blip blip, int displayId) { invoke<Void>(0xD06350, blip, displayId); } // 0x9029B2F3DA924928 0x2B521F91 b323
	static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0xD06370, blip, index); } // 0x234CDD44D996FD9A 0xEF72F533 b323
	static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0xD06390, blip); } // 0x86A652570E5F25DD 0xD8C3C1CD b323
	static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xD06400, blip, toggle); } // 0x6F6F290102C02AB4 0xF290CFD8 b323
	static void PULSE_BLIP(Blip blip) { invoke<Void>(0xD06420, blip); } // 0x742D6FD43115AF73 0x44253855 b323
	static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0xD06440, blip, number); } // 0xA3C0B359DCB848B6 0x7BFC66C6 b323
	static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0xD06470, blip); } // 0x532CFF637EF80148 0x0B6D610D b323
	static void SHOW_HEIGHT_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD06490, blip, toggle); } // 0x75A16C3DA34F1245 0x1D99F676 b323
	static void SHOW_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD064B0, blip, toggle); } // 0x74513EA3E505181E 0x3DCF0092 b323
	static void SHOW_HEADING_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD064D0, blip, toggle); } // 0x5FBCA48327B914DF 0xD1C3D71B b323
	static void SHOW_OUTLINE_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD064F0, blip, toggle); } // 0xB81656BC81FE24D1 0x8DE82C15 b323
	static void SHOW_FRIEND_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD06510, blip, toggle); } // 0x23C3EB807312F01A 0x4C8F02B4 b323
	static void SHOW_CREW_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xD06530, blip, toggle); } // 0xDCFB5D4DB8BF367E 0xABBE1E45 b323
	static void SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Blip blip, BOOL toggle) { invoke<Void>(0xD06550, blip, toggle); } // 0xC4278F70131BAA6D 0x6AA6A1CC b323
	static void SET_BLIP_AS_MINIMAL_ON_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xD06570, blip, toggle); } // 0x2B6D467DAB714E8D 0xC575F0BC b323
	static void SET_RADIUS_BLIP_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xD06590, blip, toggle); } // 0x25615540D894B814 0x40E25DB8 b323
	static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xD065B0, blip); } // 0xA6DB27D19ECBB7DA 0xAE92DD96 b323
	static void SET_WAYPOINT_OFF() { invoke<Void>(0xD065E0); } // 0xA7E4E2D361C2627F 0xB3496E1B b323
	static void DELETE_WAYPOINTS_FROM_THIS_PLAYER() { invoke<Void>(0xD065F0); } // 0xD8E694757BCEA8E9 0x62BABF2C b323
	static void REFRESH_WAYPOINT() { invoke<Void>(0xD06610); } // 0x81FA173F170560D1 0xB395D753 b323
	static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0xD06620); } // 0x1DD1F58F493F1DA5 0x5E4DF47B b323
	static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0xD06650, x, y); } // 0xFE43368D2AA4F2FC 0x8444E1F0 b323
	static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0xD066D0, blip, toggle); } // 0xB203913733F27884 0x72BEE6DF b323
	static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle, int hudColorIndex) { invoke<Void>(0xD066F0, blip, toggle, hudColorIndex); } // 0x13127EC3665E8EE1 0xFF545AD8 b323
	static void REMOVE_COP_BLIP_FROM_PED(Ped ped) { invoke<Void>(0xD06710, ped); } // 0xC594B315EDF2D4AF 0x41B0D022 b323
	static BOOL SET_MINIMAP_COMPONENT(int componentId, BOOL toggle, int overrideColor) { return invoke<BOOL>(0xD06760, componentId, toggle, overrideColor); } // 0x75A9A10948D1DEA6 0x419DCDC4 b323
	static void SHOW_ACCOUNT_PICKER() { invoke<Void>(0xD06790); } // 0x60E892BA4F5BDCA4 b323
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0xD067A0); } // 0xDCD4EC3F419D02FA 0xAB93F020 b323
	static void SET_PM_WARNINGSCREEN_ACTIVE(BOOL p0) { invoke<Void>(0xD067E0, p0); } // 0x41350B4FC28E3941 b323
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0xD06800); } // 0x4B0311D3CDC4648F 0x35087963 b323
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int zoom) { invoke<Void>(0xD06810, interior, x, y, z, zoom); } // 0x59E727A1C9D3E31A 0x6F2626E1 b323
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xD06860); } // 0xE81B7D2A3DAB2D81 0x39ABB10E b323
	static void SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xD06870, x, y); } // 0x77E2DD177910E1CF 0x54E75C7D b323
	static BOOL IS_PAUSEMAP_IN_INTERIOR_MODE() { return invoke<BOOL>(0xD06890); } // 0x9049FE339D5F6F6F 0x199DED14 b323
	static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xD068A0); } // 0x5FBAE526203990C9 0x1A4318F7 b323
	static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xD068B0); } // 0x20FE7FDFEEAD38C0 0xCE36E3FE b323
	static void DONT_TILT_MINIMAP_THIS_FRAME() { invoke<Void>(0xD068C0); } // 0x6D14BFDC33B34F55 0x334EFD46 b323
	static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xD068D0, p0); } // 0xC3B07BA00A83B0F1 0xF016E08F b323
	static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0xD068F0, toggle); } // 0x276B6CE369C33678 0x489FDD41 b323
	static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xD06910, toggle); } // 0x96DEC8D5430208B7 0x0049DF83 b323
	static void USE_FAKE_MP_CASH(BOOL toggle) { invoke<Void>(0xD06930, toggle); } // 0x170F541E1CADD1DE 0x6253B9D7 b323
	static void CHANGE_FAKE_MP_CASH(int cash, int bank) { invoke<Void>(0xD06950, cash, bank); } // 0x0772DF77852C2E30 0xE319F90B b323
	static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xD06960, display); } // 0xA5E78BA2B1331C55 0x60693CEE b323
	static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xD06980); } // 0x73115226F4814E62 0xBC6C73CB b323
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xD06990); } // 0x719FF505F097FD20 0xB75D4AD2 b323
	static void ALLOW_DISPLAY_OF_MULTIPLAYER_CASH_TEXT(BOOL allow) { invoke<Void>(0xD069A0, allow); } // 0xE67C6DFD386EA5E7 0x5476B9FD b323
	static void SET_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xD069C0); } // 0xC2D15BEF167E27BC 0xF4F3C796 b323
	static void REMOVE_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xD069E0); } // 0x95CF81BD06EE1887 0x7BFFE82F b323
	static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xD06A00); } // 0xDD21B55DF695CD0A 0x2C842D03 b323
	static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xD06A20); } // 0xC7C6789AA1CFEDD0 0x728B4EF4 b323
	static void SET_MULTIPLAYER_HUD_CASH(int p0, BOOL p1) { invoke<Void>(0xD06A40, p0, p1); } // 0xFD1D220394BCB824 0xA8DB435E b323
	static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xD06A50); } // 0x968F270E39141ECA 0x07BF4A7D b323
	static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0xD06A80); } // 0xD46923FC481CA285 0xF3807BED b323
	static void DISPLAY_HELP_TEXT_THIS_FRAME(const char* message, BOOL p1) { invoke<Void>(0xD06A90, message, p1); } // 0x960C9FF8F616E41C 0x18E3360A b323
	static void HUD_FORCE_WEAPON_WHEEL(BOOL show) { invoke<Void>(0xD06AE0, show); } // 0xEB354E5376BC81A7 0x1EFFB02A b323
	static void HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME() { invoke<Void>(0xD06B00); } // 0x0AFC4AF510774B47 0xB26FED2B b323
	static Hash HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() { return invoke<Hash>(0xD06B10); } // 0xA48931185F0536FE 0x22E9F555 b323
	static void HUD_SET_WEAPON_WHEEL_TOP_SLOT(Hash weaponHash) { invoke<Void>(0xD06B30, weaponHash); } // 0x72C1056D678BB7D8 0x83B608A0 b323
	static Hash HUD_GET_WEAPON_WHEEL_TOP_SLOT(int weaponTypeIndex) { return invoke<Hash>(0xD06B80, weaponTypeIndex); } // 0xA13E93403F26C812 b323
	static void HUD_SHOWING_CHARACTER_SWITCH_SELECTION(BOOL toggle) { invoke<Void>(0xD06BE0, toggle); } // 0x14C9FDCC41F81F63 0xE70D1F43 b323
	static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0xD06C00, p0, p1); } // 0x5B440763A4C8D15B 0x60539BAB b323
	static void CLEAR_GPS_FLAGS() { invoke<Void>(0xD06C30); } // 0x21986729D6A3A830 0x056AFCE6 b323
	static void SET_RACE_TRACK_RENDER(BOOL toggle) { invoke<Void>(0xD06C50, toggle); } // 0x1EAC5F91BCBC5073 0xFB9BABF5 b323
	static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0xD06C70); } // 0x7AA5B4CE533C858B 0x40C59829 b323
	static void START_GPS_CUSTOM_ROUTE(int hudColor, BOOL displayOnFoot, BOOL followPlayer) { invoke<Void>(0xD06C80, hudColor, displayOnFoot, followPlayer); } // 0xDB34E8D56FC13B08 0x7F93799B b323
	static void ADD_POINT_TO_GPS_CUSTOM_ROUTE(float x, float y, float z) { invoke<Void>(0xD06CA0, x, y, z); } // 0x311438A071DD9B1A 0xEEBDFE55 b323
	static void SET_GPS_CUSTOM_ROUTE_RENDER(BOOL toggle, int radarThickness, int mapThickness) { invoke<Void>(0xD06D00, toggle, radarThickness, mapThickness); } // 0x900086F371220B6F 0xDA0AF00E b323
	static void CLEAR_GPS_CUSTOM_ROUTE() { invoke<Void>(0xD06D20); } // 0xE6DE0561D9232A64 0xCF2E3E24 b323
	static void START_GPS_MULTI_ROUTE(int hudColor, BOOL routeFromPlayer, BOOL displayOnFoot) { invoke<Void>(0xD06D40, hudColor, routeFromPlayer, displayOnFoot); } // 0x3D3D15AF7BCAAF83 0xC3DCBEDB b323
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z) { invoke<Void>(0xD06D60, x, y, z); } // 0xA905192A6781C41B 0xFE485135 b323
	static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { invoke<Void>(0xD06DC0, toggle); } // 0x3DDA37128DD1ACA8 0xE87CBE4C b323
	static void CLEAR_GPS_MULTI_ROUTE() { invoke<Void>(0xD06DE0); } // 0x67EEDEA1B9BAFD94 0x0D9969E4 b323
	static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xD06DF0); } // 0xFF4FB7C8CDFA3DA7 0x0B9C7FC2 b323
	static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xD06E10, toggle); } // 0x320D0E0D936A0E9B 0xE991F733 b323
	static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xD06E30); } // 0xF2DD778C22B15BDA 0xB8359952 b323
	static void FLASH_MINIMAP_DISPLAY_WITH_COLOR(int hudColorIndex) { invoke<Void>(0xD06E40, hudColorIndex); } // 0x6B1DE27EE78E6A19 0x79A6CAF6 b323
	static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xD06E50, toggle); } // 0x6AFDFB93754950C7 0xC68D47C4 b323
	static void SET_MINIMAP_IN_SPECTATOR_MODE(BOOL toggle, Ped ped) { invoke<Void>(0xD06E70, toggle, ped); } // 0x1A5CD7752DD28CD3 0xD5BFCADB b323
	static void SET_MISSION_NAME(BOOL p0, const char* name) { invoke<Void>(0xD06EE0, p0, name); } // 0x5F28ECF5FC84772F 0x68DCAE10 b323
	static void SET_MISSION_NAME_FOR_UGC_MISSION(BOOL p0, const char* name) { invoke<Void>(0xD06F00, p0, name); } // 0xE45087D85F468BC2 0x8D9A1734 b323
	static void SET_DESCRIPTION_FOR_UGC_MISSION_EIGHT_STRINGS(BOOL p0, const char* p1, const char* p2, const char* p3, const char* p4, const char* p5, const char* p6, const char* p7, const char* p8) { invoke<Void>(0xD06F70, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x817B86108EB94E51 0xD2161E77 b323
	static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0xD06FC0, toggle); } // 0x58FADDED207897DC 0xA41C3B62 b323
	static void SET_MINIMAP_IN_PROLOGUE(BOOL toggle) { invoke<Void>(0xD06FE0, toggle); } // 0x9133955F1A2DA957 0x02F5F1D1 b323
	static void SET_MINIMAP_HIDE_FOW(BOOL toggle) { invoke<Void>(0xD07000, toggle); } // 0xF8DEE0A5600CBB93 0xD8D77733 b323
	static float GET_MINIMAP_FOW_DISCOVERY_RATIO() { return invoke<float>(0xD07020); } // 0xE0130B41D3CF4574 0xA4098ACC b323
	static BOOL GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(float x, float y, float z) { return invoke<BOOL>(0xD07040, x, y, z); } // 0x6E31B91145873922 0x65B705F6 b323
	static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float x, float y, float z) { invoke<Void>(0xD070B0, x, y, z); } // 0x0923DBF87DFF735E 0xE010F081 b323
	static void SET_MINIMAP_GOLF_COURSE(int hole) { invoke<Void>(0xD07100, hole); } // 0x71BDB63DBAF8DA59 0x5133A750 b323
	static void SET_MINIMAP_GOLF_COURSE_OFF() { invoke<Void>(0xD07110); } // 0x35EDD5B2E3FF01C0 0x20FD3E87 b323
	static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xD07120, angle); } // 0x299FAEBB108AE05B 0xDEC733E4 b323
	static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xD07140); } // 0x8183455E16C42E3A 0x742043F9 b323
	static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0xD07150, x, y); } // 0x1279E861A329E73F 0xB9632A91 b323
	static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xD07170); } // 0x3E93E06DB8EF1F30 0x5E8E6F54 b323
	static void SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(float altitude, BOOL p1, Any p2) { invoke<Void>(0xD07190, altitude, p1, p2); } // 0xD201F3FF917A506D 0x0308EDF6 b323
	static void SET_HEALTH_HUD_DISPLAY_VALUES(int health, int capacity, BOOL wasAdded) { invoke<Void>(0xD071C0, health, capacity, wasAdded); } // 0x3F5CC444DCAAA8F2 0x7FB6FB2A b323
	static void SET_MAX_HEALTH_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xD071E0, maximumValue); } // 0x975D66A0BC17064C 0xF07D8CEF b323
	static void SET_MAX_ARMOUR_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xD071F0, maximumValue); } // 0x06A320535F5F0248 0x827F14DE b323
	static void SET_BIGMAP_ACTIVE(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xD07200, toggleBigMap, showFullMap); } // 0x231C8F89D0539D8F 0x08EB83D2 b323
	static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xD07220, id); } // 0xBC4C9EA5391ECC0D 0x6214631F b323
	static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xD07260, id); } // 0xDD100EB17A94FF65 0x2B86F382 b323
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xD07290, id); } // 0xE374C498D8BADC14 0x31ABA127 b323
	static BOOL IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(int id) { return invoke<BOOL>(0xD072A0, id); } // 0x09C0403ED9A751C2 0xE8C8E535 b323
	static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xD072D0, id); } // 0x6806C51AD12B83B8 0xDB2D0762 b323
	static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xD072F0, id); } // 0x0B4DF1FA60C0E664 0x95E1546E b323
	static void HIDE_STREET_AND_CAR_NAMES_THIS_FRAME() { invoke<Void>(0xD07300); } // 0xA4DEDE28B1814289 0x52746FE1 b323
	static void RESET_RETICULE_VALUES() { invoke<Void>(0xD07310); } // 0x12782CE0A636E9F0 0xBE27AA3F b323
	static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<Void>(0xD07320, id); } // 0x450930E616475D0D 0xD15B46DA b323
	static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<Void>(0xD07330, id, x, y); } // 0xAABB1F56E2A17CED 0x2F3A0D15 b323
	static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0xD07380, id); } // 0x223CA69A8C4417FD 0x080DCED6 b323
	static void CLEAR_REMINDER_MESSAGE() { invoke<Void>(0xD07410); } // 0xB57D8DD645CFA2CF 0x5BBCC934 b323
	static int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<int>(0xD07420, worldX, worldY, worldZ, screenX, screenY); } // 0xF9904D11F1ACBEC3 0xFE9A39F8 b323
	static void OPEN_REPORTUGC_MENU() { invoke<Void>(0xD074C0); } // 0x523A590C1A3CC0D3 0x10DE5150 b323
	static void FORCE_CLOSE_REPORTUGC_MENU() { invoke<Void>(0xD074F0); } // 0xEE4C0E6DBC6F2C6F 0x67649EE0 b323
	static BOOL IS_REPORTUGC_MENU_OPEN() { return invoke<BOOL>(0xD07500); } // 0x9135584D09A3437E 0x9D2C94FA b323
	static BOOL IS_FLOATING_HELP_TEXT_ON_SCREEN(int hudIndex) { return invoke<BOOL>(0xD07520, hudIndex); } // 0x2432784ACA090DA4 0x45472FD5 b323
	static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(int hudIndex, float x, float y) { invoke<Void>(0xD075A0, hudIndex, x, y); } // 0x7679CC1BCEBE3D4C 0x198F32D7 b323
	static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(int hudIndex, float x, float y, float z) { invoke<Void>(0xD07600, hudIndex, x, y, z); } // 0x784BA7E0ECEB4178 0x93045157 b323
	static void SET_FLOATING_HELP_TEXT_TO_ENTITY(int hudIndex, Entity entity, float offsetX, float offsetY) { invoke<Void>(0xD07660, hudIndex, entity, offsetX, offsetY); } // 0xB094BC1DB4018240 0x18B012B7 b323
	static void SET_FLOATING_HELP_TEXT_STYLE(int hudIndex, int p1, int p2, int p3, int p4, int p5) { invoke<Void>(0xD07700, hudIndex, p1, p2, p3, p4, p5); } // 0x788E7FD431BD67F1 0x97852A82 b323
	static void CLEAR_FLOATING_HELP(int hudIndex, BOOL p1) { invoke<Void>(0xD07720, hudIndex, p1); } // 0x50085246ABD3FEFA 0xB181F88F b323
	static void CREATE_MP_GAMER_TAG_WITH_CREW_COLOR(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag, int r, int g, int b) { invoke<Void>(0xD07740, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag, r, g, b); } // 0x6DD05E9D83EFA4C9 0xC969F2D0 b323
	static BOOL IS_MP_GAMER_TAG_MOVIE_ACTIVE() { return invoke<BOOL>(0xD07820); } // 0x6E0EB3EB47C8D7AA 0xEFD2564A b323
	static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0xD07850, ped, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); } // 0xBFEFE3321A3F5015 0xF5CD2AA4 b323
	static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0xD07980, gamerTagId); } // 0x31698AA80E0223F8 0x3D081FE4 b323
	static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0xD079A0, gamerTagId); } // 0x4E929E7A5796FD26 0x60118951 b323
	static BOOL IS_MP_GAMER_TAG_FREE(int gamerTagId) { return invoke<BOOL>(0xD079D0, gamerTagId); } // 0x595B5178E412E199 0x63959059 b323
	static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, BOOL toggle, Any p3) { invoke<Void>(0xD07A00, gamerTagId, component, toggle, p3); } // 0x63BB75ABEDC1F6A0 0xD41DF479 b323
	static void SET_ALL_MP_GAMER_TAGS_VISIBILITY(int gamerTagId, BOOL toggle) { invoke<Void>(0xD07A30, gamerTagId, toggle); } // 0xEE76FF7E6A0166B0 0x767DED29 b323
	static void SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xD07A60, gamerTagId, toggle); } // 0xA67F9C46D612B6F1 0xB01A5434 b323
	static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int component, int hudColorIndex) { invoke<Void>(0xD07A90, gamerTagId, component, hudColorIndex); } // 0x613ED644950626AE 0x7E3AA40A b323
	static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int gamerTagId, int hudColorIndex) { invoke<Void>(0xD07AC0, gamerTagId, hudColorIndex); } // 0x3158C77A7E888AB4 0x5777EC77 b323
	static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<Void>(0xD07AF0, gamerTagId, component, alpha); } // 0xD48FE545CD46F857 0xF4418611 b323
	static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<Void>(0xD07B20, gamerTagId, wantedlvl); } // 0xCF228E2AA03099C3 0x0EBB003F b323
	static void SET_MP_GAMER_TAG_NAME(int gamerTagId, const char* string) { invoke<Void>(0xD07B50, gamerTagId, string); } // 0xDEA2B8283BAA3944 0x627A559B b323
	static BOOL IS_UPDATING_MP_GAMER_TAG_NAME_AND_CREW_DETAILS(int gamerTagId) { return invoke<BOOL>(0xD07B80, gamerTagId); } // 0xEB709A36958ABE0D 0xF11414C4 b323
	static void SET_MP_GAMER_TAG_BIG_TEXT(int gamerTagId, const char* string) { invoke<Void>(0xD07BC0, gamerTagId, string); } // 0x7B7723747CCB55B6 0x939218AB b323
	static int GET_CURRENT_WEBPAGE_ID() { return invoke<int>(0xD07BF0); } // 0x01A358D9128B7A86 0xAB5B7C18 b323
	static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xD07C00); } // 0x97D47996FC48CBAD 0x42A55B14 b323
	static int GET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { return invoke<int>(0xD07C10, flagIndex); } // 0xE3B05614DCE1D014 0xD217EE7E b323
	static BOOL IS_WARNING_MESSAGE_READY_FOR_CONTROL() { return invoke<BOOL>(0xD07C40); } // 0xAF42195A42C63BBA b323
	static void SET_WARNING_MESSAGE(const char* titleMsg, int flags, const char* promptMsg, BOOL p3, int p4, const char* p5, const char* p6, BOOL showBackground, int errorCode) { invoke<Void>(0xD07C90, titleMsg, flags, promptMsg, p3, p4, p5, p6, showBackground, errorCode); } // 0x7B1776B3B53F8D74 0xBE699BDE b323
	static void SET_WARNING_MESSAGE_WITH_HEADER(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any* showBackground, Any* p7, BOOL p8, Any p9) { invoke<Void>(0xD07D90, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, showBackground, p7, p8, p9); } // 0xDC38CC1E35B6A5D7 0x2DB9EAB5 b323
	static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any additionalIntInfo, const char* additionalTextInfoLine1, const char* additionalTextInfoLine2, BOOL showBackground, int errorCode) { invoke<Void>(0xD07DF0, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, additionalIntInfo, additionalTextInfoLine1, additionalTextInfoLine2, showBackground, errorCode); } // 0x701919482C74B5AB 0x749929D3 b323
	static BOOL SET_WARNING_MESSAGE_OPTION_ITEMS(int index, const char* name, int cash, int rp, int lvl, int colour) { return invoke<BOOL>(0xD07E60, index, name, cash, rp, lvl, colour); } // 0x0C5A80A9E096D529 b323
	static BOOL SET_WARNING_MESSAGE_OPTION_HIGHLIGHT(Any p0) { return invoke<BOOL>(0xD07EA0, p0); } // 0xDAF87174BE7454FF b323
	static void REMOVE_WARNING_MESSAGE_OPTION_ITEMS() { invoke<Void>(0xD07ED0); } // 0x6EF54AB721DC6242 b323
	static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xD07EE0); } // 0xE18B138FABC53103 0x94C834AD b323
	static void CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE() { invoke<Void>(0xD07F20); } // 0x7792424AA0EAC32E 0x2F9A309C b323
	static void CUSTOM_MINIMAP_SET_ACTIVE(BOOL toggle) { invoke<Void>(0xD07F40, toggle); } // 0x5354C5BA2EA868A4 0xE4FD20D8 b323
	static void CUSTOM_MINIMAP_SET_BLIP_OBJECT(int spriteId) { invoke<Void>(0xD07F60, spriteId); } // 0x1EAE6DD17B7A5EFA 0x13E7A5A9 b323
	static int CUSTOM_MINIMAP_CREATE_BLIP(float x, float y, float z) { return invoke<int>(0xD07F70, x, y, z); } // 0x551DF99658DB6EE8 0x786CA0A2 b323
	static void CUSTOM_MINIMAP_CLEAR_BLIPS() { invoke<Void>(0xD07FE0); } // 0x2708FC083123F9FF 0xCBEC9369 b323
	static BOOL FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<BOOL>(0xD07FF0); } // 0x1121BFA1A1A522A8 0x3F4AFB13 b323
	static void DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(BOOL toggle) { invoke<Void>(0xD08000, toggle); } // 0x82CEDC33687E1F50 0x2F28F0A6 b323
	static void DRAW_FRONTEND_BACKGROUND_THIS_FRAME() { invoke<Void>(0xD08020); } // 0x211C4EF450086857 0x801D0D86 b323
	static void DRAW_HUD_OVER_FADE_THIS_FRAME() { invoke<Void>(0xD08030); } // 0xBF4F34A85CA2970C 0x317775DF b323
	static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL togglePause, int component) { invoke<Void>(0xD08040, menuhash, togglePause, component); } // 0xEF01D36B9C9D0C7B 0x01D83872 b323
	static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0xD08090, menuHash, p1); } // 0x10706DC6AD2D49C0 0xB07DAF98 b323
	static Hash GET_CURRENT_FRONTEND_MENU_VERSION() { return invoke<Hash>(0xD080D0); } // 0x2309595AD6145265 0x33D6868F b323
	static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0xD08100, toggle); } // 0xDF47FC56C71569CF 0x1DCD878E b323
	static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xD08120); } // 0x6D3465A73092F0E6 0xD86A029E b323
	static void SUPPRESS_FRONTEND_RENDERING_THIS_FRAME() { invoke<Void>(0xD08130); } // 0xBA751764F0821256 0x7F349900 b323
	static void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xD08140); } // 0xCC3FDDED67BCFC63 0x630CD8EE b323
	static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0xD08150, active); } // 0x745711A75AB09277 0x81E1AD32 b323
	static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xD08170); } // 0xB0034A223497FFCB 0xD3600591 b323
	static BOOL IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN() { return invoke<BOOL>(0xD081A0); } // 0x2F057596F2BD0061 0xC85C4487 b323
	static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xD081B0); } // 0x272ACD84970869C5 0x92F50134 b323
	static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xD081D0); } // 0x1C491717107431C7 0x3C4CF4D9 b323
	static void FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(const char* p0) { invoke<Void>(0xD081F0, p0); } // 0x2162C446DFDF38FD 0x2DFD35C7 b323
	static void PAUSE_MENUCEPTION_GO_DEEPER(int page) { invoke<Void>(0xD08200, page); } // 0x77F16B447824DA6C 0x0A89336C b323
	static void PAUSE_MENUCEPTION_THE_KICK() { invoke<Void>(0xD08210); } // 0xCDCA26E80FAECB8F 0xC84BE309 b323
	static void PAUSE_MENU_ACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xD08220, contextHash); } // 0xDD564BDD0472C936 0x9FE8FD5E b323
	static void PAUSE_MENU_DEACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xD08260, contextHash); } // 0x444D8CF241EC25C5 0x0029046E b323
	static BOOL PAUSE_MENU_IS_CONTEXT_ACTIVE(Hash contextHash) { return invoke<BOOL>(0xD082A0, contextHash); } // 0x84698AB38D0C6636 0xC51BC42F b323
	static BOOL PAUSE_MENU_IS_CONTEXT_MENU_ACTIVE() { return invoke<BOOL>(0xD082F0); } // 0x2A25ADC48F87841F 0x016D7AF9 b323
	static void PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(int p0) { invoke<Void>(0xD08370, p0); } // 0x4895BDEA16E7C080 0x15B24768 b323
	static void PAUSE_MENU_SET_BUSY_SPINNER(BOOL p0, int position, int spinnerIndex) { invoke<Void>(0xD08380, p0, position, spinnerIndex); } // 0xC78E239AC5B2DDB9 0x6C67131A b323
	static void PAUSE_MENU_SET_WARN_ON_TAB_CHANGE(BOOL p0) { invoke<Void>(0xD083C0, p0); } // 0xF06EBB91A81E09E3 0x11D09737 b323
	static BOOL IS_FRONTEND_READY_FOR_CONTROL() { return invoke<BOOL>(0xD083E0); } // 0x3BAB9A4E4F2FF5C7 0xD3BF3ABD b323
	static void TAKE_CONTROL_OF_FRONTEND() { invoke<Void>(0xD08420); } // 0xEC9264727EEC0F28 0xC06B763D b323
	static void RELEASE_CONTROL_OF_FRONTEND() { invoke<Void>(0xD08430); } // 0x14621BB1DF14E2B2 0xB9392CE7 b323
	static BOOL CODE_WANTS_SCRIPT_TO_TAKE_CONTROL() { return invoke<BOOL>(0xD08440); } // 0x66E7CB63C97B7D20 0x92DAFA78 b323
	static int GET_SCREEN_CODE_WANTS_SCRIPT_TO_CONTROL() { return invoke<int>(0xD08460); } // 0x593FEAE1F73392D4 0x22CA9F2A b323
	static BOOL IS_NAVIGATING_MENU_CONTENT() { return invoke<BOOL>(0xD08480); } // 0x4E3CD0EF8A489541 0xDA7951A2 b323
	static BOOL HAS_MENU_TRIGGER_EVENT_OCCURRED() { return invoke<BOOL>(0xD08490); } // 0xF284AC67940C6812 0x7D95AFFF b323
	static BOOL HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED() { return invoke<BOOL>(0xD084A0); } // 0x2E22FEFA0100275E 0x96863460 b323
	static void GET_MENU_TRIGGER_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xD084B0, lastItemMenuId, selectedItemUniqueId); } // 0x36C1451A88A09630 0x8543AAC8 b323
	static void GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xD084E0, lastItemMenuId, selectedItemMenuId, selectedItemUniqueId); } // 0x7E17BE53E1AAABAF 0x6025AA2F b323
	static BOOL GET_PM_PLAYER_CREW_COLOR(int* r, int* g, int* b) { return invoke<BOOL>(0xD08530, r, g, b); } // 0xA238192F33110615 0x46794EB2 b323
	static BOOL GET_MENU_PED_INT_STAT(Any p0, Any* p1) { return invoke<BOOL>(0xD085B0, p0, p1); } // 0xEF4CED81CEBEDC6D 0x4370999E b323
	static BOOL GET_MENU_PED_MASKED_INT_STAT(Hash statHash, int* outValue, int mask, BOOL p3) { return invoke<BOOL>(0xD085E0, statHash, outValue, mask, p3); } // 0x90A6526CF0381030 0xD6CC4766 b323
	static BOOL GET_MENU_PED_FLOAT_STAT(Hash statHash, float* outValue) { return invoke<BOOL>(0xD08680, statHash, outValue); } // 0x5FBD7095FE7AE57F 0x51972B04 b323
	static BOOL GET_MENU_PED_BOOL_STAT(Hash statHash, BOOL* outValue) { return invoke<BOOL>(0xD086B0, statHash, outValue); } // 0x052991E59076E4E4 0xD43BB56D b323
	static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0xD086E0); } // 0x5E62BE5DC58E9E06 0x28058ACF b323
	static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0xD08740, ped, p1); } // 0xAC0BFBDC3BE00E14 0x2AD2C9CE b323
	static void SET_PAUSE_MENU_PED_LIGHTING(BOOL state) { invoke<Void>(0xD08750, state); } // 0x3CA6050692BC61B0 0x127310EB b323
	static void SET_PAUSE_MENU_PED_SLEEP_STATE(BOOL state) { invoke<Void>(0xD087B0, state); } // 0xECF128344E9FF9F1 0x8F45D327 b323
	static void OPEN_ONLINE_POLICIES_MENU() { invoke<Void>(0xD08800); } // 0x805D7CBB36FD6C4C 0x19FCBBB2 b323
	static BOOL ARE_ONLINE_POLICIES_UP_TO_DATE() { return invoke<BOOL>(0xD08810); } // 0xF13FE2A80C05C561 0x850690FF b323
	static BOOL IS_ONLINE_POLICIES_MENU_ACTIVE() { return invoke<BOOL>(0xD08830); } // 0x6F72CD94F7B5B68C 0x9D4934F4 b323
	static void OPEN_SOCIAL_CLUB_MENU(Hash menu) { invoke<Void>(0xD08840, menu); } // 0x75D3691713C3B05A 0x57218529 b323
	static void CLOSE_SOCIAL_CLUB_MENU() { invoke<Void>(0xD08850); } // 0xD2B32BE3FC1626C6 0x5F86AA39 b323
	static void SET_SOCIAL_CLUB_TOUR(const char* name) { invoke<Void>(0xD08870, name); } // 0x9E778248D6685FE0 0x7AD67C95 b323
	static BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0xD088A0); } // 0xC406BE343FC4B9AF 0xD4DA14EF b323
	static void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(BOOL toggle) { invoke<Void>(0xD088B0, toggle); } // 0xCEF214315D276FD1 0xFF06772A b323
	static void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { invoke<Void>(0xD088D0, ped, hasCone); } // 0xD30C50DF888D58B5 0x96C4C4DD b323
	static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0xD08900, ped); } // 0x15B8ECF844EE67ED 0x3BE1257F b323
	static void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { invoke<Void>(0xD08930, ped, gangId); } // 0xE52B8E7F85D39A08 0xD8E31B1A b323
	static void SET_PED_AI_BLIP_HAS_CONE(Ped ped, BOOL toggle) { invoke<Void>(0xD08940, ped, toggle); } // 0x3EED80DFF7325CAA 0x872C2CFB b323
	static void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { invoke<Void>(0xD08960, ped, toggle); } // 0x0C4BBF625CA98C4E 0xFFDF46F0 b323
	static void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { invoke<Void>(0xD08980, ped, range); } // 0x97C65887D4B37FA9 0xF9DC2AF7 b323
	static Blip GET_AI_PED_PED_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xD08990, ped); } // 0x7CD934010E115C2C 0x06349065 b323
	static Blip GET_AI_PED_VEHICLE_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xD089B0, ped); } // 0x56176892826A4FE8 0xCA52CF43 b323
}

namespace INTERIOR
{
	static int GET_INTERIOR_GROUP_ID(Interior interior) { return invoke<int>(0xD0A640, interior); } // 0xE4A84ABF135EF91A 0x09D6376F b323
	static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z) { return invoke<Vector3>(0xD0A680, interior, x, y, z); } // 0x9E3B3E6D66F6E22F 0x7D8F26A1 b323
	static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xD0A750); } // 0xBC72B5D7A1CBD54D 0x55226C13 b323
	static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0xD0A760, interior); } // 0x26B0E73D7EAAF4D3 0x39C0B635 b323
	static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xD0A780, entity); } // 0xB365FC0C4E27FFA7 0x7DDADB92 b323
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { invoke<Void>(0xD0A810, entity, interior, roomHashKey); } // 0x52923C4710DD9907 0x10BD4435 b323
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xD0A830, entity); } // 0x47C2A06D4F5F424B 0xE4ACF8C3 b323
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xD0A850, entity); } // 0x399685DB942336BC 0x91EA80EF b323
	static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0xD0A8E0, entity); } // 0x2107BA504071A6BB 0x5C644614 b323
	static void RETAIN_ENTITY_IN_INTERIOR(Entity entity, Interior interior) { invoke<Void>(0xD0A900, entity, interior); } // 0x82EBB79E258FA2B7 0xE645E162 b323
	static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { invoke<Void>(0xD0A960, interiorID, roomHashKey); } // 0x920D853F3E17F1DA 0xD79803B5 b323
	static void SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(const char* roomName) { invoke<Void>(0xD0A970, roomName); } // 0xAF348AFCB575A441 0x1F6B4B13 b323
	static void SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(Hash roomHashKey) { invoke<Void>(0xD0A980, roomHashKey); } // 0x405DC2AEF6AF95B9 0x0E9529CC b323
	static Hash GET_ROOM_KEY_FOR_GAME_VIEWPORT() { return invoke<Hash>(0xD0AAB0); } // 0xA6575914D2A0B450 0x4FF3D3F5 b323
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoke<Void>(0xD0AB10); } // 0x23B59D8912F94246 0x617DC75D b323
	static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0xD0ABC0, x, y, z); } // 0xB0F7F8663821D9C3 0xA17FBF37 b323
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) { invoke<Void>(0xD0AC30, pickup, roomName); } // 0x3F6167F351168730 0xA2A73564 b323
	static void PIN_INTERIOR_IN_MEMORY(Interior interior) { invoke<Void>(0xD0AC80, interior); } // 0x2CA429C029CCF247 0x3ADA414E b323
	static void UNPIN_INTERIOR(Interior interior) { invoke<Void>(0xD0ACF0, interior); } // 0x261CCE7EED010641 0xFCFF792A b323
	static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0xD0AD30, interior); } // 0x6726BDCCC1932F0E 0xE1EF6450 b323
	static BOOL SET_INTERIOR_IN_USE(Interior interior) { return invoke<BOOL>(0xD0AD80, interior); } // 0x4C2330E61D3DEB56 b323
	static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0xD0ADC0, x, y, z, interiorType); } // 0x05B7A89BD78797FC 0x96525B06 b323
	static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0xD0AE30, x, y, z); } // 0xEEA5AC2EDA7C33E8 0x7762249C b323
	static Interior GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<Interior>(0xD0AEC0, x, y, z); } // 0xEC4CF9FCB29A4424 0x7ED33DC1 b323
	static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xD0AF70, interior, entitySetName); } // 0x55E86AF2712B36A1 0xC80A5DDF b323
	static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xD0AFF0, interior, entitySetName); } // 0x420BD37289EEE162 0xDBA768A1 b323
	static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0xD0B0D0, interior, entitySetName); } // 0x35F7DD45E8C0A16D 0x39A3CC6F b323
	static void REFRESH_INTERIOR(Interior interior) { invoke<Void>(0xD0B160, interior); } // 0x41F37C3427C75AE0 0x9A29ACE6 b323
	static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xD0B1D0, mapObjectHash); } // 0xA97F257D0151A6AB 0x1F375B4C b323
	static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xD0B200, interior, toggle); } // 0x6170941419D7D8EC 0x093ADEA5 b323
	static BOOL IS_INTERIOR_DISABLED(Interior interior) { return invoke<BOOL>(0xD0B290, interior); } // 0xBC5115A5A939DD15 0x81F34C71 b323
	static void CAP_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xD0B2D0, interior, toggle); } // 0xD9175F941610DB54 0x34E735A6 b323
	static BOOL IS_INTERIOR_CAPPED(Interior interior) { return invoke<BOOL>(0xD0B360, interior); } // 0x92BAC8ACF88CEC26 0x18B17C80 b323
	static void DISABLE_METRO_SYSTEM(BOOL toggle) { invoke<Void>(0xD0B3A0, toggle); } // 0x9E6542F0CE8E70A3 0x5EF9C5C2 b323
}

namespace ITEMSET
{
	static ScrHandle CREATE_ITEMSET(BOOL p0) { return invoke<ScrHandle>(0xD0B770, p0); } // 0x35AD299F50D91B24 0x0A113B2C b323
	static void DESTROY_ITEMSET(ScrHandle itemset) { invoke<Void>(0xD0B7F0, itemset); } // 0xDE18220B1C183EDA 0x83CE1A4C b323
	static BOOL IS_ITEMSET_VALID(ScrHandle itemset) { return invoke<BOOL>(0xD0B830, itemset); } // 0xB1B1EA596344DFAB 0xD201FC29 b323
	static BOOL ADD_TO_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xD0B870, item, itemset); } // 0xE3945201F14637DD 0x6B0FE61B b323
	static void REMOVE_FROM_ITEMSET(ScrHandle item, ScrHandle itemset) { invoke<Void>(0xD0B8E0, item, itemset); } // 0x25E68244B0177686 0xA9565228 b323
	static int GET_ITEMSET_SIZE(ScrHandle itemset) { return invoke<int>(0xD0B940, itemset); } // 0xD9127E83ABF7C631 0x2B31F41A b323
	static ScrHandle GET_INDEXED_ITEM_IN_ITEMSET(int index, ScrHandle itemset) { return invoke<ScrHandle>(0xD0B990, index, itemset); } // 0x7A197E2521EE2BAB 0x3F712874 b323
	static BOOL IS_IN_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xD0B9E0, item, itemset); } // 0x2D0FC594D1E9C107 0x0D4B9730 b323
	static void CLEAN_ITEMSET(ScrHandle itemset) { invoke<Void>(0xD0BA50, itemset); } // 0x41BC0D722FC04221 0x919A4858 b323
}

namespace LOADINGSCREEN
{
	static BOOL LOBBY_AUTO_MULTIPLAYER_MENU() { return invoke<BOOL>(0xD0BC90); } // 0xF2CA003F167E21D2 0x106C8317 b323
	static BOOL LOBBY_AUTO_MULTIPLAYER_FREEMODE() { return invoke<BOOL>(0xD0BCA0); } // 0xEF7D17BC6C85264C 0xD87F3A9E b323
	static void LOBBY_SET_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xD0BCE0, toggle); } // 0xB0C56BD3D808D863 0xC0B971EA b323
	static BOOL LOBBY_AUTO_MULTIPLAYER_EVENT() { return invoke<BOOL>(0xD0BD00); } // 0x8AA464D4E0F6ACCD 0x94BCAC7C b323
	static void LOBBY_SET_AUTO_MULTIPLAYER_EVENT(BOOL toggle) { invoke<Void>(0xD0BD20, toggle); } // 0xFC309E94546FCDB5 0x7D90EEE5 b323
	static BOOL LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB() { return invoke<BOOL>(0xD0BD40); } // 0xC6DC823253FBB366 0x734CFEDA b323
	static void LOBBY_SET_AUTO_MP_RANDOM_JOB(BOOL toggle) { invoke<Void>(0xD0BD60, toggle); } // 0xC7E7181C09F33B69 0x8C227332 b323
	static void SHUTDOWN_SESSION_CLEARS_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xD0BD80, toggle); } // 0xFA1E0E893D915215 0x5C350D78 b323
}

namespace LOCALIZATION
{
	static int GET_CURRENT_LANGUAGE() { return invoke<int>(0xD0BE90); } // 0x2BDD44CC428A7EAE 0x761BE00B b323
	static int LOCALIZATION_GET_SYSTEM_DATE_TYPE() { return invoke<int>(0xD0BEC0); } // 0xA8AE43AEC1A61314 b323
}

namespace MISC
{
	static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xD15520); } // 0x8B3CA62B1EF19B62 0x4E9CA30A b323
	static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke<int>(0xD15550, stackSize); } // 0xFEAD16FC8F9DFC0F 0x11A178B8 b323
	static void SET_RANDOM_SEED(int seed) { invoke<Void>(0xD15570, seed); } // 0x444D98F98C11F3EC 0xDB3FEB5C b323
	static void SET_TIME_SCALE(float timeScale) { invoke<Void>(0xD155A0, timeScale); } // 0x1D408577D440E81E 0xA7F84694 b323
	static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0xD155E0, toggle); } // 0xC4301E5121A0ED73 0x57592D52 b323
	static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xD15630); } // 0xA33CDCCDA663159E 0x95115F97 b323
	static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { invoke<Void>(0xD15650, toggle); } // 0x971927086CFD2158 0xA77F31E8 b323
	static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0xD156B0); } // 0xD2D57F1D764117B1 0x794CC92C b323
	static const char* GET_CONTENT_TO_LOAD() { return invoke<const char*>(0xD156C0); } // 0x24DA7D7667FD7B09 b323
	static void ACTIVITY_FEED_CREATE(const char* p0, const char* p1) { invoke<Void>(0xD15710, p0, p1); } // 0x4DCDF92BF64236CD b323
	static void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xD15720, p0); } // 0x31125FD509D9043F b323
	static void ACTIVITY_FEED_ADD_LITERAL_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xD15730, p0); } // 0xEBD3205A207939ED b323
	static void ACTIVITY_FEED_ADD_INT_TO_CAPTION(Any p0) { invoke<Void>(0xD15740, p0); } // 0x97E7E2C04245115B b323
	static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(const char* p0, const char* p1) { invoke<Void>(0xD15760, p0, p1); } // 0xEB078CA2B5E82ADD b323
	static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(const char* p0) { invoke<Void>(0xD15770, p0); } // 0x703CC7F60CBB2B57 b323
	static void ACTIVITY_FEED_POST() { invoke<Void>(0xD15790); } // 0x8951EB9C6906D3C8 b323
	static void ACTIVITY_FEED_ONLINE_PLAYED_WITH_POST(const char* p0) { invoke<Void>(0xD157B0, p0); } // 0xBA4B8D83BDC75551 b323
	static void SET_SCRIPT_HIGH_PRIO(BOOL toggle) { invoke<Void>(0xD157C0, toggle); } // 0x65D2EBB47E1CEC21 b323
	static void SET_THIS_IS_A_TRIGGER_SCRIPT(BOOL toggle) { invoke<Void>(0xD157F0, toggle); } // 0x6F2135B6129620C1 0x8B2DE971 b323
	static void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(const char* p0) { invoke<Void>(0xD15820, p0); } // 0x8D74E26F54B4E5C3 0xE77199F7 b323
	static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xD15830); } // 0x564B884A05EC45A3 0xA8171E9E b323
	static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xD15850); } // 0x711327CD09C8F162 0x353E8056 b323
	static BOOL IS_PREV_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xD15870, weatherType); } // 0x44F28F86433B10A9 0x250ADA61 b323
	static BOOL IS_NEXT_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xD158C0, weatherType); } // 0x2FAA3A30BEC0F25D 0x99CB167F b323
	static void SET_WEATHER_TYPE_PERSIST(const char* weatherType) { invoke<Void>(0xD15910, weatherType); } // 0x704983DF373B198F 0xC6C04C75 b323
	static void SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) { invoke<Void>(0xD15950, weatherType); } // 0xED712CA327900C8A 0xC869FE97 b323
	static void SET_WEATHER_TYPE_NOW(const char* weatherType) { invoke<Void>(0xD159B0, weatherType); } // 0x29B487C359E19889 0x361E9EAC b323
	static void SET_WEATHER_TYPE_OVERTIME_PERSIST(const char* weatherType, float time) { invoke<Void>(0xD15A00, weatherType, time); } // 0xFB5045B7C42B75BF 0x386F0D25 b323
	static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xD15A60); } // 0x8B05F884CF7E8020 0xE7AA1BC9 b323
	static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xD15A80); } // 0xCCC39339BEF76CF5 0x6AB757D8 b323
	static void GET_CURR_WEATHER_STATE(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0xD15A90, weatherType1, weatherType2, percentWeather2); } // 0xF3BBE884A14BB413 0x9A5C1D56 b323
	static void SET_CURR_WEATHER_STATE(Hash weatherType1, Hash weatherType2, float percentWeather2) { invoke<Void>(0xD15AE0, weatherType1, weatherType2, percentWeather2); } // 0x578C752848ECFA0C 0x5CA74040 b323
	static void SET_OVERRIDE_WEATHER(const char* weatherType) { invoke<Void>(0xD15B70, weatherType); } // 0xA43D5C6FE51ADBEF 0xD9082BB5 b323
	static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xD15BB0); } // 0x338D2E3477711050 0x7740EA4E b323
	static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xD15BC0, amplitude); } // 0xB8F87EAD7533B176 0x625181DC b323
	static void WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xD15BE0, minAmplitude); } // 0xC3EAD29AB273ECE8 0xBEBBFDC8 b323
	static void WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xD15C00, maxAmplitude); } // 0xA7A1127490312C36 0x6926AB03 b323
	static void WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xD15C20, minAmplitude); } // 0x31727907B2C43C55 0xD447439D b323
	static void WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xD15C40, amplitude); } // 0x405591EC8FD9096D 0x584E9C59 b323
	static void WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xD15C60, minAmplitude); } // 0xF751B16FB32ABC1D 0x5656D578 b323
	static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xD15C80, maxAmplitude); } // 0xB3E6360DDE733E82 0x0DE40C28 b323
	static void WATER_OVERRIDE_SET_RIPPLEBUMPINESS(float bumpiness) { invoke<Void>(0xD15CA0, bumpiness); } // 0x7C9C0B1EEB1F9072 0x98C9138B b323
	static void WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(float minBumpiness) { invoke<Void>(0xD15CC0, minBumpiness); } // 0x6216B116083A7CB4 0xFB1A9CDE b323
	static void WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(float maxBumpiness) { invoke<Void>(0xD15CE0, maxBumpiness); } // 0x9F5E6BB6B34540DA 0x1C0CAE89 b323
	static void WATER_OVERRIDE_SET_RIPPLEDISTURB(float disturb) { invoke<Void>(0xD15D00, disturb); } // 0xB9854DFDE0D833D6 0x4671AC2E b323
	static void WATER_OVERRIDE_SET_STRENGTH(float strength) { invoke<Void>(0xD15D20, strength); } // 0xC54A08C85AE4D410 0xDA02F415 b323
	static void WATER_OVERRIDE_FADE_IN(float p0) { invoke<Void>(0xD15D40, p0); } // 0xA8434F1DFF41D6E7 0x5F3DDEC0 b323
	static void WATER_OVERRIDE_FADE_OUT(float p0) { invoke<Void>(0xD15D60, p0); } // 0xC3C221ADDDE31A11 0x63A89684 b323
	static void SET_WIND(float speed) { invoke<Void>(0xD15D80, speed); } // 0xAC3A74E8384A9919 0xC6294698 b323
	static void SET_WIND_SPEED(float speed) { invoke<Void>(0xD15DA0, speed); } // 0xEE09ECEDBABE47FC 0x45705F94 b323
	static float GET_WIND_SPEED() { return invoke<float>(0xD15DD0); } // 0xA8CF1CC0AFCD3F12 0x098F0F3C b323
	static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0xD15DF0, direction); } // 0xEB0F4468467B4528 0x381AEEE9 b323
	static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0xD15E10); } // 0x1F400FEF721170DA 0x89499A0D b323
	static void SET_RAIN(float intensity) { invoke<Void>(0xD15E80, intensity); } // 0x643E26EA6E024D92 b323
	static float GET_RAIN_LEVEL() { return invoke<float>(0xD15EA0); } // 0x96695E368AD855F3 0xC9F67F28 b323
	static float GET_SNOW_LEVEL() { return invoke<float>(0xD15EC0); } // 0xC5868A966E5BE3AE 0x1B09184F b323
	static void FORCE_LIGHTNING_FLASH() { invoke<Void>(0xD15EE0); } // 0xF6062E089251C898 0xDF38165E b323
	static void SET_CLOUD_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xD15EF0, p0); } // 0x02DEAAC8F8EA7FE7 b323
	static void PRELOAD_CLOUD_HAT(const char* name) { invoke<Void>(0xD15F40, name); } // 0x11B56FBBF7224868 0x8727A4C5 b323
	static void LOAD_CLOUD_HAT(const char* name, float transitionTime) { invoke<Void>(0xD15F60, name, transitionTime); } // 0xFC4842A34657BFCB 0xED88FC61 b323
	static void UNLOAD_CLOUD_HAT(const char* name, float p1) { invoke<Void>(0xD15F80, name, p1); } // 0xA74802FB8D0B7814 0xC9FA6E07 b323
	static void UNLOAD_ALL_CLOUD_HATS() { invoke<Void>(0xD15FA0); } // 0x957E790EA1727B64 0x2D7787BC b323
	static int GET_GAME_TIMER() { return invoke<int>(0xD15FB0); } // 0x9CD27B0045628463 0xA4EA0691 b323
	static float GET_FRAME_TIME() { return invoke<float>(0xD15FC0); } // 0x15C40837039FFAF7 0x96374262 b323
	static float GET_SYSTEM_TIME_STEP() { return invoke<float>(0xD15FE0); } // 0xE599A503B3837E1B b323
	static int GET_FRAME_COUNT() { return invoke<int>(0xD16000); } // 0xFC8202EFC642E6F2 0xB477A015 b323
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xD16010, startRange, endRange); } // 0x313CE5879CEB6FCD 0x0562C4D0 b323
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xD16070, startRange, endRange); } // 0xD53343AA4FB7DD28 0x4051115B b323
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL ignoreWater, BOOL p5) { return invoke<BOOL>(0xD160C0, x, y, z, groundZ, ignoreWater, p5); } // 0xC906A7DAB05C8D2B 0xA1BFD5E0 b323
	static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, Vector3* normal) { return invoke<BOOL>(0xD16180, x, y, z, groundZ, normal); } // 0x8BDC7BFC57A81E76 0x64D91CED b323
	static float ASIN(float p0) { return invoke<float>(0xD16280, p0); } // 0xC843060B5765DCE7 0x998E5CAD b323
	static float ACOS(float p0) { return invoke<float>(0xD162D0, p0); } // 0x1D08B970013C34B6 0xF4038776 b323
	static float TAN(float p0) { return invoke<float>(0xD16320, p0); } // 0x632106CC96E82E91 0xD320CE5E b323
	static float ATAN(float p0) { return invoke<float>(0xD16350, p0); } // 0xA9D1795CD5043663 0x7A03CC8E b323
	static float ATAN2(float p0, float p1) { return invoke<float>(0xD16390, p0, p1); } // 0x8927CBF9D22261A4 0x2508AC81 b323
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xD163D0, x1, y1, z1, x2, y2, z2, useZ); } // 0xF1B760881820C952 0xF698765E b323
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0xD16430, x1, y1, x2, y2); } // 0x186FC4BE848E1C92 0xDBF75E58 b323
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xD164F0, dx, dy); } // 0x2FFB6B224F4B2926 0xD209D52B b323
	static float GET_RATIO_OF_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<float>(0xD16570, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); } // 0x7F8F6405F4777AF6 0x89459F0A b323
	static Vector3 GET_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<Vector3>(0xD16690, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); } // 0x21C235BC64831E5A 0xCAECF37E b323
	static BOOL GET_LINE_PLANE_INTERSECTION(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0xD167E0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF56DFB7B61BE7276 0xC6CC812C b323
	static void SET_BIT(int* address, int offset) { invoke<Void>(0xD168C0, address, offset); } // 0x933D6A9EEC1BACD0 0x4EFE7E6B b323
	static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0xD168E0, address, offset); } // 0xE80492A9AC099A93 0x8BC9E618 b323
	static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0xD16900, string); } // 0xD24D37CC275948CC 0x98EFF6F1 b323
	static void SLERP_NEAR_QUATERNION(float t, float x, float y, float z, float w, float x1, float y1, float z1, float w1, float* outX, float* outY, float* outZ, float* outW) { invoke<Void>(0xD16930, t, x, y, z, w, x1, y1, z1, w1, outX, outY, outZ, outW); } // 0xF2F6A2FA49278625 0x87B92190 b323
	static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xD16990, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xA61B4DF533DCB56E 0xC013972F b323
	static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL checkVehicles, BOOL checkPeds, BOOL p7, BOOL p8, Entity ignoreEntity, BOOL p10) { return invoke<BOOL>(0xD16B70, x, y, z, range, p4, checkVehicles, checkPeds, p7, p8, ignoreEntity, p10); } // 0xADCDE75E1C60F32D 0x452E8D9E b323
	static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xD16BF0, p0, p1, p2, p3, p4, p5, p6); } // 0xE54E209C35FFA18D 0xC161558D b323
	static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0xD16D90, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); } // 0xA56F01F3765B93A0 0x854E9AB8 b323
	static void CLEAR_AREA_LEAVE_VEHICLE_HEALTH(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xD16DD0, x, y, z, radius, p4, p5, p6, p7); } // 0x957838AAF91BD12D 0x20E4FFD9 b323
	static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, Any p10) { invoke<Void>(0xD16E10, x, y, z, radius, p4, p5, p6, p7, p8, p9, p10); } // 0x01C7B9B38428AEB6 0x63320F3C b323
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xD16E60, x1, y1, z1, x2, y2, z2, width, p7, p8, p9, p10, p11, p12, p13); } // 0x11DB3500F042A8AA 0xF11A3018 b323
	static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xD16F20, x, y, z, radius, flags); } // 0xDD9B9B385AAC7F5B 0xBB720FE7 b323
	static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xD16F40, x, y, z, radius, flags); } // 0xBE31FD6CE464AC59 0x25BE7FA8 b323
	static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xD16F60, x, y, z, radius, flags); } // 0x04F8FC8FCF58F88D 0x95C53824 b323
	static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<Void>(0xD16F80, x, y, z, radius, flags); } // 0x0A1CB9094635D1A6 0x18DB5434 b323
	static void SET_SAVE_MENU_ACTIVE(BOOL ignoreVehicle) { invoke<Void>(0xD16FA0, ignoreVehicle); } // 0xC9BF75D28165FF77 0xF5CCF164 b323
	static int GET_STATUS_OF_MANUAL_SAVE() { return invoke<int>(0xD17080); } // 0x397BAA01068BAA96 0x39771F21 b323
	static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0xD17090, toggle); } // 0xB938B7E6D3C0620C 0xEC2A0ECF b323
	static void SET_CREDITS_FADE_OUT_WITH_SCREEN(BOOL toggle) { invoke<Void>(0xD170B0, toggle); } // 0xB51B9AB9EF81868C 0x75B06B5A b323
	static BOOL HAVE_CREDITS_REACHED_END() { return invoke<BOOL>(0xD170D0); } // 0x075F1D57402C93BA 0x2569C9A7 b323
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) { invoke<Void>(0xD170E0, scriptName); } // 0x9DC711BC69C548DF 0x9F861FD4 b323
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xD17120); } // 0x9243BAC96D64C050 0x878486CE b323
	static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0xD17140, x, y, z, p3, p4); } // 0x1F464EF988465A81 0x4F3E3104 b323
	static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0xD172A0, hospitalIndex, toggle); } // 0xC8535819C450EBA8 0x09F49C72 b323
	static int ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<int>(0xD172C0, p0, p1, p2, p3, p4); } // 0x452736765B31FC4B 0xE96C29FE b323
	static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xD17420, policeIndex, toggle); } // 0x23285DED6EBD7EA3 0x0A280324 b323
	static void SET_RESTART_COORD_OVERRIDE(float x, float y, float z, float heading) { invoke<Void>(0xD17440, x, y, z, heading); } // 0x706B5EDCAA7FA663 b323
	static void CLEAR_RESTART_COORD_OVERRIDE() { invoke<Void>(0xD17560); } // 0xA2716D40842EAF79 b323
	static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { invoke<Void>(0xD17570, toggle); } // 0x2C2B3493FBF51C71 0x296574AE b323
	static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0xD17590, toggle); } // 0x21FFB63D8C615361 0xDA13A4B6 b323
	static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0xD175B0, toggle); } // 0x4A18E01DF2C87B86 0xC9F6F0BC b323
	static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0xD175D0, toggle); } // 0x1E0B4DC0D990A4E7 0xCB074B9D b323
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xD175F0, toggle); } // 0xDA66D2796BA33F12 0xACDE6985 b323
	static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xD17610, toggle); } // 0xF3D78F59DFE18D79 0x6E00EB0B b323
	static int REGISTER_SAVE_HOUSE(float x, float y, float z, float p3, const char* p4, Any p5, Any p6) { return invoke<int>(0xD17630, x, y, z, p3, p4, p5, p6); } // 0xC0714D0A7EEECA54 0x39C1849A b323
	static void SET_SAVE_HOUSE(int savehouseHandle, BOOL p1, BOOL p2) { invoke<Void>(0xD176B0, savehouseHandle, p1, p2); } // 0x4F548CABEAE553BC 0xC3240BB4 b323
	static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xD176D0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1162EA8AE9D24EEA 0x47436C12 b323
	static BOOL GET_SAVE_HOUSE_DETAILS_AFTER_SUCCESSFUL_LOAD(Vector3* p0, float* p1, BOOL* fadeInAfterLoad, BOOL* p3) { return invoke<BOOL>(0xD177B0, p0, p1, fadeInAfterLoad, p3); } // 0xA4A0065E39C9F25C 0xC4D71AB4 b323
	static void DO_AUTO_SAVE() { invoke<Void>(0xD17880); } // 0x50EEAAD86232EE55 0x54C44B1A b323
	static BOOL GET_IS_AUTO_SAVE_OFF() { return invoke<BOOL>(0xD17900); } // 0x6E04F06094C87047 0xA8546914 b323
	static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xD17920); } // 0x69240733738C19A0 0x36F75399 b323
	static BOOL HAS_CODE_REQUESTED_AUTOSAVE() { return invoke<BOOL>(0xD17950); } // 0x2107A3773771186D 0x78350773 b323
	static void CLEAR_CODE_REQUESTED_AUTOSAVE() { invoke<Void>(0xD17960); } // 0x06462A961E94B67C 0x5A45B11A b323
	static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0xD17970, p0, p1); } // 0xE0E500246FF73D66 0x17F4F44D b323
	static void ADD_REPLAY_STAT_VALUE(Any value) { invoke<Void>(0xD17990, value); } // 0x69FE6DC87BD2A5E9 0x81216EE0 b323
	static void END_REPLAY_STATS() { invoke<Void>(0xD179B0); } // 0xA23E821FBDF8A5F2 0xCB570185 b323
	static BOOL HAVE_REPLAY_STATS_BEEN_STORED() { return invoke<BOOL>(0xD179C0); } // 0xD642319C54AADEB6 0xC58250F1 b323
	static int GET_REPLAY_STAT_MISSION_ID() { return invoke<int>(0xD179D0); } // 0x5B1F2E327B6B6FE1 0x50C39926 b323
	static int GET_REPLAY_STAT_MISSION_TYPE() { return invoke<int>(0xD179E0); } // 0x2B626A0150E4D449 0x710E5D1E b323
	static int GET_REPLAY_STAT_COUNT() { return invoke<int>(0xD179F0); } // 0xDC9274A7EF6B2867 0xC7BD1AF0 b323
	static int GET_REPLAY_STAT_AT_INDEX(int index) { return invoke<int>(0xD17A20, index); } // 0x8098C8D6597AAE18 0x22BE2423 b323
	static void CLEAR_REPLAY_STATS() { invoke<Void>(0xD17A50); } // 0x1B1AB132A16FDA55 0xC47DFF02 b323
	static BOOL QUEUE_MISSION_REPEAT_LOAD() { return invoke<BOOL>(0xD17A60); } // 0x72DE52178C291CB5 0xF62B3C48 b323
	static BOOL QUEUE_MISSION_REPEAT_SAVE() { return invoke<BOOL>(0xD17A80); } // 0x44A0BDC559B35F6E 0x3589452B b323
	static int GET_STATUS_OF_MISSION_REPEAT_SAVE() { return invoke<int>(0xD17AA0); } // 0x2B5E102E4A42F2BF 0x144AAF22 b323
	static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0xD17AC0); } // 0x8A75CE2956274ADD 0x40CE4DFD b323
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0xD17AE0, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); } // 0x867654CBC7606F2C 0xCB7415AC b323
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, Any p14) { invoke<Void>(0xD17B50, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14); } // 0xE3A7742E0B7A2F8B 0x52ACCB7B b323
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, Entity targetEntity, BOOL p17, Any p18, Any p19, Any p20) { invoke<Void>(0xD17BC0, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, targetEntity, p17, p18, p19, p20); } // 0xBFE5756E7407064A 0xCCDC33CC b323
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0xD17C40, modelHash, minimum, maximum); } // 0x03E8D3D5F549087A 0x91ABB8E0 b323
	static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xD17D40, fakeWantedLevel); } // 0x1454F2448DE30163 0x85B1C9FA b323
	static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0xD17DE0); } // 0x4C9296CBCD1B971E 0x0022A430 b323
	static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xD17E10, toggle); } // 0xF14878FC50BEC6EE 0x20AB0B6B b323
	static void ALLOW_MISSION_CREATOR_WARP(BOOL toggle) { invoke<Void>(0xD17E30, toggle); } // 0xDEA36202FC3382DF 0x082BA6F2 b323
	static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xD17E80, toggle); } // 0x19E00D7322C6F85B 0x348B9046 b323
	static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0xD17EA0); } // 0x2B4A15E44DE0F478 0x53A95E13 b323
	static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0xD17EC0); } // 0x7B30F65D7B710098 0x7605EF6F b323
	static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0xD17F00); } // 0x61A23B7EDA9BDA24 0x5C3BF51B b323
	static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0xD17F10); } // 0xD3D15555431AB793 0xBAF17315 b323
	static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xD17F30, profileSetting); } // 0xC488FF2356EA7791 0xD374BEBC b323
	static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0xD17F60, string1, string2); } // 0x0C515FAB3FF9EA92 0x877C0BC5 b323
	static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xD17FA0, str1, str2, matchCase, maxLength); } // 0x1E34710ECD4AB0EB 0xFE25A58F b323
	static int ABSI(int value) { return invoke<int>(0xD17FF0, value); } // 0xF0D31AD191A74F87 0xB44677C5 b323
	static float ABSF(float value) { return invoke<float>(0xD18010, value); } // 0x73D57CFFDD12C355 0xAF6F6E0B b323
	static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xD18040, x1, y1, z1, x2, y2, z2); } // 0xFEFCF11B01287125 0x0483715C b323
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xD18100, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0x5270A8FBC098C3F8 0x78E1A557 b323
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL ownedByPlayer) { return invoke<BOOL>(0xD18200, x1, y1, z1, x2, y2, z2, type, ownedByPlayer); } // 0x2E0DC353342C4A6D 0x2B73BCF6 b323
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7, BOOL ownedByPlayer) { return invoke<BOOL>(0xD18260, x1, y1, z1, x2, y2, z2, width, p7, ownedByPlayer); } // 0xF0BC12401061DEA0 0xD1AE2681 b323
	static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float x, float y, float z, Hash projectileHash, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xD182C0, x, y, z, projectileHash, radius, ownedByPlayer); } // 0x34318593248C8FB2 0xBE81F1E2 b323
	static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projectileHash, Vector3* projectilePos, BOOL ownedByPlayer) { return invoke<BOOL>(0xD18300, x1, y1, z1, x2, y2, z2, projectileHash, projectilePos, ownedByPlayer); } // 0x8D7A43EC6A5FEA45 0x1A40454B b323
	static BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, BOOL p4) { return invoke<BOOL>(0xD18390, ped, weaponHash, distance, outCoords, p4); } // 0xDFB4138EEFED7B81 0x6BDE5CE4 b323
	static BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, Object* outProjectile, BOOL p5) { return invoke<BOOL>(0xD18440, ped, weaponHash, distance, outCoords, outProjectile, p5); } // 0x82FDE6A57EE4EE44 0x507BC6F7 b323
	static BOOL IS_BULLET_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL ownedByPlayer) { return invoke<BOOL>(0xD184F0, x1, y1, z1, x2, y2, z2, width, ownedByPlayer); } // 0x1A8B5F3C01E2B477 0xE2DB58F7 b323
	static BOOL IS_BULLET_IN_AREA(float x, float y, float z, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xD185B0, x, y, z, radius, ownedByPlayer); } // 0x3F2023999AD51C1F 0xB54F46CA b323
	static BOOL IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xD18650, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0xDE0F6D7450D37351 0xAB73ED26 b323
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xD18740, x, y, z, p3, p4, p5); } // 0x9870ACFB89A90995 0x902BC7D9 b323
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xD187E0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDC8C5D7CFEAB8394 0x2C2618CC b323
	static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xD188D0); } // 0xA72BC0B675B1519E 0x40282018 b323
	static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xD188E0); } // 0x4D982ADB1978442D 0x46FB06A5 b323
	static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xD188F0); } // 0xF6201B4DAF662A9D 0x24005CC8 b323
	static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xD18900); } // 0xCCA1072C29D096C2 0x4C0D5303 b323
	static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xD18910); } // 0x48AF36444B965238 0x4D5D9EE3 b323
	static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xD18920); } // 0x9F1935CA1F724008 0x944BA1DC b323
	static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0xD18930, string); } // 0xF22B6C47C6EAB066 0x8E71E00F b323
	static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0xD18950, string); } // 0xCA042B6957743895 0x42E9F2CA b323
	static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0xD18970, string, outInteger); } // 0x5A5F40FE637EB584 0x590A8160 b323
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0xD18A10, var, rangeStart, rangeEnd, p3); } // 0x8EF07E15701D61ED 0x32094719 b323
	static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0xD18A60, var, rangeStart, rangeEnd); } // 0x53158863FCC0893A 0xCA03A1E5 b323
	static int ADD_STUNT_JUMP(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float camX, float camY, float camZ, int p15, int p16, int p17) { return invoke<int>(0xD18AA0, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, camX, camY, camZ, p15, p16, p17); } // 0x1A992DA297A4630C 0xB630E5FF b323
	static int ADD_STUNT_JUMP_ANGLED(float x1, float y1, float z1, float x2, float y2, float z2, float radius1, float x3, float y3, float z3, float x4, float y4, float z4, float radius2, float camX, float camY, float camZ, int p17, int p18, int p19) { return invoke<int>(0xD18B70, x1, y1, z1, x2, y2, z2, radius1, x3, y3, z3, x4, y4, z4, radius2, camX, camY, camZ, p17, p18, p19); } // 0xBBE5D803A5360CBF 0xB9B7E777 b323
	static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0xD18C50, p0); } // 0xDC518000E39DAE1F 0x840CB5DA b323
	static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xD18C70, p0); } // 0xE369A5783B866016 0x9D1E7785 b323
	static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xD18C90, p0); } // 0xA5272EBEDD4747F6 0x644C9FA4 b323
	static void SET_STUNT_JUMPS_CAN_TRIGGER(BOOL toggle) { invoke<Void>(0xD18CB0, toggle); } // 0xD79185689F8FD5DF 0x3C806A2D b323
	static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xD18CE0); } // 0x7A3F19700A4D0525 0xF477D0B1 b323
	static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0xD18D10); } // 0x2272B0A1343129F4 0x021636EE b323
	static int GET_NUM_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xD18D40); } // 0x996DD1E1E02F1008 0x006F9BA2 b323
	static void CANCEL_STUNT_JUMP() { invoke<Void>(0xD18D70); } // 0xE6B7B0ACD4E4B75E 0xF43D9821 b323
	static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0xD18D90, toggle); } // 0x577D1284D6873711 0x8230FF6C b323
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xD18DC0, toggle); } // 0xAA391C728106F7AF 0xA0C3CE29 b323
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xD18DF0, toggle); } // 0xB98236CAAECEF897 0xD06F1720 b323
	static BOOL HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash, int amount) { return invoke<BOOL>(0xD18E20, hash, amount); } // 0x071E2A839DE82D90 0xFF6191E1 b323
	static void SET_INSTANCE_PRIORITY_MODE(int p0) { invoke<Void>(0xD18E50, p0); } // 0x9BAE5AD2508DF078 0x721B2492 b323
	static void SET_INSTANCE_PRIORITY_HINT(int flag) { invoke<Void>(0xD18E60, flag); } // 0xC5F0A8EBD3F361CE 0xE202879D b323
	static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0xD18E70); } // 0x7EA2B6AF97ECA6ED 0x8FF6232C b323
	static void POPULATE_NOW() { invoke<Void>(0xD18E80); } // 0x7472BB270D7B4F3E 0x72C20700 b323
	static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xD18E90); } // 0xCBAD6729F7B1F4FC 0x6F203C6E b323
	static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xD18EC0, level); } // 0x740E14FAD5842351 0x2D833F4A b323
	static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xD18EE0, p0, p1, p2); } // 0xA9575F812C6A7997 0x881A694D b323
	static void STOP_SAVE_DATA() { invoke<Void>(0xD18F20); } // 0x74E20C9145FB66FD 0x3B1C07C8 b323
	static int GET_SIZE_OF_SAVE_DATA(BOOL p0) { return invoke<int>(0xD18F40, p0); } // 0xA09F896CE912481F 0x9EF0BC64 b323
	static void REGISTER_INT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD18F70, p0, name); } // 0x34C9EE5986258415 0xB930956F b323
	static void REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD18FA0, p0, name); } // 0x10C2FA78D0E128A1 0x9B38374A b323
	static void REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD18FD0, p0, name); } // 0x7CAEC29ECB5DFEBB 0xDB06F7AD b323
	static void REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD19000, p0, name); } // 0xC8F4131414C835A1 0x5417E0E0 b323
	static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD19030, p0, name); } // 0xEDB1232C5BEAE62F 0x284352C4 b323
	static void REGISTER_TEXT_LABEL_15_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD19060, p0, name); } // 0x6F7794F28C6B2535 0xE2089749 b323
	static void REGISTER_TEXT_LABEL_23_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD19090, p0, name); } // 0x48F069265A0E4BEC 0xF91B8C33 b323
	static void REGISTER_TEXT_LABEL_31_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD190C0, p0, name); } // 0x8269816F6CFD40F8 0x74E8FAD9 b323
	static void REGISTER_TEXT_LABEL_63_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xD190F0, p0, name); } // 0xFAA457EF263E8763 0x6B4335DD b323
	static void START_SAVE_STRUCT_WITH_SIZE(Any* p0, int size, const char* structName) { invoke<Void>(0xD19120, p0, size, structName); } // 0xBF737600CDDBEADD 0xFB45728E b323
	static void STOP_SAVE_STRUCT() { invoke<Void>(0xD19160); } // 0xEB1774DF12BB9F12 0xC2624A28 b323
	static void START_SAVE_ARRAY_WITH_SIZE(Any* p0, int size, const char* arrayName) { invoke<Void>(0xD19180, p0, size, arrayName); } // 0x60FE567DF1B1AF9D 0x893A342C b323
	static void STOP_SAVE_ARRAY() { invoke<Void>(0xD191C0); } // 0x04456F95153C6BE4 0x0CAD8217 b323
	static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0xD191E0, dispatchService, toggle); } // 0xDC0F817884CDD856 0x0B710A51 b323
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { invoke<Void>(0xD19210, dispatchService, toggle); } // 0x9B2BD3773123EA2F 0xE0F0684F b323
	static int GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(int dispatchService) { return invoke<int>(0xD19240, dispatchService); } // 0xEB4A0C2D56441717 0x3CE5BF6B b323
	static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0xD19290, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); } // 0x3F892CAF67444AE7 0xFC5FF7B3 b323
	static BOOL CREATE_INCIDENT_WITH_ENTITY(int dispatchService, Ped ped, int numUnits, float radius, int* outIncidentID, Any p5, Any p6) { return invoke<BOOL>(0xD192D0, dispatchService, ped, numUnits, radius, outIncidentID, p5, p6); } // 0x05983472F0494E60 0xBBC35B03 b323
	static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0xD19310, incidentId); } // 0x556C1AA270D5A207 0x212BD0DC b323
	static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0xD19350, incidentId); } // 0xC8BC6461E629BEAA 0x31FD0BA4 b323
	static void SET_INCIDENT_REQUESTED_UNITS(int incidentId, int dispatchService, int numUnits) { invoke<Void>(0xD19390, incidentId, dispatchService, numUnits); } // 0xB08B85D860E7BA3C 0x0242D88E b323
	static void SET_IDEAL_SPAWN_DISTANCE_FOR_INCIDENT(int incidentId, float p1) { invoke<Void>(0xD193E0, incidentId, p1); } // 0xD261BA3E7E998072 0x1F38102E b323
	static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float posX, float posY, float posZ, float fwdVecX, float fwdVecY, float fwdVecZ, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xD19430, posX, posY, posZ, fwdVecX, fwdVecY, fwdVecZ, distance, spawnPoint); } // 0x6874E2190B0C1972 0x71AEFD77 b323
	static int ADD_POP_MULTIPLIER_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, float p7, BOOL p8, BOOL p9) { return invoke<int>(0xD194E0, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0x67F6413D3220E18D 0x42BF09B3 b323
	static void REMOVE_POP_MULTIPLIER_AREA(int id, BOOL p1) { invoke<Void>(0xD19590, id, p1); } // 0xB129E447A2EDA4BF 0xFBDBE374 b323
	static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xD195B0, ped, toggle, p2); } // 0x28A04B411933F8A6 0x0BD3F9EC b323
	static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xD195D0, ped); } // 0x5D5479D115290C3F 0x04A947BA b323
	static void PLAY_TENNIS_SWING_ANIM(Ped ped, const char* animDict, const char* animName, float p3, float p4, BOOL p5) { invoke<Void>(0xD19650, ped, animDict, animName, p3, p4, p5); } // 0xE266ED23311F24D4 0xC20A7D2B b323
	static BOOL GET_TENNIS_SWING_ANIM_COMPLETE(Ped ped) { return invoke<BOOL>(0xD19700, ped); } // 0x17DF68D720AA77F8 0x8501E727 b323
	static BOOL GET_TENNIS_SWING_ANIM_CAN_BE_INTERRUPTED(Ped ped) { return invoke<BOOL>(0xD19780, ped); } // 0x19BFED045C647C49 0x1A332D2D b323
	static BOOL GET_TENNIS_SWING_ANIM_SWUNG(Ped ped) { return invoke<BOOL>(0xD19800, ped); } // 0xE95B0C7D5BA3B96B b323
	static void PLAY_TENNIS_DIVE_ANIM(Ped ped, int p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xD19880, ped, p1, p2, p3, p4, p5); } // 0x8FA9C42FC5D7C64B 0x0C8865DF b323
	static void SET_TENNIS_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* p1, float p2) { invoke<Void>(0xD19940, ped, p1, p2); } // 0x54F157E0336A3822 0x49F977A9 b323
	static void SET_DISPATCH_SPAWN_LOCATION(float x, float y, float z) { invoke<Void>(0xD19A00, x, y, z); } // 0xD10F442036302D50 0x6F009E33 b323
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xD19A40); } // 0x77A84429DD9F0A15 0xDA65ECAA b323
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float distance) { invoke<Void>(0xD19A60, distance); } // 0x6FE601A64180D423 0x6283BE32 b323
	static void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0) { invoke<Void>(0xD19AA0, p0); } // 0xEB2DB0CAD13154B3 0x1479E85A b323
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0xD19B00, p0, p1); } // 0x44F7CBC1BEB3327D 0xABADB709 b323
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0xD19B10, p0, p1); } // 0x48838ED9937A15D1 0x1C996BCD b323
	static int ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xD19B20, x1, y1, z1, x2, y2, z2, width); } // 0x918C7B2D2FF3928B 0xF557BAF9 b323
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<Void>(0xD19BA0, p0); } // 0x264AC28B01B353A5 0xA8D2FB92 b323
	static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xD19BD0); } // 0xAC7BFD5C1D83EA75 0x9A17F835 b323
	static void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN() { invoke<Void>(0xD19BF0); } // 0xD9F692D349249528 0xE0C9307E b323
	static void SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(int p0, int p1) { invoke<Void>(0xD19C10, p0, p1); } // 0xE532EC1A63231B4F 0xA0D8C749 b323
	static void ADD_TACTICAL_NAV_MESH_POINT(float x, float y, float z) { invoke<Void>(0xD19C40, x, y, z); } // 0xB8721407EE9C3FF6 0x24A4E0B2 b323
	static void CLEAR_TACTICAL_NAV_MESH_POINTS() { invoke<Void>(0xD19C70); } // 0xB3CD58CCA6CDA852 0x66C3C59C b323
	static void SET_RIOT_MODE_ENABLED(BOOL toggle) { invoke<Void>(0xD19C80, toggle); } // 0x2587A48BC88DFADF 0xD9660339 b323
	static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) { invoke<Void>(0xD19CA0, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); } // 0xCA78CFA0366592FE 0xD2688412 b323
	static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0xD19D10, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x00DC833F2568DBF6 0xAD99F2CE b323
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0xD19D70); } // 0x0CF2B696BBF945AE 0x23D0A1CE b323
	static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0xD19D90); } // 0x8362B09B91893647 0x44828FB3 b323
	static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int p0) { invoke<Void>(0xD19DC0, p0); } // 0x3ED1438C1F5C6612 0x3301EA47 b323
	static void ACTION_MANAGER_ENABLE_ACTION(Hash hash, BOOL enable) { invoke<Void>(0xD19DD0, hash, enable); } // 0xA6A12939F16D85BE 0x42B484ED b323
	static void SUPRESS_RANDOM_EVENT_THIS_FRAME(int eventType, BOOL suppress) { invoke<Void>(0xD19E00, eventType, suppress); } // 0x1EAE0A6E978894A2 0x8F60366E b323
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xD19E20, player); } // 0xA66C71C98D5F2CFB 0x2EAFA1D1 b323
	static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xD19E50, player); } // 0x11879CDD803D30F4 0x7C18FC8A b323
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0xD19E80, player); } // 0xFF1BED81BFDC0FE0 0x96663D56 b323
	static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xD19EB0, player); } // 0x57FFF03E423A4C0B 0x86745EF3 b323
	static BOOL HAS_GAME_INSTALLED_THIS_SESSION() { return invoke<BOOL>(0xD19EE0); } // 0x6FDDF453C0C756EC 0xC3C10FCC b323
	static void SET_TICKER_JOHNMARSTON_IS_DONE() { invoke<Void>(0xD19EF0); } // 0xFB00CA71DA386228 0x054EC103 b323
	static BOOL ARE_PROFILE_SETTINGS_VALID() { return invoke<BOOL>(0xD19F40); } // 0x5AA3BEFA29F03AD4 0x46B5A15C b323
	static void FORCE_GAME_STATE_PLAYING() { invoke<Void>(0xD19F60); } // 0xC0AA53F866B3134D 0x5D209F25 b323
	static void SCRIPT_RACE_INIT(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xD19F90, p0, p1, p2, p3); } // 0x0A60017F841A54F2 0x2D33F15A b323
	static void SCRIPT_RACE_SHUTDOWN() { invoke<Void>(0xD19FB0); } // 0x1FF6BF9A63E5757F 0xDF99925C b323
	static void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Player player, Any p1, Any p2, Any p3) { invoke<Void>(0xD19FC0, player, p1, p2, p3); } // 0x1BB299305C3E8C13 0xA27F4472 b323
	static BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Player player, int* p1, int* p2) { return invoke<BOOL>(0xD19FE0, player, p1, p2); } // 0x8EF5573A1F801A5C 0x07FF553F b323
	static void START_END_USER_BENCHMARK() { invoke<Void>(0xD1A010); } // 0x92790862E36C2ADA b323
	static void STOP_END_USER_BENCHMARK() { invoke<Void>(0xD1A020); } // 0xC7DB36C24634F52B b323
	static void RESET_END_USER_BENCHMARK() { invoke<Void>(0xD1A030); } // 0x437138B6A830166A b323
	static void SAVE_END_USER_BENCHMARK() { invoke<Void>(0xD1A040); } // 0x37DEB0AA183FB6D8 b323
	static BOOL UI_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xD1A050); } // 0xEA2F2061875EED90 b323
	static void QUIT_GAME() { invoke<Void>(0xD1A060); } // 0xEB6891F03362FB12 b323
	static BOOL HAS_ASYNC_INSTALL_FINISHED() { return invoke<BOOL>(0xD1A070); } // 0x14832BF2ABA53FC5 b323
	static void CLEANUP_ASYNC_INSTALL() { invoke<Void>(0xD1A090); } // 0xC79AE21974B01FB2 b323
	static BOOL PLM_IS_IN_CONSTRAINED_MODE() { return invoke<BOOL>(0xD1A0A0); } // 0x684A41975F077262 b323
	static int PLM_GET_CONSTRAINED_DURATION_MS() { return invoke<int>(0xD1A0D0); } // 0xABB2FA71C83A1B72 b323
	static void SET_PLAYER_IS_IN_ANIMAL_FORM(BOOL toggle) { invoke<Void>(0xD1A100, toggle); } // 0x4EBB7E87AA0DBED4 b323
	static BOOL GET_IS_PLAYER_IN_ANIMAL_FORM() { return invoke<BOOL>(0xD1A120); } // 0x9689123E3F213AA5 b323
	static void DISABLE_SCREEN_DIMMING_THIS_FRAME() { invoke<Void>(0xD1A130); } // 0x23227DF0B2115469 b323
}

namespace MOBILE
{
	static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0xD923F0, phoneType); } // 0xA4E8E696C532FBC7 0x5BBC5E23 b323
	static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xD92400); } // 0x3BC861DF703E5097 0x1A65037B b323
	static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0xD92430, scale); } // 0xCBDD322A73D6D932 0x09BCF1BE b323
	static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xD92450, rotX, rotY, rotZ, p3); } // 0xBB779C0CA917E865 0x209C28CF b323
	static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) { invoke<Void>(0xD92490, rotation, p1); } // 0x1CEFB61F193070AE 0x17A29F23 b323
	static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xD92580, posX, posY, posZ); } // 0x693A5C6D6734085B 0x841800B3 b323
	static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0xD92620, position); } // 0x584FDFDA48805B86 0xB2E1E1A0 b323
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xD92690, toggle); } // 0xF511F759238A5122 0x29828690 b323
	static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xD926B0); } // 0xC4E2813898C97A4B 0x5F978584 b323
	static void CELL_SET_INPUT(int direction) { invoke<Void>(0xD926C0, direction); } // 0x95C9E72F3D7DEC9B b323
	static void CELL_HORIZONTAL_MODE_TOGGLE(BOOL toggle) { invoke<Void>(0xD926D0, toggle); } // 0x44E44169EF70138E b323
	static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0xD926F0, p0, p1); } // 0xFDE8F069C542D126 0x234C1AE9 b323
	static void CELL_CAM_ACTIVATE_SELFIE_MODE(BOOL toggle) { invoke<Void>(0xD92710, toggle); } // 0x015C49A93E3E086E 0x4479B304 b323
	static void CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(BOOL toggle) { invoke<Void>(0xD92730, toggle); } // 0xA2CCBE62CD4C91A4 0xC273BB4D b323
	static void CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(float p0) { invoke<Void>(0xD92750, p0); } // 0x1B0B4AEED5B9B41C b323
	static void CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(float horizontalPan) { invoke<Void>(0xD92760, horizontalPan); } // 0x53F4892D18EC90A4 b323
	static void CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(float vertPan) { invoke<Void>(0xD92770, vertPan); } // 0x3117D84EFA60F77B b323
	static void CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(float roll) { invoke<Void>(0xD92780, roll); } // 0x15E69E2802C24B8D b323
	static void CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(float distanceScaling) { invoke<Void>(0xD92790, distanceScaling); } // 0xAC2890471901861C b323
	static void CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(float yaw) { invoke<Void>(0xD927A0, yaw); } // 0xD6ADE981781FCA09 b323
	static void CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(float roll) { invoke<Void>(0xD927B0, roll); } // 0xF1E22DC13F5EEBAD b323
	static void CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(float pitch) { invoke<Void>(0xD927C0, pitch); } // 0x466DA42C89865553 b323
	static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xD927D0, entity); } // 0x439E9BC95B7E7FBE 0xBEA88097 b323
	static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0xD92800, renderId); } // 0xB4A53E05F68B6FA1 0x88E4FECE b323
}

namespace MONEY
{
	static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Any* gamerHandle) { invoke<Void>(0xD213B0, amount, gamerHandle); } // 0xFB18DF9CB95E0105 0xC6047FDB b323
	static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, Any* gamerHandle) { invoke<Void>(0xD213C0, value, gamerHandle); } // 0x56A3B51944C50598 0x4ED71C1A b323
	static void NETWORK_EARN_FROM_BOUNTY(int amount, Any* gamerHandle, Any* p2, Any p3) { invoke<Void>(0xD215B0, amount, gamerHandle, p2, p3); } // 0x131BB5DA15453ACF 0x127F2DAE b323
	static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xD216B0, p0, p1, p2, p3, p4, p5); } // 0xAB3CAA6B422164DA 0x5AA379D9 b323
	static void NETWORK_BUY_ITEM(int amount, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0xD21700, amount, item, p2, p3, p4, item_name, p6, p7, p8, p9); } // 0xF0077C797F66A355 0xA07B6368 b323
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xD21A60, p0, p1, p2, p3, p4); } // 0xE1B13771A843C4F6 0xE7CB4F95 b323
	static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, Any* gamerHandle, BOOL notBankrupt, BOOL hasTheMoney) { invoke<Void>(0xD21CA0, amount, vehicleModel, gamerHandle, notBankrupt, hasTheMoney); } // 0x9FF28D88C766E3E8 0x4E665BB2 b323
	static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xD21CD0, p0, p1, p2, p3); } // 0xACDE7185B374177C 0x1A89B5FC b323
	static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD21D00, p0, p1, p2); } // 0x29B260B84947DFCC 0x3401FC96 b323
	static int NETWORK_SPEND_EARNED_FROM_BANK_AND_WALLETS(int amount) { return invoke<int>(0xD21D40, amount); } // 0x9B5016A6433A68C5 0xBD64F1B7 b323
	static const char* PROCESS_CASH_GIFT(int* p0, int* p1, const char* p2) { return invoke<const char*>(0xD21D50, p0, p1, p2); } // 0x20194D48EAEC9A41 0xC5D8B1E9 b323
	static int WITHDRAW_VC(int amount) { return invoke<int>(0xD221F0, amount); } // 0xF70EFA14FE091429 0x8B755993 b323
	static BOOL DEPOSIT_VC(int amount) { return invoke<BOOL>(0xD22220, amount); } // 0xE260E0BB9CD995AC 0x8F266745 b323
	static BOOL HAS_VC_WITHDRAWAL_COMPLETED(Any p0) { return invoke<BOOL>(0xD22250, p0); } // 0xE154B48B68EF72BC 0x531E4892 b323
	static BOOL WAS_VC_WITHDRAWAL_SUCCESSFUL(Any p0) { return invoke<BOOL>(0xD22260, p0); } // 0x6FCF8DDEA146C45B 0xB96C7ABE b323
}

namespace NETSHOPPING
{
	static int NET_GAMESERVER_GET_PRICE(Hash itemHash, Hash categoryHash, BOOL p2) { return invoke<int>(0xD23FF0, itemHash, categoryHash, p2); } // 0xC27009422FCCA88D b323
	static BOOL NET_GAMESERVER_CATALOG_IS_VALID() { return invoke<BOOL>(0xD24020); } // 0x3C4487461E9B0DCB b323
	static Hash NET_GAMESERVER_GET_CATALOG_CLOUD_CRC() { return invoke<Hash>(0xD24050); } // 0x85F6C9ABA1DE2BCF b323
	static BOOL NET_GAMESERVER_BASKET_START(int* transactionId, Hash categoryHash, Hash actionHash, int flags) { return invoke<BOOL>(0xD242C0, transactionId, categoryHash, actionHash, flags); } // 0x279F08B1A4B29B7E b323
	static BOOL NET_GAMESERVER_BASKET_IS_ACTIVE() { return invoke<BOOL>(0xD242F0); } // 0xA65568121DF2EA26 b323
	static BOOL NET_GAMESERVER_BASKET_ADD_ITEM(Any* itemData, int quantity) { return invoke<BOOL>(0xD24390, itemData, quantity); } // 0xF30980718C8ED876 b323
	static BOOL NET_GAMESERVER_BASKET_IS_FULL() { return invoke<BOOL>(0xD243C0); } // 0x27F76CC6C55AD30E b323
	static BOOL NET_GAMESERVER_CHECKOUT_START(int transactionId) { return invoke<BOOL>(0xD24410, transactionId); } // 0x39BE7CEA8D9CC8E6 b323
	static BOOL NET_GAMESERVER_BEGIN_SERVICE(int* transactionId, Hash categoryHash, Hash itemHash, Hash actionTypeHash, int value, int flags) { return invoke<BOOL>(0xD24480, transactionId, categoryHash, itemHash, actionTypeHash, value, flags); } // 0x3C5FD37B5499582E b323
	static BOOL NET_GAMESERVER_END_SERVICE(int transactionId) { return invoke<BOOL>(0xD244C0, transactionId); } // 0xE2A99A9B524BEFFF b323
	static BOOL NET_GAMESERVER_DELETE_CHARACTER(int slot, BOOL transfer, Hash reason) { return invoke<BOOL>(0xD24540, slot, transfer, reason); } // 0x51F1A8E48C3D2F6D b323
	static int NET_GAMESERVER_DELETE_CHARACTER_GET_STATUS() { return invoke<int>(0xD245F0); } // 0x0A6D923DFFC9BD89 b323
}

namespace NETWORK
{
	static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xD3E3D0); } // 0x054354A99211EB96 0xADD0B40F b323
	static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0xD3E3F0); } // 0x1077788E268557C2 0x6E5BDCE2 b323
	static BOOL NETWORK_IS_NP_AVAILABLE() { return invoke<BOOL>(0xD3E420); } // 0xBD545D44CCE70597 b323
	static int NETWORK_GET_NP_UNAVAILABLE_REASON() { return invoke<int>(0xD3E450); } // 0x74FB3E29E6D10FA9 b323
	static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0xD3E480); } // 0x85443FF4C328F53B 0x3FB40673 b323
	static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0xD3E4B0); } // 0x9A4CF4F48AD77302 0xC7FF5AFC b323
	static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xD3E4E0); } // 0x67A5589628E0CFF6 0x66EC713F b323
	static BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0xD3E500); } // 0xBA9775570DB788CF 0x358D1D77 b323
	static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0xD3E540); } // 0x8DB296B814EDDA07 0xE46AC10F b323
	static BOOL NETWORK_WAS_GAME_SUSPENDED() { return invoke<BOOL>(0xD3E5C0); } // 0x4237E822315D8BA9 b323
	static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xD3E5D0); } // 0x25CB5A9F37BFD063 0xEF63BFDF b323
	static BOOL NETWORK_HAS_AGE_RESTRICTIONS() { return invoke<BOOL>(0xD3E600); } // 0x1353F87E89946207 b323
	static BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0xD3E630, p0); } // 0x72D918C99BCACC54 0x1F88819D b323
	static BOOL NETWORK_HAVE_COMMUNICATION_PRIVILEGES(int p0, Player player) { return invoke<BOOL>(0xD3E660, p0, player); } // 0xAEEF48CDF5B6CE7C 0x2D817A5E b323
	static BOOL NETWORK_CHECK_ONLINE_PRIVILEGES(Any p0, BOOL p1) { return invoke<BOOL>(0xD3E6E0, p0, p1); } // 0x78321BEA235FD8CD b323
	static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xD3E710, p0, p1, p2); } // 0x595F028698072DD9 0xBB54AA3D b323
	static BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xD3E740, p0, p1, p2); } // 0x83F28CE49FBBFFBA 0xA79E5B05 b323
	static BOOL NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() { return invoke<BOOL>(0xD3E770); } // 0x76BF03FADBF154F5 0xEB864288 b323
	static int NETWORK_GET_AGE_GROUP() { return invoke<int>(0xD3E790); } // 0x9614B71F8ADB982B 0xAB07CBBE b323
	static BOOL NETWORK_HAVE_PLATFORM_SUBSCRIPTION() { return invoke<BOOL>(0xD3E7B0); } // 0x5EA784D197556507 b323
	static void NETWORK_SHOW_ACCOUNT_UPGRADE_UI() { invoke<Void>(0xD3E7D0); } // 0x83FE8D7229593017 b323
	static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xD3E7E0); } // 0x580CE4438479CC61 0x60E1FEDF b323
	static void NETWORK_BAIL(int p0, int p1, int p2) { invoke<Void>(0xD3E800, p0, p1, p2); } // 0x95914459A87EBA28 0x87D79A04 b323
	static void NETWORK_ON_RETURN_TO_SINGLE_PLAYER() { invoke<Void>(0xD3E820); } // 0x283B6062A2C01E9B 0x96E28FE2 b323
	static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xD3E830, loadingState); } // 0xAF50DA1A3F8B1BA4 0xA520B982 b323
	static BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0xD3E890); } // 0x9747292807126EDA 0x05518C0F b323
	static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0xD3E8C0); } // 0x7E782A910C362C25 0x4A23B9C9 b323
	static BOOL NETWORK_SESSION_DO_FREEROAM_QUICKMATCH(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xD3E8F0, p0, p1, p2); } // 0x330ED4D05491934F b323
	static BOOL NETWORK_SESSION_DO_FRIEND_MATCHMAKING(int p0, int p1, int p2) { return invoke<BOOL>(0xD3E970, p0, p1, p2); } // 0x2CFC76E0D087C994 b323
	static BOOL NETWORK_SESSION_DO_CREW_MATCHMAKING(int crewId, int p1, int p2, int maxPlayers) { return invoke<BOOL>(0xD3E9F0, crewId, p1, p2, maxPlayers); } // 0x94BC51E9449D917F b323
	static BOOL NETWORK_SESSION_DO_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xD3EA30, p0, p1, p2, p3, p4); } // 0xBE3E347A87ACEB82 b323
	static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xD3EA90, p0, maxPlayers, p2); } // 0x6F3D4ED9BEE4E61D 0x6716460F b323
	static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0xD3EB10, p0, maxPlayers); } // 0xED34C0C02C098BB7 0x8AC9EA19 b323
	static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0xD3EB80, p0, maxPlayers); } // 0xB9CFD27A5D578D83 0x26864403 b323
	static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xD3EBF0); } // 0xFBCFA2EA2E206890 0x56E75FE4 b323
	static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0xD3EC20); } // 0x74732C6CA90DA2B4 0xA95299B9 b323
	static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xD3EC50); } // 0xF3929C2379B60CCE 0x3D2C1916 b323
	static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0xD3EC80); } // 0xCEF70AA5B3F89BA1 0xDB67785D b323
	static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0xD3ECB0, p0, p1); } // 0xA02E59562D711006 0xBCACBEA2 b323
	static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xD3ED00, player); } // 0xFA8904DC5F304220 0x1E20138A b323
	static BOOL NETWORK_SESSION_GET_KICK_VOTE(Player player) { return invoke<BOOL>(0xD3ED30, player); } // 0xD6D09A6F32F49EF1 0x8A559D26 b323
	static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_SESSION() { return invoke<BOOL>(0xD3ED80); } // 0x59DF79317F85A7E0 0x6CDAA7D2 b323
	static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_TRANSITION() { return invoke<BOOL>(0xD3EDB0); } // 0xFFE1E5B792D92B34 0xBF21818E b323
	static void NETWORK_SESSION_SET_MATCHMAKING_GROUP(int matchmakingGroup) { invoke<Void>(0xD3EDE0, matchmakingGroup); } // 0x49EC8030F5015F8B 0x3C3E2AB6 b323
	static void NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX(int playerType, int playerCount) { invoke<Void>(0xD3EE00, playerType, playerCount); } // 0x8B6A4DD0AF9CE215 0x5F29A7E0 b323
	static int NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE(int p0) { return invoke<int>(0xD3EE30, p0); } // 0x56CE820830EF040B 0x36EAD960 b323
	static void NETWORK_SESSION_ADD_ACTIVE_MATCHMAKING_GROUP(int groupId) { invoke<Void>(0xD3EE70, groupId); } // 0xCAE55F48D3D7875C 0x5BE529F7 b323
	static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT(Any p0) { invoke<Void>(0xD3EE90, p0); } // 0xF49ABC20D8552257 0x454C7B67 b323
	static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT_TRANSITION(Any p0) { invoke<Void>(0xD3EEB0, p0); } // 0x4811BBAC21C5FCD5 0xE5961511 b323
	static void NETWORK_SESSION_SET_UNIQUE_CREW_ONLY_CREWS_TRANSITION(BOOL p0) { invoke<Void>(0xD3EED0, p0); } // 0x5539C3EBF104A53A 0xAE396263 b323
	static void NETWORK_SESSION_SET_CREW_LIMIT_MAX_MEMBERS_TRANSITION(Any p0) { invoke<Void>(0xD3EF00, p0); } // 0x702BC4D605522539 0x913FD7D6 b323
	static void NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID(BOOL p0) { invoke<Void>(0xD3EF20, p0); } // 0x3F52E880AAF6C8CA 0xB3D9A67F b323
	static void NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE(int p0) { invoke<Void>(0xD3EF40, p0); } // 0xF1EEA2DDA9FFA69D 0x6CC062FC b323
	static void NETWORK_SESSION_SET_SCRIPT_VALIDATE_JOIN() { invoke<Void>(0xD3EF70); } // 0x1153FA02A659051C 0x57F9BC83 b323
	static void NETWORK_SESSION_VALIDATE_JOIN(BOOL p0) { invoke<Void>(0xD3EF80, p0); } // 0xC19F6C8E7865A6FF 0xF3768F90 b323
	static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0xD3EFA0, p0, p1); } // 0x236406F60CF216D6 0x0EC62629 b323
	static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0xD3EFB0); } // 0x058F43EC59A8631A 0x5E557307 b323
	static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* hours, int* minutes, int* seconds) { invoke<Void>(0xD3EFC0, hours, minutes, seconds); } // 0x6D03BFBD643B2A02 0x74E8C53E b323
	static void NETWORK_SESSION_SET_GAMEMODE(Any p0) { invoke<Void>(0xD3EFE0, p0); } // 0x600F8CB31C7AAB6E 0x959E43A3 b323
	static BOOL NETWORK_FIND_GAMERS_IN_CREW(int crewId) { return invoke<BOOL>(0xD3EFF0, crewId); } // 0xE532D6811B3A4D2A 0x7771AB83 b323
	static BOOL NETWORK_FIND_MATCHED_GAMERS(int attribute, float fallbackLimit, float lowerLimit, float upperLimit) { return invoke<BOOL>(0xD3F0C0, attribute, fallbackLimit, lowerLimit, upperLimit); } // 0xF7B2CFDE5C9F700D 0xA13045D4 b323
	static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0xD3F100); } // 0xDDDF64C91BFCF0AA 0xA6DAA79F b323
	static BOOL NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke<BOOL>(0xD3F120); } // 0xF9B83B77929D8863 0xBEDC4503 b323
	static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xD3F140); } // 0xA1B043EE79A916FB 0xF4B80C7E b323
	static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xD3F160, p0, p1); } // 0x9DCFF2AFB68B3476 0xA08C9141 b323
	static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0xD3F210); } // 0x6D14CCEE1B40381A 0x6AA9A154 b323
	static BOOL NETWORK_QUEUE_GAMER_FOR_STATUS(Any* p0) { return invoke<BOOL>(0xD3F220, p0); } // 0x85A0EF54A500882C 0x42BD0780 b323
	static BOOL NETWORK_GET_GAMER_STATUS_FROM_QUEUE() { return invoke<BOOL>(0xD3F2B0); } // 0x2CC848A861D01493 0xBEB98840 b323
	static BOOL NETWORK_IS_GETTING_GAMER_STATUS() { return invoke<BOOL>(0xD3F2D0); } // 0x94A8394D150B013A 0x08029970 b323
	static BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke<BOOL>(0xD3F2F0); } // 0x5AE17C6B0134B7F1 0xC871E745 b323
	static BOOL NETWORK_GET_GAMER_STATUS_RESULT(Any* p0, Any p1) { return invoke<BOOL>(0xD3F310, p0, p1); } // 0x02A8BEC6FD9AF660 0xB5ABC4B4 b323
	static void NETWORK_CLEAR_GET_GAMER_STATUS() { invoke<Void>(0xD3F3C0); } // 0x86E0660E4F5C956D 0x3F7EDBBD b323
	static void NETWORK_SESSION_JOIN_INVITE() { invoke<Void>(0xD3F3D0); } // 0xC6F8AB8A4189CF3A 0x3D6360B5 b323
	static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0xD3F3E0); } // 0x2FBF47B1B36D36F9 0x20317535 b323
	static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<Void>(0xD3F410); } // 0xA29177F7703B5644 0x3FD49D3B b323
	static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0xD3F440); } // 0xAC8C7B9B88C4A668 0x0C207D6E b323
	static BOOL NETWORK_HAS_CONFIRMED_INVITE() { return invoke<BOOL>(0xD3F470); } // 0xC42DD763159F3461 0xFBBAC350 b323
	static BOOL NETWORK_REQUEST_INVITE_CONFIRMED_EVENT() { return invoke<BOOL>(0xD3F490); } // 0x62A0296C1BB1CEB3 0x0907A6BF b323
	static BOOL NETWORK_SESSION_WAS_INVITED() { return invoke<BOOL>(0xD3F4C0); } // 0x23DFB504655D0CE4 0x6A0BEA60 b323
	static void NETWORK_SESSION_GET_INVITER(Any* gamerHandle) { invoke<Void>(0xD3F4E0, gamerHandle); } // 0xE57397B4A3429DD0 0xE9C6B3FD b323
	static BOOL NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() { return invoke<BOOL>(0xD3F520); } // 0xD313DE83394AF134 0x3EA9D44C b323
	static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0xD3F550, toggle); } // 0xA0682D67EF1FBA3D 0x323DC78C b323
	static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xD3F570, toggle); } // 0x34F9E9049454A7A0 0xD156FD1A b323
	static void NETWORK_STORE_INVITE_THROUGH_RESTART() { invoke<Void>(0xD3F590); } // 0xF814FEC6A19FD6E0 0x32B7A076 b323
	static void NETWORK_ALLOW_INVITE_PROCESS_IN_PLAYER_SWITCH(BOOL p0) { invoke<Void>(0xD3F5A0, p0); } // 0x6B07B9CE4D390375 0x0FCE995D b323
	static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(BOOL toggle) { invoke<Void>(0xD3F5C0, toggle); } // 0x7AC752103856FB20 0xA639DCA2 b323
	static BOOL NETWORK_IS_OFFLINE_INVITE_PENDING() { return invoke<BOOL>(0xD3F5E0); } // 0x74698374C45701D2 0x70ED476A b323
	static void NETWORK_CLEAR_OFFLINE_INVITE_PENDING() { invoke<Void>(0xD3F600); } // 0x140E6A44870A11CE 0x50507BED b323
	static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0xD3F610, p0); } // 0xC74C33FCA52856D5 0xF3B1CA85 b323
	static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xD3F630); } // 0x3442775428FD2DAA 0xC692F86A b323
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xD3F650); } // 0x10FAB35428CCC9D7 0x09B88E3E b323
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xD3F660); } // 0xD83C2B94E7508980 0x715CB8C4 b323
	static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xD3F680); } // 0xCA97246103B63917 0x4BC4105E b323
	static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0xD3F6A0); } // 0x9DE624D2FC4B603F 0x9D854A37 b323
	static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xD3F6C0); } // 0xF4435D66A8E2905E 0x8592152D b323
	static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0xD3F6E0); } // 0x4EEBC3694E49C572 0xE1FCCDBA b323
	static void NETWORK_SESSION_MARK_VISIBLE(BOOL toggle) { invoke<Void>(0xD3F700, toggle); } // 0x271CC6AB59EBF9A5 0x7017257D b323
	static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0xD3F750); } // 0xBA416D68C631496A 0x4977AC28 b323
	static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) { invoke<Void>(0xD3F790, toggle); } // 0xA73667484D7037C3 0xE6EEF8AF b323
	static void NETWORK_SESSION_CHANGE_SLOTS(int slots, BOOL p1) { invoke<Void>(0xD3F7E0, slots, p1); } // 0xB4AB419E0D86ACAE 0x6BB93227 b323
	static int NETWORK_SESSION_GET_PRIVATE_SLOTS() { return invoke<int>(0xD3F820); } // 0x53AFD64C6758F2F9 0xE642F2FD b323
	static BOOL NETWORK_SESSION_VOICE_HOST() { return invoke<BOOL>(0xD3F850); } // 0x9C1556705F864230 0x345C2980 b323
	static BOOL NETWORK_SESSION_VOICE_LEAVE() { return invoke<BOOL>(0xD3F860); } // 0x6793E42BE02B575D 0xE566C7DA b323
	static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* gamerHandle) { invoke<Void>(0xD3F870, gamerHandle); } // 0xABD5E88B8A2D3DB2 0x9DFD89E6 b323
	static void NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(BOOL p0, int p1) { invoke<Void>(0xD3F8F0, p0, p1); } // 0x7F8413B7FC2AA6B9 0x075321B5 b323
	static void NETWORK_SESSION_VOICE_SET_TIMEOUT(int timeout) { invoke<Void>(0xD3F910, timeout); } // 0x5B8ED3DB018927B1 0x6EFC2FD0 b323
	static BOOL NETWORK_SESSION_IS_IN_VOICE_SESSION() { return invoke<BOOL>(0xD3F930); } // 0x855BC38818F6F684 0x60AA4AA1 b323
	static BOOL NETWORK_SESSION_IS_VOICE_SESSION_BUSY() { return invoke<BOOL>(0xD3F960); } // 0xEF0912DDF7C4CB4B 0x132CA01E b323
	static BOOL NETWORK_SEND_TEXT_MESSAGE(const char* message, Any* gamerHandle) { return invoke<BOOL>(0xD3F990, message, gamerHandle); } // 0x3A214F2EC889B100 0xAFFEA720 b323
	static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0xD3FA30, toggle); } // 0x75138790B4359A74 0xFC9AD060 b323
	static BOOL NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<BOOL>(0xD3FA50); } // 0x12103B9E0C9F92FB 0xAF329720 b323
	static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<Void>(0xD3FA70, maxSpectators); } // 0x9D277B76D1D12222 0x74E0BC0A b323
	static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0xD3FA90, p0); } // 0x73E2B500410DA5A2 0x31F951FD b323
	static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xD3FAD0, gamerHandle); } // 0x2763BBAA72A7BCB9 0x58F1DF7D b323
	static BOOL NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, Any p4, BOOL p5, BOOL p6, int p7, Any p8, int p9) { return invoke<BOOL>(0xD3FB60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xA60BB5CE242BB254 0x146764FB b323
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xD3FBF0, p0, p1, p2, p3, p4, p5); } // 0x71FB0EBCD4915D56 0x2FF65C0B b323
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xD3FC80, p0, p1, p2, p3, p4, p5); } // 0xA091A5E44F0072E5 0x47D61C99 b323
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xD3FD10, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9C4AB58491FDC98A 0x5CE60A11 b323
	static BOOL NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<BOOL>(0xD3FD50); } // 0xA06509A691D12BE4 0x0D7E5CF9 b323
	static void NETWORK_RETAIN_ACTIVITY_GROUP() { invoke<Void>(0xD3FD80); } // 0xB13E88E655E5A3BC 0x36A5F2DA b323
	static BOOL NETWORK_IS_TRANSITION_CLOSED_FRIENDS() { return invoke<BOOL>(0xD3FDA0); } // 0x6512765E3BE78C50 0x95FFACF8 b323
	static BOOL NETWORK_IS_TRANSITION_CLOSED_CREW() { return invoke<BOOL>(0xD3FDD0); } // 0x0DBD5D7E3C5BEC3B 0xB97A966B b323
	static BOOL NETWORK_IS_TRANSITION_SOLO() { return invoke<BOOL>(0xD3FE00); } // 0x5DC577201723960A 0x063DC4A5 b323
	static BOOL NETWORK_IS_TRANSITION_PRIVATE() { return invoke<BOOL>(0xD3FE30); } // 0x5A6AA44FF8E931E6 0x104DDE8D b323
	static void NETWORK_MARK_AS_PREFERRED_ACTIVITY(BOOL p0) { invoke<Void>(0xD3FE60, p0); } // 0x261E97AD7BCF3D40 0x7EF353E1 b323
	static void NETWORK_MARK_AS_WAITING_ASYNC(BOOL p0) { invoke<Void>(0xD3FE80, p0); } // 0x39917E1B4CB0F911 0xF60986FC b323
	static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0xD3FEA0, p0); } // 0xEF26739BCD9907D5 0x1DD01FE7 b323
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0xD3FF20); } // 0xFB3272229A82C759 0x8BB336F7 b323
	static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0xD3FF80, p0, p1); } // 0x4A595C32F77DFF76 0x5332E645 b323
	static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* gamerHandle) { invoke<Void>(0xD3FFB0, gamerHandle); } // 0xCA2C8073411ECDB6 0x17F1C69D b323
	static BOOL NETWORK_LEAVE_TRANSITION() { return invoke<BOOL>(0xD40040); } // 0xD23A1A815D21DB19 0x3A3599B7 b323
	static BOOL NETWORK_LAUNCH_TRANSITION() { return invoke<BOOL>(0xD40080); } // 0x2DCF46CB1A4F0884 0xE3570BA2 b323
	static void NETWORK_BAIL_TRANSITION(int p0, int p1, int p2) { invoke<Void>(0xD400C0, p0, p1, p2); } // 0xEAA572036990CD1B 0xB59D74CA b323
	static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0xD400D0, p0, maxPlayers); } // 0x3E9BB38102A589B0 0x1B2114D2 b323
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xD40100, p0, maxPlayers, p2); } // 0x4665F51EFED00034 0x58AFBE63 b323
	static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xD40140, p0, p1, p2, players, p4); } // 0x3AAD8B2FCA1E289F 0xC7CB8ADF b323
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, int players, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xD40180, p0, p1, players, p3, p4, p5); } // 0x9E80A5BA8109F974 0xAD13375E b323
	static BOOL NETWORK_IS_TRANSITION_TO_GAME() { return invoke<BOOL>(0xD401C0); } // 0x9D7696D8F4FA6CB7 0x17146B2B b323
	static int NETWORK_GET_TRANSITION_MEMBERS(Any* data, int dataCount) { return invoke<int>(0xD401E0, data, dataCount); } // 0x73B000F7FBC55829 0x31F19263 b323
	static void NETWORK_APPLY_TRANSITION_PARAMETER(int p0, int p1) { invoke<Void>(0xD40210, p0, p1); } // 0x521638ADA1BA0D18 0xCEE79711 b323
	static void NETWORK_APPLY_TRANSITION_PARAMETER_STRING(int p0, const char* string, BOOL p2) { invoke<Void>(0xD40230, p0, string, p2); } // 0xEBEFC2E77084F599 0xE0C28DB5 b323
	static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Any* gamerHandle, const char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xD40260, gamerHandle, p1, p2, p3, p4); } // 0x31D1D2B858D25E6B 0x468B0884 b323
	static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xD40340, p0); } // 0x5728BB6D63E3FF1D 0x03383F57 b323
	static BOOL NETWORK_IS_TRANSITION_HOST() { return invoke<BOOL>(0xD403F0); } // 0x0B824797C9BF2159 0x0C0900BC b323
	static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xD40420, gamerHandle); } // 0x6B5C83BA3EFE6A10 0x0E2854C4 b323
	static BOOL NETWORK_GET_TRANSITION_HOST(Any* gamerHandle) { return invoke<BOOL>(0xD404D0, gamerHandle); } // 0x65042B9774C4435E 0x73098D40 b323
	static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0xD40560); } // 0x68049AEFF83D8F0A 0xC3CDB626 b323
	static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0xD40580); } // 0x53FA83401D9C07FE 0x7917E111 b323
	static BOOL NETWORK_IS_TRANSITION_BUSY() { return invoke<BOOL>(0xD405A0); } // 0x520F3282A53D26B7 0xA357A2C6 b323
	static BOOL NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<BOOL>(0xD405C0); } // 0x292564C735375EDF 0x8262C70E b323
	static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<Void>(0xD405E0); } // 0x2B3A8F7CA3A38FDE 0xC71E607B b323
	static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<Void>(0xD40600); } // 0x43F4DBA69710E01E 0x82D32D07 b323
	static BOOL NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING() { return invoke<BOOL>(0xD40620); } // 0x37A4494483B9F5C9 0xC901AA9F b323
	static void NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) { invoke<Void>(0xD40650, p0); } // 0x30DE938B516F0AD2 0xCCA9C022 b323
	static void NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, BOOL p1) { invoke<Void>(0xD406A0, p0, p1); } // 0xEEEDA5E6D7080987 0x1E5F6AEF b323
	static void NETWORK_TRANSITION_BLOCK_JOIN_REQUESTS(BOOL p0) { invoke<Void>(0xD40700, p0); } // 0x973D76AA760A6CB6 0x0532DDD2 b323
	static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0xD40750, player); } // 0x9AC9CCBFA8C29795 0x4ABD1E59 b323
	static BOOL NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) { return invoke<BOOL>(0xD407A0, p0); } // 0x2615AA2A695930C1 0xCDEBCCE7 b323
	static BOOL NETWORK_JOIN_TRANSITION(Player player) { return invoke<BOOL>(0xD40800, player); } // 0x9D060B08CD63321A 0xB054EC4B b323
	static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xD40860, p0); } // 0x7284A47B3540E6CF 0x4F41DF6B b323
	static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0xD40900); } // 0x05095437424397FA 0x577DAA8A b323
	static void NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(BOOL toggle) { invoke<Void>(0xD40930, toggle); } // 0x4A9FDE3A5A6D0437 0x18F03AFD b323
	static BOOL NETWORK_SEND_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xD40940, gamerHandle, p1, dataCount, p3); } // 0xC3C7A6AFDB244624 0x8B99B72B b323
	static BOOL NETWORK_SEND_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xD40A20, gamerHandle, p1, dataCount, p3); } // 0xC116FF9B4D488291 0x877C0E1C b323
	static int NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(int p0) { return invoke<int>(0xD40B10, p0); } // 0x742B58F723233ED9 0x5E832444 b323
	static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xD40B40); } // 0xCEFA968912D0F78D 0x3FDA00F3 b323
	static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xD40B70, p0); } // 0xFA91550DF9318B22 0xE5DA4CED b323
	static BOOL NETWORK_REMOVE_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xD40BA0, p0); } // 0xF0210268DB0974B1 0x93C665FA b323
	static int NETWORK_GET_PRESENCE_INVITE_ID(int p0) { return invoke<int>(0xD40BD0, p0); } // 0xDFF09646E12EC386 0xD50DF46C b323
	static const char* NETWORK_GET_PRESENCE_INVITE_INVITER(int p0) { return invoke<const char*>(0xD40C00, p0); } // 0x4962CC4AA2F345B7 0x19EC65D9 b323
	static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0xD40C30, p0, p1); } // 0x38D5B0FEBB086F75 0xB2451429 b323
	static int NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<int>(0xD40CC0, p0); } // 0x26E1CD96B0903D60 0xC5E0C989 b323
	static const char* NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(int p0) { return invoke<const char*>(0xD40CE0, p0); } // 0x24409FC4C55CB22D 0xA4302183 b323
	static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_LENGTH(int p0) { return invoke<int>(0xD40D10, p0); } // 0xD39B3FFF8FFDD5BF 0x51B2D848 b323
	static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_CURRENT(int p0) { return invoke<int>(0xD40D40, p0); } // 0x728C4CC7920CD102 0x4677C656 b323
	static BOOL NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(int p0) { return invoke<BOOL>(0xD40D70, p0); } // 0x3DBF2DF0AEB7D289 0xF5E3401C b323
	static BOOL NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(Any p0) { return invoke<BOOL>(0xD40DA0, p0); } // 0x8806CEBFABD3CE05 0x7D593B4C b323
	static BOOL NETWORK_HAS_FOLLOW_INVITE() { return invoke<BOOL>(0xD40DD0); } // 0x76D9B976C4C09FDE 0xE96CFE7D b323
	static BOOL NETWORK_ACTION_FOLLOW_INVITE() { return invoke<BOOL>(0xD40E00); } // 0xC88156EBB786F8D5 0xAB969F00 b323
	static BOOL NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<BOOL>(0xD40E30); } // 0x439BFDE3CD0610F6 0x3242F952 b323
	static void NETWORK_REMOVE_AND_CANCEL_ALL_INVITES() { invoke<Void>(0xD40E60); } // 0xEBF8284D8CADEB53 0x9773F36A b323
	static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xD40E70, p0); } // 0x7524B431B2E6F7EE 0xFDE84CB7 b323
	static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<Void>(0xD40EF0); } // 0x726E0375C7A26368 0xF7134E73 b323
	static void NETWORK_REMOVE_AND_CANCEL_ALL_TRANSITION_INVITES() { invoke<Void>(0xD40F00); } // 0xF083835B70BA9BFE 0xC47352E7 b323
	static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xD40F10, p0, p1, p2, p3); } // 0x9D80CD1D0E6327DE 0x52FB8074 b323
	static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xD40F40, p0); } // 0x4D86CD31E8976ECE 0xEC651BC0 b323
	static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xD40FE0, p0); } // 0x74881E6BCAE2327C 0x72BA00CE b323
	static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xD41040, p0); } // 0x7206F674F2A3B1BB 0xFD95899E b323
	static void NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU(Any* p0) { invoke<Void>(0xD41120, p0); } // 0x66F010A4B031A331 0x11378777 b323
	static void NETWORK_SET_INVITE_FAILED_MESSAGE_FOR_INVITE_MENU(Any* p0, Any* p1) { invoke<Void>(0xD41130, p0, p1); } // 0x0D77A82DC2D0DA59 0x0808D4CC b323
	static BOOL FILLOUT_PM_PLAYER_LIST(Any* gamerHandle, Any p1, Any p2) { return invoke<BOOL>(0xD41140, gamerHandle, p1, p2); } // 0xCBBD7C4991B64809 0xCE40F423 b323
	static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xD41170, p0, p1, p2, p3); } // 0x716B6DB9D1886106 0xB8DF604E b323
	static BOOL REFRESH_PLAYER_LIST_STATS(int p0) { return invoke<BOOL>(0xD411A0, p0); } // 0xE26CCFF8094D8C74 0xF49C1533 b323
	static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0xD411D0); } // 0x2FC5650B0271CB57 0xA812B6CB b323
	static int NETWORK_GET_PLATFORM_PARTY_MEMBER_COUNT() { return invoke<int>(0xD411F0); } // 0x01ABCE5E7CBDA196 b323
	static int NETWORK_GET_PLATFORM_PARTY_MEMBERS(Any* data, int dataSize) { return invoke<int>(0xD41210, data, dataSize); } // 0x120364DE2845DAF8 0xF30E5814 b323
	static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0xD41240); } // 0xFD8B834A8BA05048 0xC6609191 b323
	static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* gamerHandle) { return invoke<BOOL>(0xD41260, gamerHandle); } // 0x8DE9945BCC9AEC52 0x51367B34 b323
	static BOOL NETWORK_CAN_QUEUE_FOR_PREVIOUS_SESSION_JOIN() { return invoke<BOOL>(0xD413A0); } // 0x2BF66D2E7414F686 0x9156EFC0 b323
	static BOOL NETWORK_IS_QUEUING_FOR_SESSION_JOIN() { return invoke<BOOL>(0xD413D0); } // 0x14922ED3E38761F0 0x8FA6EE0E b323
	static void NETWORK_SEND_QUEUED_JOIN_REQUEST() { invoke<Void>(0xD41400); } // 0xFA2888E3833C8E96 0x7F70C15A b323
	static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int seed) { invoke<Void>(0xD41420, seed); } // 0xF1B84178F8674195 0x41702C8A b323
	static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0xD41460); } // 0x599E4FA1F87EB5FF 0x208DD848 b323
	static int NETWORK_GET_RANDOM_INT_RANGED(int rangeStart, int rangeEnd) { return invoke<int>(0xD414A0, rangeStart, rangeEnd); } // 0xE30CF56F1EFA5F43 0xF9B6426D b323
	static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xD414F0); } // 0x655B91F1495A9090 0xA51DC214 b323
	static int NETWORK_PLAYER_GET_CHEATER_REASON() { return invoke<int>(0xD41540); } // 0x172F75B6EE2233BA 0x1720ABA6 b323
	static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0xD41570); } // 0x19D8DA0E5A68045A 0xA19708E3 b323
	static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* gamerHandle, int event, int amountReceived) { return invoke<BOOL>(0xD41620, gamerHandle, event, amountReceived); } // 0xEC5E3AF5289DCA81 0x4C2C6B6A b323
	static void NETWORK_APPLY_PED_SCAR_DATA(Ped ped, int p1) { invoke<Void>(0xD416D0, ped, p1); } // 0xE66C690248F11150 0x4818ACD0 b323
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int maxNumMissionParticipants, BOOL p1, int instanceId) { invoke<Void>(0xD41720, maxNumMissionParticipants, p1, instanceId); } // 0x1CA59E306ECB80A5 0x470810ED b323
	static BOOL NETWORK_TRY_TO_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xD41790, p0, p1, p2); } // 0xD1110739EEADB592 b323
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xD41820); } // 0x2910669969E9535E 0xD9BF6549 b323
	static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0xD41850); } // 0xA6C90FBC38E395EE 0xCCD8C02D b323
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0xD41890); } // 0x18D0456E86604654 0x3E25A3C5 b323
	static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0xD418D0); } // 0x57D158647A6BFABF 0x2BE9235A b323
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xD418F0, vars, numVars, debugName); } // 0x3E9B2F01C50DF595 0xDAF3B0AE b323
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xD41900, vars, numVars, debugName); } // 0x3364AA97340CA215 0xBE3D32B4 b323
	static void NETWORK_FINISH_BROADCASTING_DATA() { invoke<Void>(0xD41910); } // 0x64F62AFB081E260D 0xA71A1D2A b323
	static BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke<BOOL>(0xD41930); } // 0x5D10B3795F3FC886 0x0B739F53 b323
	static Player NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<Player>(0xD41950, player); } // 0x24FB80D107371267 0xBE1C1506 b323
	static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0xD419F0, index); } // 0x1B84DF6AF2A46938 0xC4D91094 b323
	static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0xD41A70, ped); } // 0x6C0E2E0125610278 0x40DBF464 b323
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xD41AE0); } // 0xA4A79DD2D9600654 0xF7952E62 b323
	static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0xD41B00, player); } // 0x93DC1BE4E1ABE9D1 0x168EE2C2 b323
	static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0xD41B60); } // 0xCF61D4B4702EE9EB 0xF4F13B06 b323
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0xD41B80, p0); } // 0x6FF8FF40B6357D45 0x4E2C348B b323
	static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0xD41BC0, player); } // 0xB8DFD30D6973E135 0x43657B17 b323
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0xD41BF0, player); } // 0x3CA58F6CB7CBD784 0xB08B6992 b323
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xD41C30); } // 0x83CD99A1E6061AB5 0x6970BA94 b323
	static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0xD41C60); } // 0xC7B4D79B01FA7A5C 0x89EA7B54 b323
	static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instance_id, int position_hash) { return invoke<Player>(0xD41CA0, scriptName, instance_id, position_hash); } // 0x1D6A14F1F9A736FC 0x9C95D0BB b323
	static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0xD41CD0); } // 0x3B3D11CD9FFCDFC9 0x3083FAD7 b323
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instance_id, BOOL p2, int position_hash) { return invoke<BOOL>(0xD41D00, scriptName, instance_id, p2, position_hash); } // 0x9D40DF90FAD26098 0x4A65250C b323
	static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(const char* scriptName, int instance_id, int position_hash) { return invoke<int>(0xD41E10, scriptName, instance_id, position_hash); } // 0x3658E8CD94FC121A 0x8F7D9F46 b323
	static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke<int>(0xD41F20); } // 0x638A3A81733086DB 0xDB8B5D71 b323
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player player, const char* script, int instance_id) { return invoke<BOOL>(0xD41F60, player, script, instance_id); } // 0x1AD5B71586B94820 0xCEA55F4C b323
	static void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION() { invoke<Void>(0xD41F90); } // 0x2302C0264EA58D31 0x8DCFE77D b323
	static void NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT() { invoke<Void>(0xD41FC0); } // 0x741A3D8380319A81 0x331D9A27 b323
	static Player PARTICIPANT_ID() { return invoke<Player>(0xD41FF0); } // 0x90986E8876CE0A83 0x9C35A221 b323
	static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xD42020); } // 0x57A3BDDAD8E5AA0A 0x907498B0 b323
	static Player NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<Player>(0xD42050, netId, weaponHash); } // 0x7A1ADEEF01740A24 0x4FCA6436 b323
	static BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xD42080, player, entity, p2); } // 0x4CACA84440FA26F6 0x28A45454 b323
	static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0xD420B0, player, weaponHash); } // 0x42B2DAA6B596F5F8 0xA7E7E04F b323
	static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL p4, BOOL changetime, BOOL p6, int p7, int p8) { invoke<Void>(0xD420E0, x, y, z, heading, p4, changetime, p6, p7, p8); } // 0xEA23C49EAA83ACFB 0xF1F9D4B4 b323
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xD42100, time); } // 0x2D95C7E2D7E07307 0xFEA9B85C b323
	static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0xD42140); } // 0x8A8694B48715B000 0x8DE13B36 b323
	static void NETWORK_DISABLE_INVINCIBLE_FLASHING(Player player, BOOL toggle) { invoke<Void>(0xD42180, player, toggle); } // 0x9DD368BF06983221 0x8D27280E b323
	static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(BOOL toggle) { invoke<Void>(0xD421D0, toggle); } // 0x524FF0AEFF9C3973 0xB72F086D b323
	static BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity entity) { return invoke<BOOL>(0xD42210, entity); } // 0xB07D3185E11657A5 0xEDA68956 b323
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xD42270, entity); } // 0xA11700682F3AD45C 0x9E35DAB6 b323
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0xD422E0, netId); } // 0xCE4E5D9B0A4FF560 0x5B912C3F b323
	static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xD42320, entity); } // 0xC7827959479DCC78 0xD7F934F4 b323
	static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0xD42390, entity); } // 0x0991549DE4D64762 0x813353ED b323
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0xD42400, entity); } // 0x06FAACD625D80CAA 0x31A630A4 b323
	static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xD424D0, entity); } // 0x7368E683BB9038D6 0x5C645F64 b323
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netId) { return invoke<BOOL>(0xD42570, netId); } // 0x38CE16C96BD11344 0xB8D2C99E b323
	static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) { return invoke<BOOL>(0xD425B0, netId); } // 0x18A47D074708FD68 0x1E2E3177 b323
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xD425F0, netId); } // 0xA670B3662FAFFBD0 0x9262A60A b323
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xD42660, netId); } // 0x4D36070FE0215186 0x92E77D21 b323
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xD426C0, entity); } // 0xB69317BF5E782347 0xA05FEBD7 b323
	static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0xD426F0, doorID); } // 0x870DDFD5A4A796E4 0xF60DAAF6 b323
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xD42760, entity); } // 0x01BF60A500E28887 0x005FD797 b323
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0xD427D0, pickup); } // 0x5BC9495F0B3B6FA6 0xF7784FC8 b323
	static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) { return invoke<BOOL>(0xD42800, doorHash); } // 0xCB3C68ADB06195DF 0x136326EC b323
	static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xD42850, vehicle); } // 0xB4C94523F023419C 0xF17634EB b323
	static int PED_TO_NET(Ped ped) { return invoke<int>(0xD428C0, ped); } // 0x0EDEC3C276198689 0x86A0B759 b323
	static int OBJ_TO_NET(Object object) { return invoke<int>(0xD42930, object); } // 0x99BFDC94A603E541 0x1E05F29F b323
	static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xD429A0, netHandle); } // 0x367B936610BA360C 0x7E02FAEA b323
	static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xD429E0, netHandle); } // 0xBDCD95FC216A8B3E 0x87717DD4 b323
	static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xD42A20, netHandle); } // 0xD8515F5FEA14CB3F 0x27AA14D8 b323
	static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xD42A60, netHandle); } // 0xBFFEAB45A9A9094A 0x5E149683 b323
	static void NETWORK_GET_LOCAL_HANDLE(Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xD42AA0, gamerHandle, gamerHandleSize); } // 0xE86051786B66CD8E 0x08023B16 b323
	static void NETWORK_HANDLE_FROM_USER_ID(const char* userId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xD42AF0, userId, gamerHandle, gamerHandleSize); } // 0xDCD51DD8F87AEC5C 0x74C2C1B7 b323
	static void NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xD42B70, memberId, gamerHandle, gamerHandleSize); } // 0xA0FD21BED61E5C4C 0x9BFC9FE2 b323
	static void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xD42BF0, player, gamerHandle, gamerHandleSize); } // 0x388EB2B86C73B6B3 0xD3498917 b323
	static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xD42C60, friendIndex, gamerHandle, gamerHandleSize); } // 0xD45CB817D7E177D2 0x3B0BB3A3 b323
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* gamerHandle) { return invoke<BOOL>(0xD42D00, gamerHandle); } // 0x9F0C0A981D73FA56 0xEBA00C2A b323
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0xD42D10); } // 0xB071E27958EF4CF0 0xF000828E b323
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xD42D20); } // 0xFD00798DBA7523DD 0x89C2B5EA b323
	static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xD42D30, gamerHandle); } // 0x426141162EBE5CDB 0xA18A1B26 b323
	static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(Any* p0, Any p1) { return invoke<int>(0xD42DF0, p0, p1); } // 0xD66C9E72B3CC4982 b323
	static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Any p0, Any p1, Any p2) { return invoke<int>(0xD42F10, p0, p1, p2); } // 0x58CC181719256197 b323
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* gamerHandle1, Any* gamerHandle2) { return invoke<BOOL>(0xD43020, gamerHandle1, gamerHandle2); } // 0x57DBA049E110F217 0x45975AE3 b323
	static BOOL NETWORK_IS_HANDLE_VALID(Any* gamerHandle, int gamerHandleSize) { return invoke<BOOL>(0xD430E0, gamerHandle, gamerHandleSize); } // 0x6F79B93B0A8E4133 0xF0996C6E b323
	static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Player>(0xD43110, gamerHandle); } // 0xCE5F689CF5A0A49D 0x2E96EF1E b323
	static const char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xD43140, gamerHandle); } // 0xC82630132081BB6F 0x62EF0A63 b323
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* gamerHandle) { return invoke<BOOL>(0xD431E0, gamerHandle); } // 0x0F10B05DDF8D16E9 0x59127716 b323
	static void NETWORK_SHOW_PROFILE_UI(Any* gamerHandle) { invoke<Void>(0xD43270, gamerHandle); } // 0x859ED1CEA343FCA8 0xF00A20B0 b323
	static const char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<const char*>(0xD432E0, player); } // 0x7718D2E2060837D2 0xCE48F260 b323
	static const char* NETWORK_PLAYER_GET_USERID(Player player, int* userID) { return invoke<const char*>(0xD43360, player, userID); } // 0x4927FC39CD0869A0 0x4EC0D983 b323
	static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0xD43390, player); } // 0x544ABDDA3B409B6D 0xF6659045 b323
	static BOOL NETWORK_PLAYER_INDEX_IS_CHEATER(Player player) { return invoke<BOOL>(0xD433E0, player); } // 0x565E430DB3B05BEC 0xD265B049 b323
	static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0xD43460, p0); } // 0x7E58745504313A2E 0x95481343 b323
	static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xD43490); } // 0xAFEBB0D5D8F687D2 0x048171BC b323
	static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xD434A0); } // 0x203F1CFD823B27A4 0xA396ACDE b323
	static const char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<const char*>(0xD434B0, friendIndex); } // 0xE11EBBB2A783FE8B 0x97420B6D b323
	static const char* NETWORK_GET_FRIEND_DISPLAY_NAME(int friendIndex) { return invoke<const char*>(0xD43500, friendIndex); } // 0x4164F227D052E293 b323
	static BOOL NETWORK_IS_FRIEND_ONLINE(const char* name) { return invoke<BOOL>(0xD43550, name); } // 0x425A44533437B64D 0xE0A42430 b323
	static BOOL NETWORK_IS_FRIEND_HANDLE_ONLINE(Any* gamerHandle) { return invoke<BOOL>(0xD435A0, gamerHandle); } // 0x87EB7A3FFCB314DB b323
	static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) { return invoke<BOOL>(0xD43660, friendName); } // 0x2EA9A3BEDF3F17B8 0xC54365C2 b323
	static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(const char* friendName) { return invoke<BOOL>(0xD436E0, friendName); } // 0x57005C18827F3A28 0x400BDDD9 b323
	static BOOL NETWORK_IS_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0xD43730, gamerHandle); } // 0x1A24A179F9B31654 0x2DA4C282 b323
	static BOOL NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<BOOL>(0xD437C0, p0); } // 0x0BE73DA6984A6E33 0x5C85FF81 b323
	static BOOL NETWORK_IS_ADDING_FRIEND() { return invoke<BOOL>(0xD437D0); } // 0x6EA101606F6E4D81 0xBB7EC8C4 b323
	static BOOL NETWORK_ADD_FRIEND(Any* gamerHandle, const char* message) { return invoke<BOOL>(0xD437F0, gamerHandle, message); } // 0x8E02D73914064223 0x20E5B3EE b323
	static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0xD43880, friendIndex); } // 0xBAD8F2A42B844821 0x94AE7172 b323
	static BOOL NETWORK_GET_PLAYER_OWNS_WAYPOINT(Player player) { return invoke<BOOL>(0xD438D0, player); } // 0x82377B65E943F72D 0xB802B671 b323
	static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xD43930); } // 0xC927EC229934AF60 0x009E68F3 b323
	static BOOL NETWORK_SET_SCRIPT_AUTOMUTED(Any p0) { return invoke<BOOL>(0xD43960, p0); } // 0xB309EBEA797E001F 0x5C0AB2A9 b323
	static BOOL NETWORK_HAS_AUTOMUTE_OVERRIDE() { return invoke<BOOL>(0xD43980); } // 0x26F07DD83A5F7F98 0x9A176B6E b323
	static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xD439B0); } // 0xE870F9F1F7B4F1FA 0xA7DC5657 b323
	static void NETWORK_SET_LOOK_AT_TALKERS(BOOL p0) { invoke<Void>(0xD439F0, p0); } // 0x7D395EA61622E116 0x5C05B7E1 b323
	static BOOL NETWORK_GAMER_HAS_HEADSET(Any* gamerHandle) { return invoke<BOOL>(0xD43A10, gamerHandle); } // 0xF2FD55CB574BCC55 0xD036DA4A b323
	static BOOL NETWORK_IS_GAMER_TALKING(Any* gamerHandle) { return invoke<BOOL>(0xD43AA0, gamerHandle); } // 0x71C33B22606CD88A 0x99B58DBC b323
	static BOOL NETWORK_CAN_TEXT_CHAT_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xD43AD0, gamerHandle); } // 0xA150A4F065806B1F b944
	static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xD43B60, gamerHandle); } // 0xCE60DE011B6C7978 0x001B4046 b323
	static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xD43BF0, gamerHandle); } // 0xDF02A2C93F1F26DA 0x7685B333 b323
	static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xD43C80, gamerHandle); } // 0xE944C4F5AF1B5883 0x3FDCC8D7 b323
	static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xD43D10, gamerHandle); } // 0x15337C7C268A27B2 0xD19B312C b323
	static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* gamerHandle) { return invoke<BOOL>(0xD43DA0, gamerHandle); } // 0xB57A49545BA53CE7 b323
	static BOOL NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(Any* gamerHandle) { return invoke<BOOL>(0xD43E30, gamerHandle); } // 0xCCA4318E1AB03F1F b323
	static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0xD43EC0, player); } // 0x031E11F3D447647E 0xDA9FD9DB b323
	static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xD43F20, player); } // 0x3FB99A8B08D18FD6 0x451FB6B6 b323
	static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0xD43F80, player); } // 0x8C71288AE68EDE39 0x7A21050E b323
	static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0xD43FE0, player); } // 0x9D6981DFC91A8604 0xE128F2B0 b323
	static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0xD44040, player); } // 0x57AF1F8E27483721 0xAE4F4560 b323
	static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0xD440A0, player); } // 0x87F395D957D4353D 0x953EF45E b323
	static float NETWORK_GET_PLAYER_LOUDNESS(Player player) { return invoke<float>(0xD44100, player); } // 0x21A1684A25C2867F 0xF2F67014 b323
	static void NETWORK_SET_TALKER_PROXIMITY(float value) { invoke<Void>(0xD44160, value); } // 0xCBF12D65F95AD686 0x67555C66 b323
	static float NETWORK_GET_TALKER_PROXIMITY() { return invoke<float>(0xD44180); } // 0x84F0F13120B4E098 0x19991ADD b323
	static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xD441B0, toggle); } // 0xBABEC9E69A91C57B 0x8011247F b323
	static void NETWORK_REMAIN_IN_GAME_CHAT(BOOL p0) { invoke<Void>(0xD441D0, p0); } // 0xCFEB46DCD7D8D5EB 0x1A3EA6CD b323
	static void NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) { invoke<Void>(0xD441F0, p0); } // 0xAF66059A131AA269 0xCAB21090 b323
	static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xD44210, toggle); } // 0xD5B4883AC32F24C3 0x3813019A b323
	static void NETWORK_OVERRIDE_TEAM_RESTRICTIONS(int team, BOOL toggle) { invoke<Void>(0xD44230, team, toggle); } // 0x6F697A66CE78674E 0xC8CC9E75 b323
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xD44260, toggle); } // 0x70DA3BF8DACD3210 0xA0FD42D3 b323
	static void NETWORK_SET_OVERRIDE_TUTORIAL_SESSION_CHAT(BOOL toggle) { invoke<Void>(0xD44280, toggle); } // 0x3C5C1E2C2FF814B1 0xC9DDA85B b323
	static void NETWORK_SET_NO_SPECTATOR_CHAT(BOOL toggle) { invoke<Void>(0xD442A0, toggle); } // 0xF46A1E03E8755980 0xD33AFF79 b323
	static void NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(BOOL toggle) { invoke<Void>(0xD442C0, toggle); } // 0x6A5D89D7769A40D8 0x4FFEFE43 b323
	static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xD442E0, player, toggle); } // 0x3039AE5AD2C9C0C4 0x74EE2D8B b323
	static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xD44340, toggle); } // 0x57B192B4D4AD23D5 0x2F98B405 b323
	static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xD44360, player, toggle); } // 0xDDF73E2B1FEC5AB4 0x95F1C60D b323
	static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xD44390, toggle); } // 0x0FF2862B61A58AF9 0x1BCD3DDF b323
	static void NETWORK_SET_VOICE_CHANNEL(int channel) { invoke<Void>(0xD443B0, channel); } // 0xEF6212C2EFEF1A23 0x3974879F b323
	static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<Void>(0xD44400); } // 0xE036A705F989E049 0x9ECF722A b323
	static void NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE(float x, float y, float z) { invoke<Void>(0xD44430, x, y, z); } // 0xDBD2056652689917 0xF1E84832 b323
	static void NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE() { invoke<Void>(0xD444C0); } // 0xF03755696450470C 0x7F9B9052 b323
	static void NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xD444F0, player); } // 0x5E3AA4CA2B6FB0EE 0x7BBEA8CF b323
	static void NETWORK_DISABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xD44550, player); } // 0xCA575C391FEA25CC 0xE797A4B6 b323
	static void NETWORK_GET_MUTE_COUNT_FOR_PLAYER(Player p0, float* p1, float* p2) { invoke<Void>(0xD445B0, p0, p1, p2); } // 0xADB57E5B663CCA8B 0x92268BB5 b323
	static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0xD44600); } // 0x593850C16A36B692 0x92B7351C b323
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0xD44620, toggle); } // 0xF808475FA571D823 0x6BAF95FA b323
	static void NETWORK_SET_RICH_PRESENCE(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xD44640, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 0x932A6CED b323
	static void NETWORK_SET_RICH_PRESENCE_STRING(int p0, const char* textLabel) { invoke<Void>(0xD44650, p0, textLabel); } // 0x3E200C2BCF4164EB 0x017E6777 b323
	static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0xD44660); } // 0x5ED0356A0CE3A34F 0xE1F86C6A b323
	static void NETWORK_LEAVE_PED_BEHIND_BEFORE_WARP(Player player, float x, float y, float z, BOOL p4, BOOL p5) { invoke<Void>(0xD44680, player, x, y, z, p4, p5); } // 0x9769F811D1785B03 0xBE6A30C3 b323
	static void NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Player player, BOOL p1) { invoke<Void>(0xD446B0, player, p1); } // 0xBF22E0F32968E967 0x22E03AD0 b323
	static void REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Entity entity, Ped ped) { invoke<Void>(0xD446D0, entity, ped); } // 0x715135F4B82AC90D 0xCEAE5AFC b323
	static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0xD44720); } // 0x579CCED0265D4896 0xF5F4BD95 b323
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* gamerHandle) { return invoke<BOOL>(0xD44750, gamerHandle); } // 0xB124B57F571D8F18 0xAB8319A3 b323
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(Any* clanDesc, int bufferSize, Any* gamerHandle) { return invoke<BOOL>(0xD44810, clanDesc, bufferSize, gamerHandle); } // 0xEEE6EACBE8874FBA 0x6EE4A282 b323
	static BOOL NETWORK_CLAN_IS_ROCKSTAR_CLAN(Any* clanDesc, int bufferSize) { return invoke<BOOL>(0xD44840, clanDesc, bufferSize); } // 0x7543BB439F63792B 0x54E79E9C b323
	static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(Any* clanDesc, int bufferSize, char* formattedTag) { invoke<Void>(0xD44880, clanDesc, bufferSize, formattedTag); } // 0xF45352426FF3A4F0 0xF633805A b323
	static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0xD44900); } // 0x1F471B79ACC90BEF 0x807B3450 b323
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* memberDesc, int p1) { return invoke<BOOL>(0xD44930, memberDesc, p1); } // 0x48DE78AF2C8885B8 0x3369DD1F b323
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* gamerHandle) { return invoke<BOOL>(0xD44960, gamerHandle); } // 0xA989044E70010ABE 0x8E8CB520 b323
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0xD44990, p0); } // 0x5B9E023DC6EBEDC0 0x1FDB590F b323
	static BOOL NETWORK_CLAN_ANY_DOWNLOAD_MEMBERSHIP_PENDING() { return invoke<BOOL>(0xD449C0); } // 0xB3F64A6A91432477 0x83ED8E08 b323
	static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) { return invoke<BOOL>(0xD44A10, p0); } // 0xBB6E6FEE99D866B2 0x40202867 b323
	static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) { return invoke<int>(0xD44A40, p0); } // 0xAAB11F6C4ADBC2C1 0x25924010 b323
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) { return invoke<BOOL>(0xD44A70, p0, p1); } // 0x48A59CF88D43DF0E 0x48914F6A b323
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP(int* p0, Any* clanMembership, int p2) { return invoke<BOOL>(0xD44AA0, p0, clanMembership, p2); } // 0xC8BC2011F67B3411 0xCDC4A590 b323
	static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0xD44AD0, clanDesc); } // 0x9FAAA4F4FC71F87F 0x79C916C5 b323
	static BOOL NETWORK_CLAN_CREWINFO_GET_STRING_VALUE(const char* animDict, const char* animName) { return invoke<BOOL>(0xD44B00, animDict, animName); } // 0x729E3401F0430686 0xBDA90BAC b323
	static BOOL NETWORK_CLAN_CREWINFO_GET_CREWRANKTITLE(int p0, const char* p1) { return invoke<BOOL>(0xD44B50, p0, p1); } // 0x2B51EDBEFC301339 0x8E952B12 b323
	static BOOL NETWORK_CLAN_HAS_CREWINFO_METADATA_BEEN_RECEIVED() { return invoke<BOOL>(0xD44BA0); } // 0xC32EA7A2F6CA7557 0x966C90FD b323
	static BOOL NETWORK_CLAN_GET_EMBLEM_TXD_NAME(Any* netHandle, char* txdName) { return invoke<BOOL>(0xD44BE0, netHandle, txdName); } // 0x5835D9CD92E83184 0xBA672146 b323
	static BOOL NETWORK_CLAN_REQUEST_EMBLEM(Any p0) { return invoke<BOOL>(0xD44C10, p0); } // 0x13518FF1C6B28938 0x7963FA4D b323
	static BOOL NETWORK_CLAN_IS_EMBLEM_READY(Any p0, Any* p1) { return invoke<BOOL>(0xD44C40, p0, p1); } // 0xA134777FF7F33331 0x88B13CDC b323
	static void NETWORK_CLAN_RELEASE_EMBLEM(Any p0) { invoke<Void>(0xD44D20, p0); } // 0x113E6E3E50E286B0 0xD6E3D5EA b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<BOOL>(0xD44DC0); } // 0x9AA46BADAD0E27ED 0xE22445DA b323
	static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<Void>(0xD44DE0); } // 0x042E4B70B93E6054 0x455DDF5C b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xD44E00, p0, p1); } // 0xCE86D8191B762107 0x89DB0EC7 b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<BOOL>(0xD44E30); } // 0xB5074DB804E28CE7 0xA4EF02F3 b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<BOOL>(0xD44E50); } // 0x5B4F04F19376A0BA 0x068A054E b323
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xD44E70, p0, p1); } // 0xC080FF658B2E41DA 0x9B8631EB b323
	static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { invoke<Void>(0xD44EA0, netId, toggle); } // 0x299EEB23175895FC 0x47C8E5FF b323
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0xD44EC0, netId, toggle); } // 0xE05E81A888FA63C8 0x68D486B2 b323
	static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0xD44EE0, netId, player, toggle); } // 0xA8A024587329F36A 0x4D15FDB1 b323
	static void NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) { invoke<Void>(0xD44F00, entity, toggle); } // 0xD830567D88A1E873 0xDE8C0DB8 b323
	static void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xD44F60, entity, toggle); } // 0xF1CA12B18AEF5298 0x09CBC4B0 b323
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xD44FE0, netId, p1, p2); } // 0xA6928482543022B4 0x199E75EF b323
	static void SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(int netId, BOOL state) { invoke<Void>(0xD45000, netId, state); } // 0x3FA36981311FA4FF 0x00AE4E17 b323
	static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0xD45020, netId); } // 0xA1607996431332DF 0xEA5176C0 b323
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xD45050, p0, p1); } // 0xD1065D68947E7B6E 0x59F3479B b323
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL bIncludePlayersVehicle) { invoke<Void>(0xD450E0, bIncludePlayersVehicle); } // 0xE5F773C1A1D9D168 0x764F6222 b323
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL bIncludePlayersVehicle) { invoke<Void>(0xD45170, bIncludePlayersVehicle); } // 0x7619364C82D3BF14 0x324B56DB b323
	static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL bIncludePlayersVehicle) { invoke<Void>(0xD45200, player, bIncludePlayersVehicle); } // 0x12B37D54667DB0B8 0x18227209 b323
	static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL bIncludePlayersVehicle) { invoke<Void>(0xD452A0, player, bIncludePlayersVehicle); } // 0xFAA10F1FAFB11AF2 0xBA2BB4B4 b323
	static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0xD45340, p0); } // 0x416DBD4CD6ED8DD2 0x8FA7CEBD b323
	static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { invoke<Void>(0xD453C0, entity, normal, slow); } // 0xDE564951F95E09ED 0x47EDEE56 b323
	static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state, Any p2) { invoke<Void>(0xD453E0, entity, state, p2); } // 0x1F4ED342ACEFE62D 0x9B9FCD02 b323
	static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xD45480, player); } // 0xE73092F4157CD126 0xE0A619BD b323
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD454E0, p0, p1, p2); } // 0xE0031D3C8F36AB82 0xDBFB067B b323
	static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0xD455A0, entity); } // 0xE135A9FF3F5D05D8 0x51ADCC5F b323
	static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0xD45600, entity); } // 0x241E289B5C059EDC 0x235A57B3 b323
	static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xD45660, netID); } // 0x6E192E33AD436366 0x597063BA b323
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { invoke<Void>(0xD45690, netID, toggle); } // 0xD45B1FFCCD52FF19 0x95D07BA5 b323
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xD456B0, p0, p1, p2, p3); } // 0xD82CF8E64C8729D8 0x23C5274E b323
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xD45750, p0, p1, p2, p3, p4); } // 0xDC3A310219E5DA62 0xE9FCFB32 b323
	static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xD45810, amount); } // 0x4E5C93BD0C32FBF8 0x391DF4F3 b323
	static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xD458B0, amount); } // 0xB60FEBA45333D36F 0x54998C37 b323
	static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xD45950, amount); } // 0x76B02E21ED27A469 0x5062875E b323
	static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0xD459F0, amount); } // 0x800DD4721A8B008B 0x7F85DFDE b323
	static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xD45A60, amount); } // 0xBCBF4FEF9FA5D781 0xCCAA5CE9 b323
	static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0xD45AD0, amount); } // 0x7277F1F2E085EE74 0x818B6830 b323
	static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0xD45B40, ped_amt, vehicle_amt, object_amt, pickup_amt); } // 0x69778E7564BADE6D 0x83794008 b323
	static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0, Any p1) { return invoke<int>(0xD45BF0, p0, p1); } // 0xAA81B5F10BC43AC2 0x16A80CD6 b323
	static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0, Any p1) { return invoke<int>(0xD45C70, p0, p1); } // 0x1F13D5AE5CB17E17 0x6C25975C b323
	static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0, Any p1) { return invoke<int>(0xD45CF0, p0, p1); } // 0xCF3A965906452031 0xA9A308F3 b323
	static int GET_NUM_CREATED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xD45D70, p0); } // 0x12B6281B6C6706C0 0x603FA104 b323
	static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xD45DF0, p0); } // 0xCB215C4B56A7FAE7 0xD8FEC4F8 b323
	static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xD45E70, p0); } // 0x0CD9AB83489430EA 0x20527695 b323
	static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke<int>(0xD45EF0); } // 0xC7BE335216B5EC7C 0x8687E285 b323
	static int GET_MAX_NUM_NETWORK_PEDS() { return invoke<int>(0xD45F00); } // 0x0C1F7D49C39D2289 0x744AC008 b323
	static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke<int>(0xD45F10); } // 0x0AFCE529F69B21FF 0xC3A12135 b323
	static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke<int>(0xD45F20); } // 0xA72835064DD63E4C 0x6A036061 b323
	static int GET_NETWORK_TIME() { return invoke<int>(0xD45F30); } // 0x7A5487FE9FAA6B48 0x998103C2 b323
	static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0xD45FA0); } // 0x89023FBBF9200E9F 0x98AA48E5 b323
	static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0xD46030); } // 0x46718ACEEDEAFC84 0x4538C4A2 b323
	static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xD46060, timeA, timeB); } // 0x017008CCDAD48503 0x2E079AE6 b323
	static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xD46070, timeA, timeB); } // 0xCB2CF5148012C8D0 0x50EF8FC6 b323
	static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xD46090, timeA, timeB); } // 0xDE350F8651E4346C 0xBBB6DF61 b323
	static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xD460B0, timeA, timeB); } // 0xF5BC95857BD6D512 0x8B4D1C06 b323
	static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xD460D0, timeA, timeB); } // 0xA2C6FC031D46FFF0 0x5666A837 b323
	static const char* GET_TIME_AS_STRING(int time) { return invoke<const char*>(0xD460E0, time); } // 0x9E23B1777A927DAD 0x8218944E b323
	static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0xD461F0); } // 0x9A73240B49945C76 0xF2FDF2E0 b323
	static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { invoke<Void>(0xD46210, posixTime, timeStructure); } // 0xAC97AF97FA68E5D5 0xBB7CCE49 b323
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0xD46290, toggle, playerPed); } // 0x423DE3854BB50894 0x5C4C8458 b323
	static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) { invoke<Void>(0xD46300, toggle, playerPed, p2); } // 0x419594E137637120 0x54058F5F b323
	static void NETWORK_SET_IN_FREE_CAM_MODE(BOOL toggle) { invoke<Void>(0xD46380, toggle); } // 0xFC18DB55AE19E046 0xA7E36020 b323
	static void NETWORK_SET_ANTAGONISTIC_TO_PLAYER(BOOL toggle, Player player) { invoke<Void>(0xD463C0, toggle, player); } // 0x5C707A667DF8B9FA 0x64235620 b323
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0xD46410); } // 0x048746E388762E11 0x3EAD9DB8 b323
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xD46430, p0, p1); } // 0x9CA5DE655269FEC4 0x8434CB43 b323
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xD46460); } // 0x6CC27C9FA2040220 0x4BB33316 b323
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xD46470, player); } // 0x63F9EE203C3619F2 0x56F961E4 b323
	static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time, Any p2, Any p3) { invoke<Void>(0xD464C0, netId, time, p2, p3); } // 0xEC51713AB6EC36E8 0x2C30912D b323
	static void SET_NETWORK_VEHICLE_AS_GHOST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD46510, vehicle, toggle); } // 0x6274C4712850841E 0xEA235081 b323
	static void SET_LOCAL_PLAYER_AS_GHOST(BOOL toggle, BOOL p1) { invoke<Void>(0xD46570, toggle, p1); } // 0x5FFE9B4144F9712F b323
	static BOOL IS_ENTITY_A_GHOST(Entity entity) { return invoke<BOOL>(0xD465B0, entity); } // 0x21D04D7BC538C146 b323
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0xD46620, toggle); } // 0x77758139EC9B66C7 0x4DD46DAE b323
	static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int rotationOrder, BOOL useOcclusionPortal, BOOL looped, float p9, float animTime, float p11) { return invoke<int>(0xD46640, x, y, z, xRot, yRot, zRot, rotationOrder, useOcclusionPortal, looped, p9, animTime, p11); } // 0x7CD6BC4C2BBDD526 0xB06FE3FE b323
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0xD46680, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); } // 0x742A637471BCECD9 0xB386713E b323
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0xD46730, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); } // 0xF2404D68CBC855FA 0x10DD636C b323
	static void NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(int netScene, const char* animDict, const char* animName) { invoke<Void>(0xD467D0, netScene, animDict, animName); } // 0xCF8BD3B0BD6D42D7 0xBFFE8B5C b323
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0xD46850, netScene, entity, bone); } // 0x478DCBD2A98B705A 0x3FE5B222 b323
	static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xD46910, netScene); } // 0x9A1B3FCDB36C8697 0xA9DFDC40 b323
	static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xD46980, netScene); } // 0xC254481A4574CB2F 0x97B1CDF6 b323
	static int NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(int netId) { return invoke<int>(0xD469F0, netId); } // 0x02C40BF885C567B6 0x16AED87B b323
	static BOOL NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(int p0, Any p1) { return invoke<BOOL>(0xD46A30, p0, p1); } // 0xFB1F9381E80FA13F 0x0679CE71 b323
	static BOOL NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(Player player, float x, float y, float z, float radius, float p5, float p6, float p7, int flags) { return invoke<BOOL>(0xD46AA0, player, x, y, z, radius, p5, p6, p7, flags); } // 0x5A6FFA2433E2F14C 0xC62E77B3 b323
	static BOOL NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(Player player, float x1, float y1, float z1, float x2, float y2, float z2, float width, float p8, float p9, float p10, int flags) { return invoke<BOOL>(0xD46AE0, player, x1, y1, z1, x2, y2, z2, width, p8, p9, p10, flags); } // 0x4BA92A18502BCA61 0x74D6B13C b323
	static int NETWORK_QUERY_RESPAWN_RESULTS(Any* p0) { return invoke<int>(0xD46B20, p0); } // 0x3C891A251567DFCE 0x90700C7D b323
	static void NETWORK_CANCEL_RESPAWN_SEARCH() { invoke<Void>(0xD46B80); } // 0xFB8F2A6F3DF08CBE 0x44BFB619 b323
	static void NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3* coordinates, float* heading) { invoke<Void>(0xD46B90, randomInt, coordinates, heading); } // 0x371EA43692861CF1 0xDDFE9FBC b323
	static int NETWORK_GET_RESPAWN_RESULT_FLAGS(int p0) { return invoke<int>(0xD46C00, p0); } // 0x6C34F1208B8923FD 0x03287FD2 b323
	static void NETWORK_START_SOLO_TUTORIAL_SESSION() { invoke<Void>(0xD46C20); } // 0x17E0198B3882C2CB 0x408A9436 b323
	static void NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(int teamId, int instanceId) { invoke<Void>(0xD46C50, teamId, instanceId); } // 0xFB680D403909DC70 0xFFB2ADA1 b323
	static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xD46CA0); } // 0xD0AFAFF5A51D72F7 0xBA57E53E b323
	static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0xD46CD0); } // 0xADA24309FE08DACF 0x34DD7B28 b323
	static BOOL NETWORK_WAITING_POP_CLEAR_TUTORIAL_SESSION() { return invoke<BOOL>(0xD46D10); } // 0xB37E4E6A2388CA7B 0x755A2B3E b323
	static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0xD46D50); } // 0x35F0B98A8387274D 0xA003C40B b323
	static int NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Player player) { return invoke<int>(0xD46D90, player); } // 0x3B39236746714134 0x5E1020CC b323
	static BOOL NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player player, int index) { return invoke<BOOL>(0xD46DE0, player, index); } // 0x9DE986FC9A87C474 0xE66A0B40 b323
	static void NETWORK_CONCEAL_PLAYER(Player player, BOOL toggle, BOOL p2) { invoke<Void>(0xD46E40, player, toggle, p2); } // 0xBBDF066252829606 0x72052DB3 b323
	static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0xD46EA0, player); } // 0x919B3C98ED8292F9 0xB0313590 b323
	static void NETWORK_OVERRIDE_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xD46EF0, hours, minutes, seconds); } // 0xE679E3E06E363892 0xC077BCD6 b323
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0xD46F10); } // 0xD972DF67326F966E 0xC4AEAF49 b323
	static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0xD46F50); } // 0xD7C95D322FF57522 0x2465296D b323
	static int NETWORK_ADD_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xD46F70, x1, y1, z1, x2, y2, z2); } // 0x494C8FB299290269 0x51030E5B b323
	static int NETWORK_ADD_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xD46FA0, x1, y1, z1, x2, y2, z2, width); } // 0x376C6375BA60293A 0xCD69BEA1 b323
	static int NETWORK_ADD_CLIENT_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xD46FD0, x1, y1, z1, x2, y2, z2); } // 0x25B99872D588A101 0x4C2C2B12 b323
	static BOOL NETWORK_REMOVE_ENTITY_AREA(int areaHandle) { return invoke<BOOL>(0xD47000, areaHandle); } // 0x93CF869BAA0C4874 0xEAB97F25 b323
	static BOOL NETWORK_ENTITY_AREA_DOES_EXIST(int areaHandle) { return invoke<BOOL>(0xD47100, areaHandle); } // 0xE64A3CA08DFA37A9 0x69956127 b323
	static BOOL NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(int areaHandle) { return invoke<BOOL>(0xD47130, areaHandle); } // 0x4DF7CFFF471A7FB1 0xCB1CD6D3 b323
	static BOOL NETWORK_ENTITY_AREA_IS_OCCUPIED(int areaHandle) { return invoke<BOOL>(0xD47160, areaHandle); } // 0x4A2D4E8BF4265B0F 0xC6D53AA0 b323
	static void NETWORK_USE_HIGH_PRECISION_BLENDING(int netID, BOOL toggle) { invoke<Void>(0xD47190, netID, toggle); } // 0x2B1813ABA29016C5 0x155465EE b323
	static BOOL NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<BOOL>(0xD471F0); } // 0x924426BFFD82E915 0x98EFB921 b323
	static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0xD47240); } // 0x42FB3B532D526E6C 0xD760CAD5 b323
	static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke<int>(0xD47250); } // 0x10BD227A753B0D84 0x231CFD12 b323
	static BOOL NETWORK_DOES_TUNABLE_EXIST(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xD47270, tunableContext, tunableName); } // 0x85E5F8B9B898B20A 0x9FCE9C9A b323
	static BOOL NETWORK_ACCESS_TUNABLE_INT(const char* tunableContext, const char* tunableName, int* value) { return invoke<BOOL>(0xD472A0, tunableContext, tunableName, value); } // 0x8BE1146DFD5D4468 0xE4B3726A b323
	static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(const char* tunableContext, const char* tunableName, float* value) { return invoke<BOOL>(0xD47300, tunableContext, tunableName, value); } // 0xE5608CA7BC163A5F 0x41E8912A b323
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xD47360, tunableContext, tunableName); } // 0xAA6A47A573ABB75A 0x8A04E1FE b323
	static int NETWORK_GET_CONTENT_MODIFIER_LIST_ID(Hash contentHash) { return invoke<int>(0xD475F0, contentHash); } // 0x187382F8A3E0A6C3 0xA78571CA b323
	static int NETWORK_GET_BONE_ID_OF_FATAL_HIT() { return invoke<int>(0xD47620); } // 0x7DB53B37A2F211A0 0x053BB329 b323
	static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xD47650); } // 0x72433699B4E6DD64 0x3914463F b323
	static int NETWORK_GET_NUMBER_BODY_TRACKER_HITS() { return invoke<int>(0xD47670); } // 0xD38C4A6D047C019D 0x17CBC608 b323
	static BOOL NETWORK_HAS_BONE_BEEN_HIT_BY_KILLER(int boneIndex) { return invoke<BOOL>(0xD476A0, boneIndex); } // 0x2E0BF682CC778D49 0xBFAA349B b323
	static BOOL NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(Ped ped, Player player) { return invoke<BOOL>(0xD47730, ped, player); } // 0x0EDE326D47CD0F3E 0xBEB7281A b323
	static BOOL NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { return invoke<BOOL>(0xD477F0, vehicle, isAudible, isInvisible, netId); } // 0x301A42153C9AD707 0x0E1B38AE b323
	static void NETWORK_USE_LOGARITHMIC_BLENDING_THIS_FRAME(Entity entity) { invoke<Void>(0xD478C0, entity); } // 0xCD71A4ECAB22709E 0xBC54371B b323
	static void NETWORK_OVERRIDE_COORDS_AND_HEADING(Entity entity, float x, float y, float z, float heading) { invoke<Void>(0xD47930, entity, x, y, z, heading); } // 0xA7E30DE9272B6D49 0x644141C5 b323
	static void NETWORK_SET_PROPERTY_ID(int id) { invoke<Void>(0xD47950, id); } // 0x1775961C2FBBCB5C 0x5A74E873 b323
	static void NETWORK_CLEAR_PROPERTY_ID() { invoke<Void>(0xD47990); } // 0xC2B82527CA77053E 0x38BC35C8 b323
	static void NETWORK_SET_PLAYER_MENTAL_STATE(int p0) { invoke<Void>(0xD479C0, p0); } // 0x367EF5E2F439B4C6 0x53C9563C b323
	static void NETWORK_SET_MINIMUM_RANK_FOR_MISSION(BOOL p0) { invoke<Void>(0xD47A00, p0); } // 0x94538037EE44F5CF 0x6B97075B b323
	static int GET_NUM_COMMERCE_ITEMS() { return invoke<int>(0xD47A20); } // 0xF2EAC213D5EA0623 0x965EA007 b323
	static BOOL IS_COMMERCE_DATA_VALID() { return invoke<BOOL>(0xD47A40); } // 0xEA14EEF5B7CD2C30 0xEEFC8A55 b323
	static void TRIGGER_COMMERCE_DATA_FETCH(Any p0) { invoke<Void>(0xD47A60, p0); } // 0xB606E6CC59664972 0x866D1B67 b323
	static BOOL IS_COMMERCE_DATA_FETCH_IN_PROGRESS() { return invoke<BOOL>(0xD47A70); } // 0x1D4DC17C38FEAFF0 0xED4A272F b323
	static const char* GET_COMMERCE_ITEM_ID(int index) { return invoke<const char*>(0xD47AA0, index); } // 0x662635855957C411 0x4ACF110C b323
	static const char* GET_COMMERCE_ITEM_NAME(int index) { return invoke<const char*>(0xD47B10, index); } // 0xB4271092CA7EDF48 0x1AA3A0D5 b323
	static const char* GET_COMMERCE_PRODUCT_PRICE(int index) { return invoke<const char*>(0xD47B80, index); } // 0xCA94551B50B4932C 0x37877757 b323
	static int GET_COMMERCE_ITEM_NUM_CATS(int index) { return invoke<int>(0xD47BF0, index); } // 0x2A7776C709904AB0 0x1CF89DA5 b323
	static const char* GET_COMMERCE_ITEM_CAT(int index, int index2) { return invoke<const char*>(0xD47C60, index, index2); } // 0x6F44CBF56D79FAC0 0x16E53875 b323
	static void OPEN_COMMERCE_STORE(const char* p0, const char* p1, int p2) { invoke<Void>(0xD47CD0, p0, p1, p2); } // 0x58C21165F6545892 0x365C50EE b323
	static BOOL IS_COMMERCE_STORE_OPEN() { return invoke<BOOL>(0xD47CE0); } // 0x2EAC52B4019E2782 0x25E2DBA9 b323
	static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0xD47CF0, toggle); } // 0x9641A9FF718E9C5E 0xC1F6443B b323
	static BOOL REQUEST_COMMERCE_ITEM_IMAGE(int index) { return invoke<BOOL>(0xD47D10, index); } // 0xA2F952104FC6DD4B 0x1FDC75DC b323
	static void RELEASE_ALL_COMMERCE_ITEM_IMAGES() { invoke<Void>(0xD47D40); } // 0x72D0706CD6CCDB58 0xCA7A0A49 b323
	static const char* GET_COMMERCE_ITEM_TEXTURENAME(int index) { return invoke<const char*>(0xD47D50, index); } // 0x722F5D28B61C5EA8 0x44A58B0A b323
	static BOOL IS_STORE_AVAILABLE_TO_USER() { return invoke<BOOL>(0xD47DC0); } // 0x883D79C4071E18B3 0xD32FA11F b323
	static void DELAY_MP_STORE_OPEN() { invoke<Void>(0xD47E20); } // 0x265635150FB0D82E 0xA7FA70AE b323
	static void RESET_STORE_NETWORK_GAME_TRACKING() { invoke<Void>(0xD47E30); } // 0x444C4525ECE0A4B9 0xCC7DCE24 b323
	static BOOL IS_USER_OLD_ENOUGH_TO_ACCESS_STORE() { return invoke<BOOL>(0xD47E40); } // 0x59328EB08C5CEB2B 0x70F6D3AD b323
	static int CLOUD_DELETE_MEMBER_FILE(const char* p0) { return invoke<int>(0xD47E80, p0); } // 0xC64DED7EF0D2FE37 0x2B7B57B3 b323
	static BOOL CLOUD_HAS_REQUEST_COMPLETED(int requestId) { return invoke<BOOL>(0xD47EE0, requestId); } // 0x4C61B39930D045DA 0xBAF52DD8 b323
	static BOOL CLOUD_DID_REQUEST_SUCCEED(int requestId) { return invoke<BOOL>(0xD47F10, requestId); } // 0x3A3D5568AF297CD5 0x9B9AFFF1 b323
	static void CLOUD_CHECK_AVAILABILITY() { invoke<Void>(0xD47F40); } // 0x4F18196C8D38768D 0xC38E9DB0 b323
	static BOOL CLOUD_IS_CHECKING_AVAILABILITY() { return invoke<BOOL>(0xD47F50); } // 0xC7ABAC5DE675EE3B 0x32A4EB22 b323
	static BOOL CLOUD_GET_AVAILABILITY_CHECK_RESULT() { return invoke<BOOL>(0xD47F70); } // 0x0B0CC10720653F3B 0x9262744C b323
	static int GET_CONTENT_TO_LOAD_TYPE() { return invoke<int>(0xD47F90); } // 0x8B0C2964BA471961 b323
	static BOOL GET_IS_LAUNCH_FROM_LIVE_AREA() { return invoke<BOOL>(0xD48070); } // 0x88B588B41FF7868E b323
	static BOOL GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() { return invoke<BOOL>(0xD480B0); } // 0x67FC09BC554A75E5 b323
	static void CLEAR_SERVICE_EVENT_ARGUMENTS() { invoke<Void>(0xD48100); } // 0x966DD84FB6A46017 b323
	static BOOL UGC_COPY_CONTENT(Any* p0, Any* p1) { return invoke<BOOL>(0xD48110, p0, p1); } // 0x152D90E4C1B4738A 0x08243B79 b323
	static BOOL UGC_IS_CREATING() { return invoke<BOOL>(0xD48160); } // 0x9FEDF86898F100E9 0x798D6C27 b323
	static BOOL UGC_HAS_CREATE_FINISHED() { return invoke<BOOL>(0xD48190); } // 0x5E24341A7F92A74B 0xE69E8D0D b323
	static BOOL UGC_DID_CREATE_SUCCEED() { return invoke<BOOL>(0xD481C0); } // 0x24E4E51FC16305F9 0x742075FE b323
	static int UGC_GET_CREATE_RESULT() { return invoke<int>(0xD481F0); } // 0xFBC5E768C7A77A6A 0xCE569932 b323
	static const char* UGC_GET_CREATE_CONTENT_ID() { return invoke<const char*>(0xD48220); } // 0xC55A0B40FFB1ED23 0x82146BE9 b323
	static void UGC_CLEAR_CREATE_RESULT() { invoke<Void>(0xD48250); } // 0x17440AA15D1D3739 0x133FF2D5 b323
	static BOOL UGC_QUERY_MY_CONTENT(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xD48260, p0, p1, p2, p3, p4, p5); } // 0x9BF438815F5D96EA 0xCBA7242F b323
	static BOOL UGC_QUERY_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xD48330, p0, p1, p2, p3, p4, p5); } // 0x692D58DF40657E8C b323
	static BOOL UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xD483C0, contentId, latestVersion, contentTypeName); } // 0x158EC424F35EC469 0xDED82A6E b323
	static BOOL UGC_QUERY_MOST_RECENTLY_CREATED_CONTENT(int offset, int count, const char* contentTypeName, int p3) { return invoke<BOOL>(0xD48470, offset, count, contentTypeName, p3); } // 0x6D4CB481FAC835E8 0x40CF0783 b323
	static BOOL UGC_GET_BOOKMARKED_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xD48510, p0, p1, p2, p3); } // 0xD5A4B59980401588 0x4609D596 b323
	static BOOL UGC_GET_MY_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xD48570, p0, p1, p2, p3); } // 0x3195F8DD0D531052 0x4C2C0D1F b323
	static BOOL UGC_GET_FRIEND_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xD485E0, p0, p1, p2, p3); } // 0xF9E1CCAE8BA4C281 0x9EFBD5D1 b323
	static BOOL UGC_GET_CREW_CONTENT(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xD48640, p0, p1, p2, p3, p4); } // 0x9F6E2821885CAEE2 0xA6D8B798 b323
	static BOOL UGC_GET_GET_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xD486A0, p0, p1, p2, p3, p4); } // 0x678BB03C1A3BD51E 0x67E74842 b323
	static BOOL UGC_GET_GET_BY_CONTENT_ID(const char* contentId, const char* contentTypeName) { return invoke<BOOL>(0xD48710, contentId, contentTypeName); } // 0x815E5E3073DA1D67 0xE123C7AC b323
	static BOOL UGC_GET_GET_BY_CONTENT_IDS(Any* data, int dataCount, const char* contentTypeName) { return invoke<BOOL>(0xD487B0, data, dataCount, contentTypeName); } // 0xB8322EEB38BE7C26 0x22C33603 b323
	static BOOL UGC_GET_MOST_RECENTLY_CREATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xD48890, p0, p1, p2, p3); } // 0xA7862BC5ED1DFD7E 0x37F5BD93 b323
	static BOOL UGC_GET_MOST_RECENTLY_PLAYED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xD488F0, p0, p1, p2, p3); } // 0x97A770BEEF227E2B 0x1CFB3F51 b323
	static BOOL UGC_GET_TOP_RATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xD48950, p0, p1, p2, p3); } // 0x5324A0E3E4CE3570 0x87D1E6BD b323
	static void UGC_CANCEL_QUERY() { invoke<Void>(0xD489B0); } // 0xE9B99B6853181409 0x021D5A94 b323
	static BOOL UGC_IS_GETTING() { return invoke<BOOL>(0xD489C0); } // 0xD53ACDBEF24A46E8 0x4908A514 b323
	static BOOL UGC_HAS_GET_FINISHED() { return invoke<BOOL>(0xD489F0); } // 0x02ADA21EA2F6918F 0x50296140 b323
	static BOOL UGC_DID_GET_SUCCEED() { return invoke<BOOL>(0xD48A20); } // 0x941E5306BCD7C2C7 0x3970B0DA b323
	static BOOL UGC_WAS_QUERY_FORCE_CANCELLED() { return invoke<BOOL>(0xD48A50); } // 0xC87E740D9F3872CC 0xC1487110 b323
	static int UGC_GET_QUERY_RESULT() { return invoke<int>(0xD48A80); } // 0xEDF7F927136C224B 0xCC2356E3 b323
	static int UGC_GET_CONTENT_NUM() { return invoke<int>(0xD48AB0); } // 0xE0A6138401BCB837 0x2DE69817 b323
	static int UGC_GET_CONTENT_TOTAL() { return invoke<int>(0xD48AE0); } // 0x769951E2455E2EB5 0x81BD8D3B b323
	static Hash UGC_GET_CONTENT_HASH() { return invoke<Hash>(0xD48B10); } // 0x3A17A27D75C74887 0x8E1D8F78 b323
	static void UGC_CLEAR_QUERY_RESULTS() { invoke<Void>(0xD48B40); } // 0xBA96394A0EECFA65 0x0D35DD93 b323
	static const char* UGC_GET_CONTENT_USER_ID(int p0) { return invoke<const char*>(0xD48B50, p0); } // 0xCD67AD041A394C9C 0x8F3137E6 b323
	static BOOL UGC_GET_CONTENT_CREATOR_GAMER_HANDLE(int p0, Any* p1) { return invoke<BOOL>(0xD48B80, p0, p1); } // 0x584770794D758C18 b323
	static BOOL UGC_GET_CONTENT_CREATED_BY_LOCAL_PLAYER(Any p0) { return invoke<BOOL>(0xD48C20, p0); } // 0x8C8D2739BA44AF0F b323
	static const char* UGC_GET_CONTENT_USER_NAME(Any p0) { return invoke<const char*>(0xD48C50, p0); } // 0x703F12425ECA8BF5 0xB9137BA7 b323
	static BOOL UGC_GET_CONTENT_IS_USING_SC_NICKNAME(Any p0) { return invoke<BOOL>(0xD48C80, p0); } // 0xAEAB987727C5A8A4 0x9FEEAA9C b323
	static int UGC_GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xD48CB0, p0); } // 0xA7BAB11E7C9C6C5A 0x5E8A7559 b323
	static const char* UGC_GET_CONTENT_ID(int p0) { return invoke<const char*>(0xD48CE0, p0); } // 0x55AA95F481D694D2 0x331AEABF b323
	static const char* UGC_GET_ROOT_CONTENT_ID(int p0) { return invoke<const char*>(0xD48D10, p0); } // 0xC0173D6BFF4E0348 0x0E5E8E5C b323
	static const char* UGC_GET_CONTENT_NAME(Any p0) { return invoke<const char*>(0xD48D40, p0); } // 0xBF09786A7FCAB582 0xA5A0C695 b323
	static int UGC_GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0xD48D70, p0); } // 0x7CF0448787B23758 0x91534C6E b323
	static const char* UGC_GET_CONTENT_PATH(int p0, int p1) { return invoke<const char*>(0xD48DA0, p0, p1); } // 0xBAF6BABF9E7CCC13 0x744A9EA5 b323
	static void UGC_GET_CONTENT_UPDATED_DATE(Any p0, Any* p1) { invoke<Void>(0xD48DE0, p0, p1); } // 0xCFD115B373C0DF63 0xA19A238D b323
	static int UGC_GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<int>(0xD48E70, p0, p1); } // 0x37025B27D9B658B1 0xFF7D44E6 b323
	static BOOL UGC_GET_CONTENT_HAS_LO_RES_PHOTO(int p0) { return invoke<BOOL>(0xD48EA0, p0); } // 0x1D610EB0FEA716D9 b323
	static BOOL UGC_GET_CONTENT_HAS_HI_RES_PHOTO(int p0) { return invoke<BOOL>(0xD48ED0, p0); } // 0x7FCC39C46C3C03BD b323
	static int UGC_GET_CONTENT_LANGUAGE(Any p0) { return invoke<int>(0xD48F00, p0); } // 0x32DD916F3F7C9672 0xA2C5BD9D b323
	static BOOL UGC_GET_CONTENT_IS_PUBLISHED(Any p0) { return invoke<BOOL>(0xD48F30, p0); } // 0x3054F114121C21EA 0xA850DDE1 b323
	static BOOL UGC_GET_CONTENT_IS_VERIFIED(Any p0) { return invoke<BOOL>(0xD48F60, p0); } // 0xA9240A96C74CCA13 0x8F6754AE b323
	static float UGC_GET_CONTENT_RATING(Any p0, Any p1) { return invoke<float>(0xD48F90, p0, p1); } // 0x1ACCFBA3D8DAB2EE 0x1E34953F b323
	static int UGC_GET_CONTENT_RATING_COUNT(Any p0, Any p1) { return invoke<int>(0xD48FC0, p0, p1); } // 0x759299C5BB31D2A9 0x771FE190 b323
	static int UGC_GET_CONTENT_RATING_POSITIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xD48FF0, p0, p1); } // 0x87E5C46C187FE0AE 0x3276D9D3 b323
	static int UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xD49020, p0, p1); } // 0x4E548C0D7AE39FF9 0x41A0FB02 b323
	static BOOL UGC_GET_CONTENT_HAS_PLAYER_RECORD(Any p0) { return invoke<BOOL>(0xD49050, p0); } // 0x70EA8DA57840F9BE 0x11DC0F27 b323
	static BOOL UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(Any p0) { return invoke<BOOL>(0xD49080, p0); } // 0x993CBE59D350D225 0x0DEB3F5A b323
	static int UGC_REQUEST_CONTENT_DATA_FROM_INDEX(int p0, int p1) { return invoke<int>(0xD490B0, p0, p1); } // 0x171DF6A0C07FB3DC 0x84315226 b323
	static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int p2, int p3, int p4) { return invoke<int>(0xD490F0, contentTypeName, contentId, p2, p3, p4); } // 0x7FD2990AF016795E 0x38FC2EEB b323
	static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0xD49170, p0); } // 0x5E0165278F6339EE 0x1C4F9FDB b323
	static BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Any p0) { return invoke<BOOL>(0xD491A0, p0); } // 0x2D5DC831176D0114 0xA69AE16C b323
	static BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0xD491D0, p0); } // 0xEBFA8D50ADDC54C4 0xF50BC67A b323
	static BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0xD49200, p0); } // 0x162C23CA83ED0A62 0xB3BBD241 b323
	static const char* UGC_GET_CACHED_DESCRIPTION(Any p0, Any p1) { return invoke<const char*>(0xD49230, p0, p1); } // 0x40F7E66472DF3E5C 0x70A2845C b323
	static BOOL UGC_RELEASE_CACHED_DESCRIPTION(Any p0) { return invoke<BOOL>(0xD49290, p0); } // 0x5A34CD9C3C5BEC44 0x346B506C b323
	static void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS() { invoke<Void>(0xD492C0); } // 0x68103E2247887242 0x0095DB71 b323
	static BOOL UGC_PUBLISH(const char* contentId, const char* baseContentId, const char* contentTypeName) { return invoke<BOOL>(0xD492D0, contentId, baseContentId, contentTypeName); } // 0x1DE0F5F50D723CAA 0xAD334B40 b323
	static BOOL UGC_SET_BOOKMARKED(const char* contentId, BOOL bookmarked, const char* contentTypeName) { return invoke<BOOL>(0xD49340, contentId, bookmarked, contentTypeName); } // 0x274A1519DFC1094F 0x980D45D7 b323
	static BOOL UGC_SET_DELETED(Any* p0, BOOL p1, const char* p2) { return invoke<BOOL>(0xD493A0, p0, p1, p2); } // 0xD05D1A6C74DA3498 0x48CCC328 b323
	static BOOL UGC_IS_MODIFYING() { return invoke<BOOL>(0xD49400); } // 0x45E816772E93A9DB 0x8E664EFD b323
	static BOOL UGC_HAS_MODIFY_FINISHED() { return invoke<BOOL>(0xD49430); } // 0x299EF3C576773506 0x611E0BE2 b323
	static BOOL UGC_DID_MODIFY_SUCCEED() { return invoke<BOOL>(0xD49460); } // 0x793FF272D5B365F4 0xF0211AC1 b323
	static int UGC_GET_MODIFY_RESULT() { return invoke<int>(0xD49490); } // 0x5A0A3D1A186A5508 0x1F0DD8AF b323
	static void UGC_CLEAR_MODIFY_RESULT() { invoke<Void>(0xD494C0); } // 0xA1E5E0204A6FCC70 0x405ECA16 b323
	static BOOL UGC_GET_CREATORS_BY_USER_ID(Any* p0, Any* p1) { return invoke<BOOL>(0xD494D0, p0, p1); } // 0xB746D20B17F2A229 0x9567392B b323
	static BOOL UGC_HAS_QUERY_CREATORS_FINISHED() { return invoke<BOOL>(0xD49570); } // 0x63B406D7884BFA95 0xF79FFF3C b323
	static BOOL UGC_DID_QUERY_CREATORS_SUCCEED() { return invoke<BOOL>(0xD495A0); } // 0x4D02279C83BE69FE 0xA7F3F82B b323
	static int UGC_GET_CREATOR_NUM() { return invoke<int>(0xD495D0); } // 0x597F8DBA9B206FC7 0x410C61D1 b323
	static BOOL UGC_LOAD_OFFLINE_QUERY(Any p0) { return invoke<BOOL>(0xD49600, p0); } // 0x5CAE833B0EE0C500 0x0D4F845D b323
	static void UGC_CLEAR_OFFLINE_QUERY() { invoke<Void>(0xD49630); } // 0x61A885D3F7CFEE9A 0xE13C1F7F b323
	static void UGC_SET_QUERY_DATA_FROM_OFFLINE(BOOL p0) { invoke<Void>(0xD49640, p0); } // 0xF98DDE0A8ED09323 0x213C6D36 b323
	static void UGC_SET_USING_OFFLINE_CONTENT(BOOL p0) { invoke<Void>(0xD49660, p0); } // 0xFD75DABC0957BF33 0x511E6F50 b323
	static BOOL UGC_IS_LANGUAGE_SUPPORTED(Any p0) { return invoke<BOOL>(0xD49680, p0); } // 0xF53E48461B71EECB 0xB4668B23 b323
	static BOOL FACEBOOK_POST_COMPLETED_HEIST(const char* heistName, int cashEarned, int xpEarned) { return invoke<BOOL>(0xD496B0, heistName, cashEarned, xpEarned); } // 0x098AB65B9ED9A9EC 0x30B51753 b323
	static BOOL FACEBOOK_POST_CREATE_CHARACTER() { return invoke<BOOL>(0xD496F0); } // 0xDC48473142545431 0x02DAD93F b323
	static BOOL FACEBOOK_POST_COMPLETED_MILESTONE(int milestoneId) { return invoke<BOOL>(0xD49720, milestoneId); } // 0x0AE1F1653B554AB9 0x2D947814 b323
	static BOOL FACEBOOK_HAS_POST_COMPLETED() { return invoke<BOOL>(0xD49750); } // 0x62B9FEC9A11F10EF 0x37A28C26 b323
	static BOOL FACEBOOK_DID_POST_SUCCEED() { return invoke<BOOL>(0xD49780); } // 0xA75E2B6733DA5142 0x11E8B5CD b323
	static BOOL FACEBOOK_CAN_POST_TO_FACEBOOK() { return invoke<BOOL>(0xD497B0); } // 0x43865688AE10F0D7 0x429AEAB3 b323
	static int TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, const char* filePath, const char* name, BOOL p3) { return invoke<int>(0xD497E0, gamerHandle, filePath, name, p3); } // 0x16160DA74A8E74A2 0xAD546CC3 b323
	static int TITLE_TEXTURE_DOWNLOAD_REQUEST(const char* filePath, const char* name, BOOL p2) { return invoke<int>(0xD49950, filePath, name, p2); } // 0x0B203B4AFDE53A4F 0x1856D008 b323
	static int UGC_TEXTURE_DOWNLOAD_REQUEST(const char* p0, int p1, int p2, int p3, const char* p4, BOOL p5) { return invoke<int>(0xD49A10, p0, p1, p2, p3, p4, p5); } // 0x308F96458B7087CC 0x68C9AF69 b323
	static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0xD49AE0, p0); } // 0x487EB90B98E9FB19 0xEE8D9E70 b323
	static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0xD49B00, p0); } // 0x5776ED562C134687 0xE4547765 b323
	static const char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<const char*>(0xD49B30, p0); } // 0x3448505B6E35262D 0xA40EF65A b323
	static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int p0) { return invoke<int>(0xD49B60, p0); } // 0x8BD6C6DEA20E82C6 0x03225BA3 b323
	static BOOL NETWORK_CHECK_ROS_LINK_WENTDOWN_NOT_NET() { return invoke<BOOL>(0xD49BB0); } // 0x60EDD13EB3AC1FF3 0x4DEBC227 b323
	static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0xD49C20); } // 0xEFFB25453D8600F9 0x5C065D55 b323
	static BOOL NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() { return invoke<BOOL>(0xD49C40); } // 0x66B59CFFD78467AF 0x0CA1167F b323
	static BOOL NETWORK_HAVE_ROS_SOCIAL_CLUB_PRIV() { return invoke<BOOL>(0xD49CA0); } // 0x606E4D3E3CCCF3EB 0x424C6E27 b323
	static BOOL NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke<BOOL>(0xD49D00); } // 0x8020A73847E0CA7D 0xD3BBE42F b323
	static BOOL NETWORK_HAVE_ROS_CREATE_TICKET_PRIV() { return invoke<BOOL>(0xD49D40); } // 0xA0AD7E2AF5349F61 0xBDBB5948 b323
	static BOOL NETWORK_HAVE_ROS_MULTIPLAYER_PRIV() { return invoke<BOOL>(0xD49DA0); } // 0x5F91D5D0B36AA310 0x97287D68 b323
	static BOOL NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV() { return invoke<BOOL>(0xD49E00); } // 0x422D396F80A96547 0xC6EA802E b323
	static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0xD49E60, index); } // 0xA699957E60D80214 0xFD261E30 b323
	static BOOL NETWORK_HAS_ROS_PRIVILEGE_END_DATE(int privilege, int* banType, Any* timeData) { return invoke<BOOL>(0xD49EE0, privilege, banType, timeData); } // 0xC22912B1D85F26B1 0x8570DD34 b323
	static int NETWORK_START_COMMUNICATION_PERMISSIONS_CHECK(Any p0) { return invoke<int>(0xD49F10, p0); } // 0x36391F397731595D b323
	static void NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE() { invoke<Void>(0xD49F20); } // 0x9465E683B12D3F6B 0x273C6180 b323
	static void NETWORK_FORCE_LOCAL_PLAYER_SCAR_SYNC() { invoke<Void>(0xD49F30); } // 0xB7C7F6AD6424304B 0x371BBA08 b323
	static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(BOOL toggle) { invoke<Void>(0xD49F50, toggle); } // 0xC505036A35AFD01B 0xA100CC97 b323
	static void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity entity, BOOL toggle) { invoke<Void>(0xD49FA0, entity, toggle); } // 0x267C78C60E806B9A 0xBB2D33D3 b323
	static void NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player player) { invoke<Void>(0xD49FF0, player); } // 0x6BFF5F84102DF80A b323
	static void NETWORK_SHOW_PSN_UGC_RESTRICTION() { invoke<Void>(0xD4A030); } // 0x5C497525F803486B b323
	static BOOL NETWORK_IS_TITLE_UPDATE_REQUIRED() { return invoke<BOOL>(0xD4A070); } // 0x6FB7BB3607D27FA2 b323
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xD51350, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); } // 0x509D5878EB39E842 0x2F7AA05C b323
	static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xD513E0, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); } // 0x9A294B2138ABB884 0x58040420 b323
	static void DELETE_OBJECT(Object* object) { invoke<Void>(0xD51470, object); } // 0x539E0AE3E6634B9F 0xD6EF9DA7 b323
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0xD51480, object); } // 0x58A850EAEE20FAA3 0x8F95A20B b323
	static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0xD51510, object, toX, toY, toZ, speedX, speedY, speedZ, collision); } // 0x2FDFF4107B8C1147 0x63BFA7A0 b323
	static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0xD51550, object, targettable); } // 0x8A7391690F5AFD81 0x3F88CD86 b323
	static void SET_OBJECT_FORCE_VEHICLES_TO_AVOID(Object object, BOOL toggle) { invoke<Void>(0xD515E0, object, toggle); } // 0x77F33F2CCF64B3AA 0x483C5C88 b323
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xD51640, x, y, z, radius, modelHash, isMission, p6, p7); } // 0xE143FA2249364369 0x45619B33 b323
	static BOOL HAS_OBJECT_BEEN_BROKEN(Object object, Any p1) { return invoke<BOOL>(0xD51670, object, p1); } // 0x8ABFB70C49CC43E2 0xFE21F891 b323
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0xD516D0, p0, p1, p2, p3, modelHash, p5); } // 0x761B0E69AC4D007E 0x6FC0353D b323
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { return invoke<BOOL>(0xD51700, x, y, z, radius, modelHash, p5); } // 0x46494A2475701343 0x7DB578DD b323
	static Vector3 GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xD51730, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); } // 0x163E252DE035A133 0x87A42A12 b323
	static BOOL GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, Vector3* outPosition, Vector3* outRotation, int rotationOrder) { return invoke<BOOL>(0xD51810, x, y, z, radius, modelHash, outPosition, outRotation, rotationOrder); } // 0x163F8B586BC95F2A 0x65213FC3 b323
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0xD518C0, type, x, y, z, locked, heading, p6); } // 0xF82D8F1926A02C3D 0x38C951A4 b323
	static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xD519C0, type, x, y, z, locked, heading); } // 0xEDC1A5B84AEF33FF 0x4B44A83D b323
	static void SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(Hash modelHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { invoke<Void>(0xD519E0, modelHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); } // 0x9B12F9A24FABEDB0 0x4E0A260B b323
	static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL scriptDoor, BOOL isLocal) { invoke<Void>(0xD51B00, doorHash, modelHash, x, y, z, p5, scriptDoor, isLocal); } // 0x6F8838D03D1DC226 0x9D2D778D b323
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash, Any p1) { invoke<Void>(0xD51B40, doorHash, p1); } // 0x464D8E1427156FE4 0x00253286 b323
	static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int state, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xD51B50, doorHash, state, requestDoor, forceUpdate); } // 0x6BAB9442830C7F53 0xDF83DB47 b323
	static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0xD51B80, doorHash); } // 0x160AA1B32F6139B8 0xD42A41C2 b323
	static int DOOR_SYSTEM_GET_DOOR_PENDING_STATE(Hash doorHash) { return invoke<int>(0xD51BB0, doorHash); } // 0x4BC2854478F3A749 0xD649B7E1 b323
	static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorHash, float rate, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xD51BE0, doorHash, rate, requestDoor, forceUpdate); } // 0x03C27E13B42A0E82 0x4F44AF21 b323
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float distance, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xD51C80, doorHash, distance, requestDoor, forceUpdate); } // 0x9BA001CB45CBF627 0x47531446 b323
	static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xD51D20, doorHash, ajar, requestDoor, forceUpdate); } // 0xB6E6FBA95C7324AC 0x34883DE3 b323
	static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0xD51DC0, doorHash); } // 0x65499865FCA6E5EC 0xB74C3BD7 b323
	static void DOOR_SYSTEM_SET_SPRING_REMOVED(Hash doorHash, BOOL removed, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xD51E10, doorHash, removed, requestDoor, forceUpdate); } // 0xC485E07E4F0B7958 0xB4A9A558 b323
	static void DOOR_SYSTEM_SET_HOLD_OPEN(Hash doorHash, BOOL toggle) { invoke<Void>(0xD51EC0, doorHash, toggle); } // 0xD9B71952F78A2640 0xECE58AE0 b323
	static void DOOR_SYSTEM_SET_DOOR_OPEN_FOR_RACES(Hash doorHash, BOOL p1) { invoke<Void>(0xD51F20, doorHash, p1); } // 0xA85A21582451E951 0xF736227C b323
	static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0xD51FC0, doorHash); } // 0xC153C43EA202C8C1 0x5AFCD8A1 b323
	static BOOL IS_DOOR_CLOSED(Hash doorHash) { return invoke<BOOL>(0xD51FF0, doorHash); } // 0xC531EE8A1145A149 0x48659CD7 b323
	static void OPEN_ALL_BARRIERS_FOR_RACE(BOOL p0) { invoke<Void>(0xD52060, p0); } // 0xC7F29CA00F46350E 0x9BF33E41 b323
	static void CLOSE_ALL_BARRIERS_FOR_RACE() { invoke<Void>(0xD52080); } // 0x701FDA1E82076BA4 0xF592AD10 b323
	static BOOL DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(Any p0) { return invoke<BOOL>(0xD52090, p0); } // 0xDF97CDD4FC08FD34 0x17FF9393 b323
	static BOOL DOOR_SYSTEM_FIND_EXISTING_DOOR(float x, float y, float z, Hash modelHash, Hash* outDoorHash) { return invoke<BOOL>(0xD520D0, x, y, z, modelHash, outDoorHash); } // 0x589F80B325CC82C5 0xE9AE494F b323
	static BOOL IS_GARAGE_EMPTY(Hash garageHash, BOOL p1, int p2) { return invoke<BOOL>(0xD52160, garageHash, p1, p2); } // 0x90E47239EA1980B8 0xA8B37DEA b323
	static BOOL IS_PLAYER_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Player player, float p2, int p3) { return invoke<BOOL>(0xD521F0, garageHash, player, p2, p3); } // 0x024A60DEB0EA69F0 0xC33ED360 b323
	static BOOL IS_PLAYER_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Player player, int p2) { return invoke<BOOL>(0xD52290, garageHash, player, p2); } // 0x1761DC5D8471CBAA 0x41924877 b323
	static BOOL ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xD522F0, garageHash, p1, p2, p3, p4); } // 0x85B6C850546FDDE2 0x4BD59750 b323
	static BOOL IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xD52360, garageHash, p1, p2, p3, p4); } // 0x673ED815D6E323B7 0x7B44D659 b323
	static BOOL IS_OBJECT_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Entity entity, float p2, int p3) { return invoke<BOOL>(0xD523D0, garageHash, entity, p2, p3); } // 0x372EF6699146A1E4 0x142C8F76 b323
	static BOOL IS_OBJECT_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Entity entity, int p2) { return invoke<BOOL>(0xD52490, garageHash, entity, p2); } // 0xF0EED5A6BC7B237A 0x95A9AB2B b323
	static void CLEAR_OBJECTS_INSIDE_GARAGE(Hash garageHash, BOOL vehicles, BOOL peds, BOOL objects, BOOL isNetwork) { invoke<Void>(0xD52510, garageHash, vehicles, peds, objects, isNetwork); } // 0x190428512B240692 0xA565E27E b323
	static void ENABLE_SAVING_IN_GARAGE(Hash garageHash, BOOL toggle) { invoke<Void>(0xD52550, garageHash, toggle); } // 0xF2E1A7133DD356A6 0x43BB7E48 b323
	static void CLOSE_SAFEHOUSE_GARAGES() { invoke<Void>(0xD525B0); } // 0x66A49D021870FE88 0x6158959E b323
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xD525C0, x, y, z, radius, hash, p5); } // 0xBFA48E2FF417213F 0x23FF2BA4 b323
	static BOOL IS_POINT_IN_ANGLED_AREA(float xPos, float yPos, float zPos, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ) { return invoke<BOOL>(0xD52620, xPos, yPos, zPos, x1, y1, z1, x2, y2, z2, width, debug, includeZ); } // 0x2A70BAE8883E4C81 0x73BCFFDC b323
	static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object object, BOOL toggle) { invoke<Void>(0xD52700, object, toggle); } // 0x4D89D607CB3DD1D2 0x19B17769 b323
	static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0xD52760, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); } // 0xF6DF6E90DE7DF90F 0xE8D11C58 b323
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0xD52790, p0, p1); } // 0xB6FBFD079B8D0596 0xF0B330AD b323
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0xD52800, object, toggle); } // 0x406137F8EF90EAF5 0x3E263AE1 b323
	static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0xD52860, x, y, z, range, p4); } // 0x397DC58FF00298D1 0xE9E46941 b323
	static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0xD52960, objectHash, x, y, z, range); } // 0x8C90FE4B381BA60A 0x50A62C43 b323
	static void REMOVE_OBJECT_HIGH_DETAIL_MODEL(Object object) { invoke<Void>(0xD52990, object); } // 0x4A39DB43E47CF3AA 0xE3261B35 b323
	static void BREAK_OBJECT_FRAGMENT_CHILD(Object p0, Any p1, BOOL p2) { invoke<Void>(0xD529C0, p0, p1, p2); } // 0xE7E4C198B0185900 0x1E82C2AE b323
	static void FIX_OBJECT_FRAGMENT(Object object) { invoke<Void>(0xD529E0, object); } // 0xF9C1681347C8BD15 b323
	static void TRACK_OBJECT_VISIBILITY(Object object) { invoke<Void>(0xD52A60, object); } // 0xB252BC036B525623 0x46D06B9A b323
	static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0xD52AA0, object); } // 0x8B32ACE6326A7546 0xF4FD8AE4 b323
	static void SET_OBJECT_IS_SPECIAL_GOLFBALL(Object object, BOOL toggle) { invoke<Void>(0xD52B10, object, toggle); } // 0xC6033D32241F6FB5 0xF4A1A14A b323
	static void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(Any p0, BOOL p1) { invoke<Void>(0xD52B70, p0, p1); } // 0xEB6F1A9B5510A5D2 0xAF016CC1 b323
	static void SET_CUTSCENES_WEAPON_FLASHLIGHT_ON_THIS_FRAME(Object object, BOOL toggle) { invoke<Void>(0xD52BD0, object, toggle); } // 0xBCE595371A5FBAAF 0x3A68AA46 b323
	static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0xD52C40, x, y, z, radius, name); } // 0xB48FCED898292E52 0xA286DE96 b323
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { invoke<Void>(0xD52D50, object, state); } // 0x5C29F698D404C5E1 0x21F51560 b323
	static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0xD52D60, object); } // 0x899BA936634A322E 0xF1B8817A b323
	static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0xD52DA0, object); } // 0x52AF537A0C5B8AAD 0xE08C834D b323
	static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object object) { return invoke<float>(0xD52DE0, object); } // 0x260EE4FDBDF4DB01 0x020497DE b323
	static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0xD52E10, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); } // 0xFBA08C503DD5FA58 0x5E14DF68 b323
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0xD52E50, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); } // 0x891804727E0A98B7 0xF015BFE2 b323
	static Object CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xD52EA0, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); } // 0x673966A0C0FD7171 0x17B99CE7 b323
	static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xD52F00, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x2EAF1FDB2FB55698 0x8C886BE5 b323
	static Object CREATE_NON_NETWORKED_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xD52F40, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x125494B98A21AAF7 0x56A02502 b323
	static void ATTACH_PORTABLE_PICKUP_TO_PED(Object pickupObject, Ped ped) { invoke<Void>(0xD52F80, pickupObject, ped); } // 0x8DC39368BDD57755 0x184F6AB3 b323
	static void DETACH_PORTABLE_PICKUP_FROM_PED(Object pickupObject) { invoke<Void>(0xD52F90, pickupObject); } // 0xCF463D1E9A0AECB1 0x1D094562 b323
	static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelHash, int number) { invoke<Void>(0xD53010, modelHash, number); } // 0x0BF3B3BD47D79C08 0x7EFBA039 b323
	static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(BOOL toggle) { invoke<Void>(0xD530D0, toggle); } // 0x78857FC65CADB909 0xA3CDF152 b323
	static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, float p3, float p4) { return invoke<Vector3>(0xD53120, x, y, z, p3, p4); } // 0x6E16BC2503FF1FF0 0x618B5F67 b323
	static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0xD53230, pickup); } // 0x225B8B35C88029B3 0xC2E1E2C5 b323
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xD532D0, pickupHash); } // 0x27F9D613092159CF 0x40062C53 b323
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0xD532F0, pickup); } // 0x80EC48E6679313F9 0x0BE5CCED b323
	static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0xD53320, pickup); } // 0x3288D8ACAECD2AB2 0x64A7A0E0 b323
	static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { invoke<Void>(0xD53330, x, y, z, value, amount, model); } // 0x0589B5E791CE9B2B 0x36C9A5EA b323
	static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xD53350, pickup); } // 0xAFC1CA75AD4074D1 0x9C6DA0B3 b323
	static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0xD533A0, pickupObject); } // 0xD9EFB6DBF7DAAEA3 0xE0B32108 b323
	static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0xD53430, pickup); } // 0x5099BC55630B25AE 0x6052E62E b323
	static BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0xD53450, pickupHash, x, y, z, radius); } // 0xF9C36251F6E48E33 0xF139681B b323
	static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0xD53570, pickup, duration); } // 0x78015C9B4B3ECC9D 0xAB11267D b323
	static void SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(Player player, Hash pickupHash, BOOL toggle) { invoke<Void>(0xD53580, player, pickupHash, toggle); } // 0x616093EC6B139DD9 0x7FADB4B9 b323
	static void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Hash modelHash, BOOL toggle) { invoke<Void>(0xD535F0, modelHash, toggle); } // 0x88EAEC617CD26926 0x3A8F1BF7 b323
	static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0xD53630, object, p1, p2); } // 0x53E0DF1A2A3CF0CA 0x77687DC5 b323
	static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object object, BOOL p1, BOOL p2) { invoke<Void>(0xD536C0, object, p1, p2); } // 0x92AEFB5F6E294023 0xCBB5F9B6 b323
	static void SET_PICKUP_OBJECT_GLOW_OFFSET(Pickup pickup, float p1, BOOL p2) { invoke<Void>(0xD53740, pickup, p1, p2); } // 0xA08FE5E49BDC39DD 0x276A7807 b323
	static int GET_DEFAULT_AMMO_FOR_WEAPON_PICKUP(Hash pickupHash) { return invoke<int>(0xD537C0, pickupHash); } // 0xDB41D07A45A6D4B7 0x000E92DC b323
	static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { invoke<Void>(0xD53850, multiplier); } // 0x318516E02DE3ECE2 0x9879AC51 b323
	static void SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(BOOL p0) { invoke<Void>(0xD53870, p0); } // 0x31F924B53EADDF65 0xDB18FA01 b323
	static void SUPPRESS_PICKUP_REWARD_TYPE(int rewardType, BOOL suppress) { invoke<Void>(0xD53890, rewardType, suppress); } // 0xF92099527DB8E2A7 0xA7E936FD b323
	static void CLEAR_ALL_PICKUP_REWARD_TYPE_SUPPRESSION() { invoke<Void>(0xD538C0); } // 0xA2C1F5E92AFE49ED 0xB241806C b323
	static void CLEAR_PICKUP_REWARD_TYPE_SUPPRESSION(int rewardType) { invoke<Void>(0xD538D0, rewardType); } // 0x762DB2D380B48D04 0xD1BAAFB7 b323
	static void RENDER_FAKE_PICKUP_GLOW(float x, float y, float z, int colorIndex) { invoke<Void>(0xD538F0, x, y, z, colorIndex); } // 0x3430676B11CDF21D 0x63B02FAD b323
	static void SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(Object object, BOOL toggle) { invoke<Void>(0xD53920, object, toggle); } // 0xB2D0BDE54F0E8E5A 0x132B6D92 b323
	static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0xD53970, pickupHash); } // 0x08F96CA6C551AD51 0xEDD01937 b323
	static void SET_OBJECT_TINT_INDEX(Object object, int textureVariation) { invoke<Void>(0xD53A20, object, textureVariation); } // 0x971DA0055324D033 b323
	static Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW(Hash pickupHash) { return invoke<Hash>(0xD53AC0, pickupHash); } // 0x5EAAD83F8CFB4575 0x6AE36192 b323
	static void SET_FORCE_OBJECT_THIS_FRAME(float x, float y, float z, float p3) { invoke<Void>(0xD53AE0, x, y, z, p3); } // 0xF538081986E49E9D 0x3DA41C1A b323
	static void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Object object) { invoke<Void>(0xD53B40, object); } // 0xADBE4809F19F927A 0x2048A7DD b323
}

namespace PAD
{
	static BOOL IS_CONTROL_ENABLED(int control, int action) { return invoke<BOOL>(0xD56530, control, action); } // 0x1CEA6BFDF248E5D9 0x9174AF84 b323
	static BOOL IS_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xD56590, control, action); } // 0xF3A21BCD95725A4A 0x517A4384 b323
	static BOOL IS_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xD56600, control, action); } // 0x648EE3E7F38877DD 0x1F91A06E b323
	static BOOL IS_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xD56670, control, action); } // 0x580417101DDB492F 0x4487F579 b323
	static BOOL IS_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xD566E0, control, action); } // 0x50F940259D3841E6 0x2314444B b323
	static int GET_CONTROL_VALUE(int control, int action) { return invoke<int>(0xD56750, control, action); } // 0xD95E79E8686D2C27 0xC526F3C6 b323
	static float GET_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xD567D0, control, action); } // 0xEC3C9B8D5327B563 0x5DE226A5 b323
	static float GET_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xD56830, control, action); } // 0x5B84D09CEC5209C5 0xC49343BB b323
	static BOOL SET_CONTROL_VALUE_NEXT_FRAME(int control, int action, float value) { return invoke<BOOL>(0xD56890, control, action, value); } // 0xE8A25867FBA3B05E b323
	static BOOL IS_DISABLED_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xD56910, control, action); } // 0xE2587F8CBBD87B1D 0x32A93544 b323
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xD569B0, control, action); } // 0x91AEF906BCA88877 0xEE6ABD32 b323
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xD56A50, control, action); } // 0x305C8DCD79DA8B0F 0xD6A679E1 b323
	static float GET_DISABLED_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xD56AF0, control, action); } // 0x11E65974A982637C 0x66FF4FAA b323
	static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xD56B90, control, action); } // 0x4F8A26A890FD62FB 0xF2A65A4C b323
	static int GET_CONTROL_HOW_LONG_AGO(int control) { return invoke<int>(0xD56C30, control); } // 0xD7D22F5592AED8BA 0x0E8EF929 b323
	static BOOL IS_USING_KEYBOARD_AND_MOUSE(int control) { return invoke<BOOL>(0xD56C80, control); } // 0xA571D46727E2B718 b323
	static BOOL IS_USING_CURSOR(int control) { return invoke<BOOL>(0xD56C90, control); } // 0x13337B38DB572509 b323
	static BOOL IS_USING_REMOTE_PLAY(int control) { return invoke<BOOL>(0xD56CE0, control); } // 0x23F09EADC01449D6 b323
	static BOOL HAVE_CONTROLS_CHANGED(int control) { return invoke<BOOL>(0xD56D30, control); } // 0x6CD79468A1E595C6 b323
	static const char* GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(int control, int action, BOOL allowXOSwap) { return invoke<const char*>(0xD56D80, control, action, allowXOSwap); } // 0x0499D7B09FC9B407 b323
	static const char* GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(int control, int controlGroup, BOOL allowXOSwap) { return invoke<const char*>(0xD56E10, control, controlGroup, allowXOSwap); } // 0x80C2FD58D720C801 b323
	static void SET_CONTROL_LIGHT_EFFECT_COLOR(int control, int red, int green, int blue) { invoke<Void>(0xD56EA0, control, red, green, blue); } // 0x8290252FFF36ACB5 b323
	static void CLEAR_CONTROL_LIGHT_EFFECT(int control) { invoke<Void>(0xD56F40, control); } // 0xCB0360EFEFB2580D b323
	static void SET_CONTROL_SHAKE(int control, int duration, int frequency) { invoke<Void>(0xD56F80, control, duration, frequency); } // 0x48B3886C1358D0D5 b323
	static void SET_CONTROL_TRIGGER_SHAKE(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency) { invoke<Void>(0xD56FF0, control, leftDuration, leftFrequency, rightDuration, rightFrequency); } // 0x14D29BB12D47F68C b323
	static void STOP_CONTROL_SHAKE(int control) { invoke<Void>(0xD57000, control); } // 0x38C16A305E8CDC8D b323
	static void SET_CONTROL_SHAKE_SUPPRESSED_ID(int control, int uniqueId) { invoke<Void>(0xD57040, control, uniqueId); } // 0xF239400E16C23E08 b323
	static void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(int control) { invoke<Void>(0xD57080, control); } // 0xA0CEFCEA390AAB9B b323
	static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xD570C0); } // 0x77B612531280010D 0x313434B2 b323
	static BOOL IS_MOUSE_LOOK_INVERTED() { return invoke<BOOL>(0xD570E0); } // 0xE1615EC03B3BB4FD b323
	static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xD570F0); } // 0xBB41AFBBBC0A0287 0x81802053 b323
	static int GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() { return invoke<int>(0xD57100); } // 0x59B9A7AF4C95133C b323
	static BOOL GET_IS_USING_ALTERNATE_DRIVEBY() { return invoke<BOOL>(0xD57110); } // 0x0F70731BACCFBB96 0xC1AFABD5 b323
	static BOOL GET_ALLOW_MOVEMENT_WHILE_ZOOMED() { return invoke<BOOL>(0xD57130); } // 0xFC859E2374407556 0xC0823820 b323
	static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0xD57150, toggle); } // 0x798FDEB5B1575088 0xA86BD91F b323
	static void SET_INPUT_EXCLUSIVE(int control, int action) { invoke<Void>(0xD57170, control, action); } // 0xEDE476E5EE29EDB1 0x4E8E29E6 b323
	static void DISABLE_CONTROL_ACTION(int control, int action, BOOL disableRelatedActions) { invoke<Void>(0xD571C0, control, action, disableRelatedActions); } // 0xFE99B66D079CF6BC 0x3800C0DC b323
	static void ENABLE_CONTROL_ACTION(int control, int action, BOOL enableRelatedActions) { invoke<Void>(0xD57250, control, action, enableRelatedActions); } // 0x351220255D64C155 0xD2753551 b323
	static void DISABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xD572E0, control); } // 0x5F4B6931816E599B 0x16753CF4 b323
	static void ENABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xD57330, control); } // 0xA5FFE9B05F199DE7 0xFC2F119F b323
	static BOOL INIT_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xD57360, schemeName); } // 0x3D42B92563939375 0xD2C80B2E b323
	static BOOL SWITCH_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xD57370, schemeName); } // 0x4683149ED1DDE7A1 0xBBFC9050 b323
	static void SHUTDOWN_PC_SCRIPTED_CONTROLS() { invoke<Void>(0xD57380); } // 0x643ED62D5EA3BEBD 0x42140FF9 b323
	static void ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(int control) { invoke<Void>(0xD57390, control); } // 0x7F4724035FDCA1DD 0x2CEDE6C5 b323
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL nodeEnabled, BOOL unknown2) { invoke<Void>(0xD5ABF0, x1, y1, z1, x2, y2, z2, nodeEnabled, unknown2); } // 0xBF1A602B5BA52FEE 0xEBC7B918 b323
	static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0xD5AC20, x1, y1, z1, x2, y2, z2, width, unknown1, unknown2, unknown3); } // 0x1A5AA1208AF5DB59 0xBD088F4B b323
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, Any p7) { invoke<Void>(0xD5AC60, x1, y1, z1, x2, y2, z2, p6, p7); } // 0x34F060F4BF92E018 0x2148EA84 b323
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xD5AC80, x, y, z, onGround, outPosition, flags); } // 0xB61C8E878A4199CA 0xB370270A b323
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeFlags, float p5, float p6) { return invoke<BOOL>(0xD5ADC0, x, y, z, outPosition, nodeFlags, p5, p6); } // 0x240A18690AE96513 0x6F5F1E6C b323
	static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, float unknown2) { return invoke<BOOL>(0xD5AEA0, x, y, z, outPosition, unknown1, unknown2); } // 0x2EABE3B06F58C1BE 0x04B5F15B b323
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, float p7) { return invoke<BOOL>(0xD5AF70, x, y, z, outPosition, outHeading, nodeType, p6, p7); } // 0xFF071FB798B803B0 0x8BD5759B b323
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, int nodeFlags, float unknown1, float unknown2) { return invoke<BOOL>(0xD5B060, x, y, z, nthClosest, outPosition, nodeFlags, unknown1, unknown2); } // 0xE50E52416CCF948B 0xF125BFCC b323
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodeFlags, float p5, float p6) { return invoke<int>(0xD5B140, x, y, z, nth, nodeFlags, p5, p6); } // 0x22D7275A79FE8215 0x3F358BEA b323
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int* outNumLanes, int nodeFlags, float unknown3, float unknown4) { return invoke<BOOL>(0xD5B1E0, x, y, z, nthClosest, outPosition, outHeading, outNumLanes, nodeFlags, unknown3, unknown4); } // 0x80CA6A8B6C094CC4 0x7349C856 b323
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p7, float p8) { return invoke<int>(0xD5B2E0, x, y, z, nthClosest, outPosition, outHeading, nodeFlags, p7, p8); } // 0x6448050E9C2A7207 0xC1AEB88D b323
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p10, float p11) { return invoke<BOOL>(0xD5B390, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodeFlags, p10, p11); } // 0x45905BE8654AE067 0x928A4DEC b323
	static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0xD5B4A0, x, y, z, density, flags); } // 0x0568566ACBB5DEDC 0xCC90110B b323
	static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0xD5B4D0, vehicleNodeId); } // 0x1EAF30FCFBF5AF74 0x57DFB1EF b323
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0xD5B4F0, nodeId, outPosition); } // 0x703123E5E7D429C2 0xE38E252D b323
	static BOOL GET_VEHICLE_NODE_IS_GPS_ALLOWED(int nodeID) { return invoke<BOOL>(0xD5B5C0, nodeID); } // 0xA2AE5C478B96E3B6 0xEE4B1219 b323
	static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0xD5B600, nodeID); } // 0x4F5070AA58F69279 0x56737A3C b323
	static BOOL GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<BOOL>(0xD5B640, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 0x567B0E11 b323
	static void SET_ALLOW_STREAM_PROLOGUE_NODES(BOOL toggle) { invoke<Void>(0xD5B790, toggle); } // 0x228E5C6AD4D74BFD 0xD6A3B458 b323
	static BOOL ARE_NODES_LOADED_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xD5B7B0, x1, y1, x2, y2); } // 0xF7B79A50B905A30D 0x86E80A17 b323
	static BOOL REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xD5B7F0, x1, y1, x2, y2); } // 0x07FB139B592FA687 0x2CDA5012 b323
	static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xD5B8A0, p0, p1, p2, p3, p4, p5, p6); } // 0x1EE7063B80FFC77C 0x86AC4A85 b323
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7) { invoke<Void>(0xD5B960, x1, y1, z1, x2, y2, z2, width, p7); } // 0x0027501B9F3B407E 0x9DB5D209 b323
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xD5BA20, multiplier); } // 0x0B919E1FB47CC4E0 0x3C5085E4 b323
	static void ADJUST_AMBIENT_PED_SPAWN_DENSITIES_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xD5BA30, p0, p1, p2, p3, p4, p5, p6); } // 0xAA76052DDA9BFC3E 0xD0F51299 b323
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xD5BAD0, x1, y1, z1, x2, y2, z2, p6); } // 0xE04B48F2CC926253 0x3F1ABDA4 b323
	static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0xD5BB70, x, y, z, radius, p4, p5, p6, outPosition, nodeId); } // 0x93E0DB8440B73A7D 0xAD1476EA b323
	static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xD5BCA0, x, y, z, streetName, crossingRoad); } // 0x2EB41072B4C1E4C0 0xDEBEEFCF b323
	static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, int* direction, float* p5, float* distToNxJunction) { return invoke<int>(0xD5BD30, x, y, z, p3, direction, p5, distToNxJunction); } // 0xF90125F1F79ECDF8 0xED35C094 b323
	static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { invoke<Void>(0xD5BD90, toggle); } // 0x72751156E7678833 0xB72CF194 b323
	static void SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(BOOL toggle) { invoke<Void>(0xD5BDB0, toggle); } // 0x1FC289A0C3FF470F 0x90DF7A4C b323
	static void SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z3) { invoke<Void>(0xD5BDD0, x1, y1, z1, x2, y2, z3); } // 0xDC20483CD3DD5201 0x720B8073 b323
	static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0xD5BE90); } // 0xBBB45C3CF5C8AA85 0x4B770634 b323
	static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0xD5BEC0); } // 0x869DAACBBE9FA006 0x286F82CC b323
	static BOOL GET_POSITION_BY_SIDE_OF_ROAD(float x, float y, float z, int p3, Vector3* outPosition) { return invoke<BOOL>(0xD5BEF0, x, y, z, p3, outPosition); } // 0x16F46FB18C8009E4 0xF6422F9A b323
	static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0xD5BF90, x, y, z, vehicle); } // 0x125BF4ABFC536B09 0xCF198055 b323
	static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0xD5C040, x, y, radius); } // 0x387EAD7EE42F6685 0x12B086EA b323
	static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xD5C090); } // 0x916F0A3CDEC3445E 0x637BB680 b323
	static void DISABLE_NAVMESH_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle) { invoke<Void>(0xD5C0B0, x1, y1, z1, x2, y2, z2, toggle); } // 0x4C8872D8CDBE1B8B 0x6E37F132 b323
	static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xD5C0D0); } // 0x8415D95B194A3AEA 0x34C4E789 b323
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xD5C0F0, x1, y1, z1, x2, y2, z2); } // 0xF813C7E63F9062A5 0x4C2BA99E b323
	static int GET_NUM_NAVMESHES_EXISTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xD5C120, x1, y1, z1, x2, y2, z2); } // 0x01708E8DD3FF8C65 0x76AFFBB5 b323
	static int ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<int>(0xD5C150, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A 0x2952BA56 b323
	static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xD5C210, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x109E99373F290687 0x4E9776D0 b323
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0xD5C2D0, p0); } // 0x46399A7895957C0E 0x098602B0 b323
	static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xD5C300, p0); } // 0x0EAEB0DB4B132399 0x4B67D7EE b323
	static float GET_APPROX_HEIGHT_FOR_POINT(float x, float y) { return invoke<float>(0xD5C330, x, y); } // 0x29C24BFBED8AB8FB 0x3FE8C5A0 b323
	static float GET_APPROX_HEIGHT_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xD5C360, x1, y1, x2, y2); } // 0x8ABE8608576D9CE3 0x3ED21C90 b323
	static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke<float>(0xD5C3A0, x, y); } // 0x336511A34F2E5185 0xA07C5B7D b323
	static float GET_APPROX_FLOOR_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xD5C3D0, x1, y1, x2, y2); } // 0x3599D741C9AC6310 0x76751DD4 b323
	static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xD5C410, x1, y1, z1, x2, y2, z2); } // 0xADD95C7005C4A197 0xB114489B b323
}

namespace PED
{
	static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xD783B0, pedType, modelHash, x, y, z, heading, isNetwork, bScriptHostPed); } // 0xD49F9B0955C367DE 0x0389EF71 b323
	static void DELETE_PED(Ped* ped) { invoke<Void>(0xD78400, ped); } // 0x9614299DCB53E54B 0x13EFB9A0 b323
	static Ped CLONE_PED(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag) { return invoke<Ped>(0xD78410, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag); } // 0xEF29A16337FACADB 0x8C8A8D6E b323
	static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0xD78450, ped, targetPed); } // 0xE952D6431689AD9A 0xFC70EEC7 b323
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xD784F0, ped, vehicle, atGetIn); } // 0xA3EE4A07279BB9DB 0x7DA6BC83 b323
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xD78520, ped, modelHash); } // 0x796D90EFB19AA332 0xA6438D4B b323
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0xD78600, ped, atGetIn); } // 0x997ABD671D25CA0B 0x3B0171EE b323
	static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xD78630, x1, y1, z1, x2, y2, z2); } // 0x16EC4839969F9F5E 0xB98DB96B b323
	static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xD786E0, ped); } // 0x84A2DD9AC37C35C1 0x2530A087 b323
	static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0xD78750, ped); } // 0x5983BB449D7FDB12 0x69DFA0AF b323
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xD787B0, ped); } // 0xD839450756ED5A80 0xBADA0093 b323
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0xD78820, ped, p1); } // 0x3317DEDB88C95038 0xCBDB7739 b323
	static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xD788A0, ped); } // 0xE0A0AEC214B1FABA 0x1FA39EFE b323
	static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xD78910, ped); } // 0x3998B1276A3300E5 0xDEBAB2AF b323
	static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xD78940, ped); } // 0x24B100C68C645951 0x961E1745 b323
	static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0xD789A0, ped); } // 0x12534C348C6CB68B 0x404794CA b323
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xD78A00, vehicle, pedType, modelHash, seat, isNetwork, bScriptHostPed); } // 0x7DD959874C1FD534 0x3000F092 b323
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xD78A40, ped, heading); } // 0xAA5A7ECE2AA8FE70 0x961458F9 b323
	static void FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped ped) { invoke<Void>(0xD78B30, ped); } // 0xFF287323B0E2C69A 0x290421BE b323
	static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0xD78B40, ped, otherPed, angle); } // 0xD71649DB0A545AA3 0x0B775838 b323
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xD78B70, ped); } // 0x4E209B2C1EAD5159 0xFD7814A5 b323
	static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xD78BE0, ped); } // 0x530944F6F4B8A214 0xA0DC0B87 b323
	static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0xD78C40, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x7E9DFE24AC1E58EF 0x741BF04F b323
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0xD78C80, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xA0D3D71EA1086C55 0x91833867 b323
	static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xD78CC0, ped); } // 0x34616828CD07F1A1 0xE7C3405E b323
	static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xD78D20, ped, accuracy); } // 0x7AEFB85C1D49DEB6 0x6C17122E b323
	static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xD78DB0, ped); } // 0x37F4AD56ECBC0CD6 0x0A2A0AA0 b323
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xD78E20, ped, modelHash); } // 0xC9D55B1A358A5BF7 0x5F1DDFCB b323
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0xD78EE0, ped, weaponHash); } // 0x2D05CED3A38D0F3A 0x05CC1380 b323
	static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0xD78EF0, ped); } // 0xAC6D445B994DF95E 0x4FFB8C6C b323
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xD78F00, ped, amount); } // 0x5BA652A0CD14DF2F 0xF686B26E b323
	static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0xD78FE0, ped, amount); } // 0xCEA04D83135264CC 0x4E3A0CC4 b323
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xD790C0, ped, vehicle, seatIndex); } // 0xF75B0D629E1C063D 0x07500C79 b323
	static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0xD790E0, ped, toggle); } // 0x3C028C636A414ED9 0x58A80BD5 b323
	static BOOL CAN_CREATE_RANDOM_PED(BOOL p0) { return invoke<BOOL>(0xD79140, p0); } // 0x3E8349C08E4B82E4 0xF9ABE88F b323
	static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xD79200, posX, posY, posZ); } // 0xB4AC7D0CF06BFE8F 0x5A949543 b323
	static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0xD79280, vehicle, returnHandle); } // 0x9B62392B474F44A0 0xB927CE9A b323
	static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xD792B0); } // 0xB8EB95E5B4E56978 0x99861609 b323
	static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xD79300); } // 0xEACEEDA81751915C 0x7018BE31 b323
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xD79360, ped); } // 0x9E8C908F41584ECD 0x20E01957 b323
	static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xD793D0, ped, toggle); } // 0xC1670E958EEE24E5 0xAA7F1131 b323
	static void SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(BOOL toggle) { invoke<Void>(0xD79430, toggle); } // 0xF2BEBCDFAFDAA19E 0x6CD58238 b323
	static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xD79450, ped); } // 0x6D9F5FAA7488BA46 0x90950455 b323
	static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0xD794C0, ped); } // 0xB980061DA992779D 0x194BB7B0 b323
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL includeEntering) { return invoke<Vehicle>(0xD79540, ped, includeEntering); } // 0x9A9112A0FE9A4713 0xAFE92319 b323
	static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0xD79570, ped); } // 0xBB8DE8CF6A8DD8BB 0x5E3B5942 b323
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xD795D0, multiplier); } // 0x95E3D6257B166CF2 0x039C82BB b323
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xD795E0, p0, p1); } // 0x7A556143A1C03898 0x2909ABF0 b323
	static void SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME() { invoke<Void>(0xD79600); } // 0x5A7F62FDA59759BD 0xB48C0C04 b323
	static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0xD79610, x, y, z); } // 0x5086C7843552CF85 0x25EA2AA5 b323
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xD79670, x1, y1, z1, x2, y2, z2); } // 0xEE01041D559983EA 0x7A97283F b323
	static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xD796F0); } // 0x2E05208086BA0651 0x6F7043A3 b323
	static void INSTANTLY_FILL_PED_POPULATION() { invoke<Void>(0xD79700); } // 0x4759CC730F947C81 0x8C555ADD b323
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0xD79710, ped); } // 0x460BC76A0E10655E 0x43103006 b323
	static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0xD79750, ped); } // 0xE7E11B8DCBED1058 0xDD31EC4E b323
	static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xD79790, ped); } // 0x67722AEB798E5FAB 0xA1AE7CC7 b323
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xD79800, ped, vehicle); } // 0xEC5F66E459AF3BB2 0x63CB4603 b323
	static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0xD798A0, ped, amount); } // 0xA9C8960E8684C1B5 0x40D90BF2 b323
	static int GET_PED_MONEY(Ped ped) { return invoke<int>(0xD798F0, ped); } // 0x3F69145BBA87BAE7 0xEB3C4C7E b323
	static void SET_HEALTH_SNACKS_CARRIED_BY_ALL_NEW_PEDS(float p0, Any p1) { invoke<Void>(0xD79950, p0, p1); } // 0xFF4803BC019852D9 0xD41C9AED b323
	static void SET_AMBIENT_PEDS_DROP_MONEY(BOOL p0) { invoke<Void>(0xD79990, p0); } // 0x6B0E6172C9A4D902 0x30B98369 b323
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(BOOL p0) { invoke<Void>(0xD799B0, p0); } // 0x9911F4A24485F653 0x02A080C8 b323
	static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xD799D0, ped, toggle); } // 0xEBD76F2359F190AC 0x6F6FC7E6 b323
	static void SET_PED_UPPER_BODY_DAMAGE_ONLY(Ped ped, BOOL toggle) { invoke<Void>(0xD79A40, ped, toggle); } // 0xAFC976FD0580C7B3 0x1572022A b323
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xD79AA0, ped, vehicle); } // 0xA808AA1D79230FC2 0xDDDE26FA b323
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0xD79AD0, ped); } // 0x826AA586EDB9FEF8 0x0EA9CA03 b323
	static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xD79B00, ped); } // 0x01FEE67DB37F59B2 0xC60D0785 b323
	static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xD79B30, ped); } // 0x94495889E22C6479 0x4D885B2E b323
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xD79BB0, ped); } // 0xC70B5FAE151982D8 0x0EDAC574 b323
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0xD79C30, ped, p1, p2); } // 0xCD5003B097200F36 0x129F9DC1 b323
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0xD79CA0, ped); } // 0x2E0E1C2B4F6CB339 0x1118A947 b323
	static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xD79D10, ped); } // 0xFBFC01CCFB35D99E 0xE65F8059 b323
	static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0xD79D80, ped); } // 0x298B91AE825E5705 0x7AB5523B b323
	static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xD79E00, ped); } // 0x5FFF4CFC74D8FB80 0x51BBCE7E b323
	static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0xD79E70, ped); } // 0x9134873537FA419C 0xCA072485 b323
	static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xD79EF0, ped, toggle); } // 0x56CEF0AC79073BDE 0x604C872B b323
	static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD79F50, ped, toggle); } // 0xD718A22995E2B4BC 0x8D4D9ABB b323
	static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xD79FB0, ped); } // 0x9483AF821605B1D8 0x2CE311A7 b323
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0xD7A010, ped, toggle); } // 0xEDF4079F9D54C9A1 0xB014A09C b323
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD7A070, ped, toggle); } // 0xC7EF1BA83230BA07 0x5DB7B3A9 b323
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xD7A0D0, ped, outBone); } // 0xD75960F6BD9EA49C 0xAB933841 b323
	static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0xD7A140, ped); } // 0x8EF6B7AC68E2F01B 0x56CB715E b323
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0xD7A190, value); } // 0x1B1E2A40A65B8521 0x516E30EE b323
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xD7A1B0); } // 0xEA16670E7BA4743C 0x6E965420 b323
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0xD7A1D0, modifier); } // 0x66460DEDDD417254 0x0F9A401F b323
	static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xD7A1F0); } // 0x46E56A7CD1D63C3F 0x97886238 b323
	static void SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(Ped ped, BOOL p1) { invoke<Void>(0xD7A210, ped, p1); } // 0x2F3C3D9F50681DE4 0xCC9D7F1A b323
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xD7A270, ped, toggle); } // 0x63F58F7C80513AAD 0x75C49F74 b323
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0xD7A2D0, ped, team, toggle); } // 0xBF1CA77833E58F2C 0xB103A8E1 b323
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xD7A350, ped, player, toggle); } // 0x66B57B72E0836A76 0xD050F490 b323
	static void SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(Ped ped, BOOL toggle) { invoke<Void>(0xD7A3D0, ped, toggle); } // 0x061CB768363D6424 0x7DA12905 b323
	static void SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(Ped ped, BOOL toggle) { invoke<Void>(0xD7A430, ped, toggle); } // 0xFD325494792302D7 0x7F67671D b323
	static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xD7A490, ped); } // 0x0BD04E29640C9C12 0x84FA790D b323
	static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xD7A510, ped); } // 0x16E42E800B472221 0xA819680B b323
	static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0xD7A570, ped); } // 0x7DCE8BDA0F1C1200 0xCD71F11B b323
	static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xD7A640, ped); } // 0xFB92A102F1C4DFA3 0xABF77334 b323
	static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xD7A6A0, ped); } // 0xCEDABC5900A0BF97 0x07E5BC0E b323
	static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0xD7A700, ped); } // 0x53E8CB4F48BFE623 0xBCE03D35 b323
	static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0xD7A760, ped); } // 0x117C70D1F5730B5E 0xC3169BDA b323
	static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0xD7A7C0, ped); } // 0x5527B8246FEF9B11 0x7BC5BF3C b323
	static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xD7A820, ped); } // 0x433DDFFE2044B636 0xB19215F6 b323
	static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xD7A850, ped); } // 0x79CFD9827CC979B6 0x7D4BC475 b323
	static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xD7A870, ped); } // 0x8B9F1FC6AE8166C0 0x01F3B035 b323
	static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { invoke<Void>(0xD7A8F0, ped, tintIndex); } // 0x333FC8DB079B7186 0x5AEFEC3A b323
	static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) { invoke<Void>(0xD7A940, ped, outTintIndex); } // 0xEAF5F7E5AE7C6C9D 0xE9E7FAC5 b323
	static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { invoke<Void>(0xD7A990, ped, p1); } // 0xE88DA0751C22A2AD 0x177EFC79 b323
	static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0xD7A9E0, ped, toggle); } // 0x030983CA930B692D 0xB90353D7 b323
	static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xD7AA40, ped); } // 0xD125AE748725C6BC 0x9199C77D b323
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xD7AAA0, ped); } // 0x6E575D6A898AB852 0x16FD386C b323
	static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xD7AB70, ped, value); } // 0xF107E836A70DCE05 0xEF3B4ED9 b323
	static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { invoke<Void>(0xD7ABD0, ped, toggle); } // 0x52D59AB61DDC05DD 0x9A2180FF b323
	static void SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped, float p1) { invoke<Void>(0xD7AC20, ped, p1); } // 0xEC4B4B3B9908052A 0xF30658D2 b323
	static void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped) { invoke<Void>(0xD7AC90, ped); } // 0x733C87D4CE22BEA2 0x43709044 b323
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0xD7ACE0, ped, value); } // 0xF29CF591C4BF6CEE 0x4BD72FE8 b323
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xD7AD40, ped, value); } // 0x33A8F7F7D5F7F33C 0xB32087E0 b323
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0xD7ADA0, ped, value); } // 0x2DB492222FB21E26 0x72E2E18B b323
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xD7AE00, ped, value); } // 0x70793BDCA1E854D4 0x0CEA0F9A b323
	static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xD7AE60, ped, angle); } // 0x7A276EB2C224D70F 0x5CC2F1B8 b323
	static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xD7AEC0, ped, angle); } // 0x78D0B67629D75856 0x39D9102F b323
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xD7AF20, ped, range); } // 0x9C74B0BC831B753A 0xFDF2F7C2 b323
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xD7AF80, ped, angle); } // 0x3B6405E8AB34A907 0xE57202A1 b323
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) { invoke<Void>(0xD7AFE0, ped, p1, action); } // 0x88CBB5CEB96B7BD2 0x67E28E1D b323
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xD7B000, ped); } // 0x7C2AC9CA66575FBF 0x40321B83 b323
	static int CREATE_GROUP(int unused) { return invoke<int>(0xD7B060, unused); } // 0x90370EBE0FEE1A3D 0x8DC0368D b323
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xD7B0E0, ped, groupId); } // 0x2A7819605465FBCE 0x7265BEA2 b323
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0xD7B0F0, ped, groupId); } // 0x9F3480FE65DB31B5 0x0EE13F92 b323
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0xD7B100, pedHandle, groupHandle, toggle); } // 0x2E2F4240B3F24647 0xD0D8BDBC b323
	static void REMOVE_GROUP(int groupId) { invoke<Void>(0xD7B120, groupId); } // 0x8EB2F69076AF7053 0x48D72B88 b323
	static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0xD7B130, ped); } // 0xED74007FFB146BC2 0x82697713 b323
	static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xD7B1B0, ped, groupId); } // 0x9BB01E3834671191 0x876D5363 b323
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xD7B1E0, ped); } // 0x1C86D8AEF8254B78 0x9678D4FF b323
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0xD7B280, groupHandle, separationRange); } // 0x4102C7858CFEE4E4 0x7B820CD5 b323
	static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xD7B290, ped, ms); } // 0xFA0675AB151073FA 0x2F0D0973 b323
	static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xD7B2D0, ped); } // 0xD6A86331A537A7B9 0x02C2A6C3 b323
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0xD7B330, ped, target); } // 0x4859F1FC66A6278E 0xFE027CB5 b323
	static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xD7B360, ped, target); } // 0xEAD42DE3610D0721 0xCCD525E1 b323
	static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xD7B410, ped); } // 0xB2C086CC1BF8F2BF 0xAC3CEB9C b323
	static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0xD7B4B0, ped); } // 0x4AE4FF911DFB61DA 0x3B321816 b323
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0xD7B4E0, ped); } // 0x9A497FE2DF198913 0xD45D605C b323
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0xD7B510, ped, p1); } // 0x4FBACCE3B4138EE8 0x0A66CE30 b323
	static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xD7B540, ped); } // 0x9B128DC36C1E04CF 0xDE1DBB59 b323
	static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0xD7B560, ped); } // 0x5486A79D9FBD342D 0x1D196361 b323
	static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xD7B580, ped); } // 0xBBCCE00B381F8482 0x85D813C6 b323
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0xD7B5B0, ped, exceptUseWeapon); } // 0x60DFD0691A170B88 0x972C5A8B b323
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xD7B5E0, ped); } // 0x845333B3150583AB 0xB89DBB80 b323
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0xD7B610, ped); } // 0x9F65DBC537E59AD5 0xA3589628 b323
	static BOOL SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<BOOL>(0xD7B640, ped, pinned, i); } // 0xAAD6D1ACF08F4612 0xCC78999D b323
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xD7B6C0, ped); } // 0x6F4C85ACD641BCD2 0xACF162E0 b323
	static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xD7B6E0, ped); } // 0x814FA8BE5449445D 0x99968B37 b323
	static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0xD7B700, ped); } // 0x93C8B64DEB84728C 0x84ADF9EB b323
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xD7B760, ped); } // 0x16FFE42AB2D2DC59 0x63458C27 b323
	static int GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0xD7B7C0, ped); } // 0x1E98817B311AE98A 0xDF6D5D54 b323
	static int COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped ped) { return invoke<int>(0xD7B820, ped); } // 0x5407B7288D0478B7 0xEF0B78E6 b323
	static int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped ped, float x, float y, float z, float radius) { return invoke<int>(0xD7B890, ped, x, y, z, radius); } // 0x336B3D200AB007CB 0xFB18CB19 b323
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xD7B960, ped, hash); } // 0xADB3F206518799E8 0x423B7BA2 b323
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0xD7B9C0, ped, hash); } // 0xC80A74AC829DDD92 0x79F8C18C b323
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xD7B9D0, relationship, group1, group2); } // 0xBF25EB89375A37AD 0xD4A215BA b323
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xD7BA40, relationship, group1, group2); } // 0x5E29243FB56FC6D4 0x994B8C2D b323
	static BOOL ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<BOOL>(0xD7BA80, name, groupHash); } // 0xF372BC22FCB88606 0x8B635546 b323
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0xD7BAF0, groupHash); } // 0xB6BA2444AB393DA2 0x4A1DC59A b323
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xD7BB00, ped1, ped2); } // 0xEBA5AD3A0EAF7121 0xE254C39C b323
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0xD7BB30, ped); } // 0x42FDD0F017B1E38E 0x714BD6E4 b323
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0xD7BB90, ped); } // 0x7DBDD04862D95F04 0x354F283C b323
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0xD7BBF0, group1, group2); } // 0x9E6B70061662AE5C 0x4E372FE2 b323
	static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0xD7BC50, ped, toggle); } // 0x4328652AE5769C71 0x7FDDC0A6 b323
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0xD7BCB0, ped, radius, maxFriends); } // 0x112942C6E708F70B 0xD78AC46C b323
	static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0xD7BD20, ped, event); } // 0x625B774D75C87068 0x7A877554 b323
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xD7BD90, ped, patternHash); } // 0x9AC577F5A12AD8A9 0xB4629D66 b323
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0xD7BDA0, ped, shootRate); } // 0x614DA022990752DC 0xFB301746 b323
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xD7BE50, ped, combatType, p2); } // 0xFF41B4B141ED981C 0xD8B7637C b323
	static float GET_COMBAT_FLOAT(Ped ped, int p1) { return invoke<float>(0xD7BEC0, ped, p1); } // 0x52DFF8A10508090A 0x511D7EF8 b323
	static void GET_GROUP_SIZE(int groupID, Any* p1, int* sizeInMembers) { invoke<Void>(0xD7BF40, groupID, p1, sizeInMembers); } // 0x8DE69FE35CA09A45 0xF7E1A691 b323
	static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xD7BFD0, groupId); } // 0x7C6B0C22F9F40BBE 0x935C978D b323
	static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0xD7C010, ped); } // 0xF162E133B4E7A675 0x134E0785 b323
	static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0xD7C030, ped); } // 0x5891CAC5D4ACFF74 0x836D9795 b323
	static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0xD7C090, ped); } // 0x6A3975DEA89F9A17 0xDE7442EE b323
	static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xD7C120, groupId, formationType); } // 0xCE2F5FC3AF7E8C1E 0x08FAC739 b323
	static void SET_GROUP_FORMATION_SPACING(int groupId, float x, float y, float z) { invoke<Void>(0xD7C190, groupId, x, y, z); } // 0x1D9D45004C28C916 0xB1E086FF b323
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xD7C240, groupHandle); } // 0x63DAB4CCB3273205 0x267FCEAD b323
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0xD7C2C0, ped); } // 0x6094AD011A2EA87D 0x6DE3AADA b323
	static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0xD7C340, ped); } // 0xF92691AED837A5FC 0x56E0C163 b323
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0xD7C360, ped, toggle); } // 0x9FF447B6B6AD960A 0x3CA16652 b323
	static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2, Any p3) { invoke<Void>(0xD7C3E0, ped, damageAmount, p2, p3); } // 0x697157CED63F18D4 0x4DC27FCF b323
	static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xD7C400, ped, toggle); } // 0xDA1F1B7BE1A8766F 0xC4D122F8 b323
	static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xD7C470, ped, toggle); } // 0x3DBFC55D5C9BB447 0x0E038813 b323
	static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xD7C4D0, ped); } // 0xFF059E1E4C01E63C 0xB1460D43 b323
	static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xD7C530, ped, toggle); } // 0xBB03C38DD3FB7FFD 0x84E7DE9F b323
	static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0xD7C5C0, ped, value); } // 0xF5F6378C4F3419D3 0x5533F60B b323
	static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xD7C630, ped); } // 0x4700A416E8324EF3 0xA45B6C8D b323
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xD7C690, ped, value); } // 0x43C851690662113D 0xFE0A106B b323
	static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xD7C710, ped, value); } // 0x6BA428C528D9E522 0x082EF240 b323
	static void SET_CORPSE_RAGDOLL_FRICTION(Ped ped, float p1) { invoke<Void>(0xD7C770, ped, p1); } // 0x2735233A786B1BEF 0x373CC405 b323
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0xD7C7C0, ped, state); } // 0x7A6535691B477C48 0x8A251612 b323
	static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xD7C840, ped); } // 0x51AC07A44D4F5B8A 0xC9D098B3 b323
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0xD7C900, ped); } // 0x45BBCBA77C29A841 0xACDD0674 b323
	static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xD7C910, ped, posX, posY, posZ); } // 0x87052FE446E07247 0x9561AD98 b323
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0xD7C980, groupID, memberNumber); } // 0x51455483CF23ED97 0x9AA3CC8C b323
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0xD7CA00, ped, toggle); } // 0x971D38760FBC02EF 0xA7EC79CE b323
	static void SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(Ped ped, BOOL toggle) { invoke<Void>(0xD7CA60, ped, toggle); } // 0x49E50BDB8BA4DAB2 0x397F06E3 b323
	static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0xD7CAC0, ped); } // 0x9DE327631295B4C2 0x7AB43DB8 b323
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xD7CB20, ped); } // 0xC024869A53992F34 0x0E8D524F b323
	static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xD7CB90, ped, posX, posY, posZ); } // 0x9AFEFF481A85AB2E 0xD66AE1D3 b323
	static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD7CC20, ped, toggle); } // 0x2A30922C90C9B42C 0x6FE1E440 b323
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xD7CC80, toggle); } // 0x102E68B2024D536D 0x23441648 b323
	static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xD7CCB0, toggle); } // 0x8A4986851C4EF6E7 0x82E548CC b323
	static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xD7CCD0, toggle); } // 0x444CB7D7DBE6973D 0xEDC31475 b323
	static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xD7CCF0); } // 0x5EE2CAFF7F17770D 0xAA73DAD9 b323
	static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0xD7CD10, ped, toggle); } // 0x02A0C9720B854BFA 0xAE620A1B b323
	static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xD7CD70, ped, p1, p2); } // 0x1CCE141467FF42A2 0x149C60A8 b323
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0xD7CDE0, ped); } // 0x6F972C1AB75A1ED0 0x759EF63A b323
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xD7CE60, ped); } // 0xBB062B2B5722478E 0x90E805AC b323
	static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0xD7CE90, ped); } // 0x44D28D5DDFE5F68C 0x46828B4E b323
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0xD7CF50, ped, toggle); } // 0xDF1AF8B5D56542FA 0xAC9BBA23 b323
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xD7CFD0, ped, toggle); } // 0xC52E0F855C58FC2E 0x9208D689 b323
	static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0xD7D050, ped, toggle); } // 0xF99F62004024D506 0x7BF61471 b323
	static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xD7D0B0, ped, toggle, p2); } // 0xB3B1CB349FF9C75D 0x47C60963 b323
	static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xD7D130, ped); } // 0xF6AA118530443FD2 0xF83E4DAF b323
	static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0xD7D190, ped, value); } // 0xDBA71115ED9941A6 0x2C32D9AE b323
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD7D1E0, ped, toggle); } // 0xBC0ED94165A48BC2 0x89AD49FF b323
	static void SET_PED_MOVEMENT_CLIPSET(Ped ped, const char* clipSet, float transitionSpeed) { invoke<Void>(0xD7D240, ped, clipSet, transitionSpeed); } // 0xAF8A94EDE7712BEF 0xA817CDEB b323
	static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0xD7D260, ped, p1); } // 0xAA74EC0CB0AAEA2C 0xB83CEE93 b323
	static void SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xD7D2D0, ped, clipSet); } // 0x29A28F3F8CF6D854 0x0BACF010 b323
	static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0xD7D2E0, ped); } // 0x20510814175EA477 0xF1967A12 b323
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xD7D340, ped, clipSet); } // 0x2622E35B77D3ACA2 0xF8BE54DC b323
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xD7D350, ped); } // 0x97B0DB5B4AA74E77 0xC60C9ACD b323
	static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, const char* clipset) { invoke<Void>(0xD7D3B0, ped, clipset); } // 0xED34AB6C5CB36520 0xD4C73595 b323
	static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xD7D3C0, ped); } // 0x4AFE3690D7E0B5AC 0xAEC9163B b323
	static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xD7D410, ped, context); } // 0x530071295899A8C6 0x27F25C0E b323
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0xD7D480, ped); } // 0x22EF8FF8778030EB 0x3C94D88A b323
	static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) { return invoke<BOOL>(0xD7D4E0, ped, animDict, anim); } // 0x6EC47A344923E1ED 0x3C30B447 b323
	static void SET_PED_ALTERNATE_WALK_ANIM(Ped ped, const char* animDict, const char* animName, float p3, BOOL p4) { invoke<Void>(0xD7D510, ped, animDict, animName, p3, p4); } // 0x6C60394CB4F75E9A 0x895E1D67 b323
	static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { invoke<Void>(0xD7D540, ped, p1); } // 0x8844BBFCE30AA9E9 0x5736FB23 b323
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) { invoke<Void>(0xD7D5E0, ped, stance, animDictionary, animationName, p4, p5); } // 0x90A43CC281FFAB46 0xBA84FD8C b323
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0xD7D610, ped, stance, p2); } // 0xD8D19675ED5FBDCE 0x7A7F5BC3 b323
	static void SET_PED_GESTURE_GROUP(Ped ped, const char* animGroupGesture) { invoke<Void>(0xD7D6C0, ped, animGroupGesture); } // 0xDDF803377F94AAA8 0x170DA109 b323
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xD7D750, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0xBE22B26DD764C040 0xC59D4268 b323
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xD7D860, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0x4B805E6046EE9E47 0x5F7789E6 b323
	static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xD7D970, ped, componentId); } // 0x67F3780DD425D4FC 0x29850FE2 b323
	static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0xD7D9D0, ped, componentId); } // 0x27561561732A7842 0x9754C27D b323
	static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xD7DA00, ped, componentId); } // 0x04A355E041E004E6 0xC0A8590A b323
	static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xD7DA60, ped, componentId, drawableId); } // 0x8F7156A3142A6BAD 0x83D9FBE7 b323
	static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0xD7DA90, ped, propId); } // 0x5FAF9754E789FB47 0xC9780B95 b323
	static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0xD7DAC0, ped, propId, drawableId); } // 0xA6E7F1CEB523E171 0x4892B882 b323
	static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xD7DAF0, ped, componentId); } // 0xE3DD5F2A84B42281 0xEF1BC082 b323
	static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xD7DB50, ped, componentId, drawableId, textureId); } // 0xE825F6B6CEA7671D 0x952ABD9A b323
	static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xD7DBD0, ped, componentId, drawableId, textureId, paletteId); } // 0x262B14F48D29DE80 0xD4F7B05C b323
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { invoke<Void>(0xD7DC90, ped, p1); } // 0xC8A9481A01E63C28 0x4111BA46 b323
	static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xD7DD30, ped); } // 0xC44AA05345C992C6 0xE3318E0E b323
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0xD7DDE0, ped); } // 0x45EEE61580806D63 0xC866A984 b323
	static void SET_PED_BLEND_FROM_PARENTS(Ped ped, Any p1, Any p2, float p3, float p4) { invoke<Void>(0xD7DE60, ped, p1, p2, p3, p4); } // 0x137BBD05230DB22D 0x837BD370 b323
	static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0xD7DE80, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); } // 0x9414E18B9434C2FE 0x60746B88 b323
	static BOOL GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0xD7DFE0, ped, headBlendData); } // 0x2746BD9D88C5C5D0 0x44E1680C b323
	static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xD7E0D0, ped, shapeMix, skinMix, thirdMix); } // 0x723538F61C647C5A 0x5CB76219 b323
	static void SET_HEAD_BLEND_EYE_COLOR(Ped ped, int index) { invoke<Void>(0xD7E150, ped, index); } // 0x50B56988B170AFDF b323
	static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xD7E1A0, ped, overlayID, index, opacity); } // 0x48F44967FA05CC1E 0xD28DBA90 b323
	static int GET_PED_HEAD_OVERLAY_NUM(int overlayID) { return invoke<int>(0xD7E220, overlayID); } // 0xCF1CE768BB43480E 0xFF43C18D b323
	static void SET_PED_MICRO_MORPH(Ped ped, int index, float scale) { invoke<Void>(0xD7E340, ped, index, scale); } // 0x71A5C1DBA060049E b323
	static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xD7E3B0, ped); } // 0x654CD0A825161131 0x2B1BD9C5 b323
	static void FINALIZE_HEAD_BLEND(Ped ped) { invoke<Void>(0xD7E410, ped); } // 0x4668D80430D6C299 0x894314A4 b323
	static void SET_HEAD_BLEND_PALETTE_COLOR(Ped ped, int r, int g, int b, int id) { invoke<Void>(0xD7E460, ped, r, g, b, id); } // 0xCC9682B8951C5229 0x57E5B3F9 b323
	static void DISABLE_HEAD_BLEND_PALETTE_COLOR(Ped ped) { invoke<Void>(0xD7E520, ped); } // 0xA21C118553BBDF02 0xC6F36292 b323
	static int GET_PED_HEAD_BLEND_FIRST_INDEX(int type) { return invoke<int>(0xD7E570, type); } // 0x68D353AB88B97E0C 0x211DEFEC b323
	static int GET_PED_HEAD_BLEND_NUM_HEADS(int type) { return invoke<int>(0xD7E5D0, type); } // 0x5EF37013A6539C9D 0x095D3BD8 b323
	static int SET_PED_PRELOAD_VARIATION_DATA(Ped ped, int slot, int drawableId, int textureId) { return invoke<int>(0xD7E640, ped, slot, drawableId, textureId); } // 0x39D55A620FCB6A3A 0x45F3BDFB b323
	static BOOL HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xD7E6F0, ped); } // 0x66680A92700F43DF 0xC6517D52 b323
	static void RELEASE_PED_PRELOAD_VARIATION_DATA(Ped ped) { invoke<Void>(0xD7E750, ped); } // 0x5AAB586FFEC0FD96 0x6435F67F b323
	static int SET_PED_PRELOAD_PROP_DATA(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<int>(0xD7E7A0, ped, componentId, drawableId, TextureId); } // 0x2B16A3BFF1FBCE49 0xC0E23671 b323
	static BOOL HAS_PED_PRELOAD_PROP_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xD7E850, ped); } // 0x784002A632822099 0x3B0CA391 b323
	static void RELEASE_PED_PRELOAD_PROP_DATA(Ped ped) { invoke<Void>(0xD7E8B0, ped); } // 0xF79F9DEF0AADE61A 0xFD103BA7 b323
	static int GET_PED_PROP_INDEX(Ped ped, int componentId, Any p2) { return invoke<int>(0xD7E900, ped, componentId, p2); } // 0x898CC20EA75BACD8 0x746DDAC0 b323
	static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach, Any p5) { invoke<Void>(0xD7E960, ped, componentId, drawableId, TextureId, attach, p5); } // 0x93376B65A266EB5F 0x0829F2E2 b323
	static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xD7E980, ped, p1, p2, p3, p4); } // 0x6FD7816A36615F48 0x08D8B180 b323
	static void CLEAR_PED_PROP(Ped ped, int propId, Any p2) { invoke<Void>(0xD7EA30, ped, propId, p2); } // 0x0943E5B8E078E76E 0x2D23D743 b323
	static void CLEAR_ALL_PED_PROPS(Ped ped, Any p1) { invoke<Void>(0xD7EA90, ped, p1); } // 0xCD8A7537A9B52F06 0x81DF8B43 b323
	static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xD7EAE0, ped, componentId); } // 0xE131A28626F81AB2 0x922A6653 b323
	static void CLEAR_PED_PARACHUTE_PACK_VARIATION(Ped ped) { invoke<Void>(0xD7EB40, ped); } // 0x1280804F7CFD2D6C 0x7BCD8991 b323
	static void CLEAR_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xD7EB90, ped); } // 0xB50EB4CCB29704AC 0x080275EE b323
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xD7EBE0, ped, toggle); } // 0x9F8AA94D6D97DBF4 0xDFE34E4A b323
	static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float x, float y, float z) { invoke<Void>(0xD7EC00, ped, p1, p2, x, y, z); } // 0x4F5F651ACCC9C4CF 0xCFA20D68 b323
	static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xD7ECA0, ped, target); } // 0x2F25D9AEFA34FBA2 0x50A95442 b323
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xD7ECB0, ped, radius); } // 0x9222F300BF8354FE 0x7F87559E b323
	static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0xD7ED50, x, y, z, xRadius, yRadius, zRadius, pedType); } // 0x876046A8E3A4B71C 0xDC8239EB b323
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0xD7ED80, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); } // 0xC33AB876A77F8164 0x8F6C1F55 b323
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0xD7EE80, value); } // 0x14F19A8782C8071E 0x85615FD0 b323
	static BOOL GET_CAN_PED_BE_GRABBED_BY_SCRIPT(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0xD7EEA0, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x03EA03AF85A85CB7 0x18DD76A1 b323
	static void SET_DRIVER_RACING_MODIFIER(Ped driver, float modifier) { invoke<Void>(0xD7EF90, driver, modifier); } // 0xDED5AF5A0EA4B297 0x6D55B3B3 b323
	static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0xD7F000, driver, ability); } // 0xB195FFA8042FC5C3 0xAAD4012C b323
	static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0xD7F070, driver, aggressiveness); } // 0xA731F608CA104E3C 0x8B02A8FB b323
	static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xD7F0E0, ped); } // 0x128F79EDCECE4FD5 0xC0EFB7A3 b323
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xD7F160, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xAE99FB955581844A 0x83CB5052 b323
	static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float velocity, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0xD7F1C0, ped, time, p2, ragdollType, x, y, z, velocity, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 0xFA12E286 b323
	static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xD7F210, ped, toggle); } // 0xF0A4F1BBF4FA7497 0x2654A0F4 b323
	static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xD7F230, ped); } // 0x47E4E977581C5B55 0xC833BBE1 b323
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xD7F2A0, ped); } // 0xE3B6097CC25AA69E 0x44A153F2 b323
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0xD7F330, ped); } // 0x01F6594B923B9251 0x20A5BDE0 b323
	static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xD7F3B0, ped); } // 0x9FA4664CF62E47E8 0xF2865370 b323
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0xD7F420, ped, toggle); } // 0xB128377056A54E2A 0xCF1384C4 b323
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0xD7F440, ped); } // 0x2AFE52F782F25775 0xFB2AFED1 b323
	static BOOL IS_MOBILE_PHONE_TO_PED_EAR(Ped ped) { return invoke<BOOL>(0xD7F490, ped); } // 0xA3F3564A5B3646C0 0x97353375 b323
	static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xD7F520, ped, blockingFlag); } // 0x26695EC767728D84 0x9C8F830D b323
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xD7F530, ped, blockingFlag); } // 0xD86D101FCFD00A4B 0x77CBA290 b323
	static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xD7F5A0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC7F76DF27A5045A1 0x3EFBDD9B b323
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xD7F5D0, ped, x, y, z, radius, p5, p6); } // 0x9D3151A373974804 0xBD96D8E8 b323
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xD7F6D0, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0xF9B8F91AAD3B953E 0x40638BDC b323
	static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Ped ped, Vehicle target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xD7F700, ped, target, xOffset, yOffset, zOffset, radius, p6); } // 0xE4723DB6E736CCFF 0x4763B2C6 b323
	static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xD7F730, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4EF47FE21698A8B6 0x74BDA7CE b323
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xD7F770, ped, p1, p2, p3, p4); } // 0x413C6C763A4AFFAD 0xB66B0C9A b323
	static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0xD7F830, ped, toggle); } // 0x74D4E028107450A9 0x34AAAFA5 b323
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0xD7F890, ped, p1); } // 0x3C06B8786DD94CD1 0xCB65198D b323
	static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0xD7F900, ped, itemSet); } // 0x8421EB4DA7E391B9 0xF3B7EFBF b323
	static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0xD7F950, ped); } // 0xFDDB234CF74073D9 0xA0134498 b323
	static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xD7F9A0, ped); } // 0x8D8ACD8388CD99CE 0x14D3E6E3 b323
	static void RESURRECT_PED(Ped ped) { invoke<Void>(0xD7FA30, ped); } // 0x71BC8E838B9C6035 0xA4B82097 b323
	static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { invoke<Void>(0xD7FAD0, ped, name); } // 0x98EFA132A4117BE1 0x20D6273E b323
	static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) { return invoke<Vector3>(0xD7FAE0, ped, worldSpace); } // 0xE0AF41401ADF87E3 0x5231F901 b323
	static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xD7FBC0, ped, toggle); } // 0x5BA7919BED300023 0xE94E24D4 b323
	static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0xD7FC30, ped, toggle); } // 0x97A790315D3831FD 0x4CAD1A4A b323
	static void SPECIAL_FUNCTION_DO_NOT_USE(Ped ped, BOOL p1) { invoke<Void>(0xD7FC90, ped, p1); } // 0xF9ACF4A08098EA25 0x141CC936 b323
	static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xD7FD10, ped); } // 0x3AC1F7B898F30C05 0xC4BC4841 b323
	static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0xD7FD60, ped, p1, p2, p3, p4); } // 0x816F6981C60BF53B 0x1E54DB12 b323
	static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType) { invoke<Void>(0xD7FD80, ped, boneIndex, xRot, yRot, zRot, woundType); } // 0x83F7E01C7B769A26 0x376CE3C0 b323
	static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, int p1, float p2, float p3, const char* p4) { invoke<Void>(0xD7FE50, ped, p1, p2, p3, p4); } // 0x3311E47B91EDCBBC 0x8F3F3A9C b323
	static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, int p1, float p2, float p3, float p4, float p5, int p6, float p7, const char* p8) { invoke<Void>(0xD7FF30, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F 0xFC13CE80 b323
	static void APPLY_PED_DAMAGE_DECAL(Ped ped, int damageZone, float xOffset, float yOffset, float heading, float scale, float alpha, int variation, BOOL fadeIn, const char* decalName) { invoke<Void>(0xD80050, ped, damageZone, xOffset, yOffset, heading, scale, alpha, variation, fadeIn, decalName); } // 0x397C38AA7B4A5F83 0x8A13A41F b323
	static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { invoke<Void>(0xD80180, ped, damagePack, damage, mult); } // 0x46DF918788CB093F 0x208D0CB8 b323
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0xD80230, ped); } // 0x8FE22675A5A45817 0xF7ADC960 b323
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0xD80280, ped, p1); } // 0x56E3B78C5408D9F4 0xF210BE69 b323
	static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0xD802D0, ped, p1, p2); } // 0x62AB793144DE75DC 0x0CB6C4ED b323
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) { invoke<Void>(0xD80340, ped, p1, p2); } // 0x523C79AEEFCC4A2A 0x70AA5B7D b323
	static int GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<int>(0xD803F0, ped); } // 0x71EAB450D86954A1 0x47187F7F b323
	static void MARK_PED_DECORATIONS_AS_CLONED_FROM_LOCAL_PLAYER(Ped ped, BOOL p1) { invoke<Void>(0xD804B0, ped, p1); } // 0x2B694AFCF64E6994 b323
	static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0xD80520, ped); } // 0x9C720776DAA43E7E 0x629F15BD b323
	static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0xD80580, ped, height); } // 0x44CB6447D2571AA0 0x7B33289A b323
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xD805F0, ped); } // 0xB5485E4907B53019 0xBDE749F7 b323
	static void CLEAR_PED_ENV_DIRT(Ped ped) { invoke<Void>(0xD80640, ped); } // 0x6585D955A68452A5 0xA993915F b323
	static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0xD80690, ped, sweat); } // 0x27B0405F59637D1F 0x76A1DB9F b323
	static void ADD_PED_DECORATION_FROM_HASHES(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xD806E0, ped, collection, overlay); } // 0x5F5D1665E352A839 0x70559AC7 b323
	static int GET_PED_DECORATION_ZONE_FROM_HASHES(Hash collection, Hash overlay) { return invoke<int>(0xD80780, collection, overlay); } // 0x9FD452BFBE7A7A8B 0x3543019E b323
	static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xD807E0, ped); } // 0x0E5173C163976E38 0xD4496BF3 b323
	static void CLEAR_PED_DECORATIONS_LEAVE_SCARS(Ped ped) { invoke<Void>(0xD80830, ped); } // 0xE3B27E70CEAB9F0C 0xEFD58EB9 b323
	static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xD808B0, ped); } // 0x11B499C1E0FF8559 0xF7E2FBAD b323
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xD808F0, ped, boneId, offsetX, offsetY, offsetZ); } // 0x17C07FC640E86B4E 0x4579CAB1 b323
	static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0xD80960, startImmediately, messageId); } // 0x418EF2A1BCE56685 0x1CFBFD4B b323
	static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xD809D0, ped); } // 0xB158DFCCC56E5C5B 0x737C3689 b323
	static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0xD809E0, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0x1B5C85C612E5256E 0xA38C0234 b323
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0xD80A30); } // 0xD37401D78A929A49 0x4DDF845F b323
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0xD80A50, p0, p1); } // 0x31D16B74C6E29D66 0x4483EF06 b323
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<Void>(0xD80A70, x, y, z, range, p4); } // 0x28157D43CF600981 0x80EAD297 b323
	static BOOL IS_PED_USING_SCENARIO(Ped ped, const char* scenario) { return invoke<BOOL>(0xD80AF0, ped, scenario); } // 0x1BF094736DD62C2E 0x0F65B0D4 b323
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xD80B20, ped); } // 0x57AB4A3080F85143 0x195EF5B7 b323
	static BOOL SET_PED_PANIC_EXIT_SCENARIO(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xD80B90, p0, p1, p2, p3); } // 0xFE07FF6495D52E2A 0x59DE73AC b323
	static void TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped ped, BOOL toggle) { invoke<Void>(0xD80BC0, ped, toggle); } // 0x9A77DFD295E29B09 0xC08FE5F6 b323
	static BOOL TRIGGER_PED_SCENARIO_PANICEXITTOFLEE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xD80C30, p0, p1, p2, p3); } // 0x25361A96E0F7E419 0x58C0F6CF b323
	static BOOL SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xD80C60, p0, p1, p2, p3); } // 0xEC6935EBE0847B90 b323
	static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xD80D10, ped); } // 0xA3A9299C4F2ADB98 0x033F43FA b323
	static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xD80D60, ped); } // 0xF1C03A5352243A30 0x4C684C81 b323
	static BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped ped, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xD80DB0, ped, p1, p2, p3); } // 0xEEED8FAFEC331A70 0x7B4C3E6F b323
	static void SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Ped ped, BOOL p1) { invoke<Void>(0xD80E70, ped, p1); } // 0x425AECF167663F48 0x5BC276AE b323
	static void SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Any p0, BOOL p1) { invoke<Void>(0xD80ED0, p0, p1); } // 0x5B6010B3CBC29095 b323
	static void SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Any p0, BOOL p1) { invoke<Void>(0xD80F30, p0, p1); } // 0xCEDA60A74219D064 b323
	static void PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xD80F90, ped, animName, animDict); } // 0xE1E65CA8AC9C00ED 0x1F6CCDDE b323
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xD80FB0, ped, animName, animDict); } // 0xFFC24B988B938B38 0x9BA19C13 b323
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0xD80FD0, ped); } // 0x726256CC1EEB182F 0x5244F4E2 b323
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD80FE0, ped, toggle); } // 0xBAF20C5432058024 0xE131E3B3 b323
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xD81050, ped, toggle, p2); } // 0xF833DDBA3B104D43 0xA2FDAF27 b323
	static void SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(Ped ped, BOOL p1) { invoke<Void>(0xD810E0, ped, p1); } // 0x33A60D8BDD6E508C 0xADB2511A b323
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD81140, ped, toggle); } // 0x6373D1349925A70E 0xF8053081 b323
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD811A0, ped, toggle); } // 0x0EB0585D15254740 0x5720A5DD b323
	static void TRIGGER_IDLE_ANIMATION_ON_PED(Ped ped) { invoke<Void>(0xD81200, ped); } // 0xC2EE020F5FB4DB53 0xB7CD0A49 b323
	static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xD81260, ped, toggle); } // 0x6C3B4D6D13B4C841 0x343B4DE0 b323
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0xD812C0, ped, toggle); } // 0xC11C18092C5530DC 0xD3B04476 b323
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xD81320, ped, toggle); } // 0x73518ECE2485412B 0x9955BC6F b323
	static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0xD81380, ped, toggle); } // 0xF2B7106D37947CE0 0x8E5D4EAB b323
	static void SET_PED_CAN_TORSO_REACT_IK(Ped ped, BOOL p1) { invoke<Void>(0xD813E0, ped, p1); } // 0xF5846EDB26A98A24 0x7B0040A8 b323
	static void SET_PED_CAN_TORSO_VEHICLE_IK(Ped ped, BOOL p1) { invoke<Void>(0xD81440, ped, p1); } // 0x6647C5F6F5792496 0x0FDA62DE b323
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xD814A0, ped, toggle); } // 0xEC4686EC06434678 0x584C5178 b323
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xD81500, ped1, ped2); } // 0x5CD3CB88A7F8850D 0x2A5DF721 b323
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0xD81530, ped, entity); } // 0x813A0A7C9D2E831F 0x233C9ACF b323
	static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xD81560, ped, lookAt); } // 0xCD17B554996A8D9E 0x6DEF6F1C b323
	static void SET_PED_CLOTH_PIN_FRAMES(Any p0, Any p1) { invoke<Void>(0xD81570, p0, p1); } // 0x78C4E9961DB3EB5B b323
	static void SET_PED_CLOTH_PACKAGE_INDEX(Any p0, Any p1) { invoke<Void>(0xD815C0, p0, p1); } // 0x82A3D6D9CC2CB8E3 b323
	static void SET_PED_CLOTH_PRONE(Any p0, BOOL p1) { invoke<Void>(0xD81610, p0, p1); } // 0xA660FAF550EB37E5 b323
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0xD81660, ped, flagId, value); } // 0x1913FE4CBF41C463 0x9CFBE10D b323
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xD81700, ped, flagId, doReset); } // 0xC1E8A365BF3B29F2 0xCFF6FF66 b323
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0xD81780, ped, flagId, p2); } // 0x7EE53118C892B513 0xABE98267 b323
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xD817B0, ped, flagId); } // 0xAF9E59B1B1FBF2A0 0x2FC10D11 b323
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0xD81820, ped, index); } // 0x0BDDB8D9EC6BCF3C 0x2AB3670B b323
	static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xD81880, ped, toggle); } // 0x6B7A646C242A7059 0x542FEB4D b323
	static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xD818E0, ped, evadingEntity); } // 0x414641C26E105898 0xD82829DC b323
	static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xD81970, ped, x, y, z, toggle); } // 0x96A05E4FB321B1BA 0xFD64EAE5 b323
	static void SET_PED_MODEL_IS_SUPPRESSED(Hash modelHash, BOOL toggle) { invoke<Void>(0xD81990, modelHash, toggle); } // 0xE163A4BCE4DE6F11 0x7820CA43 b323
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0xD819B0); } // 0xB47BD05FA66B40CF 0x5AD7DC55 b323
	static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xD819C0, ped, toggle); } // 0x638C03B0F9878F57 0x6FD9A7CD b323
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xD81A20, ped, toggle); } // 0x7FB17BA2E7DECA5B 0xE9B97A2B b323
	static void BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xD81A40, ped, toggle); } // 0xE43A13C9E4CCCBCF 0xFF1F6AEB b323
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xD81AA0, ped, toggle); } // 0xDF993EE5E90ABA25 0xE9BD733A b323
	static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xD81B00, ped, cannotRemove, helmetFlag, textureIndex); } // 0x54C7C4A94367717E 0x1862A461 b323
	static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xD81B20, ped, instantly); } // 0xA7B2458D0AD6DED8 0x2086B1F0 b323
	static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0xD81B40, ped, canWearHelmet); } // 0x560A43136EB58105 0xED366E53 b323
	static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xD81BA0, ped, helmetFlag); } // 0xC0E78D5C2CE3EB25 0x12677780 b323
	static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex, BOOL p2) { invoke<Void>(0xD81C00, ped, propIndex, p2); } // 0x26D83693ED99291C 0xA316D13F b323
	static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0xD81C70, ped, textureIndex); } // 0xF1550C4BD22582E2 0x5F6C3328 b323
	static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xD81CE0, ped); } // 0xF33BDFE19B309B19 0x0D680D49 b323
	static void CLEAR_PED_STORED_HAT_PROP(Ped ped) { invoke<Void>(0xD81D40, ped); } // 0x687C0B594907D2E8 0x24A1284E b323
	static int GET_PED_HELMET_STORED_HAT_PROP_INDEX(Ped ped) { return invoke<int>(0xD81DA0, ped); } // 0x451294E859ECC018 0x8A3A3116 b323
	static int GET_PED_HELMET_STORED_HAT_TEX_INDEX(Ped ped) { return invoke<int>(0xD81E00, ped); } // 0x9D728C1E12BF5518 0x74EB662D b323
	static BOOL IS_CURRENT_HEAD_PROP_A_HELMET(Any p0) { return invoke<BOOL>(0xD81E60, p0); } // 0xF2385935BFFD4D92 0xFFF149FE b323
	static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xD81E90, ped, toggle); } // 0x332B562EEDA62399 0xCF94BA97 b323
	static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xD81EF0, ped, toggle); } // 0xCB7553CDCEF4A735 0x5194658B b323
	static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xD81F50, ped, toggle); } // 0xC514825C507E3736 0xC1DAE216 b323
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD81FB0, ped, toggle); } // 0x94D94BF1A75AED3D 0x7C563CD2 b323
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xD82010, ped, mode); } // 0xC396F5B86FF9FEBD 0xFDDB042E b323
	static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xD82070, ped, toggle); } // 0x0A986918B102B448 0xA211A128 b323
	static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xD820D0, ped, toggle); } // 0xED7F7EFE9FABF340 0xB5F8BA28 b323
	static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xD82130, ped, toggle); } // 0xEEB64139BA29A7CF 0xFE2554FC b323
	static void SET_LADDER_CLIMB_INPUT_STATE(Ped ped, int p1) { invoke<Void>(0xD82190, ped, p1); } // 0x1A330D297AAC6BC1 0x77BB7CB8 b323
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { invoke<Void>(0xD821F0, ped); } // 0xC158D28142A34608 0x4AC3421E b323
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { invoke<Void>(0xD82230, ped, p1); } // 0x5917BBA32D06C230 0x7CEFFA45 b323
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xD82280, ped, combatMovement); } // 0x4D9CA1009AFBD057 0x12E62F9E b323
	static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0xD822D0, ped); } // 0xDEA92412FCAEB3F5 0xF3E7730E b323
	static void SET_PED_COMBAT_ABILITY(Ped ped, int abilityLevel) { invoke<Void>(0xD82330, ped, abilityLevel); } // 0xC7622C0D36B2FDA8 0x6C23D329 b323
	static void SET_PED_COMBAT_RANGE(Ped ped, int combatRange) { invoke<Void>(0xD82380, ped, combatRange); } // 0x3C606747B23E497B 0x8818A959 b323
	static int GET_PED_COMBAT_RANGE(Ped ped) { return invoke<int>(0xD823D0, ped); } // 0xF9D9F7F2DB8E2FA0 0x9B9B7163 b323
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeId, BOOL enabled) { invoke<Void>(0xD82430, ped, attributeId, enabled); } // 0x9F7794730795E019 0x81D64248 b323
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0xD824B0, ped, responseType); } // 0x0703B9079823DA4A 0xCFA613FF b323
	static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped) { return invoke<BOOL>(0xD82500, ped); } // 0xDCCA191DF9980FD7 0x139C0875 b323
	static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xD82570, ped); } // 0xFD4CCDBCC59941B7 0x9ADD7B21 b323
	static BOOL IS_PED_PERFORMING_A_COUNTER_ATTACK(Ped ped) { return invoke<BOOL>(0xD82610, ped); } // 0xEBD0EDBA5BE957CF 0x9BE7C860 b323
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0xD826A0, ped); } // 0x863B23EFDE9C5DF2 0xD044C8AF b323
	static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0xD82720, ped); } // 0x18A3E9EE1297FD39 0xAFEC26A4 b323
	static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0xD827B0, ped); } // 0xF9800AA1A771B000 0x2EA4B54E b323
	static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xD82800, ped); } // 0x7F08E26039C7347C 0xBDD3CE69 b323
	static BOOL WAS_PED_KNOCKED_OUT(Ped ped) { return invoke<BOOL>(0xD82850, ped); } // 0x61767F73EACEED21 0x3993092B b323
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { invoke<Void>(0xD828A0, ped, attributeFlags, enable); } // 0x70A2D1137C8ED7C9 0xA717A875 b323
	static void SET_PED_COWER_HASH(Ped ped, const char* p1) { invoke<Void>(0xD82910, ped, p1); } // 0xA549131166868ED3 0x16F30DF4 b323
	static void SET_PED_STEERS_AROUND_DEAD_BODIES(Ped ped, BOOL toggle) { invoke<Void>(0xD82970, ped, toggle); } // 0x2016C603D6B8987C 0xA6F2C057 b323
	static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0xD829D0, ped, toggle); } // 0x46F2193B3AD1D891 0x797CAE4F b323
	static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xD82A30, ped, toggle); } // 0x1509C089ADC208BF 0x3BD9B0A6 b323
	static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0xD82A90, ped, toggle); } // 0xEB6FB9D48DDE23EC 0x533C0651 b323
	static void SET_PED_IS_AVOIDED_BY_OTHERS(Any p0, BOOL p1) { invoke<Void>(0xD82AF0, p0, p1); } // 0xA9B61A329BFDCBEA 0x2276DE0D b323
	static void SET_PED_INCREASED_AVOIDANCE_RADIUS(Ped ped) { invoke<Void>(0xD82B50, ped); } // 0x570389D1C3DE3C6B 0x59C52BE6 b323
	static void SET_PED_BLOCKS_PATHING_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xD82B90, ped, toggle); } // 0x576594E8D64375E2 0x1D87DDC1 b323
	static void SET_PED_NO_TIME_DELAY_BEFORE_SHOT(Any p0) { invoke<Void>(0xD82BF0, p0); } // 0xA52D5247A4227E14 0xB52BA5F5 b323
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xD82C30, x, y, z, radius); } // 0x083961498679DC9F 0xFBD9B050 b323
	static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xD82D10, ped, p1, p2); } // 0x2208438012482A1A 0x187B9070 b323
	static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0xD82DA0, ped, x, y, z, p4); } // 0xFCF37A457CB96DC0 0x45037B9B b323
	static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0xD82DD0, ped); } // 0x7D7A2E43E74E2EB8 0x840D24D3 b323
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xD82E10, ped, p1); } // 0x2BC338A7B21F4608 0x31C31DAA b323
	static void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xD82E70, ped, p1); } // 0x75BA1CB3B7D40CAF 0x9194DB71 b323
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xD82ED0, ped); } // 0x91C8E617F64188AC 0x33248CC1 b323
	static int GET_TRACKED_PED_PIXELCOUNT(Ped ped) { return invoke<int>(0xD82F30, ped); } // 0x511F1A683387C7E2 0x5B1B70AA b323
	static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xD82F90, ped); } // 0x4C5E1F087CD10BB7 0x7EB613D9 b323
	static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, int eventId) { return invoke<BOOL>(0xD82FF0, ped, eventId); } // 0x8507BCB710FA6DC0 0xECD73DB0 b323
	static BOOL CAN_PED_SEE_HATED_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xD83020, ped1, ped2); } // 0x6CD5A433374D4CFB 0x74A0F291 b323
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0xD83050, ped, boneId); } // 0x3F428D08BE5AAE31 0x259C6BA2 b323
	static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0xD83080, ped, bone); } // 0x2057EF813397A772 0x849F0716 b323
	static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xD83090, ped, value); } // 0xBF29516833893561 0xFC1CFC27 b323
	static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0xD83130, ped); } // 0x9C14D30395A51A3C 0xA3421E39 b323
	static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xD831C0, ped, toggle); } // 0xD2C5AA0C0E8D0F1E 0xC70F4A84 b323
	static void SET_PED_ENVEFF_CPV_ADD(Ped ped, float p1) { invoke<Void>(0xD83240, ped, p1); } // 0x110F526AB784111F 0x3B882533 b323
	static void SET_PED_ENVEFF_COLOR_MODULATOR(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xD832E0, ped, p1, p2, p3); } // 0xD69411AA0CEBF9E9 0x87A0C174 b323
	static void REQUEST_RAGDOLL_BOUNDS_UPDATE(Any p0, Any p1) { invoke<Void>(0xD833B0, p0, p1); } // 0x1216E0BFA72CC703 0x7BD26837 b323
	static void SET_PED_AO_BLOB_RENDERING(Ped ped, BOOL toggle) { invoke<Void>(0xD833C0, ped, toggle); } // 0x2B5AA717A181FB4C 0x98E29ED0 b323
	static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0xD83420, x, y, z, roll, pitch, yaw, p6); } // 0x8C18E0F9080ADD73 0xFFDDF8FA b323
	static int CREATE_SYNCHRONIZED_SCENE_AT_MAP_OBJECT(float x, float y, float z, float radius, Hash object) { return invoke<int>(0xD83450, x, y, z, radius, object); } // 0x62EC273D00187DCA 0xF3876894 b323
	static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0xD83480, sceneId); } // 0x25D39B935A038A26 0x57A282F1 b323
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0xD834B0, sceneID, x, y, z, roll, pitch, yaw, p7); } // 0x6ACF6B7225801CD7 0x2EC2A0B2 b323
	static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0xD83570, sceneID, phase); } // 0x734292F4F0ABF6D0 0xF5AB0D98 b323
	static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xD835B0, sceneID); } // 0xE4A310B1D7FA73CC 0xB0B2C852 b323
	static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0xD835F0, sceneID, rate); } // 0xB6C49F8A5E295A5D 0xF10112FD b323
	static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xD83660, sceneID); } // 0xD80932D577274D40 0x89365F0D b323
	static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { invoke<Void>(0xD836A0, sceneID, toggle); } // 0xD9A897A4C6C2974F 0x32ED9F82 b323
	static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0xD836E0, sceneID); } // 0x62522002E0C391BA 0x47D87A84 b323
	static void SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID, BOOL toggle) { invoke<Void>(0xD83720, sceneID, toggle); } // 0x394B9CD12435C981 0x2DE48DA1 b323
	static BOOL IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID) { return invoke<BOOL>(0xD83770, sceneID); } // 0x7F2F4F13AC5257EF 0x72CF2514 b323
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0xD837B0, sceneID, entity, boneIndex); } // 0x272E4723B56A3B96 0xE9BA6189 b323
	static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0xD83820, sceneID); } // 0x6D38F1F04CBB37EA 0x52A1CAB2 b323
	static void TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(int scene) { invoke<Void>(0xD83850, scene); } // 0xCD9CC7E200A52A6F 0xBF7F9035 b323
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0xD83890, ped, motionStateHash, p2, p3, p4); } // 0xF28965D04F570DCA 0x164DDEFF b323
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xD838D0, ped, value); } // 0x433083750C5E064A 0xEAD0269A b323
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xD83920, ped, value); } // 0x01A898D26E2333DD 0x383EC364 b323
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xD83980, ped, value); } // 0x085BF80FA50A39D1 0x900008C6 b323
	static BOOL PED_HAS_SEXINESS_FLAG_SET(Ped ped, int sexinessFlag) { return invoke<BOOL>(0xD83A00, ped, sexinessFlag); } // 0x46B05BCAE43856B0 0x79543043 b323
	static int GET_PED_NEARBY_VEHICLES(Ped ped, Any* sizeAndVehs) { return invoke<int>(0xD83A60, ped, sizeAndVehs); } // 0xCFF869CBFA210D82 0xCB716F68 b323
	static int GET_PED_NEARBY_PEDS(Ped ped, Any* sizeAndPeds, int ignore) { return invoke<int>(0xD83A90, ped, sizeAndPeds, ignore); } // 0x23F8F5FC7E8C4A6B 0x4D3325F4 b323
	static BOOL HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Ped ped) { return invoke<BOOL>(0xD83AC0, ped); } // 0x7350823473013C02 0xF9FB4B71 b323
	static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xD83B20, ped); } // 0x00E73468D085F745 0x5AE7EDA2 b323
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, int p2, const char* action) { invoke<Void>(0xD83B80, ped, p1, p2, action); } // 0xD75ACCF5E0FB5367 0x8802F696 b323
	static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0xD83BA0, ped, value); } // 0x364DF566EC833DE2 0xB153E1B9 b323
	static int REGISTER_PEDHEADSHOT(Ped ped) { return invoke<int>(0xD83BF0, ped); } // 0x4462658788425076 0xFFE2667B b323
	static int REGISTER_PEDHEADSHOT_TRANSPARENT(Ped ped) { return invoke<int>(0xD83C60, ped); } // 0x953563CE563143AF 0x4DD03628 b323
	static void UNREGISTER_PEDHEADSHOT(int id) { invoke<Void>(0xD83CD0, id); } // 0x96B1361D9B24C2FF 0x0879AE45 b323
	static BOOL IS_PEDHEADSHOT_VALID(int id) { return invoke<BOOL>(0xD83CF0, id); } // 0xA0A9668F158129A2 0x0B1080C4 b323
	static BOOL IS_PEDHEADSHOT_READY(int id) { return invoke<BOOL>(0xD83D30, id); } // 0x7085228842B13A67 0x761CD02E b323
	static const char* GET_PEDHEADSHOT_TXD_STRING(int id) { return invoke<const char*>(0xD83D60, id); } // 0xDB4EACD4AD0A5D6B 0x76D28E96 b323
	static BOOL REQUEST_PEDHEADSHOT_IMG_UPLOAD(int id) { return invoke<BOOL>(0xD83DB0, id); } // 0xF0DAEF2F545BEE25 0x10F2C023 b323
	static void RELEASE_PEDHEADSHOT_IMG_UPLOAD(int id) { invoke<Void>(0xD83DF0, id); } // 0x5D517B27CF6ECD04 0x0DBB2FA7 b323
	static BOOL IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE() { return invoke<BOOL>(0xD83E10); } // 0xEBB376779A760AA8 0x810158F8 b323
	static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED() { return invoke<BOOL>(0xD83E30); } // 0x876928DDDFCCC9CD 0x05023F8F b323
	static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED() { return invoke<BOOL>(0xD83E50); } // 0xE8A169E666CBC541 0xAA39FD6C b323
	static void SET_PED_HEATSCALE_OVERRIDE(Ped ped, float heatScale) { invoke<Void>(0xD83E70, ped, heatScale); } // 0xC1F6EBF9A3D55538 0xEF9142DB b323
	static void DISABLE_PED_HEATSCALE_OVERRIDE(Ped ped) { invoke<Void>(0xD83ED0, ped); } // 0x600048C60D5C2C51 0x0688DE64 b323
	static void SPAWNPOINTS_START_SEARCH(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<Void>(0xD83F10, p0, p1, p2, p3, p4, interiorFlags, scale, duration); } // 0x2DF9038C90AD5264 0x909A1D76 b323
	static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, int interiorFlags, float scale, int duration) { invoke<Void>(0xD83F90, x1, y1, z1, x2, y2, z2, width, interiorFlags, scale, duration); } // 0xB2AFF10216DEFA2F 0x4AAD0ECB b323
	static void SPAWNPOINTS_CANCEL_SEARCH() { invoke<Void>(0xD84030); } // 0xFEE4A5459472A9F8 0x492C9E46 b323
	static BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke<BOOL>(0xD84040); } // 0x3C67506996001F5E 0x814A28F4 b323
	static BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke<BOOL>(0xD84070); } // 0xA586FBEB32A53DBB 0x0B60D2BA b323
	static BOOL SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke<BOOL>(0xD840A0); } // 0xF445DE8DA80A1792 0x6B83ABDF b323
	static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke<int>(0xD840D0); } // 0xA635C11B8C44AFC2 0xF46B4DC8 b323
	static void SPAWNPOINTS_GET_SEARCH_RESULT(int randomInt, float* x, float* y, float* z) { invoke<Void>(0xD84100, randomInt, x, y, z); } // 0x280C7E3AC7F56E90 0x36A4AC65 b323
	static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int p0, int* p1) { invoke<Void>(0xD84180, p0, p1); } // 0xB782F8238512BAD5 0xBA699DDF b323
	static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0xD841D0, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); } // 0xC32779C16FCEECD9 0x6FE5218C b323
	static void FORCE_INSTANT_LEG_IK_SETUP(Ped ped) { invoke<Void>(0xD84210, ped); } // 0xED3C76ADFA6D07C4 0xFB4000DC b323
	static void REQUEST_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xD84270, asset); } // 0x290E2780BB7AA598 0x572BA553 b323
	static BOOL HAS_ACTION_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xD842F0, asset); } // 0xE4B5F4BF2CB24E65 0xF7EB2BF1 b323
	static void REMOVE_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xD84320, asset); } // 0x13E940F88470FA51 0x3F480F92 b323
	static void REQUEST_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xD843A0, asset); } // 0x2A0A62FCDEE16D4F 0x280A004A b323
	static BOOL HAS_STEALTH_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xD84430, asset); } // 0xE977FC5B08AF3441 0x39245667 b323
	static void REMOVE_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xD84460, asset); } // 0x9219857D21F0E842 0x8C0B243A b323
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0xD844F0, ped, multiplier); } // 0xDC2C5C242AAC342B 0x1D2B5C70 b323
	static void SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(Ped ped, BOOL toggle, int p2) { invoke<Void>(0xD84560, ped, toggle, p2); } // 0xE861D0B05C7662B8 0x2F9550C2 b323
	static void SET_FORCE_FOOTSTEP_UPDATE(Ped ped, BOOL toggle) { invoke<Void>(0xD845F0, ped, toggle); } // 0x129466ED55140F8D 0x37DBC2AD b323
	static void SET_FORCE_STEP_TYPE(Ped ped, BOOL p1, int type, int p3) { invoke<Void>(0xD84640, ped, p1, type, p3); } // 0xCB968B53FC7F916D 0xC0F1BC91 b323
	static BOOL IS_ANY_HOSTILE_PED_NEAR_POINT(Ped ped, float x, float y, float z, float radius) { return invoke<BOOL>(0xD846B0, ped, x, y, z, radius); } // 0x68772DB2B2526F9F 0x1A464167 b323
	static BOOL IS_TARGET_PED_IN_PERCEPTION_AREA(Ped ped, Ped targetPed, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xD846E0, ped, targetPed, p2, p3, p4, p5); } // 0x06087579E7AA85A9 0xD0567D41 b323
	static void SET_POP_CONTROL_SPHERE_THIS_FRAME(float x, float y, float z, float min, float max) { invoke<Void>(0xD84720, x, y, z, min, max); } // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C b323
	static void FORCE_ZERO_MASS_IN_COLLISIONS(Ped ped) { invoke<Void>(0xD84790, ped); } // 0xD33DAA36272177C4 0xA89A53F2 b323
	static void SET_PED_PHONE_PALETTE_IDX(Any p0, Any p1) { invoke<Void>(0xD847D0, p0, p1); } // 0x83A169EABCDB10A2 b323
	static void SET_PED_STEER_BIAS(Ped ped, float value) { invoke<Void>(0xD84810, ped, value); } // 0x288DF530C92DAD6F b323
}

namespace PHYSICS
{
	static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float windingSpeed, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<int>(0xD869A0, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, windingSpeed, p11, p12, rigid, p14, breakWhenShot, unkPtr); } // 0xE832D760399EB220 0xA592EC74 b323
	static void DELETE_ROPE(int* ropeId) { invoke<Void>(0xD86A20, ropeId); } // 0x52B4829281364649 0x748D72AF b323
	static void DELETE_CHILD_ROPE(int ropeId) { invoke<Void>(0xD86A30, ropeId); } // 0xAA5D6B1888E4DB20 0xB19B4706 b323
	static BOOL DOES_ROPE_EXIST(int* ropeId) { return invoke<BOOL>(0xD86A50, ropeId); } // 0xFD5448BE3111ED96 0x66E4A3AC b323
	static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { invoke<Void>(0xD86A90, ropeId, toggle); } // 0xF159A63806BB5BA8 0x51523B8C b323
	static void LOAD_ROPE_DATA(int ropeId, const char* rope_preset) { invoke<Void>(0xD86AF0, ropeId, rope_preset); } // 0xCBB203C04D1ABD27 0x9E8F1644 b323
	static void PIN_ROPE_VERTEX(int ropeId, int vertex, float x, float y, float z) { invoke<Void>(0xD86B40, ropeId, vertex, x, y, z); } // 0x2B320CF14146B69A 0xAE1D101B b323
	static void UNPIN_ROPE_VERTEX(int ropeId, int vertex) { invoke<Void>(0xD86BB0, ropeId, vertex); } // 0x4B5AE2EEE4A8F180 0xB30B552F b323
	static int GET_ROPE_VERTEX_COUNT(int ropeId) { return invoke<int>(0xD86C00, ropeId); } // 0x3655F544CD30F0B5 0x5131CD2C b323
	static void ATTACH_ENTITIES_TO_ROPE(int ropeId, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0xD86C60, ropeId, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); } // 0x3D95EC8B6D940AC3 0x7508668F b323
	static void ATTACH_ROPE_TO_ENTITY(int ropeId, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xD86CB0, ropeId, entity, x, y, z, p5); } // 0x4B490A6832559A65 0xB25D9536 b323
	static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { invoke<Void>(0xD86D70, ropeId, entity); } // 0xBCF3026912A8647D 0x3E720BEE b323
	static void ROPE_SET_UPDATE_PINVERTS(int ropeId) { invoke<Void>(0xD86DF0, ropeId); } // 0xC8D667EE52114ABA 0xEAF291A0 b323
	static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { invoke<Void>(0xD86E30, ropeId, p1); } // 0xDC57A637A20006ED 0x80DB77A7 b323
	static void ROPE_SET_SMOOTH_REELIN(int ropeId, BOOL p1) { invoke<Void>(0xD86E70, ropeId, p1); } // 0x36CCB9BE67B970FD 0xC67D5CF6 b323
	static BOOL IS_ROPE_ATTACHED_AT_BOTH_ENDS(int* ropeId) { return invoke<BOOL>(0xD86ED0, ropeId); } // 0x84DE3B5FB3E666F0 0x7A18BB9C b323
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeId) { return invoke<Vector3>(0xD86F20, ropeId); } // 0x21BB0FBD3E217C2D 0x91F6848B b323
	static Vector3 GET_ROPE_VERTEX_COORD(int ropeId, int vertex) { return invoke<Vector3>(0xD86FB0, ropeId, vertex); } // 0xEA61CA8E80F09E4D 0x84374452 b323
	static void START_ROPE_WINDING(int ropeId) { invoke<Void>(0xD87030, ropeId); } // 0x1461C72C889E343E 0x5187BED3 b323
	static void STOP_ROPE_WINDING(int ropeId) { invoke<Void>(0xD87070, ropeId); } // 0xCB2D4AB84A19AA7C 0x46826B53 b323
	static void START_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xD870A0, ropeId); } // 0x538D1179EC1AA9A9 0xFC0DB4C3 b323
	static void STOP_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xD870E0, ropeId); } // 0xFFF3A50779EFBBB3 0x2EEDB18F b323
	static void ROPE_CONVERT_TO_SIMPLE(int ropeId) { invoke<Void>(0xD87110, ropeId); } // 0x5389D48EFA2F079A 0x43E92628 b323
	static void ROPE_LOAD_TEXTURES() { invoke<Void>(0xD87180); } // 0x9B9039DBF2D258C1 0xBA97CE91 b323
	static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xD871A0); } // 0xF2D0E6A75CC05597 0x5FDC1047 b323
	static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xD871D0); } // 0x6CE36C35C1AC8163 0x584463E0 b323
	static BOOL DOES_SCRIPT_OWN_ROPE(int ropeId) { return invoke<BOOL>(0xD871F0, ropeId); } // 0x271C9D3ACA5D6409 b323
	static void ROPE_ATTACH_VIRTUAL_BOUND_GEOM(int ropeId, int p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { invoke<Void>(0xD87270, ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xBC0CE682D4D05650 0x106BA127 b323
	static void ROPE_CHANGE_SCRIPT_OWNER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD87370, p0, p1, p2); } // 0xB1B6216CA2E7B55E 0x7C6F7668 b323
	static void ROPE_SET_REFFRAMEVELOCITY_COLLIDERORDER(int ropeId, int p1) { invoke<Void>(0xD87390, ropeId, p1); } // 0xB743F735C03D7810 0x686672DD b323
	static float ROPE_GET_DISTANCE_BETWEEN_ENDS(int ropeId) { return invoke<float>(0xD873D0, ropeId); } // 0x73040398DFF9A4A6 0xFD309DC8 b323
	static void ROPE_FORCE_LENGTH(int ropeId, float length) { invoke<Void>(0xD87420, ropeId, length); } // 0xD009F759A723DB1B 0xABF3130F b323
	static void ROPE_RESET_LENGTH(int ropeId, float length) { invoke<Void>(0xD87470, ropeId, length); } // 0xC16DE94D9BEA14A0 0xC8A423A3 b323
	static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xD874D0, posX, posY, posZ, vecX, vecY, vecZ, impulse); } // 0xE37F721824571784 0xA2A5C9FE b323
	static void SET_DAMPING(Entity entity, int vertex, float value) { invoke<Void>(0xD87520, entity, vertex, value); } // 0xEEA3B200A6FEB65B 0xCFB37773 b323
	static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0xD875A0, entity); } // 0x710311ADF0E20730 0x031711B8 b323
	static void SET_CGOFFSET(Entity entity, float x, float y, float z) { invoke<Void>(0xD875F0, entity, x, y, z); } // 0xD8FA3908D7B86904 0x59910AB2 b323
	static Vector3 GET_CGOFFSET(Entity entity) { return invoke<Vector3>(0xD87600, entity); } // 0x8214A4B5A7A33612 0x49A11F0D b323
	static void SET_CG_AT_BOUNDCENTER(Entity entity) { invoke<Void>(0xD876A0, entity); } // 0xBE520D9761FF811F 0xA5B55421 b323
	static void BREAK_ENTITY_GLASS(Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xD87780, entity, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E648D16F6E308F3 0xD0E0402F b323
	static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { invoke<Void>(0xD877B0, object, toggle); } // 0x5CEC1A84620E7D5B 0xEE77C326 b323
	static void RESET_DISABLE_BREAKING(Object object) { invoke<Void>(0xD87850, object); } // 0xCC6E963682533882 b323
	static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0xD87860, object, toggle); } // 0x01BA3AED21C16CFB 0x97269DC8 b323
}

namespace PLAYER
{
	static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0xD8D860, player); } // 0x43A66C31C68491C0 0x6E31E993 b323
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0xD8D8C0, player); } // 0x50FAC3A3E030A6E1 0x6AC64990 b323
	static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0xD8D900, player, model); } // 0x00A1CADD00108836 0x774A4C54 b323
	static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL resetDamage) { invoke<Void>(0xD8D910, player, ped, p2, resetDamage); } // 0x048189FAC643DEEE 0xBE515485 b323
	static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0xD8D940, player, r, g, b); } // 0xE902EF951DCE178F 0x6EF43BBB b323
	static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0xD8D9A0); } // 0x407C7F91DDB46C16 0x4C1B8867 b323
	static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0xD8D9D0, player); } // 0x37039302F4E0A008 0x9873E404 b323
	static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xD8DA10, player, team); } // 0x0299FA38396A4940 0x725ADCF2 b323
	static const char* GET_PLAYER_NAME(Player player) { return invoke<const char*>(0xD8DA80, player); } // 0x6D0DE6A7B5DA71F8 0x406B4B20 b323
	static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0xD8DB00, player); } // 0x085DEB493BE80812 0x1CF7D7DA b323
	static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0xD8DB30, player); } // 0x0C92BA89F1AF26F8 0x821F2D2C b323
	static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, Vector3* position, BOOL p2, BOOL p3) { invoke<Void>(0xD8DBD0, player, position, p2, p3); } // 0x520E541A97A13354 0xF261633A b323
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xD8DC50, wantedLevel); } // 0xFDD179EAF45B556C 0xD9783F6B b323
	static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0xD8DC70, player, wantedLevel, disableNoMission); } // 0x39FF19C64EF7DA5B 0xB7A0914B b323
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xD8DC90, player, wantedLevel, p2); } // 0x340E61DE7F471565 0xED6F44F5 b323
	static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0xD8DD40, player, p1); } // 0xE0A7D1E497FFCD6F 0xAF3AFD83 b323
	static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xD8DE00, player); } // 0xAFAF86043E5874E9 0xE13A71C7 b323
	static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0xD8DE60, player); } // 0x0A6EB355EE14A2DB 0x5E72AB72 b323
	static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xD8DEC0, player, toggle); } // 0xDB172424876553F4 0x48A18913 b323
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0xD8DF30, player, wantedLevel); } // 0x238DB2A2C23EE9EF 0x589A2661 b323
	static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0xD8DF80, player); } // 0xB302540597885499 0x54EA5BCC b323
	static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xD8E010, player); } // 0x424D4687FA1E5652 0x140CA5A8 b323
	static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xD8E050, player); } // 0xFA1E2BF8B10598F9 0xED1D1662 b323
	static void SET_PLAYER_CONTROL(Player player, BOOL bHasControl, int flags) { invoke<Void>(0xD8E090, player, bHasControl, flags); } // 0x8D32347D6D4C40A2 0xD17AFCD8 b323
	static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xD8E0B0, player); } // 0xE28E54788CE8F12D 0xBDCDD163 b323
	static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xD8E100, maxWantedLevel); } // 0xAA5F02DB48D704B9 0x665A06F5 b323
	static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xD8E120, toggle); } // 0x43286D561B72B8BF 0x8E114B10 b323
	static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xD8E140, player, toggle); } // 0x32C62AA929C2DA6A 0xE6DE71B7 b323
	static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0xD8E1B0, player); } // 0x5E9564D8246B909A 0xE15D777F b323
	static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xD8E1F0, player, toggle); } // 0x8EEDA153AD141BA4 0xC915285E b323
	static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xD8E260, player, toggle); } // 0x056E0FE8534C2949 0x49EAE968 b323
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xD8E2B0, player); } // 0x471D2FF42A94B4F2 0xBF974891 b323
	static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xD8E2E0, player, toggle); } // 0xDE45D1A1EF45EE61 0x274631FE b323
	static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xD8E340, player); } // 0xC3376F42B1FACCC6 0x02DF7AF4 b323
	static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0xD8E370, player, toggle); } // 0x596976B02B6B5700 0xA3D675ED b323
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xD8E3C0, multiplier); } // 0x020E5F00CDA207BA 0x1359292F b323
	static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xD8E400, player, difficulty); } // 0x9B0BB33B04405E7A 0xB552626C b323
	static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xD8E450, player); } // 0xB9D0DD990DC141DD 0xA64C378D b323
	static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0xD8E490, duration); } // 0xBF9BD71691857E48 0x5F8A22A6 b323
	static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xD8E4F0, player, crimeType, wantedLvlThresh); } // 0xE9B09589827545E7 0xD8EB3A44 b323
	static void SUPPRESS_CRIME_THIS_FRAME(Player player, int crimeType) { invoke<Void>(0xD8E580, player, crimeType); } // 0x9A987297ED8BD838 0x59B5C2A2 b323
	static void UPDATE_WANTED_POSITION_THIS_FRAME(Player player) { invoke<Void>(0xD8E5D0, player); } // 0xBC9490CA15AEA8FB 0x6B34A160 b323
	static void SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(Player player) { invoke<Void>(0xD8E600, player); } // 0x4669B3ED80F24B4E 0xB9FB142F b323
	static void FORCE_START_HIDDEN_EVASION(Player player) { invoke<Void>(0xD8E630, player); } // 0xAD73CE5A09E42D12 0x85725848 b323
	static void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player player) { invoke<Void>(0xD8E670, player); } // 0x36F1B38855F2A8DF 0x3A7E5FB6 b323
	static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { invoke<Void>(0xD8E6A0, player); } // 0xDC64D2C53493ED12 0xD15C4B1C b323
	static void SET_LAW_RESPONSE_DELAY_OVERRIDE(float p0) { invoke<Void>(0xD8E730, p0); } // 0xB45EFF719D8427A6 0xBF6993C7 b323
	static void RESET_LAW_RESPONSE_DELAY_OVERRIDE() { invoke<Void>(0xD8E750); } // 0x0032A6DBA562C518 0x47CAB814 b323
	static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xD8E760, player); } // 0xDE7465A27D403C06 0x39E3CB3F b323
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xD8E7A0, player); } // 0x908CBECC2CAA3690 0xBB77E9CD b323
	static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xD8E7D0, player, entity); } // 0x7912F7FC4F6264B6 0xF3240B77 b323
	static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xD8E870, player, entity); } // 0x13EDE1A5DBF797C9 0xF6AAA2D7 b323
	static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0xD8E8D0, player); } // 0x2E397FD2ECD37C87 0x1DEC67B7 b323
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xD8E920, player, entity); } // 0x3C06B5C839B38F7B 0x7D80EEAA b323
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0xD8E9E0, player, entity); } // 0x2975C866E6713290 0x8866D9D0 b323
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xD8EA50, player, range); } // 0x29961D490E5814FD 0x74D42C03 b323
	static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0xD8EAA0, player, toggle); } // 0x6E8834B52EC20C77 0xF4D99685 b323
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0xD8EAF0, player, toggle); } // 0xD5E460AD7020A246 0x71B305BB b323
	static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0xD8EB40, player, toggle); } // 0xD465A8599DFF6814 0x13CAFAFA b323
	static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xD8EB90); } // 0x462E0DB9B137DC5F 0x457F1E44 b323
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0xD8EBA0, player); } // 0x78CFE51896B6B8A4 0x456DB50D b323
	static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0xD8EBF0, player, toggle); } // 0xA01B8075D8B92DF4 0x7DD7900C b323
	static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xD8EC40, player); } // 0xA6F312FCCE9C1DFE 0xC0445A9C b323
	static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0xD8EC70, player, p1); } // 0xA352C1B864CAFD33 0x62A93608 b323
	static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0xD8ECD0, player); } // 0x3F9F16F8E65A7ED7 0x47017C90 b323
	static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0xD8ED20, player); } // 0x1885BC9B108B4C99 0x40E80543 b323
	static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0xD8ED90, player); } // 0xA1FCF8E6AF40B731 0x1317125A b323
	static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xD8EDF0, player); } // 0x0D127585F77030AF 0xA5EDCDE8 b323
	static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xD8EE10, player); } // 0x92659B4CE1863CB3 0x02A50657 b323
	static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0xD8EE50, player); } // 0x49C32D60007AFA47 0x618857F2 b323
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0xD8EEB0, player); } // 0x8A876A65283DD7D7 0x61B00A84 b323
	static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0xD8EF00, player); } // 0x95E8F73DC65EFB9C 0x4A9E9AE0 b323
	static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xD8EF40, player, atArresting); } // 0x388A47C51ABDAC8E 0x7F6A60D3 b323
	static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0xD8EFD0, player); } // 0x2D03E13C460760D6 0x453C7CAB b323
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xD8F000); } // 0xB6997A7EB3F5C8C0 0xE2757AC1 b323
	static Player GET_PLAYER_INDEX() { return invoke<Player>(0xD8F030); } // 0xA5EDC40EF369B48D 0x309BBDC1 b323
	static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0xD8F070, value); } // 0x41BD2A6B006AF756 0x98DD98F1 b323
	static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xD8F080, value); } // 0x9EC6603812C24710 0x98F3B274 b323
	static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0xD8F090, player); } // 0x5D35ECF3A81A0EE0 0x6E9B8B9E b323
	static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xD8F0D0, player); } // 0xE36A25322DC35F42 0xB6209195 b323
	static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xD8F110, player); } // 0xD559D2BE9E37853B 0x8836E732 b323
	static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0xD8F150, player); } // 0xDB89591E290D9182 0x9F27D00E b323
	static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xD8F190, player); } // 0xDCCFD3F106C36AB4 0x85C7E232 b323
	static Player PLAYER_ID() { return invoke<Player>(0xD8F1C0); } // 0x4F8644AF03D0E0D6 0x8AEA886C b323
	static Ped PLAYER_PED_ID() { return invoke<Ped>(0xD8F200); } // 0xD80958FC74E988A6 0xFA92E226 b323
	static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xD8F240); } // 0xEE68096F9F37341E 0x8DD5B838 b323
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0xD8F280, cleanupFlags); } // 0xC968670BFACE42D9 0x4B37333C b323
	static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xD8F2C0, cleanupFlags); } // 0xBC8983F38F78ED51 0xFDAAEA2B b323
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { invoke<Void>(0xD8F300, name, cleanupFlags); } // 0x4C68DDDDF0097317 0x04256C73 b323
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xD8F330, id, cleanupFlags); } // 0xF745B37630DF176B 0x882D3EB3 b323
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0xD8F370); } // 0x9A41CF4674A12272 0x39AA9FC8 b323
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0xD8F3A0, player, vehicle); } // 0x8026FF78F208978A 0xA454DD29 b323
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xD8F3B0, player); } // 0x1DE37BBF9E9CC14A 0xAF7AFCC4 b323
	static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievementId) { return invoke<BOOL>(0xD8F3F0, achievementId); } // 0xBEC7076D64130195 0x822BC992 b323
	static BOOL SET_ACHIEVEMENT_PROGRESS(int achievementId, int progress) { return invoke<BOOL>(0xD8F420, achievementId, progress); } // 0xC2AFFFDABBDC2C5C b323
	static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xD8F450, achievementId); } // 0x867365E111A3B6EB 0x136A5BE9 b323
	static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xD8F480); } // 0xF25D331DC2627BBC 0x9FAB6729 b323
	static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xD8F4B0); } // 0x74556E1420867ECA 0x8F72FAD0 b323
	static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL p0) { invoke<Void>(0xD8F4C0, p0); } // 0x94DD7888C10A979E 0x4264CED2 b323
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xD8F4D0); } // 0x5D511E3867C87139 0xE495B6DA b323
	static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xD8F4F0, player, toggle); } // 0x239528EACDC3E7DE 0xDFB9A2A2 b323
	static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xD8F550, player); } // 0xB721981B2B939E07 0x680C90EE b323
	static void SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(Player player, BOOL p1) { invoke<Void>(0xD8F590, player, p1); } // 0xCAC57395B151135F 0x00563E0D b323
	static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0xD8F5E0, player, p2); } // 0xF3AC26D3CC576528 0x6255F3B4 b323
	static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0xD8F630, player, toggle); } // 0x3C49C870E66F0A28 0xC7B4D7AC b323
	static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xD8F690, player, toggle); } // 0x5C8B2F450EE4328E 0x0B270E0F b323
	static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0xD8F6D0, targetMode); } // 0xB1906895227793F3 0x61CAE253 b323
	static BOOL GET_IS_USING_FPS_THIRD_PERSON_COVER() { return invoke<BOOL>(0xD8F700); } // 0xB9CF1F793A9F1BF1 b323
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xD8F720, player); } // 0xF0B67A4DE6AB5F98 0x1D31CBBD b323
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0xD8F750, player); } // 0x20CE80B0C2BF4ACC 0x14F52453 b323
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xD8F7A0, player); } // 0x4AACB96203D11A31 0x7E3BFBC5 b323
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xD8F7D0, player); } // 0xE4B90F367BD81752 0xA3707DFC b323
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0xD8F820, player, multiplier); } // 0xCA7DC8329F0A1E9E 0xF20F72E5 b323
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xD8F880, player, multiplier); } // 0xA91C6F0FF7D16A13 0xB986FF47 b323
	static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xD8F8E0, player, multiplier); } // 0x6DB47AA77FD94E09 0x825423C2 b323
	static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0xD8F940); } // 0x5063F92F07C2A316 0x62824EF4 b323
	static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xD8F970); } // 0xC7034807558DDFCA 0x24BC5AC0 b323
	static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xD8F9A0); } // 0xAEBF081FFC0A0E5E 0xF23277F3 b323
	static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xD8F9F0); } // 0x8621390F0CDCFE1F 0xD04568B9 b323
	static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0xD8FA20, player, toggle); } // 0x0FEE4F80AC44A726 0x94E42E2E b323
	static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0xD8FA60, player, toggle); } // 0x75E7D505F2B15902 0xB0C576CB b323
	static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0xD8FAB0, player, toggle); } // 0x7651BC64AE59E128 0x374F42F0 b323
	static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0xD8FB00, player, toggle); } // 0x5E6CC07646BBEAB8 0x30CB28CB b323
	static void DISABLE_PLAYER_THROW_GRENADE_WHILE_USING_GUN() { invoke<Void>(0xD8FB90); } // 0xB885852C39CC265D b323
	static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0xD8FBB0, player, toggle); } // 0x2E8AABFA40A84F8C 0xCCD937E7 b323
	static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0xD8FC00, player, value); } // 0x77DFCCF5948B8C71 0xC6C3C53B b323
	static void SPECIAL_ABILITY_DEACTIVATE(Player player, Any p1) { invoke<Void>(0xD8FC40, player, p1); } // 0xD6A953C6D1492057 0x80C2AB09 b323
	static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player, Any p1) { invoke<Void>(0xD8FC80, player, p1); } // 0x9CB5CE07A3968D5A 0x0751908A b323
	static void SPECIAL_ABILITY_RESET(Player player, Any p1) { invoke<Void>(0xD8FCC0, player, p1); } // 0x375F0E738F861A94 0xA7D8BCD3 b323
	static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(Player player, Any p1) { invoke<Void>(0xD8FD00, player, p1); } // 0xC9A763D8FE87436A 0x4136829A b323
	static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xD8FD40, player, p1, p2, p3); } // 0x2E7B9B683481687D 0x6F463F56 b323
	static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xD8FDC0, player, p1, p2, p3); } // 0xF113E3AA9BC54613 0xAB55D8F3 b323
	static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xD8FE40, player, p1, p2, p3); } // 0xF733F45FA4497D93 0xF440C04D b323
	static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p1, Any p2) { invoke<Void>(0xD8FEC0, player, p1, p2); } // 0xED481732DFF7E997 0x5FEE98A2 b323
	static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2, Any p3) { invoke<Void>(0xD8FF20, player, p1, p2, p3); } // 0xB7B0870EB531D08D 0x72429998 b323
	static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2, Any p3) { invoke<Void>(0xD8FF80, player, normalizedValue, p2, p3); } // 0xA0696A65F009EE18 0x8C7E68C1 b323
	static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xD8FFE0, player, p1, p2); } // 0x3DACA8DDC6FD4980 0xB71589DA b323
	static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xD90030, player, p1, p2); } // 0x1D506DBBBC51E64B 0x9F80F6DF b323
	static void SPECIAL_ABILITY_LOCK(Hash playerModel, Any p1) { invoke<Void>(0xD90080, playerModel, p1); } // 0x6A09D0D590A47D13 0x1B7BB388 b323
	static void SPECIAL_ABILITY_UNLOCK(Hash playerModel, Any p1) { invoke<Void>(0xD90090, playerModel, p1); } // 0xF145F3BE2EFA9A3B 0x1FDB2919 b323
	static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0xD900A0, playerModel); } // 0xC6017F6A6CDFA694 0xC9C75E82 b323
	static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player, Any p1) { return invoke<BOOL>(0xD900D0, player, p1); } // 0x3E5F7FC85D854E15 0x1B17E334 b323
	static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player, Any p1) { return invoke<BOOL>(0xD90120, player, p1); } // 0x05A1FE504B7F2587 0x2E19D7F6 b323
	static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle, Any p2) { invoke<Void>(0xD90170, player, toggle, p2); } // 0x181EC197DAEFE121 0xC86C1B4E b323
	static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player, Any p1) { return invoke<BOOL>(0xD901C0, player, p1); } // 0xB1D200FE26AEF3CB 0xC01238CC b323
	static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xD90210, multiplier); } // 0xA49C426ED0CA4AB7 0xFF1BC556 b323
	static void UPDATE_SPECIAL_ABILITY_FROM_STAT(Player player, Any p1) { invoke<Void>(0xD90230, player, p1); } // 0xFFEE8FA29AB9A18E 0x5D0FE25B b323
	static BOOL GET_IS_PLAYER_DRIVING_ON_HIGHWAY(Player player) { return invoke<BOOL>(0xD90270, player); } // 0x5FC472C501CCADB3 0x46E7E31D b323
	static BOOL GET_IS_PLAYER_DRIVING_WRECKLESS(Player player, int p1) { return invoke<BOOL>(0xD902F0, player, p1); } // 0xF10B44FD479D69F3 0x1E359CC8 b323
	static BOOL GET_IS_MOPPING_AREA_FREE_IN_FRONT_OF_PLAYER(Player player, float p1) { return invoke<BOOL>(0xD90390, player, p1); } // 0xDD2620B7B9D16FF1 0x8CB53C9F b323
	static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL findCollisionLand, BOOL p7) { invoke<Void>(0xD903C0, player, x, y, z, heading, p5, findCollisionLand, p7); } // 0xAD15F075A4DA0FDE 0xC552E06C b323
	static void STOP_PLAYER_TELEPORT() { invoke<Void>(0xD90400); } // 0xC449EDED9D73009C 0x86AB8DBB b323
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xD90410); } // 0x02B15662D7F8886F 0x3A11D118 b323
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xD90430, player); } // 0x2F395D61F3A1F877 0xC3B02362 b323
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0xD90480, player, regenRate); } // 0x5DB660B38DD98A31 0x45514731 b323
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xD904D0, player, modifier); } // 0xCE07B9F7817AADA3 0xB02C2F39 b323
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xD90520, player, modifier); } // 0x2D83BC011CA14A3C 0xAE446344 b323
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier, BOOL p2) { invoke<Void>(0xD90570, player, modifier, p2); } // 0x4A3DC7ECCC321032 0x362E69AD b323
	static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xD905C0, player, modifier); } // 0xAE540335B4ABC4E2 0x9F3D577F b323
	static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xD90610, player, modifier); } // 0xA50E117CDDF82F0C 0x823ECA63 b323
	static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xD90660, player, modifier); } // 0x4C60E6EFDAFF2462 0xA16626C7 b323
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xD906B0, player, tintIndex); } // 0xA3D0E54541D9A5E5 0x8EA12EDB b323
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xD906F0, player, tintIndex); } // 0x75D3F7A1B0D9B145 0x432B0509 b323
	static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xD90730, player, index); } // 0xAF04C87F5DC1DF38 0x70689638 b323
	static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0xD90770, player, index); } // 0xD5A016BC3C09CF40 0x77B8EF01 b323
	static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xD907B0, player, tintIndex); } // 0x93B0FB27C9A04060 0xD79D5D1B b323
	static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xD907F0, player, tintIndex); } // 0x6E9C742F340CE5A2 0x4E418E13 b323
	static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0xD90830, player); } // 0x7DDAB28D31FAC363 0xA3E4798E b323
	static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xD90860, player); } // 0x5DDFE2FF727F3CA3 0x30DA1DA1 b323
	static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0xD908A0, player, enabled); } // 0xF401B182DBA8AF53 0x832DEB7A b323
	static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0xD908F0, player, r, g, b); } // 0x8217FD371A4625CF 0x14FE9264 b323
	static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xD909A0, player, r, g, b); } // 0xEF56DBABD3CD4887 0xF66E5CDD b323
	static void SET_PLAYER_PHONE_PALETTE_IDX(Player player, int flags) { invoke<Void>(0xD90A30, player, flags); } // 0x11D5F725F0E780E0 b323
	static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xD90A60, player, multiplier); } // 0xDB89EF50FF25FCE9 0x15786DD1 b323
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xD90AB0, player, multiplier); } // 0xB2C1A29588A9F47C 0x8D2D89C4 b323
	static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xD90B00, player, ped); } // 0xF297383AA91DCA29 0x1C70B2EB b323
	static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0xD90BC0, player, amount, gaitType, speed, p4, p5, p6); } // 0x477D5D63E63ECA5D 0x0D77CC34 b323
	static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0xD90C50, player); } // 0x19531C47A2ABD691 0x4A701EE1 b323
	static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xD90C90, player, toggle); } // 0x9F343285A00B4BB6 0xA97C2059 b323
	static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(Player player, BOOL toggle) { invoke<Void>(0xD90CE0, player, toggle); } // 0xD2B315B6689D537D 0xA25D767E b323
	static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0xD90D30, player, value); } // 0x4E9021C1FCDD507A 0x3D26105F b323
	static BOOL IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(Player player) { return invoke<BOOL>(0xD90D90, player); } // 0x690A61A6D13583F6 0x1D371529 b323
	static void INCREASE_PLAYER_JUMP_SUPPRESSION_RANGE(Player player) { invoke<Void>(0xD90DD0, player); } // 0x9EDD76E87D5D51BA 0xE30A64DC b323
	static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0xD90E00, player, toggle); } // 0xC54C95DA968EC5B5 0xF1E0CAFC b323
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, int p1) { invoke<Void>(0xD90E40, player, p1); } // 0x749FADDF97DFE930 0xF7A0F00F b323
	static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0xD90E80, index); } // 0x9F7BBA2EA6372500 0xB8209F16 b323
	static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xD90EB0, value); } // 0x14D913B777DFF5DA 0x8D9FD4D1 b323
	static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xD90EE0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xED51733DC73AED51 0xECD12E60 b323
	static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xD90F00); } // 0x1DD5897E2FA6E7C9 0x96100EA4 b323
	static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xD90F60, player); } // 0xD705740BB0A1CF4C 0x4A01B76A b323
	static BOOL IS_PLAYER_BATTLE_AWARE(Player player) { return invoke<BOOL>(0xD90FB0, player); } // 0x38D28DA81E4E9BF9 0x013B4F72 b323
	static BOOL GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player player, int p1, BOOL p2) { return invoke<BOOL>(0xD91030, player, p1, p2); } // 0xBC0753C9CA14B506 0x9DF75B2A b323
	static void EXTEND_WORLD_BOUNDARY_FOR_PLAYER(float x, float y, float z) { invoke<Void>(0xD910A0, x, y, z); } // 0x5006D96C995A5827 0x64DDB07D b323
	static void RESET_WORLD_BOUNDARY_FOR_PLAYER() { invoke<Void>(0xD91100); } // 0xDA1DF03D5A315F4E 0xA97C2F6C b323
	static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0xD91160, player); } // 0x4EC12697209F2196 0x9765E71D b323
	static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0xD911C0, player); } // 0xD55DDFB47991A294 0xFEA40B6C b323
	static void SET_PLAYER_LEAVE_PED_BEHIND(Player player, BOOL toggle) { invoke<Void>(0xD91210, player, toggle); } // 0xFF300C7649724A0B 0xAD8383FA b323
	static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xD91260, player, p1, p2, p3, p4); } // 0xD9284A8C0D48352C 0x9254249D b323
	static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0xD912C0, player); } // 0x0F4CC924CF8C7B21 0xFD60F5AB b323
	static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xD912F0, player, model); } // 0x977DB4641F6FC3DB 0x5D382498 b323
	static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xD91330, player); } // 0x8753997EB5F6EE3F 0x6FF034BB b323
	static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xD91370, player, model); } // 0xDC80A4C2F18A2B64 0xA877FF5E b323
	static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0xD913B0, player); } // 0x10C54E4389C12B42 0xBB62AAC5 b323
	static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0xD913F0, player); } // 0xC142BE3BB9CE125F 0x8C6E611D b323
	static void SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(BOOL p0) { invoke<Void>(0xD91420, p0); } // 0x2F7CEB6520288061 0x2849D4B2 b323
	static void DISABLE_CAMERA_VIEW_MODE_CYCLE(Player player) { invoke<Void>(0xD91460, player); } // 0x5501B7A5CDB79D37 b323
}

namespace RECORDING
{
	static void REPLAY_START_EVENT(int p0) { invoke<Void>(0xD91670, p0); } // 0x48621C9FCA3EBD28 b323
	static void REPLAY_STOP_EVENT() { invoke<Void>(0xD91680); } // 0x81CBAE94390F9F89 b323
	static void REPLAY_CANCEL_EVENT() { invoke<Void>(0xD91690); } // 0x13B350B8AD0EEE10 b323
	static void REPLAY_RECORD_BACK_FOR_TIME(float p0, float p1, int p2) { invoke<Void>(0xD916A0, p0, p1, p2); } // 0x293220DA1B46CEBC b323
	static void REPLAY_CHECK_FOR_EVENT_THIS_FRAME(const char* missionNameLabel, Any p1) { invoke<Void>(0xD916B0, missionNameLabel, p1); } // 0x208784099002BC30 b323
	static void REPLAY_PREVENT_RECORDING_THIS_FRAME() { invoke<Void>(0xD916C0); } // 0xEB2D525B57F42B40 b323
	static void REPLAY_RESET_EVENT_INFO() { invoke<Void>(0xD916D0); } // 0xF854439EFBB3B583 b323
	static void REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME() { invoke<Void>(0xD916E0); } // 0xAF66DCEE6609B148 b323
	static void RECORD_GREATEST_MOMENT(int p0, int p1, int p2) { invoke<Void>(0xD916F0, p0, p1, p2); } // 0x66972397E0757E7A b323
}

namespace REPLAY
{
	static void REGISTER_EFFECT_FOR_REPLAY_EDITOR(const char* p0, BOOL p1) { invoke<Void>(0xD91780, p0, p1); } // 0x7E2BD3EF6C205F09 b323
	static BOOL REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP() { return invoke<BOOL>(0xD91790); } // 0x95AB8B5C992C7B58 b323
	static void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM() { invoke<Void>(0xD917A0); } // 0x5AD3932DAEB1E5D3 b323
}

namespace SAVEMIGRATION
{
}

namespace SCRIPT
{
	static void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0xD93920, scriptName); } // 0x6EB5F71AA68F2E8E 0xE26B2666 b323
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0xD939A0, scriptName); } // 0xC90D2DCACD56184C 0x6FCB7795 b323
	static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0xD93A00, scriptName); } // 0xE6CC9F3BA0FB9EF1 0x5D67F751 b323
	static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0xD93A50, scriptName); } // 0xFC04745FBE67C19A 0xDEAB87AB b323
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0xD93A90, scriptHash); } // 0xD62A67D26D9653E6 0x1C68D9DC b323
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xD93B70, scriptHash); } // 0xC5BC038960E9DB27 0x96C26F66 b323
	static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0xD93C30, scriptHash); } // 0x5F0F0C783EB16C04 0x06674818 b323
	static void TERMINATE_THREAD(int threadId) { invoke<Void>(0xD93CD0, threadId); } // 0xC8B189ED9138BCD4 0x253FD520 b323
	static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0xD93CE0, threadId); } // 0x46E9AE36D8FA6417 0x78D7A5A0 b323
	static const char* GET_NAME_OF_SCRIPT_WITH_THIS_ID(int threadId) { return invoke<const char*>(0xD93D20, threadId); } // 0x05A42BA9FC8DA96B 0xBE7ACD89 b323
	static void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0xD93DA0); } // 0xDADFADA5A20143A8 0xBB4E2F66 b323
	static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0xD93DB0); } // 0x30B4FA1C82DD4B9F 0x1E28B28F b323
	static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xD93DD0); } // 0xC30338E8088E2E21 0xDE524830 b323
	static void TERMINATE_THIS_THREAD() { invoke<Void>(0xD93DF0); } // 0x1090044AD1DA76FA 0x3CD9CBB7 b323
	static int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash scriptHash) { return invoke<int>(0xD93E10, scriptHash); } // 0x2C83A9DA6BFFC4F9 0x029D3841 b323
	static const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0xD93E30); } // 0x442E0A7EDE4A738A 0xA40FD5D9 b323
	static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0xD93E60); } // 0x8A1C8B1738FFE87E 0x2BEE1F45 b323
	static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0xD93E80, eventGroup); } // 0x5F92A689A06620AA 0xA3525D60 b323
	static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0xD93EC0, eventGroup, eventIndex); } // 0x936E6168A9BCEDB5 0xA1B447B5 b323
	static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0xD93EF0, eventGroup, eventIndex); } // 0xD8F66A3A60C62153 0xB49C1442 b323
	static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0xD93FD0, eventGroup, eventIndex, eventData, eventDataSize); } // 0x2902843FCD2B2D79 0x4280F92F b323
	static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0xD94000, eventGroup, eventData, eventDataSize, playerBits); } // 0x5AE99C571D5BBE5D 0x54763B35 b323
	static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xD94020); } // 0x078EBE9809CCD637 0xA2826D17 b323
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xD94030, toggle); } // 0x5262CC1995D07E09 0xC8055034 b323
	static void COMMIT_TO_LOADINGSCREEN_SELCTION() { invoke<Void>(0xD94050); } // 0xB1577667C3708F9B 0xB03BCCDF b323
	static BOOL BG_IS_EXITFLAG_SET() { return invoke<BOOL>(0xD94060); } // 0x836B62713E0534CA 0x22B9F132 b323
	static void BG_SET_EXITFLAG_RESPONSE() { invoke<Void>(0xD94090); } // 0x760910B49D2B98EA 0x5C95B670 b323
	static void BG_START_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xD940B0, contextHash); } // 0x75B18E49607874C7 0x67B23E17 b323
	static void BG_END_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xD940D0, contextHash); } // 0x107E5CC7CA942BC1 0x3D981EBF b323
	static void BG_START_CONTEXT(const char* contextName) { invoke<Void>(0xD940F0, contextName); } // 0x9D5A25BADB742ACD 0xF3F1D953 b323
	static void BG_END_CONTEXT(const char* contextName) { invoke<Void>(0xD94120, contextName); } // 0xDC2BACD920D0A0DD 0x11F38FB3 b323
	static BOOL BG_DOES_LAUNCH_PARAM_EXIST(int scriptIndex, const char* p1) { return invoke<BOOL>(0xD94150, scriptIndex, p1); } // 0x0F6F1EBBC4E1D5E6 0xF8E5F73A b323
	static int BG_GET_LAUNCH_PARAM_VALUE(int scriptIndex, const char* p1) { return invoke<int>(0xD941C0, scriptIndex, p1); } // 0x22E21FBCFC88C149 0x682CB7E1 b323
	static int BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash p0) { return invoke<int>(0xD94240, p0); } // 0x829CD22E043A2577 0xC515E735 b323
}

namespace SECURITY
{
}

namespace SHAPETEST
{
	static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xD95A70, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x7EE9F5D83DD4F90E 0xEFAF4BA6 b323
	static int START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xD95AA0, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x377906D8A31E5586 0x8251485D b323
	static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0xD95AD0, entity, flags1, flags2); } // 0x052837721A854EC7 0xCEEAD94B b323
	static int START_SHAPE_TEST_BOX(float x, float y, float z, float dimX, float dimY, float dimZ, float rotX, float rotY, float rotZ, Any p9, int flags, Entity entity, Any p12) { return invoke<int>(0xD95B00, x, y, z, dimX, dimY, dimZ, rotX, rotY, rotZ, p9, flags, entity, p12); } // 0xFE466162C4401D18 0x249BC876 b323
	static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0xD95B40, entity, flags1, flags2); } // 0x37181417CE7C8900 0x13BC46C0 b323
	static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0xD95B70, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0x28579D1B8F8AAC80 0x591EA833 b323
	static int START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0xD95BB0, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0xE6AC6C45FBE83004 0x4559460A b323
	static int GET_SHAPE_TEST_RESULT(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0xD95BF0, shapeTestHandle, hit, endCoords, surfaceNormal, entityHit); } // 0x3D87450E15D98694 0xF3C2875A b323
	static int GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0xD95CA0, shapeTestHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); } // 0x65287525D951F6BE 0x4301E10C b323
	static void RELEASE_SCRIPT_GUID_FROM_ENTITY(Entity entityHit) { invoke<Void>(0xD95D50, entityHit); } // 0x2B3334BCA57CD799 0xEC2AAF06 b323
}

namespace SOCIALCLUB
{
	static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0xD97860); } // 0x03A93FF1A2CA0864 0x6BE5DF29 b323
	static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0xD97880, msgIndex); } // 0xBB8EA16ECBC976C4 0x5ECF955D b323
	static BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xD978D0, msgIndex); } // 0x93028F1DB42BFD08 0xD1ED1D48 b323
	static BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0xD97900, msgIndex); } // 0x2C015348CF19CA1D 0x19EE0CCB b323
	static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) { return invoke<BOOL>(0xD97930, p0, context, out); } // 0xA00EFE4082C4056E 0x88068C7C b323
	static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0xD979B0, p0, context, out); } // 0x7572EF42FC6A9B6D 0x15607620 b323
	static BOOL SC_INBOX_MESSAGE_DO_APPLY(int p0) { return invoke<BOOL>(0xD979F0, p0); } // 0x9A2C8064B6C1E41A 0xEBE420A4 b323
	static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0xD97A20, p0); } // 0xF3E31D16CBDCB304 0x2C959AF9 b323
	static void SC_INBOX_MESSAGE_PUSH_GAMER_T0_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xD97A70, gamerHandle); } // 0xDA024BDBD600F44A 0x0B9A3512 b323
	static void SC_INBOX_SEND_UGCSTATUPDATE_TO_RECIP_LIST(Any* data) { invoke<Void>(0xD97B20, data); } // 0xA68D3D229F4F3B06 0x75324674 b323
	static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(int p0, Any* p1) { return invoke<BOOL>(0xD97B60, p0, p1); } // 0x69D82604A1A5A254 0x88CA3BFC b323
	static BOOL SC_INBOX_SEND_BOUNTY_TO_RECIP_LIST(Any* data) { return invoke<BOOL>(0xD97B90, data); } // 0x6AFD2CD753FEEF83 0x628F489B b323
	static BOOL SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(int index, Any* outData) { return invoke<BOOL>(0xD97BE0, index, outData); } // 0x87E0052F08BD64E6 0xAB3346B5 b323
	static void SC_EMAIL_RETRIEVE_EMAILS(int offset, int limit) { invoke<Void>(0xD97C10, offset, limit); } // 0x040ADDCBAFA1018A b323
	static int SC_EMAIL_GET_RETRIEVAL_STATUS() { return invoke<int>(0xD97C50); } // 0x16DA8172459434AA b323
	static BOOL SC_EMAIL_GET_EMAIL_AT_INDEX(int p0, Any* p1) { return invoke<BOOL>(0xD97C80, p0, p1); } // 0x4737980E8A283806 b323
	static void SC_EMAIL_DELETE_EMAILS(Any* p0, Any p1) { invoke<Void>(0xD97CD0, p0, p1); } // 0x44ACA259D67651DB b323
	static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xD97D20, gamerHandle); } // 0x2330C12A7A605D16 0x9A703A2B b323
	static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0xD97DD0); } // 0x55DF6DB45179236E 0xD094F11A b323
	static void SC_EMAIL_SEND_EMAIL(const char* p0) { invoke<Void>(0xD97DE0, p0); } // 0x116FB94DC4B79F17 0xAF3C081B b323
	static void SC_CACHE_NEW_ROCKSTAR_MSGS(BOOL toggle) { invoke<Void>(0xD97E40, toggle); } // 0xBFA0A56A817C6C7D 0x2FB9F53C b323
	static BOOL SC_HAS_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0xD97E60); } // 0xBC1CC91205EC8D6E 0x6C5738AB b323
	static const char* SC_GET_NEW_ROCKSTAR_MSG() { return invoke<const char*>(0xD97E70); } // 0xDF649C4E9AFDD788 0x468668F0 b323
	static BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0xD97EA0, attrHash, value); } // 0x1F1E9682483697C7 0x90C74343 b323
	static BOOL SC_PRESENCE_ATTR_SET_FLOAT(Hash attrHash, float value) { return invoke<BOOL>(0xD97ED0, attrHash, value); } // 0xC4C4575F62534A24 0x94BF0D35 b323
	static BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0xD97F10, attrHash, value); } // 0x287F1F75D2803595 0x3ACE6D6B b323
	static BOOL SC_PRESENCE_SET_ACTIVITY_RATING(Any p0, float p1) { return invoke<BOOL>(0xD98010, p0, p1); } // 0x487912FD248EFDDF 0x579B4510 b323
	static BOOL SC_GAMERDATA_GET_INT(const char* name, int* value) { return invoke<BOOL>(0xD98050, name, value); } // 0xC85A7127E7AD02AA 0xF8BDA989 b323
	static BOOL SC_GAMERDATA_GET_FLOAT(const char* name, float* value) { return invoke<BOOL>(0xD98090, name, value); } // 0xA770C8EEC6FB2AC5 0x515AF67C b323
	static BOOL SC_GAMERDATA_GET_BOOL(const char* name) { return invoke<BOOL>(0xD980D0, name); } // 0x8416FE4E4629D7D7 0xDF45B2A7 b323
	static BOOL SC_GAMERDATA_GET_STRING(const char* name, char* value) { return invoke<BOOL>(0xD98140, name, value); } // 0x7FFCBFEE44ECFABF 0x2AE35169 b323
	static BOOL SC_GAMERDATA_GET_ACTIVE_XP_BONUS(float* value) { return invoke<BOOL>(0xD98180, value); } // 0x2D874D4AE612A65F b323
	static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0xD981B0, string, token); } // 0x75632C5ECD7ED843 0xDF084A6B b323
	static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0xD981F0, token); } // 0x1753344C770358AE 0xFFED3676 b323
	static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0xD98250, token); } // 0x82E4A58BABC15AE7 0xA796D7A7 b323
	static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0xD982B0, token); } // 0x85535ACF97FC0969 0x09497F31 b323
	static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0xD98310, token); } // 0x930DE22F07B1CCE3 0x4D8A6521 b323
	static BOOL SC_LICENSEPLATE_CHECK_STRING(const char* p0, int* p1) { return invoke<BOOL>(0xD98360, p0, p1); } // 0xF6BAAAF762E1BF40 0x7AA36406 b323
	static BOOL SC_LICENSEPLATE_GET_CHECK_IS_VALID(Any p0) { return invoke<BOOL>(0xD983A0, p0); } // 0xF22CA0FD74B80E7A 0xF379DCE4 b323
	static BOOL SC_LICENSEPLATE_GET_CHECK_IS_PENDING(Any p0) { return invoke<BOOL>(0xD98400, p0); } // 0x9237E334F6E43156 0x65D84665 b323
	static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke<BOOL>(0xD984C0); } // 0xFF8F3A92B75ED67A 0xC96456BA b323
	static int SC_COMMUNITY_EVENT_GET_EVENT_ID() { return invoke<int>(0xD984F0); } // 0x4ED9C8D6DA297639 0xC5E08B66 b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(const char* p0, int* p1) { return invoke<BOOL>(0xD98520, p0, p1); } // 0x710BCDA8071EDED1 0x04EE74A3 b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(const char* p0, float* p1) { return invoke<BOOL>(0xD98560, p0, p1); } // 0x50A8A36201DBF83E 0x8DA93C3D b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(const char* p0, char* p1) { return invoke<BOOL>(0xD985A0, p0, p1); } // 0x9DE5D2F723575ED0 0x37DD48B5 b323
	static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(char* p0) { return invoke<BOOL>(0xD985F0, p0); } // 0xC2C97EA97711D1AE 0xF929F61D b323
	static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(const char* p0) { return invoke<BOOL>(0xD98630, p0); } // 0x450819D8CF90C416 0x0572EB5E b323
	static int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* p0) { return invoke<int>(0xD98660, p0); } // 0x4A7D6E727F941747 0x8E7AEEB7 b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(const char* p0, int* p1, const char* p2) { return invoke<BOOL>(0xD98690, p0, p1, p2); } // 0xE75A4A2E5E316D86 0x28C57FA0 b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(const char* p0, float* p1, const char* p2) { return invoke<BOOL>(0xD986E0, p0, p1, p2); } // 0x2570E26BE63964E3 0x59394583 b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(const char* p0, char* p1, const char* p2) { return invoke<BOOL>(0xD98730, p0, p1, p2); } // 0x1D12A56FC95BE92E 0x92452C0E b323
	static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(char* p0, const char* p1) { return invoke<BOOL>(0xD98780, p0, p1); } // 0x33DF47CC0642061B 0xBBA8D34D b323
	static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(int p0) { return invoke<BOOL>(0xD987D0, p0); } // 0xA468E0BE12B12C70 0xB21288FA b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(int p0, const char* p1, int* p2) { return invoke<BOOL>(0xD98800, p0, p1, p2); } // 0x8CC469AB4D349B7C 0xE778B2A7 b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(int p0, const char* p1, float* p2) { return invoke<BOOL>(0xD98850, p0, p1, p2); } // 0xC5A35C73B68F3C49 0x7E24BD6E b323
	static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(int p0, const char* p1, char* p2) { return invoke<BOOL>(0xD988A0, p0, p1, p2); } // 0x699E4A5C8C893A18 0xCE7D50A8 b323
	static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(int p0, char* p1) { return invoke<BOOL>(0xD988F0, p0, p1); } // 0x19853B5B17D77BCA 0xD26CCA46 b323
	static BOOL SC_TRANSITION_NEWS_SHOW(Any p0) { return invoke<BOOL>(0xD98940, p0); } // 0x6BFB12CE158E3DD4 0x24D84334 b323
	static BOOL SC_TRANSITION_NEWS_SHOW_TIMED(Any p0, Any p1) { return invoke<BOOL>(0xD98990, p0, p1); } // 0xFE4C1D0D3B9CC17E 0x8A023024 b323
	static BOOL SC_TRANSITION_NEWS_SHOW_NEXT_ITEM() { return invoke<BOOL>(0xD989E0); } // 0xD8122C407663B995 0x1C65B038 b323
	static BOOL SC_TRANSITION_NEWS_HAS_EXTRA_DATA_TU() { return invoke<BOOL>(0xD98A10); } // 0x3001BEF2FECA3680 0x4D4C37B3 b323
	static BOOL SC_TRANSITION_NEWS_GET_EXTRA_DATA_INT_TU(const char* p0, int* p1) { return invoke<BOOL>(0xD98A40, p0, p1); } // 0x92DA6E70EF249BD1 0xAED95A6F b323
	static void SC_TRANSITION_NEWS_END() { invoke<Void>(0xD98A80); } // 0x675721C9F644D161 0x486867E6 b323
	static const char* SC_ACCOUNT_INFO_GET_NICKNAME() { return invoke<const char*>(0xD98AA0); } // 0x198D161F458ECC7F b323
	static BOOL SC_ACHIEVEMENT_INFO_STATUS(int* p0) { return invoke<BOOL>(0xD98AC0, p0); } // 0x225798743970412B b323
	static BOOL SC_HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xD98B70, achievementId); } // 0x418DC16FAE452C1C b323
}

namespace STATS
{
	static BOOL STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<BOOL>(0xDA2E40, statSlot); } // 0xEB0A72181D4AA4AD 0x84BDD475 b323
	static BOOL STAT_LOAD(int statSlot) { return invoke<BOOL>(0xDA2EF0, statSlot); } // 0xA651443F437B1CE6 0x9E5629F4 b323
	static BOOL STAT_SAVE(int p0, BOOL p1, int p2, BOOL p3) { return invoke<BOOL>(0xDA2F20, p0, p1, p2, p3); } // 0xE07BCA305B82D2FD 0xE10A7CA4 b323
	static void STAT_SET_OPEN_SAVETYPE_IN_JOB(int p0) { invoke<Void>(0xDA2F50, p0); } // 0x5688585E6D563CD8 0xC62406A6 b323
	static BOOL STAT_LOAD_PENDING(int statSlot) { return invoke<BOOL>(0xDA2F80, statSlot); } // 0xA1750FFAFA181661 0x4E9AC983 b323
	static BOOL STAT_SAVE_PENDING() { return invoke<BOOL>(0xDA2FB0); } // 0x7D3A583856F2C5AC 0xC3FD3822 b323
	static BOOL STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<BOOL>(0xDA2FD0); } // 0xBBB6AD006F1BBEA3 0xA3407CA3 b323
	static BOOL STAT_DELETE_SLOT(int p0) { return invoke<BOOL>(0xDA3010, p0); } // 0x49A49BED12794D70 0x2F171B94 b323
	static BOOL STAT_SLOT_IS_LOADED(int statSlot) { return invoke<BOOL>(0xDA3090, statSlot); } // 0x0D0A9F0E7BD91E3C 0x7A299C13 b323
	static BOOL STAT_CLOUD_SLOT_LOAD_FAILED(int p0) { return invoke<BOOL>(0xDA30C0, p0); } // 0x7F2C4CDF2E82DF4C 0x0BF0F4B2 b323
	static int STAT_CLOUD_SLOT_LOAD_FAILED_CODE(Any p0) { return invoke<int>(0xDA30F0, p0); } // 0xE496A53BA5F50A56 0xCE6B62B5 b323
	static void STAT_SET_BLOCK_SAVES(BOOL toggle) { invoke<Void>(0xDA3140, toggle); } // 0xF434A10BA01C37D0 0xCE7A2411 b323
	static BOOL STAT_CLOUD_SLOT_SAVE_FAILED(Any p0) { return invoke<BOOL>(0xDA3160, p0); } // 0x7E6946F68A38B74F 0x22804C20 b323
	static void STAT_CLEAR_PENDING_SAVES(Any p0) { invoke<Void>(0xDA31E0, p0); } // 0xA8733668D1047B51 0x395D18B1 b323
	static BOOL STAT_LOAD_DIRTY_READ_DETECTED() { return invoke<BOOL>(0xDA3220); } // 0xECB41AC6AB754401 0xED7000C8 b323
	static void STAT_CLEAR_DIRTY_READ_DETECTED() { invoke<Void>(0xDA3250); } // 0x9B4BD21D69B1E609 b323
	static BOOL STAT_GET_LOAD_SAFE_TO_PROGRESS_TO_MP_FROM_SP() { return invoke<BOOL>(0xDA3280); } // 0xC0E0D686DDFC6EAE 0x099FCC86 b323
	static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0xDA32A0, statName, value, save); } // 0xB3271D7AB655B441 0xC9CC1C5C b323
	static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0xDA32D0, statName, value, save); } // 0x4851997F37FE9B3C 0x6CEA96F2 b323
	static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0xDA3310, statName, value, save); } // 0x4B33C4243DE0C432 0x55D79DFB b323
	static BOOL STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xDA3350, statName, value, save); } // 0x17695002FD8B2AE0 0xC1224AA7 b323
	static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0xDA3390, statName, value, numFields, save); } // 0x2C29BFB64F4FCBE4 0x36BE807B b323
	static BOOL STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xDA33D0, statName, value, save); } // 0xA87B2335D12531D7 0xB1EF2E21 b323
	static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xDA3410, statName, x, y, z, save); } // 0xDB283FDE680FE72E 0x1192C9A3 b323
	static BOOL STAT_SET_MASKED_INT(Hash statName, int p1, int p2, int p3, BOOL save) { return invoke<BOOL>(0xDA3450, statName, p1, p2, p3, save); } // 0x7BBB1B54583ED410 0x2CBAA739 b323
	static BOOL STAT_SET_USER_ID(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xDA3490, statName, value, save); } // 0x8CDDF1E452BABE11 0xDBE78ED7 b323
	static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0xDA34D0, statName, p1); } // 0xC2F84B7F9C4D0C61 0xA286F015 b323
	static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0xDA3500, statHash, outValue, p2); } // 0x767FBC2AC802EF3D 0x1C6FE43E b323
	static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xDA35E0, statHash, outValue, p2); } // 0xD7AE6C9C9C6AC54C 0xFCBDA612 b323
	static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xDA3610, statHash, outValue, p2); } // 0x11B5E6D2AE73F48E 0x28A3DD2B b323
	static BOOL STAT_GET_DATE(Hash statHash, Any* outValue, int numFields, Any p3) { return invoke<BOOL>(0xDA3640, statHash, outValue, numFields, p3); } // 0x8B0FACEFC36C824B 0xD762D16C b323
	static const char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<const char*>(0xDA3670, statHash, p1); } // 0xE50384ACC2C3DB74 0x10CE4BDE b323
	static BOOL STAT_GET_POS(Hash statName, float* outX, float* outY, float* outZ, Any p4) { return invoke<BOOL>(0xDA36A0, statName, outX, outY, outZ, p4); } // 0x350F82CCB186AA1B 0xC846ECCE b323
	static BOOL STAT_GET_MASKED_INT(Hash statHash, int* outValue, int p2, int p3, Any p4) { return invoke<BOOL>(0xDA36E0, statHash, outValue, p2, p3, p4); } // 0x655185A06D9EEAAB 0xE9D9B70F b323
	static const char* STAT_GET_USER_ID(Hash statHash) { return invoke<const char*>(0xDA37B0, statHash); } // 0x2365C388E393BBE2 0xE2E8B6BA b323
	static const char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<const char*>(0xDA3800, statName); } // 0x5473D4195058B2E4 0x1544B29F b323
	static BOOL STAT_SET_LICENSE_PLATE(Hash statName, const char* str) { return invoke<BOOL>(0xDA3830, statName, str); } // 0x69FF13266D7296DA 0x3507D253 b323
	static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0xDA3860, statName, value); } // 0x9B5A68C6489E9909 0xDFC5F71E b323
	static BOOL STAT_COMMUNITY_START_SYNCH() { return invoke<BOOL>(0xDA38D0); } // 0x5A556B229A169402 0x46F21343 b323
	static BOOL STAT_COMMUNITY_SYNCH_IS_PENDING() { return invoke<BOOL>(0xDA3920); } // 0xB1D2BB1E1631F5B1 0x02F283CE b323
	static BOOL STAT_COMMUNITY_GET_HISTORY(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0xDA3960, statName, p1, outValue); } // 0xBED9F5693F34ED17 0xC4110917 b323
	static void STAT_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xDA39E0, p0); } // 0x26D7399B9587FE89 0x343B27E2 b323
	static void STAT_LOCAL_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xDA3A40, p0); } // 0xA78B8FA58200DA56 0xE3247582 b323
	static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0xDA3AA0, statName); } // 0xE0E854F5280FB769 0xFD66A429 b323
	static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0xDA3AC0, statName); } // 0xF2D4B2FE415AAFC3 0x9B431236 b323
	static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0xDA3AE0, statName); } // 0x7583B4BE4C5A41B5 0x347B4436 b323
	static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0xDA3B00, statName); } // 0x2CE056FF3723F00B 0x2C1D6C31 b323
	static void STAT_SET_PROFILE_SETTING_VALUE(int profileSetting, int value) { invoke<Void>(0xDA3B20, profileSetting, value); } // 0x68F01422BE1D838F 0x24DD4929 b323
	static int PACKED_STAT_GET_INT_STAT_INDEX(int p0) { return invoke<int>(0xDA3BC0, p0); } // 0x94F12ABF9C79E339 0xCA160BCC b323
	static Hash GET_PACKED_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xDA3CC0, index, spStat, charStat, character); } // 0x61E111E323419E07 0x1F938864 b323
	static Hash GET_PACKED_TU_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xDA3E60, index, spStat, charStat, character); } // 0xD16C2AD6B8E32854 0xFB93C5A2 b323
	static void PLAYSTATS_BACKGROUND_SCRIPT_ACTION(const char* action, int value) { invoke<Void>(0xDA4040, action, value); } // 0x5009DFD741329729 0x61ECC465 b323
	static void PLAYSTATS_NPC_INVITE(const char* p0) { invoke<Void>(0xDA4120, p0); } // 0x93054C88E6AA7C44 0x598C06F3 b323
	static void PLAYSTATS_AWARD_XP(int amount, Hash type, Hash category) { invoke<Void>(0xDA4130, amount, type, category); } // 0x46F917F6B4128FE4 0x8770017B b323
	static void PLAYSTATS_RANK_UP(int rank) { invoke<Void>(0xDA4150, rank); } // 0xC7F2DE41D102BFB4 0x56AFB9F5 b323
	static void PLAYSTATS_STARTED_SESSION_IN_OFFLINEMODE() { invoke<Void>(0xDA4160); } // 0x098760C7461724CD 0x896CDF8D b323
	static void PLAYSTATS_ACTIVITY_DONE(int p0, int activityId) { invoke<Void>(0xDA41F0, p0, activityId); } // 0xA071E0ED98F91286 0x1A66945F b323
	static void PLAYSTATS_LEAVE_JOB_CHAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDA4290, p0, p1, p2, p3, p4); } // 0xC5BE134EC7BA96A0 0xC960E161 b323
	static void PLAYSTATS_MISSION_STARTED(const char* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xDA4350, p0, p1, p2, p3); } // 0xC19A2925C34D2231 0x3AAB699C b323
	static void PLAYSTATS_MISSION_OVER(const char* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xDA43E0, p0, p1, p2, p3, p4, p5); } // 0x7C4BB33A8CED7324 0x5B90B5FF b323
	static void PLAYSTATS_MISSION_CHECKPOINT(const char* p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDA4480, p0, p1, p2, p3); } // 0xC900596A63978C1D 0xCDC52280 b323
	static void PLAYSTATS_RANDOM_MISSION_DONE(const char* name, Any p1, Any p2, Any p3) { invoke<Void>(0xDA44B0, name, p1, p2, p3); } // 0x71862B1D855F32E1 0xAC2C7C63 b323
	static void PLAYSTATS_ROS_BET(int amount, int act, Player player, float cm) { invoke<Void>(0xDA44E0, amount, act, player, cm); } // 0x121FB4DDDC2D5291 0x413539BC b323
	static void PLAYSTATS_RACE_CHECKPOINT(Vehicle p0, Any p1, int p2, int p3, Any p4) { invoke<Void>(0xDA4590, p0, p1, p2, p3, p4); } // 0x9C375C315099DDE4 0x580D5508 b323
	static BOOL PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(int* playerAccountId, int* posixTime) { return invoke<BOOL>(0xDA45C0, playerAccountId, posixTime); } // 0x6DEE77AFF8C21BD1 0x489E27E7 b323
	static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2) { invoke<Void>(0xDA45F0, p0, p1, p2); } // 0xBC80E22DED931E3D 0x2BDE85C1 b323
	static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDA4660, p0, p1, p2, p3, p4); } // 0x176852ACAAC173D1 0xA4746384 b323
	static void PLAYSTATS_CRATE_DROP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xDA4690, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1CAE5D2E3F9A07F0 0x6602CED6 b323
	static void PLAYSTATS_HOLD_UP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDA46C0, p0, p1, p2, p3); } // 0xCB00196B31C39EB1 0x759E0EC9 b323
	static void PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDA46F0, p0, p1, p2, p3); } // 0x2B69F5074C894811 0x62073DF7 b323
	static void PLAYSTATS_RACE_TO_POINT_MISSION_DONE(int p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDA4790, p0, p1, p2, p3); } // 0xADDD1C754E2E2914 0x06CE3692 b323
	static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(Any p0) { invoke<Void>(0xDA4830, p0); } // 0x79AB33F0FBFAC40C 0x8D5C7B37 b323
	static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0xDA4840, scaleformHash, p1); } // 0xDDF24D535060F811 0x37D152BB b323
	static void PLAYSTATS_FRIEND_ACTIVITY(int p0, BOOL p1) { invoke<Void>(0xDA4850, p0, p1); } // 0x0F71DE29AB2258F1 0xD1FA1BDB b323
	static void PLAYSTATS_ODDJOB_DONE(int totalTimeMs, int p1, BOOL p2) { invoke<Void>(0xDA4860, totalTimeMs, p1, p2); } // 0x69DEA3E9DB727B4C 0xFE14A8EA b323
	static void PLAYSTATS_PROP_CHANGE(Ped p0, int p1, int p2, int p3) { invoke<Void>(0xDA4870, p0, p1, p2, p3); } // 0xBA739D6D5A05D6E7 0x25740A1D b323
	static void PLAYSTATS_CLOTH_CHANGE(Ped p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDA4900, p0, p1, p2, p3, p4); } // 0x34B973047A2268B9 0x3AFF9E58 b323
	static void PLAYSTATS_WEAPON_MODE_CHANGE(Hash weaponHash, Hash componentHashTo, Hash componentHashFrom) { invoke<Void>(0xDA4990, weaponHash, componentHashTo, componentHashFrom); } // 0xE95C8A1875A02CA4 0x79716890 b323
	static void PLAYSTATS_CHEAT_APPLIED(const char* cheat) { invoke<Void>(0xDA4A50, cheat); } // 0x6058665D72302D3F 0x345166F3 b323
	static void PLAYSTATS_JOB_ACTIVITY_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xDA4A70, p0, p1, p2, p3); } // 0xF8C54A461C3E11DC 0x04181752 b323
	static void PLAYSTATS_JOB_LTS_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xDA4A90, p0, p1, p2, p3); } // 0xA736CF7FB7C5BFF4 0x31002201 b323
	static void PLAYSTATS_JOB_LTS_ROUND_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xDA4AB0, p0, p1, p2, p3); } // 0x14E0B2D1AD1044E0 0xDDD1F1F3 b323
	static void PLAYSTATS_QUICKFIX_TOOL(int element, const char* item) { invoke<Void>(0xDA4AD0, element, item); } // 0x90D0622866E80445 0x66FEB701 b323
	static void PLAYSTATS_IDLE_KICK(int msStoodIdle) { invoke<Void>(0xDA4B70, msStoodIdle); } // 0x5DA3A8DE8CB6226F 0x9E2B9522 b323
	static int LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, Any p1) { return invoke<int>(0xDA4BF0, p0, p1); } // 0x117B45156D7EFF2E 0x0A56EE34 b323
	static int LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0xDA4C30, p0, p1, p2); } // 0xC4B5467A1886EA7E 0x3821A334 b323
	static int LEADERBOARDS_GET_COLUMN_TYPE(int p0, Any p1, Any p2) { return invoke<int>(0xDA4C80, p0, p1, p2); } // 0xBF4FEF46DB7894D3 0x6F2820F4 b323
	static int LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0xDA4CF0); } // 0xA34CB6E6F0DF4A0B 0x233E058A b323
	static int LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<int>(0xDA4D30, p0, p1, p2); } // 0x7CCE5C737A665701 0x7090012F b323
	static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xDA4DA0, p0, p1, p2); } // 0xAC392C8483342AC2 0xEEB8BF5C b323
	static BOOL LEADERBOARDS_READ_ANY_PENDING() { return invoke<BOOL>(0xDA4DD0); } // 0xA31FD15197B192BD 0x1789437B b323
	static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xDA4E20, p0, p1, p2); } // 0x2FB19228983E832C 0x3AC5B2F1 b323
	static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xDA4EA0, p0, p1, p2, p3, p4, p5); } // 0x918B101666F9CB83 0xBD91B136 b323
	static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xDA4EE0, p0, p1); } // 0xC30713A383BFBF0E 0x6B553408 b323
	static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0xDA4F10, p0, p1, p2, p3, p4, p5, p6); } // 0xA9CDB1E3F0A49883 0xCA931F34 b323
	static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xDA4F50, p0, p1, p2); } // 0xBA2C7DB0C129449A 0x1B03F59F b323
	static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xDA4F80, p0, p1, p2); } // 0x5CE587FB5A42C8C4 0xC5B7E685 b323
	static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xDA4FB0, p0, p1, p2); } // 0x7EEC7E4F6984A16A 0xAC020C18 b323
	static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0xDA4FE0, p0, p1, p2); } // 0xE662C8B759D08F3C 0xC678B29F b323
	static BOOL LEADERBOARDS2_READ_RANK_PREDICTION(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xDA5010, p0, p1, p2); } // 0xC38DC1E90D22547C 0x9BEC3401 b323
	static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_START(Any* p0) { return invoke<BOOL>(0xDA5040, p0); } // 0xA0F93D5465B3094D 0xC977D6E2 b323
	static void LEADERBOARDS2_READ_GET_ROW_DATA_END() { invoke<Void>(0xDA5070); } // 0x71B008056E5692D6 0xF2DB6A82 b323
	static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_INFO(Any p0, Any* p1) { return invoke<BOOL>(0xDA50A0, p0, p1); } // 0x34770B9CE0E03B91 0x766A74FE b323
	static int LEADERBOARDS2_READ_GET_ROW_DATA_INT(Any p0, Any p1) { return invoke<int>(0xDA51E0, p0, p1); } // 0x88578F6EC36B4A3A 0x6B90E730 b323
	static float LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(Any p0, Any p1) { return invoke<float>(0xDA5210, p0, p1); } // 0x38491439B6BA7F7D 0x509A286F b323
	static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0xDA5240, p0); } // 0xAE2206545888AE49 0x5F9DF634 b323
	static void LEADERBOARDS_WRITE_ADD_COLUMN(Any p0, Any p1, float p2) { invoke<Void>(0xDA5270, p0, p1, p2); } // 0x0BCA1D2C47B0D269 0x7524E27B b323
	static void LEADERBOARDS_WRITE_ADD_COLUMN_LONG(Any p0, Any p1, Any p2) { invoke<Void>(0xDA5290, p0, p1, p2); } // 0x2E65248609523599 0x1C5CCC3A b323
	static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0xDA52B0, p0); } // 0xB9BB18E2C40142ED 0x44F7D82B b323
	static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0xDA52E0); } // 0xD4B02A6B476E1FDC 0x87F498C1 b323
	static void LEADERBOARDS_CLEAR_CACHE_DATA_ID(Any p0) { invoke<Void>(0xDA5300, p0); } // 0x8EC74CEB042E7CFF 0x88AE9667 b323
	static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0xDA5320, p0); } // 0x9C51349BE6CDFE2C 0xFC8A71F3 b323
	static int LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<int>(0xDA5380, p0); } // 0xF04C1C27DA35F6C8 0xEDF02302 b323
	static int LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Any p0) { return invoke<int>(0xDA53E0, p0); } // 0x58A651CD201D89AD 0xCE7CB520 b323
	static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xDA5420, p0, p1, p2); } // 0x9120E8DBA3D69273 0xA11289EC b323
	static void PRESENCE_EVENT_UPDATESTAT_INT(Hash statHash, int value, int p2) { invoke<Void>(0xDA5450, statHash, value, p2); } // 0x11FF1C80276097ED 0x4AC39C6C b323
	static void PRESENCE_EVENT_UPDATESTAT_FLOAT(Hash statHash, float value, int p2) { invoke<Void>(0xDA5470, statHash, value, p2); } // 0x30A6614C1F7799B8 0x3E69E7C3 b323
	static void PRESENCE_EVENT_UPDATESTAT_INT_WITH_STRING(Hash statHash, int value, int p2, const char* string) { invoke<Void>(0xDA5490, statHash, value, p2, string); } // 0x6483C25849031C4F 0x2FFD2FA5 b323
	static BOOL GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES() { return invoke<BOOL>(0xDA54D0); } // 0x5EAD2BF6484852E4 0x23D70C39 b323
	static void SET_HAS_POSTED_ALL_VEHICLES_DRIVEN() { invoke<Void>(0xDA5500); } // 0xC141B8917E0017EC 0x0AD43306 b323
	static void SET_PROFILE_SETTING_PROLOGUE_COMPLETE() { invoke<Void>(0xDA5550); } // 0xB475F27C6A994D65 0xC7DE5C30 b323
	static void SET_PROFILE_SETTING_CREATOR_RACES_DONE(int value) { invoke<Void>(0xDA55A0, value); } // 0xF1A1803D3476F215 0xA3DAC790 b323
	static void SET_PROFILE_SETTING_CREATOR_DM_DONE(int value) { invoke<Void>(0xDA5600, value); } // 0x38BAAA5DD4C9D19F 0x726FAE66 b323
	static void SET_PROFILE_SETTING_CREATOR_CTF_DONE(int value) { invoke<Void>(0xDA5660, value); } // 0x55384438FC55AD8E 0xF03895A4 b323
	static void SET_JOB_ACTIVITY_ID_STARTED(Any p0, int characterSlot) { invoke<Void>(0xDA56C0, p0, characterSlot); } // 0x723C1CE13FBFDB67 0x4C39CF10 b323
	static void SET_FREEMODE_PROLOGUE_DONE(Any p0, int characterSlot) { invoke<Void>(0xDA56D0, p0, characterSlot); } // 0x0D01D20616FC73FB 0x2180AE13 b323
	static void STAT_NETWORK_INCREMENT_ON_SUICIDE(Any p0, float p1) { invoke<Void>(0xDA56E0, p0, p1); } // 0x428EAF89E24F6C36 0xEE292B91 b323
	static void STAT_SET_CHEAT_IS_ACTIVE() { invoke<Void>(0xDA5760); } // 0x047CBED6F6F8B63C 0xA063CABD b323
	static BOOL LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(Any* p0, Any* p1) { return invoke<BOOL>(0xDA5780, p0, p1); } // 0xC980E62E33DF1D5C 0x62C19A3D b323
	static void FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE() { invoke<Void>(0xDA57B0); } // 0x6F361B8889A792A3 0x3B4EF322 b323
	static void STAT_MIGRATE_CLEAR_FOR_RESTART() { invoke<Void>(0xDA5810); } // 0xC847B43F369AC0B5 b323
	static BOOL STAT_MIGRATE_SAVEGAME_START(const char* platformName) { return invoke<BOOL>(0xDA5830, platformName); } // 0xA5C80D8E768A9E66 b323
	static int STAT_MIGRATE_SAVEGAME_GET_STATUS() { return invoke<int>(0xDA5860); } // 0x9A62EC95AE10E011 b323
	static BOOL STAT_MIGRATE_CHECK_ALREADY_DONE() { return invoke<BOOL>(0xDA5900); } // 0x4C89FE2BDEB3F169 b323
	static BOOL STAT_MIGRATE_CHECK_START() { return invoke<BOOL>(0xDA5920); } // 0xC6E0E2616A7576BB b323
	static int STAT_MIGRATE_CHECK_GET_IS_PLATFORM_AVAILABLE(int p0) { return invoke<int>(0xDA59B0, p0); } // 0x5BD5F255321C4AAF b323
	static int STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(int p0, Any* p1) { return invoke<int>(0xDA59D0, p0, p1); } // 0xDEAAF77EB3687E97 b323
	static int STAT_GET_SAVE_MIGRATION_STATUS(Any* data) { return invoke<int>(0xDA5AE0, data); } // 0x886913BBEACA68C1 0xE3F0D62D b323
	static void STAT_ENABLE_STATS_TRACKING() { invoke<Void>(0xDA5BB0); } // 0x98E2BC1CA26287C3 b323
	static void STAT_DISABLE_STATS_TRACKING() { invoke<Void>(0xDA5BC0); } // 0x629526ABA383BCAA b323
}

namespace STREAMING
{
	static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0xDA8B40); } // 0xBD6E84632DD4CB3F 0xC9DBDA90 b323
	static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0xDA8B60, x, y, z); } // 0x4448EB75B4904BDB 0xB72403F5 b323
	static BOOL NETWORK_UPDATE_LOAD_SCENE() { return invoke<BOOL>(0xDA8BE0); } // 0xC4582015556D1C46 0xC76E023C b323
	static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0xDA8C20); } // 0x41CA5A33160EA4AB 0x6DCFC021 b323
	static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0xDA8C40, interiorID, toggle); } // 0xE37B76C387BE28ED 0xE1013910 b323
	static void REQUEST_MODEL(Hash model) { invoke<Void>(0xDA8C60, model); } // 0x963D27A58DF860AC 0xFFF1B500 b323
	static void REQUEST_MENU_PED_MODEL(Hash model) { invoke<Void>(0xDA8C70, model); } // 0xA0261AEF7ACFC51E 0x48CEB6B4 b323
	static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xDA8C90, model); } // 0x98A4EB5D89A0C952 0x62BFDB37 b323
	static void REQUEST_MODELS_IN_ROOM(Interior interior, const char* roomName) { invoke<Void>(0xDA8D60, interior, roomName); } // 0x8A7A40100EDFEC58 0x939243FB b323
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0xDA8DD0, model); } // 0xE532F5D78798DAAB 0xAE0F069E b323
	static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0xDA8E40, model); } // 0x35B9E0803292B641 0x1094782F b323
	static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0xDA8EB0, model); } // 0xC0296A2EDF545E92 0xAF8F8E9D b323
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0xDA8F20, model); } // 0x19AAC8F07BFEC53E 0xFFFC85D4 b323
	static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xDA8F90, x, y, z); } // 0x07503F7948F491A7 0xCD9805E7 b323
	static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0xDA8FD0, model); } // 0x923CB32A3B874FCB 0x3930C042 b323
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xDA8FE0, model); } // 0x22CCA434E368F03A 0x41A094F8 b323
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xDA9080, x, y, z); } // 0xC9156DC11411A9EA 0xC2CC1DF2 b323
	static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0xDA90C0, animDict); } // 0x2DA49C3B79856961 0xCD31C872 b323
	static void REQUEST_ANIM_DICT(const char* animDict) { invoke<Void>(0xDA9120, animDict); } // 0xD3BD40951412FEF6 0xDCA96950 b323
	static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0xDA9130, animDict); } // 0xD031A9162D01088C 0x05E6763C b323
	static void REMOVE_ANIM_DICT(const char* animDict) { invoke<Void>(0xDA91B0, animDict); } // 0xF66A602F829E2A06 0x0AE050B5 b323
	static void REQUEST_ANIM_SET(const char* animSet) { invoke<Void>(0xDA9230, animSet); } // 0x6EA47DAE7FAD0EED 0x2988B3FC b323
	static BOOL HAS_ANIM_SET_LOADED(const char* animSet) { return invoke<BOOL>(0xDA9240, animSet); } // 0xC4EA073D86FB29B0 0x4FFF397D b323
	static void REMOVE_ANIM_SET(const char* animSet) { invoke<Void>(0xDA92B0, animSet); } // 0x16350528F93024B3 0xD04A817A b323
	static void REQUEST_CLIP_SET(const char* clipSet) { invoke<Void>(0xDA9330, clipSet); } // 0xD2A71E1A77418A49 0x546C627A b323
	static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0xDA9340, clipSet); } // 0x318234F4F3738AF3 0x230D5455 b323
	static void REMOVE_CLIP_SET(const char* clipSet) { invoke<Void>(0xDA93B0, clipSet); } // 0x01F73A131C18CD94 0x1E21F7AA b323
	static void REQUEST_IPL(const char* iplName) { invoke<Void>(0xDA9430, iplName); } // 0x41B4893843BBDB74 0x3B70D1DB b323
	static void REMOVE_IPL(const char* iplName) { invoke<Void>(0xDA9490, iplName); } // 0xEE6C5AD3ECE0A82D 0xDF7CBD36 b323
	static BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0xDA94A0, iplName); } // 0x88A741E44A2B3495 0xB2C33714 b323
	static void SET_STREAMING(BOOL toggle) { invoke<Void>(0xDA94F0, toggle); } // 0x6E0C692677008888 0x27EF6CB2 b323
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0xDA9510, toggle); } // 0x717CD6E6FAEBBEDC 0x9211A28A b323
	static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xDA9530, toggle); } // 0x77B5F9A36BF96710 0xAFCB2B86 b323
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xDA9550, toggle); } // 0x80C527893080CCF3 0xCDB4FB7E b323
	static void SET_DITCH_POLICE_MODELS(BOOL toggle) { invoke<Void>(0xDA9570, toggle); } // 0x42CBE54462D92634 0x3EA7FCE4 b323
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0xDA9580); } // 0x4060057271CEBC89 0xC2EE9A02 b323
	static void REQUEST_PTFX_ASSET() { invoke<Void>(0xDA95A0); } // 0x944955FB2A3935C8 0x2C649263 b323
	static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xDA95B0); } // 0xCA7D9B86ECA7481B 0x3EFF96BE b323
	static void REMOVE_PTFX_ASSET() { invoke<Void>(0xDA95D0); } // 0x88C6814073DD4A73 0xC10F178C b323
	static void REQUEST_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xDA95E0, fxName); } // 0xB80D8756B4668AB6 0xCFEA19A9 b323
	static BOOL HAS_NAMED_PTFX_ASSET_LOADED(const char* fxName) { return invoke<BOOL>(0xDA95F0, fxName); } // 0x8702416E512EC454 0x9ACC6446 b323
	static void REMOVE_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xDA9620, fxName); } // 0x5F61EBBE1A00F96D 0xC44762A1 b323
	static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0xDA9630, p0); } // 0xCB9E1EB3BE2AF4E9 0x1D56993C b323
	static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0xDA9650, p0); } // 0x8C95333CFC3340F3 0xD2D026CD b323
	static void CLEAR_FOCUS() { invoke<Void>(0xDA9670); } // 0x31B73D1EA9F01DA2 0x34D91E7A b323
	static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xDA9680, x, y, z, offsetX, offsetY, offsetZ); } // 0xBB7454BAFF08FE25 0x14680A60 b323
	static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xDA96F0, entity); } // 0x198F77705FA0931D 0x18DB04AC b323
	static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0xDA9780, entity); } // 0x2DDFF3FB9075D747 0xB456D707 b323
	static void SET_RESTORE_FOCUS_ENTITY(Entity p0) { invoke<Void>(0xDA97E0, p0); } // 0x0811381EF5062FEC b323
	static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0xDA9860, name, toggle); } // 0xAF12610C644A35C9 0x403CD434 b323
	static void SET_ALL_MAPDATA_CULLED(Any p0) { invoke<Void>(0xDA9890, p0); } // 0x4E52E752C76E7E7A 0xA07BAEB9 b323
	static int STREAMVOL_CREATE_SPHERE(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<int>(0xDA98A0, x, y, z, rad, p4, p5); } // 0x219C7B8D53E429FD 0x10B6AB36 b323
	static int STREAMVOL_CREATE_FRUSTUM(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<int>(0xDA99A0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x1F3F018BC3AFA77C 0x72344191 b323
	static int STREAMVOL_CREATE_LINE(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<int>(0xDA9A80, p0, p1, p2, p3, p4, p5, p6); } // 0x0AD9710CEE2F590F 0xC0157255 b323
	static void STREAMVOL_DELETE(Any unused) { invoke<Void>(0xDA9B30, unused); } // 0x1EE7D8DF4425F053 0xE80F8ABE b323
	static BOOL STREAMVOL_HAS_LOADED(Any unused) { return invoke<BOOL>(0xDA9B50, unused); } // 0x7D41E9D2D17C5B2D 0x1B3521F4 b323
	static BOOL STREAMVOL_IS_VALID(Any unused) { return invoke<BOOL>(0xDA9B80, unused); } // 0x07C313F94746702C 0x42CFE9C0 b323
	static BOOL IS_STREAMVOL_ACTIVE() { return invoke<BOOL>(0xDA9B90); } // 0xBC9823AB80A3DCAC 0x56253356 b323
	static BOOL NEW_LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke<BOOL>(0xDA9BA0, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); } // 0x212A8D0D2BABFAC2 0xDF9C38B6 b323
	static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0xDA9C50, x, y, z, radius, p4); } // 0xACCFB4ACF53551B0 0xFA037FEB b323
	static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0xDA9CE0); } // 0xC197616D221FF4A4 0x7C05B1F6 b323
	static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xDA9CF0); } // 0xA41A05B6CB741B85 0xAD234B7F b323
	static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0xDA9D10); } // 0x01B8247A7A8B9AD1 0x3ECD839F b323
	static BOOL IS_SAFE_TO_START_PLAYER_SWITCH() { return invoke<BOOL>(0xDA9D40); } // 0x71E7B2E657449AAD 0xEAA51103 b323
	static void START_PLAYER_SWITCH(Ped from, Ped to, int flags, int switchType) { invoke<Void>(0xDA9D90, from, to, flags, switchType); } // 0xFAA23F2CBA159D67 0x0829E975 b323
	static void STOP_PLAYER_SWITCH() { invoke<Void>(0xDA9E50); } // 0x95C0A5BBDC189AA1 0x2832C010 b323
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xDA9E80); } // 0xD9D2CFFF49FAB35F 0x56135ACC b323
	static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0xDA9EB0); } // 0xB3C94A90D9FC9E62 0x280DC015 b323
	static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xDA9EC0, x1, y1, z1, x2, y2, z2); } // 0xB5D7B26B45720E05 0xD5A450F1 b323
	static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0xDA9F20); } // 0x470555300D10B2A5 0x39A0E1F2 b323
	static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0xDA9F40); } // 0x20F898A5D9782800 0x9B7BA38F b323
	static void SET_PLAYER_SHORT_SWITCH_STYLE(int p0) { invoke<Void>(0xDA9F60, p0); } // 0x5F2013F8BC24EE69 0xF0BD420D b323
	static int GET_PLAYER_SWITCH_JUMP_CUT_INDEX() { return invoke<int>(0xDA9F80); } // 0x78C0D93253149435 0x02BA7AC2 b323
	static void SET_PLAYER_SWITCH_OUTRO(float cameraCoordX, float cameraCoordY, float cameraCoordZ, float camRotationX, float camRotationY, float camRotationZ, float camFov, float camFarClip, int rotationOrder) { invoke<Void>(0xDA9FA0, cameraCoordX, cameraCoordY, cameraCoordZ, camRotationX, camRotationY, camRotationZ, camFov, camFarClip, rotationOrder); } // 0xC208B673CE446B61 0x47352E14 b323
	static void SET_PLAYER_SWITCH_ESTABLISHING_SHOT(const char* name) { invoke<Void>(0xDAA090, name); } // 0x0FDE9DBFC0A6BC65 0x279077B0 b323
	static void ALLOW_PLAYER_SWITCH_PAN() { invoke<Void>(0xDAA0F0); } // 0x43D1680C6D19A8E9 0x55CB21F9 b323
	static void ALLOW_PLAYER_SWITCH_OUTRO() { invoke<Void>(0xDAA130); } // 0x74DE2E8739086740 0x1084F2F4 b323
	static void ALLOW_PLAYER_SWITCH_ASCENT() { invoke<Void>(0xDAA170); } // 0x8E2A065ABDAE6994 0x5B1E995D b323
	static void ALLOW_PLAYER_SWITCH_DESCENT() { invoke<Void>(0xDAA1B0); } // 0xAD5FDF34B81BFE79 0x4B4B9A13 b323
	static BOOL IS_SWITCH_READY_FOR_DESCENT() { return invoke<BOOL>(0xDAA1F0); } // 0xDFA80CB25D0A19B3 0x408F7148 b323
	static void SWITCH_TO_MULTI_FIRSTPART(Ped ped, int flags, int switchType) { invoke<Void>(0xDAA230, ped, flags, switchType); } // 0xAAB3200ED59016BC 0xFB4D062D b323
	static void SWITCH_TO_MULTI_SECONDPART(Ped ped) { invoke<Void>(0xDAA2B0, ped); } // 0xD8295AF639FD9CB8 0x2349373B b323
	static BOOL IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED() { return invoke<BOOL>(0xDAA310); } // 0x933BBEEB8C61B5F4 0x74C16879 b323
	static int GET_PLAYER_SWITCH_INTERP_OUT_DURATION() { return invoke<int>(0xDAA330); } // 0x08C2D6C52A3104BB 0x569847E3 b323
	static int GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() { return invoke<int>(0xDAA350); } // 0x5B48A06DD0E792A5 0xC7A3D279 b323
	static BOOL IS_SWITCH_SKIPPING_DESCENT() { return invoke<BOOL>(0xDAA390); } // 0x5B74EA8CFD5E3E7E 0x90F64284 b323
	static void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME() { invoke<Void>(0xDAA3D0); } // 0x1E9057A74FD73E23 b323
	static float GET_LODSCALE() { return invoke<float>(0xDAA3E0); } // 0x0C15B0E443B2349D 0x7154B6FD b323
	static void OVERRIDE_LODSCALE_THIS_FRAME(float scaling) { invoke<Void>(0xDAA400, scaling); } // 0xA76359FC80B2438E 0xE5612C1A b323
	static void REMAP_LODSCALE_RANGE_THIS_FRAME(float p0, float p1, float p2, float p3) { invoke<Void>(0xDAA420, p0, p1, p2, p3); } // 0xBED8CA5FF5E04113 0x9CD6A451 b323
	static void SUPPRESS_HD_MAP_STREAMING_THIS_FRAME() { invoke<Void>(0xDAA450); } // 0x472397322E92A856 0x4267DA87 b323
	static void SET_RENDER_HD_ONLY(BOOL toggle) { invoke<Void>(0xDAA460, toggle); } // 0x40AEFD1A244741F2 0x9FA4AF99 b323
	static void FORCE_ALLOW_TIME_BASED_FADING_THIS_FRAME() { invoke<Void>(0xDAA4A0); } // 0x03F1A106BDA7DD3E b323
	static void IPL_GROUP_SWAP_START(const char* iplName1, const char* iplName2) { invoke<Void>(0xDAA4B0, iplName1, iplName2); } // 0x95A7DABDDBB78AE7 0x9EF0A9CF b323
	static void IPL_GROUP_SWAP_CANCEL() { invoke<Void>(0xDAA4C0); } // 0x63EB2B972A218CAC 0xF2CDD6A8 b323
	static BOOL IPL_GROUP_SWAP_IS_READY() { return invoke<BOOL>(0xDAA4E0); } // 0xFB199266061F820A 0x17B0A1CD b323
	static void IPL_GROUP_SWAP_FINISH() { invoke<Void>(0xDAA510); } // 0xF4A0DADB70F57FA6 0x3DA7AA5D b323
	static BOOL IPL_GROUP_SWAP_IS_ACTIVE() { return invoke<BOOL>(0xDAA530); } // 0x5068F488DDB54DD8 0xDAB4BAC0 b323
	static void PREFETCH_SRL(const char* srl) { invoke<Void>(0xDAA550, srl); } // 0x3D245789CE12982C 0x37BE2FBB b323
	static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xDAA570); } // 0xD0263801A4C5B0BB 0x670FA2A6 b323
	static void BEGIN_SRL() { invoke<Void>(0xDAA5A0); } // 0x9BADDC94EF83B823 0x24F49427 b323
	static void END_SRL() { invoke<Void>(0xDAA5B0); } // 0x0A41540E63C9EE17 0x1977C56A b323
	static void SET_SRL_TIME(float p0) { invoke<Void>(0xDAA5C0, p0); } // 0xA74A541C6884E7B8 0x30F8A487 b323
	static void SET_SRL_POST_CUTSCENE_CAMERA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xDAA5E0, p0, p1, p2, p3, p4, p5); } // 0xEF39EE20C537E98C 0x814D0752 b323
	static void SET_SRL_READAHEAD_TIMES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDAA630, p0, p1, p2, p3); } // 0xBEB2D9A1D9A8F55A 0x62F02485 b323
	static void SET_SRL_LONG_JUMP_MODE(BOOL p0) { invoke<Void>(0xDAA650, p0); } // 0x20C6C7E4EB082A7F 0xA6459CAA b323
	static void SET_SRL_FORCE_PRESTREAM(Any p0) { invoke<Void>(0xDAA670, p0); } // 0xF8155A7F03DDFC8E 0xF8F515E4 b323
	static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0xDAA690, x, y, z, radius); } // 0xB85F26619073E775 0x80BAA035 b323
	static void CLEAR_HD_AREA() { invoke<Void>(0xDAA6E0); } // 0xCE58B1CFB9290813 0x7CAC6FA0 b323
	static void INIT_CREATOR_BUDGET() { invoke<Void>(0xDAA6F0); } // 0xB5A4DB34FE89B88A 0xE243B2AF b323
	static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0xDAA700); } // 0xCCE26000E9A6FAD7 0x897A510F b323
	static BOOL ADD_MODEL_TO_CREATOR_BUDGET(Hash modelHash) { return invoke<BOOL>(0xDAA710, modelHash); } // 0x0BC3144DEB678666 0xC0E83320 b323
	static void REMOVE_MODEL_FROM_CREATOR_BUDGET(Hash modelHash) { invoke<Void>(0xDAA7C0, modelHash); } // 0xF086AD9354FAC3A3 0x1C576388 b323
	static float GET_USED_CREATOR_BUDGET() { return invoke<float>(0xDAA860); } // 0x3D3D8B3BE5A83D35 0x3E9C4CBE b323
}

namespace TASK
{
	static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0xDC02A0, ped, ms); } // 0xE73A266DB0CA9042 0x17A64668 b323
	static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0xDC0310, ped, time); } // 0x919BE13EED931959 0x6F80965D b323
	static void TASK_JUMP(Ped ped, BOOL usePlayerLaunchForce, BOOL doSuperJump, BOOL useFullSuperJumpForce) { invoke<Void>(0xDC03A0, ped, usePlayerLaunchForce, doSuperJump, useFullSuperJumpForce); } // 0x0AE4086104E067B1 0x0356E3CE b323
	static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0xDC0400, ped, duration); } // 0x3EB1FE9E8E908E15 0x9CF1C19B b323
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int timeToFacePed, int flags) { invoke<Void>(0xDC0480, ped, duration, facingPed, timeToFacePed, flags); } // 0xF2EAB31979A7F910 0x8DCC19C5 b323
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xDC0550, ped, duration); } // 0xA98FCAFD7893C834 0x3AA39BE9 b323
	static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int seat, float speed) { invoke<Void>(0xDC05B0, ped, vehicle, timeOut, seat, speed); } // 0x965791A9A488A062 0x8EE06BF4 b323
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, const char* overrideEntryClipsetName) { invoke<Void>(0xDC05D0, ped, vehicle, timeout, seat, speed, flag, overrideEntryClipsetName); } // 0xC20E50AA46D09CA8 0xB8689B4E b323
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0xDC0600, ped, vehicle, flags); } // 0xD3DBCE61A490BE02 0x7B1141C6 b323
	static void TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0xDC0620, ped, boat); } // 0x9C00E77AF14B2DFF 0x4293601F b323
	static void TASK_SKY_DIVE(Ped ped, BOOL instant) { invoke<Void>(0xDC06A0, ped, instant); } // 0x601736CFE536B0A0 0xD3874AFA b323
	static void TASK_PARACHUTE(Ped ped, BOOL giveParachuteItem, BOOL instant) { invoke<Void>(0xDC06B0, ped, giveParachuteItem, instant); } // 0xD2F1C53C97EE81AB 0xEC3060A2 b323
	static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xDC0710, ped, x, y, z); } // 0xB33E291AFA6BD03A 0xE0104D6C b323
	static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xDC07A0, ped, x, y, z); } // 0xC313379AF0FCEDA7 0x6ED3AD81 b323
	static void SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) { invoke<Void>(0xDC0820, ped, thrust); } // 0x0729BAC1B8C64317 0xD07C8AAA b323
	static void TASK_RAPPEL_FROM_HELI(Ped ped, float minHeightAboveGround) { invoke<Void>(0xDC0890, ped, minHeightAboveGround); } // 0x09693B0312F91649 0x2C7ADB93 b323
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDistance) { invoke<Void>(0xDC0910, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, straightLineDistance); } // 0xE2A2AA2F659D77A7 0xE4AC0387 b323
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0xDC0990, ped, vehicle, x, y, z, speed, driveMode, stopRange); } // 0x158BB33F920D360C 0x1490182A b323
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0xDC09B0, ped, vehicle, speed, drivingStyle); } // 0x480142959D337D00 0x36EC0EB0 b323
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0xDC0A80, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); } // 0x304AE42E357B8C7E 0x2DF5A6AC b323
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0xDC0AB0, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); } // 0xD76B57B44F1E6F8B 0x80A9E7A7 b323
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, float moveBlendRatio, int time) { invoke<Void>(0xDC0AE0, ped, entity, x, y, z, moveBlendRatio, time); } // 0x61E360B7E040D12E 0xD26CAC68 b323
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0xDC0B00, ped, heading, timeout); } // 0x93B93A37987F1F3D 0x0A0E9B42 b323
	static void TASK_FLUSH_ROUTE() { invoke<Void>(0xDC0B20); } // 0x841142A1376E9006 0x34219154 b323
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xDC0B30, x, y, z); } // 0x1E7889778264843A 0x43271F69 b323
	static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int mode) { invoke<Void>(0xDC0B70, ped, speed, mode); } // 0x595583281858626E 0xB837C816 b323
	static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float moveBlendRatio, float slowDownDistance, int flags) { invoke<Void>(0xDC0B90, entity, target, duration, distance, moveBlendRatio, slowDownDistance, flags); } // 0x6A071245EB0D1882 0x374827C2 b323
	static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL preferPavements, BOOL quitIfOutOfRange) { invoke<Void>(0xDC0BC0, ped, x, y, z, distance, time, preferPavements, quitIfOutOfRange); } // 0x94587F17E9C365D5 0xB2E686FC b323
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float safeDistance, int fleeTime, BOOL preferPavements, BOOL updateToNearestHatedPed) { invoke<Void>(0xDC0BF0, ped, fleeTarget, safeDistance, fleeTime, preferPavements, updateToNearestHatedPed); } // 0x22B0D0E37CCB840D 0xE52EB560 b323
	static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0xDC0C20, ped, fleeTarget); } // 0x72C896464915D1B1 0x8A632BD8 b323
	static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) { invoke<Void>(0xDC0C30, ped, eventHandle); } // 0x452419CBD838065B 0x9BD00ACF b323
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<Void>(0xDC0C40, ped, x, y, z, radius, minimalLength, timeBetweenWalks); } // 0xE054346CA3A0F315 0xC6981FB9 b323
	static void TASK_WANDER_STANDARD(Ped ped, float heading, int flags) { invoke<Void>(0xDC0D50, ped, heading, flags); } // 0xBB9CE077274F6A1B 0xAF59151A b323
	static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0xDC0D70, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); } // 0x0F3E34E968EA374E 0x5C85FF90 b323
	static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash stealthKillActionResultHash, float desiredMoveBlendRatio, int stealthFlags) { invoke<Void>(0xDC0DA0, killer, target, stealthKillActionResultHash, desiredMoveBlendRatio, stealthFlags); } // 0xAA5DC05579D60BD9 0x0D64C2FA b323
	static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0xDC0DC0, ped, x, y, z, heading); } // 0x965FEC691D55E9BF 0x33457535 b323
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float targetHeading) { invoke<Void>(0xDC0DE0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, targetHeading); } // 0x15D3A79D4E44B913 0xFE4A10D9 b323
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float slideToCoordHeading, float maxSlopeNavigable, float clampMaxSearchDistance, float targetHeading) { invoke<Void>(0xDADB10, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, slideToCoordHeading, maxSlopeNavigable, clampMaxSearchDistance, targetHeading); } // 0x17F58B88D085DBAC 0x6BF6E296 b323
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0xDC0E10, ped, Toggle); } // 0x8E06A6FE76C9EFF4 0xB7B7D442 b323
	static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0xDC0E70, ped, Toggle); } // 0x77A5B103C87F476E 0x53A879EE b323
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0xDC0ED0, ped, Toggle); } // 0xE361C5C71C431A4F 0x394B7AC9 b323
	static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0xDC0F30, ped, modifier); } // 0x88E32DB8C1A4AA4B 0x55E06443 b323
	static void SET_PED_PATH_MAY_ENTER_WATER(Ped ped, BOOL mayEnterWater) { invoke<Void>(0xDC0FA0, ped, mayEnterWater); } // 0xF35425A4204367EC 0x9C606EE3 b323
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { invoke<Void>(0xDC1000, ped, avoidWater); } // 0x38FE1EC73743793C 0x0EA39A29 b323
	static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0xDC1060, ped, avoidFire); } // 0x4455517B28441E60 0xDCC5B934 b323
	static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0xDC10C0, height); } // 0x6C6B148586F934F7 0x2AFB14B8 b323
	static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distanceRemaining, BOOL* isPathReady) { return invoke<int>(0xDC10F0, ped, distanceRemaining, isPathReady); } // 0xC6F5C0BCDC74D62D 0xD9281778 b323
	static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0xDC11D0, ped); } // 0x632E831F382A0FA8 0x96491602 b323
	static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets) { invoke<Void>(0xDC11F0, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets); } // 0x5BC448CB78FA3E88 0xF91DF93B b323
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float warpTimerMS) { invoke<Void>(0xDC1220, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, warpTimerMS); } // 0x1DD45F9ECFDB1BC9 0x094B75EF b323
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float cruiseSpeed, float targetArriveDist) { invoke<Void>(0xDC1260, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, cruiseSpeed, targetArriveDist); } // 0xB8ECD61F531A7B02 0x86DC03F9 b323
	static void TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float blendInSpeed, float blendOutSpeed, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0xDC12A0, ped, animDictionary, animationName, blendInSpeed, blendOutSpeed, duration, flag, playbackRate, lockX, lockY, lockZ); } // 0xEA47FE3719165B94 0x5AB552C6 b323
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float animEnterSpeed, float animExitSpeed, int duration, Any flag, float animTime, int rotOrder, int ikFlags) { invoke<Void>(0xDC1330, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, animEnterSpeed, animExitSpeed, duration, flag, animTime, rotOrder, ikFlags); } // 0x83CDB10EA29B370B 0x3DDEB0E6 b323
	static void STOP_ANIM_TASK(Entity entity, const char* animDictionary, const char* animationName, float blendDelta) { invoke<Void>(0xDC1420, entity, animDictionary, animationName, blendDelta); } // 0x97FF36A1D40EA00A 0x2B520A57 b323
	static void TASK_SCRIPTED_ANIMATION(Ped ped, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0xDC1440, ped, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); } // 0x126EF75F1E17ABE5 0xFC2DCF47 b323
	static void PLAY_ENTITY_SCRIPTED_ANIM(Entity entity, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0xDC1470, entity, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); } // 0x77A1EEC547E7FCF1 0x02F72AE5 b323
	static void STOP_ANIM_PLAYBACK(Entity entity, int priority, BOOL secondary) { invoke<Void>(0xDC14A0, entity, priority, secondary); } // 0xEE08C992D238C5D1 0xE5F16398 b323
	static void SET_ANIM_WEIGHT(Entity entity, float weight, int priority, int index, BOOL secondary) { invoke<Void>(0xDC1540, entity, weight, priority, index, secondary); } // 0x207F1A47C0342F48 0x17229D98 b323
	static void SET_ANIM_RATE(Entity entity, float rate, int priority, BOOL secondary) { invoke<Void>(0xDC1560, entity, rate, priority, secondary); } // 0x032D49C5E359C847 0x6DB46584 b323
	static void SET_ANIM_LOOPED(Entity entity, BOOL looped, int priority, BOOL secondary) { invoke<Void>(0xDC1610, entity, looped, priority, secondary); } // 0x70033C3CC29A1FF4 0x095D61A4 b323
	static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float blendInDuration, float blendOutDuration, BOOL isLooping, BOOL holdLastFrame) { invoke<Void>(0xDC1640, ped, animDict, animation, boneMaskType, blendInDuration, blendOutDuration, isLooping, holdLastFrame); } // 0x8FBB6758B3B3E9EC 0x1582162C b323
	static void TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped, float blendOutOverride) { invoke<Void>(0xDC1730, ped, blendOutOverride); } // 0x3FA00D4F4641BFAE 0x5A32D4B4 b323
	static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0xDC17B0, ped); } // 0xB8EBB1E9D3588C10 0x500B6805 b323
	static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) { return invoke<float>(0xDC1840, ped); } // 0x47619ABE8B268C60 0x7B72AFD1 b323
	static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) { return invoke<float>(0xDC18E0, ped); } // 0x1EE0F68A7C25DEC6 0xEF8C3959 b323
	static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animationSet, const char* animationName) { invoke<Void>(0xDC1980, vehicle, animationSet, animationName); } // 0x69F5C3BD0F3EBD89 0x2B28F598 b323
	static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, int duration, int flags, int priority) { invoke<Void>(0xDC19A0, entity, x, y, z, duration, flags, priority); } // 0x6FA46612594F7973 0x7B784DD8 b323
	static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int flags, int priority) { invoke<Void>(0xDC19C0, ped, lookAt, duration, flags, priority); } // 0x69F4BE8C8CC4796C 0x991D6619 b323
	static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0xDC19E0, ped); } // 0x0F804F1DB19B9689 0x60EB4054 b323
	static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xDC19F0, taskSequenceId); } // 0xE8854A4326B9E12B 0xABA6923E b323
	static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { invoke<Void>(0xDC1A60, taskSequenceId); } // 0x39E72BC99E6360CB 0x1A7CEBD0 b323
	static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { invoke<Void>(0xDC1AB0, ped, taskSequenceId); } // 0x5ABA3986D90D8A3B 0x4D9FBD11 b323
	static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xDC1AC0, taskSequenceId); } // 0x3841422E9C488D8C 0x47ED03CE b323
	static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { invoke<Void>(0xDC1B00, taskSequenceId, repeat); } // 0x58C70CF3A41E4AE7 0xCDDF1508 b323
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0xDC1B70, ped); } // 0x00A9010CFE1E3533 0xA3419909 b323
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0xDC1B90, ped, taskIndex); } // 0xB0760331C7AA4155 0x86FDDF55 b323
	static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash) { return invoke<int>(0xDC1C30, ped, taskHash); } // 0x77F1BEB8863288D5 0xB2477B23 b323
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0xDC1CA0, vehicle); } // 0x534AEBA6E5ED4CAB 0xAFA914EF b323
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int delayTime, int flags) { invoke<Void>(0xDC1CC0, ped, delayTime, flags); } // 0x504D54DF3F6F2247 0xDBDD79FA b323
	static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL disableBlockingClip, BOOL instantBlendToAim) { invoke<Void>(0xDC1CE0, ped, scriptTask, disableBlockingClip, instantBlendToAim); } // 0x7A192BE16D373D00 0x9D296BCD b323
	static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Ped ped, Ped target, float x, float y, float z, int gunTaskType, BOOL disableBlockingClip, BOOL forceAim) { invoke<Void>(0xDC1D10, ped, target, x, y, z, gunTaskType, disableBlockingClip, forceAim); } // 0x8605AF0DE8B3A5AC 0xFD517CE3 b323
	static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped ped, Ped target, float x, float y, float z, BOOL disableBlockingClip) { invoke<Void>(0xDC1D40, ped, target, x, y, z, disableBlockingClip); } // 0x9724FB59A3E72AD0 0x67E73525 b323
	static const char* GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int gunTaskType) { return invoke<const char*>(0xDC1D60, gunTaskType); } // 0x3A8CADC7D37AACC5 0x249EB4EB b323
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL instantBlendToAim) { invoke<Void>(0xDC1DA0, ped, entity, duration, instantBlendToAim); } // 0x9B53BB6E8943AF53 0xBE32B3B6 b323
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0xDC1DC0, ped, entity, duration); } // 0x5AD23D40115353AC 0x3C37C767 b323
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL instantBlendToAim, BOOL playAnimIntro) { invoke<Void>(0xDC1DE0, ped, x, y, z, time, instantBlendToAim, playAnimIntro); } // 0x6671F3EEC681BDA1 0xFBF44AD3 b323
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0xDC1E10, ped, x, y, z, duration, firingPattern); } // 0x46A6CC01E0826106 0x601C22E3 b323
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle, BOOL useAlternateShuffle) { invoke<Void>(0xDC1E30, ped, vehicle, useAlternateShuffle); } // 0x7AA80209BDA643EB 0xBEAF8F67 b323
	static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xDC1E40, ped); } // 0xE1EF3C1216AFF2CD 0xDE3316AB b323
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xDC1E50, ped); } // 0x176CECF6F920D707 0xA635F451 b323
	static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDC1EA0, vehicle); } // 0x7F93691AB4B92272 0xC1971F30 b323
	static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Entity entity, int time, float seekRadius, float seekAngleDeg, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xDC1EB0, ped, entity, time, seekRadius, seekAngleDeg, moveBlendRatio, gotoEntityOffsetFlags); } // 0xE39B4FF4FDEBDE27 0x1A17A85E b323
	static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float targetRadius, float offsetX, float offsetY, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xDC1EE0, ped, entity, duration, targetRadius, offsetX, offsetY, moveBlendRatio, gotoEntityOffsetFlags); } // 0x338E7EF52B6095A9 0xBC1E3D0A b323
	static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0xDC1F10, ped, x, y, z, duration); } // 0x1DDA930A0AC38571 0x30463D73 b323
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xDC2000, driver, vehicle, action, time); } // 0xC429DCEEB339E129 0x0679DFB8 b323
	static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xDC2020, driver, vehicle, vehicleTarget, missionType, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); } // 0x659427E0EF36BCDE 0x20609E56 b323
	static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int missionType, float maxSpeed, int drivingStyle, float minDistance, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xDC2070, ped, vehicle, pedTarget, missionType, maxSpeed, drivingStyle, minDistance, straightLineDistance, DriveAgainstTraffic); } // 0x9454528DF15D657A 0xC81C4677 b323
	static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int mission, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xDC20B0, ped, vehicle, x, y, z, mission, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); } // 0xF0AF20AA7731F8C3 0x6719C109 b323
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int minHeightAboveTerrain, float noRoadsDistance) { invoke<Void>(0xDC2140, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, minHeightAboveTerrain, noRoadsDistance); } // 0x0FA6E4B75F302400 0x9FDCB250 b323
	static void TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, float speed, int drivingStyle, int minDistance) { invoke<Void>(0xDC2170, driver, vehicle, targetEntity, speed, drivingStyle, minDistance); } // 0xFC545A9F0626E3B6 0xA8B917D7 b323
	static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0xDC2190, driver, targetEnt); } // 0x3C08A8E30363B353 0x55634798 b323
	static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int drivingFlags, float radius, int altitude, int heliFlags) { invoke<Void>(0xDC21A0, pilot, vehicle, entityToFollow, targetSpeed, drivingFlags, radius, altitude, heliFlags); } // 0x1E09C32048FEFD1C 0x0CB415EE b323
	static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0xDC21D0, ped, flag, set); } // 0xCC665AAC360D31E7 0x2A83083F b323
	static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0xDC2260, ped, distance); } // 0x639B642FACBE4EDD 0x04FD3EE7 b323
	static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xDC22E0, pilot, entityToFollow, x, y, z); } // 0xAC83B1DB38D0ADA0 0xAC290A21 b323
	static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xDC2300, pilot, entityToFollow, x, y, z); } // 0x2D2386F273FF7A25 0x12FA1C28 b323
	static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0xDC2320, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); } // 0xBF19721FA34D32C0 0x5F7E23EA b323
	static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float radius, float targetHeading, int maxHeight, int minHeight, float slowDownDistance, int behaviorFlags) { invoke<Void>(0xDC2340, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, radius, targetHeading, maxHeight, minHeight, slowDownDistance, behaviorFlags); } // 0xDAD029E187A2BEB4 0x0C143E97 b323
	static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float targetReached, float targetHeading, float maxZ, float minZ, BOOL precise) { invoke<Void>(0xDC23A0, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, targetReached, targetHeading, maxZ, minZ, precise); } // 0x23703CD154E83B88 0x1D007E65 b323
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle vehicle, Vehicle targetVehicle, Ped targetPed, float x, float y, float z, int mission, float maxSpeed, int drivingStyle, float targetReached, Any boatFlags) { invoke<Void>(0xDC23F0, pedDriver, vehicle, targetVehicle, targetPed, x, y, z, mission, maxSpeed, drivingStyle, targetReached, boatFlags); } // 0x15C86013127CE63F 0x5865B031 b323
	static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL pushUnderneathDrivingTaskIfDriving, Hash firingPattern) { invoke<Void>(0xDC2440, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, pushUnderneathDrivingTaskIfDriving, firingPattern); } // 0x2F8AF0E82773A171 0x2B84D1C4 b323
	static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0xDC2480, shootingPed, targetPed, targetVehicle, x, y, z); } // 0xE5B302114D8162EE 0xDA6A6FC1 b323
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0xDC24A0, ped); } // 0xC35B5CDB2824CF69 0x9B76F7E6 b323
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xDC2530, ped); } // 0x8785E6E40C7A8818 0xB23F46E6 b323
	static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0xDC25C0, ped); } // 0xDCFE42068FE0135A 0x500D9244 b323
	static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z, int taskMode, BOOL ignoreTargetVehDeadCheck) { invoke<Void>(0xDC2660, shootingPed, targetPed, targetVehicle, x, y, z, taskMode, ignoreTargetVehDeadCheck); } // 0xCCD892192C6D2BB9 0x98713C68 b323
	static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xDC2680, ped); } // 0xA320EF046186FA3B 0x291E938C b323
	static void TASK_USE_MOBILE_PHONE(Ped ped, BOOL usePhone, int desiredPhoneMode) { invoke<Void>(0xDC26F0, ped, usePhone, desiredPhoneMode); } // 0xBD2A8EC3AF4DE7DB 0x225A38C8 b323
	static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0xDC2710, ped, duration); } // 0x5EE02954A14C69DB 0xC99C19F5 b323
	static void TASK_CHAT_TO_PED(Ped ped, Ped target, int flags, float goToLocationX, float goToLocationY, float goToLocationZ, float headingDegs, float idleTime) { invoke<Void>(0xDC2720, ped, target, flags, goToLocationX, goToLocationY, goToLocationZ, headingDegs, idleTime); } // 0x8C338E0263E4FD19 0xA2BE1821 b323
	static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0xDC2740, ped, vehicle, seat); } // 0x9A7D091411C5F684 0x65D4A35D b323
	static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0xDC2760, entity, target, duration, firingPattern); } // 0x08DA95E8298AE772 0xAC0631C9 b323
	static void TASK_CLIMB(Ped ped, BOOL usePlayerLaunchForce) { invoke<Void>(0xDC2780, ped, usePlayerLaunchForce); } // 0x89D9FCC2435112F1 0x90847790 b323
	static void TASK_CLIMB_LADDER(Ped ped, BOOL fast) { invoke<Void>(0xDC27E0, ped, fast); } // 0xB6C987F9285A3814 0x35BB4EE0 b323
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0xDC2850, ped); } // 0xAAA34F8A7CB32098 0xBC045625 b323
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, int taskIndex, int progress1, int progress2) { invoke<Void>(0xDC2860, ped, taskIndex, progress1, progress2); } // 0x89221B16730234F0 0xFA60601B b323
	static void SET_NEXT_DESIRED_MOVE_STATE(float nextMoveState) { invoke<Void>(0xDC2880, nextMoveState); } // 0xF1B9F16E89E2C93A 0x4E937D57 b323
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float newMoveBlendRatio) { invoke<Void>(0xDC2890, ped, newMoveBlendRatio); } // 0x1E982AC8716912C5 0xC65FC712 b323
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0xDC28A0, ped); } // 0x8517D4A6CA8513ED 0x5FEFAB72 b323
	static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0xDC28F0, ped, target, distanceToStopAt, StartAimingDist); } // 0xA9DA48FAB8A76C12 0xF1C493CF b323
	static void TASK_SET_DECISION_MAKER(Ped ped, Hash decisionMakerId) { invoke<Void>(0xDC29A0, ped, decisionMakerId); } // 0xEB8517DDA73720DA 0x830AD50C b323
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius) { invoke<Void>(0xDC29B0, ped, x, y, z, radius); } // 0x933C06518B52A9A4 0x9F3C5D6A b323
	static void TASK_CLEAR_DEFENSIVE_AREA(Ped ped) { invoke<Void>(0xDC29D0, ped); } // 0x95A6C46A31D1917D 0x7A05BF0D b323
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float speed) { invoke<Void>(0xDC29E0, ped, x, y, z, heading, speed); } // 0xD04FE6765D990A06 0x225380EF b323
	static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float speed, float headingChangeRate) { invoke<Void>(0xDC2A00, ped, x, y, z, heading, speed, headingChangeRate); } // 0x5A4A6A6D3DC64F52 0x38A995C1 b323
	static ScrHandle ADD_COVER_POINT(float x, float y, float z, float direction, int usage, int height, int arc, BOOL isPriority) { return invoke<ScrHandle>(0xDC2A20, x, y, z, direction, usage, height, arc, isPriority); } // 0xD5C12A75C7B9497F 0xA0AF0B98 b323
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xDC2AD0, coverpoint); } // 0xAE287C923D891715 0x0776888B b323
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0xDC2B10, x, y, z); } // 0xA98B8E3C088E5A31 0x29F97A71 b323
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0xDC2BA0, coverpoint); } // 0x594A1028FC2A3E85 0xC6B6CCC1 b323
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int combatFlags, int threatResponseFlags) { invoke<Void>(0xDC2C70, ped, targetPed, combatFlags, threatResponseFlags); } // 0xF166E48407BAC484 0xCB0D8932 b323
	static void TASK_COMBAT_PED_TIMED(Ped ped, Ped target, int time, int flags) { invoke<Void>(0xDC2C90, ped, target, time, flags); } // 0x944F30DCB7096BDE 0xF5CA2A45 b323
	static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xDC2CB0, ped, x, y, z, duration, allowPeekingAndFiring); } // 0x75AC2B60386D89F2 0x83F18EE9 b323
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xDC2CD0, ped, target, duration, allowPeekingAndFiring); } // 0x84D32B3BEC531324 0xC1EC907E b323
	static void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, ScrHandle coverpoint, float x, float y, float z, int time, BOOL allowPeekingAndFiring) { invoke<Void>(0xDC2CF0, ped, coverpoint, x, y, z, time, allowPeekingAndFiring); } // 0xD43D95C7A869447F 0x3D026B29 b323
	static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int timeout, BOOL shortRoute) { invoke<Void>(0xDC2D10, ped, x1, y1, z1, x2, y2, z2, timeout, shortRoute); } // 0x39246A6958EF072C 0xFFFE754E b323
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, int time, BOOL allowPeekingAndFiring, float blendInDuration, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier, BOOL doEntry) { invoke<Void>(0xDC2D40, ped, x, y, z, time, allowPeekingAndFiring, blendInDuration, forceInitialFacingDirection, forceFaceLeft, identifier, doEntry); } // 0x4172393E6BE1FECE 0xC9F00E68 b323
	static void TASK_EXIT_COVER(Ped ped, int exitType, float x, float y, float z) { invoke<Void>(0xDC2E50, ped, exitType, x, y, z); } // 0x79B258E397854D29 0xC829FAC9 b323
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float blendInDuration, float timeInMelee, float strafePhaseSync, int aiCombatFlags) { invoke<Void>(0xDC2E70, ped, meleeTarget, blendInDuration, timeInMelee, strafePhaseSync, aiCombatFlags); } // 0x1C6CD14A876FFE39 0x79E1D27D b323
	static void TASK_TOGGLE_DUCK(Ped ped, int toggleType) { invoke<Void>(0xDC2E90, ped, toggleType); } // 0xAC96609B9995EDF8 0x61CFBCBF b323
	static void TASK_GUARD_CURRENT_POSITION(Ped ped, float maxPatrolProximity, float defensiveAreaRadius, BOOL setDefensiveArea) { invoke<Void>(0xDC2F20, ped, maxPatrolProximity, defensiveAreaRadius, setDefensiveArea); } // 0x4A58A47A72E3FCB4 0x2FB099E9 b323
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float heading, float maxPatrolProximity, int timer) { invoke<Void>(0xDC2F40, ped, x, y, z, heading, maxPatrolProximity, timer); } // 0xD2A207EEBDF9889B 0x7AF0133D b323
	static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped ped, float defendPositionX, float defendPositionY, float defendPositionZ, float heading, float maxPatrolProximity, int time, float x, float y, float z, float defensiveAreaRadius) { invoke<Void>(0xDC2F60, ped, defendPositionX, defendPositionY, defendPositionZ, heading, maxPatrolProximity, time, x, y, z, defensiveAreaRadius); } // 0xC946FE14BE0EB5E2 0x86B76CB7 b323
	static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) { invoke<Void>(0xDC2F90, ped, x, y, z, heading, scenarioName); } // 0xAE032F8BBA959E90 0xD130F636 b323
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0xDC2FB0, driver, cruiseSpeed); } // 0x5C9B84BD7D31D908 0x3CEC07B1 b323
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped ped, float speed) { invoke<Void>(0xDC2FC0, ped, speed); } // 0x404A5AA9B9F0B746 0x7FDF6131 b323
	static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0xDC3060, ped, drivingStyle); } // 0xDACE1BE37D88AF67 0x59C5FAD7 b323
	static void ADD_COVER_BLOCKING_AREA(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0xDC30F0, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); } // 0x45C597097DD7CB81 0x3536946F b323
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0xDC31A0); } // 0xDB6708C0B46F56D8 0xCF9221A7 b323
	static void TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0xDC31B0, ped, scenarioName, unkDelay, playEnterAnim); } // 0x142A02425FF02BD9 0xE50D6DDE b323
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { invoke<Void>(0xDC31D0, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); } // 0xFA4EFC79F69D4F07 0xAA2C4AC2 b323
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { invoke<Void>(0xDC3210, ped, x, y, z, distance, duration); } // 0x277F471BA9DB000B 0x9C50FBF0 b323
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xDC32C0, ped, x, y, z, radius, timeToLeave); } // 0x58E2E0F23F6B76C3 0x1BE9D65C b323
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped ped, float x, float y, float z, float maxRange, int timeToLeave) { invoke<Void>(0xDC3370, ped, x, y, z, maxRange, timeToLeave); } // 0x9FDA1B3D7E7028B3 0xE32FFB22 b323
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xDC3390, ped, x, y, z, radius, timeToLeave); } // 0x97A28E63F0BA5631 0xBAB4C0AE b323
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL mustBeFree) { return invoke<BOOL>(0xDC33B0, x, y, z, radius, mustBeFree); } // 0x5A59271FFADD33C1 0xFA7F5047 b323
	static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float x, float y, float z, const char* scenarioName, float radius, BOOL mustBeFree) { return invoke<BOOL>(0xDC3450, x, y, z, scenarioName, radius, mustBeFree); } // 0x0A9D0C2A3BBC86C1 0x0FB138A5 b323
	static BOOL IS_SCENARIO_OCCUPIED(float x, float y, float z, float maxRange, BOOL onlyUsersActuallyAtScenario) { return invoke<BOOL>(0xDC3510, x, y, z, maxRange, onlyUsersActuallyAtScenario); } // 0x788756D73AC2E07C 0x697FC008 b323
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0xDC3540, ped); } // 0x295E3CCEC879CCD7 0x9BE9C691 b323
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) { invoke<Void>(0xDC35B0, ped, animDict, animName); } // 0x748040460F8DF5DC 0x1984A5D1 b323
	static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0xDC35D0, scenarioGroup); } // 0xF9034C136C9E00D3 0x5F072EB9 b323
	static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0xDC3650, scenarioGroup); } // 0x367A09DED4E05B99 0x90991122 b323
	static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL enabled) { invoke<Void>(0xDC36F0, scenarioGroup, enabled); } // 0x02C8E5B49848664E 0x116997B1 b323
	static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xDC3780); } // 0xDD902D0349AFAD3A 0xBF55025D b323
	static void SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) { invoke<Void>(0xDC3790, scenarioGroup); } // 0x535E97E1F7FC0C6A 0x59DB8F26 b323
	static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0xDC3810); } // 0x4202BBCB8684563D 0x17F9DFE8 b323
	static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0xDC3830, scenarioType); } // 0x3A815DB3EA088722 0xAE37E969 b323
	static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { invoke<Void>(0xDC38C0, scenarioType, toggle); } // 0xEB47EC4E34FB7EE1 0xDB18E5DE b323
	static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0xDC3950); } // 0x0D40EE2A7F2B2D6D 0xF58FDEB4 b323
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xDC3960, ped); } // 0xAA135F9482C82CC3 0x05038F1A b323
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, int combatFlags) { invoke<Void>(0xDC39E0, ped, x, y, z, radius, combatFlags); } // 0x4CF5F55DAC3280A0 0xDF099E18 b323
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int combatFlags) { invoke<Void>(0xDC3AE0, ped, radius, combatFlags); } // 0x7BF835BB9E2698C8 0x2E7064E4 b323
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int time, int combatFlags) { invoke<Void>(0xDC3BD0, ped, radius, time, combatFlags); } // 0x2BBA30B854534A0C 0xF127AD6A b323
	static void TASK_THROW_PROJECTILE(Ped ped, float x, float y, float z, int ignoreCollisionEntityIndex, BOOL createInvincibleProjectile) { invoke<Void>(0xDC3CD0, ped, x, y, z, ignoreCollisionEntityIndex, createInvincibleProjectile); } // 0x7285951DBF6B5A51 0xF65C20A7 b323
	static void TASK_SWAP_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0xDC3CE0, ped, drawWeapon); } // 0xA21C51255B205245 0xDAF4F8FC b323
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0xDC3D60, ped, drawWeapon); } // 0x62D2916F56B9CD2D 0xCA6E91FD b323
	static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0xDC3D80, ped); } // 0x2A74E1D5F2F00EEC 0x320813E6 b323
	static void TASK_WRITHE(Ped ped, Ped target, int minFireLoops, int startState, BOOL forceShootOnGround, int shootFromGroundTimer) { invoke<Void>(0xDC3DE0, ped, target, minFireLoops, startState, forceShootOnGround, shootFromGroundTimer); } // 0xCDDC2B77CE54AC6E 0x0FDC54FC b323
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xDC3E00, ped); } // 0xDEB6D52126E7D640 0x09E61921 b323
	static void OPEN_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xDC3E60, patrolRoute); } // 0xA36BFB5EE89F3D82 0xF33F83CA b323
	static void CLOSE_PATROL_ROUTE() { invoke<Void>(0xDC3E80); } // 0xB043ECA801B8CBC1 0x67305E59 b323
	static void ADD_PATROL_ROUTE_NODE(int nodeId, const char* nodeType, float posX, float posY, float posZ, float headingX, float headingY, float headingZ, int duration) { invoke<Void>(0xDC3E90, nodeId, nodeType, posX, posY, posZ, headingX, headingY, headingZ, duration); } // 0x8EDF950167586B7C 0x21B48F10 b323
	static void ADD_PATROL_ROUTE_LINK(int nodeId1, int nodeId2) { invoke<Void>(0xDC3F20, nodeId1, nodeId2); } // 0x23083260DEC3A551 0xD8761BB3 b323
	static void CREATE_PATROL_ROUTE() { invoke<Void>(0xDC3F40); } // 0xAF8A443CCC8018DC 0x0A6C7864 b323
	static void DELETE_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xDC3F50, patrolRoute); } // 0x7767DD9D65E91319 0x2A4E6706 b323
	static void TASK_PATROL(Ped ped, const char* patrolRouteName, int alertState, BOOL canChatToPeds, BOOL useHeadLookAt) { invoke<Void>(0xDC3F90, ped, patrolRouteName, alertState, canChatToPeds, useHeadLookAt); } // 0xBDA5DF49D080FE4E 0xB92E5AF6 b323
	static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0xDC4030, ped); } // 0xE5DA8615A6180789 0xA27A9413 b323
	static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xDC4090, ped, x, y, z); } // 0x5CF0D8F9BBA0DD75 0x50779A2C b323
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped target) { invoke<Void>(0xDC40A0, ped, target); } // 0x85F462BADC7DA47F 0x80461113 b323
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float fireTolerance) { invoke<Void>(0xDC40B0, ped, target, fireTolerance); } // 0x10AB107B887214D8 0x59677BA0 b323
	static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0xDC40D0, ped, target); } // 0xE41885592B08B097 0x920AE6DB b323
	static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float fireTolerance) { invoke<Void>(0xDC40E0, ped, x, y, z, fireTolerance); } // 0x5190796ED39C9B6D 0xA7AAA4D6 b323
	static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xDC4100, ped, x, y, z); } // 0x447C1E9EF844BC0F 0x010F47CE b323
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0xDC4110, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x195AEEB13CEFE2EE 0x55CF3BCD b323
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xDC4130, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern); } // 0x11315AB3385B8AC0 0x1552DC91 b323
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped ped, float x, float y, float z, Entity aimAtID, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern, int time) { invoke<Void>(0xDC4190, ped, x, y, z, aimAtID, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern, time); } // 0xB2A16444EAD9AE47 0x9BD52ABD b323
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL useNavMesh, int navFlags, int taskFlags, Hash firingPattern) { invoke<Void>(0xDC4200, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, useNavMesh, navFlags, taskFlags, firingPattern); } // 0xA55547801EB331FC 0x3F91358E b323
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Ped ped, Entity entity, float aimX, float aimY, float aimZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xDC4260, ped, entity, aimX, aimY, aimZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); } // 0x04701832B739DCE5 0xD896CD82 b323
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xDC42C0, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); } // 0x97465886D35210E9 0x68E36B7A b323
	static void SET_HIGH_FALL_TASK(Ped ped, int minTime, int maxTime, int entryType) { invoke<Void>(0xDC4320, ped, minTime, maxTime, entryType); } // 0x8C825BDC7741D37C 0xBBB26172 b323
	static void REQUEST_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xDC4340, name); } // 0x9EEFB62EB27B5792 0xAFABFB5D b323
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) { return invoke<BOOL>(0xDC4380, name); } // 0xCB4E8BE8A0063C5D 0x87125F5D b323
	static void REMOVE_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xDC43C0, name); } // 0xFF1B8B4AA1C25DC8 0x624530B0 b323
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) { return invoke<BOOL>(0xDC4400, name, points); } // 0x5343532C01A07234 0xF5F9B71E b323
	static BOOL WAYPOINT_RECORDING_GET_COORD(const char* name, int point, Vector3* coord) { return invoke<BOOL>(0xDC4460, name, point, coord); } // 0x2FB897405C90B361 0x19266913 b323
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* name, int point) { return invoke<float>(0xDC44D0, name, point); } // 0x005622AEBC33ACA9 0xC765633A b323
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0xDC4570, name, x, y, z, point); } // 0xB629A298081F876F 0xC4CD35AF b323
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped ped, const char* name, int p2, int p3, int p4) { invoke<Void>(0xDC4620, ped, name, p2, p3, p4); } // 0x0759591819534F7B 0xADF9904D b323
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped ped) { return invoke<BOOL>(0xDC46E0, ped); } // 0xE03B3F2D3DC59B64 0x85B7725F b323
	static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0xDC4760, ped); } // 0x2720AAA75001E094 0x3595B104 b323
	static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0xDC47E0, p0); } // 0xE6A877C64CAF1BC5 0x084B35B0 b323
	static BOOL SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float x, float y, float z) { return invoke<BOOL>(0xDC4870, ped, x, y, z); } // 0xED98E10B0AFCE4B4 0xF867F747 b323
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* name, int point) { return invoke<float>(0xDC4920, name, point); } // 0xA5B769058763E497 0xE8422AC4 b323
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xDC4980, p0); } // 0x701375A7D43F01CB 0xA6BB5717 b323
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xDC4A10, p0, p1, p2); } // 0x0F342546AA06FED5 0xFE39ECF8 b323
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xDC4AB0, p0, p1, p2, p3); } // 0x244F70C84C547D2D 0x50F392EF b323
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0xDC4B50, p0, p1, p2); } // 0x7D7D2B47FA788E85 0x23E6BA96 b323
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0xDC4C10, p0); } // 0x6599D834B12D0800 0x1BBB2CAC b323
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* name, BOOL p1, float p2, float p3) { invoke<Void>(0xDC4C90, name, p1, p2, p3); } // 0x5A353B8E6B1095B5 0x4DFD5FEC b323
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped ped, Ped target, BOOL p2) { invoke<Void>(0xDC4CB0, ped, target, p2); } // 0x20E330937C399D29 0x75E60CF6 b323
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4) { invoke<Void>(0xDC4D80, ped, x, y, z, p4); } // 0x8968400D900ED8B3 0xF120A34E b323
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped ped, Ped ped2, BOOL p2, BOOL p3) { invoke<Void>(0xDC4E50, ped, ped2, p2, p3); } // 0xE70BA7B90F8390DC 0xBD5F0EB8 b323
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4, Hash firingPattern) { invoke<Void>(0xDC4E70, ped, x, y, z, p4, firingPattern); } // 0x057A25CFCC9DB671 0xCDDB44D5 b323
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped ped) { invoke<Void>(0xDC4E90, ped); } // 0x47EFA040EBB8E2EA 0x6D7CF40C b323
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { invoke<Void>(0xDC4F10, route); } // 0x817268968605947A 0x48262EDA b323
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { invoke<Void>(0xDC4F20, route); } // 0x3548536485DD792B 0xB3CEC06F b323
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0xDC4F60, route); } // 0x60F9A4393A21F741 0x79B067AF b323
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { invoke<Void>(0xDC4FE0, route, props); } // 0xD5002D78B7162E1B 0x01CAAFCC b323
	static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0xDC4FF0, dist); } // 0x13945951E16EF912 0x8FB923EC b323
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { invoke<Void>(0xDC5010, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); } // 0x3123FAA6DB1CF7ED 0x959818B6 b323
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xDC5060, vehicle); } // 0xF5134943EA29868C 0x80DD15DB b323
	static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0xDC50E0, vehicle); } // 0x9824CFF8FC66E159 0xD3CCF64E b323
	static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0xDC5160, vehicle); } // 0x416B62AC8B9E5BBD 0x81049608 b323
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { invoke<Void>(0xDC51F0, vehicle); } // 0x8A4E6AC373666BC5 0x7C00B415 b323
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle vehicle) { invoke<Void>(0xDC5260, vehicle); } // 0xDC04FCAA7839D492 0xBEB14C82 b323
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle vehicle) { invoke<Void>(0xDC52D0, vehicle); } // 0x5CEB25A7D2848963 0x923C3AA4 b323
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xDC5340, vehicle, speed); } // 0x121F0593E0A431D7 0xBE1E7BB4 b323
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xDC53C0, ped, toggle); } // 0x90D2156198831D69 0x1B54FB6B b323
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL forceRestart) { invoke<Void>(0xDC5440, ped, state, forceRestart); } // 0x4F056E1AFFEF17AB 0xCAD2EF77 b323
	static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xDC5460, ped, task, multiplier, allowOverrideCloneUpdate, animDict, flags); } // 0x2D537BA194896636 0x6F5D215F b323
	static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Ped ped, const char* network, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xDC5490, ped, network, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, animDict, flags); } // 0xD5B35BEA41919ACB 0x71A5C5DB b323
	static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0xDC54E0, ped); } // 0x921CE12C489C4C41 0x902656EB b323
	static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0xDC5570, ped); } // 0x30ED88D5E0C56A37 0x92FDBAE6 b323
	static BOOL REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { return invoke<BOOL>(0xDC5620, ped, name); } // 0xD01015C7316AE176 0x885724DE b323
	static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0xDC5630, ped); } // 0x717E4D1F2048376D 0x96C0277B b323
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xDC56E0, ped, signalName, value); } // 0xD5BB4025AE449A4E 0xA79BE783 b323
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { invoke<Void>(0xDC5700, ped, signalName, value); } // 0xB0A6CFD2C69C1088 0xF3538041 b323
	static BOOL GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName) { return invoke<BOOL>(0xDC5720, ped, signalName); } // 0xA7FFBA498E4AAF67 0x1EBB6F3D b323
	static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0xDC57D0, ped, eventName); } // 0xB4F47213DF45A64C 0x72FA5EF2 b323
	static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xDC5880, ped); } // 0x349CE7B56DAFD95C 0xE9DAF877 b323
	static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0xDC58A0, ped); } // 0xF133BBBE91E1691F 0xD21639A8 b323
	static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0xDC58E0, ped); } // 0xD4D8636C0199A939 0xE76A2353 b323
	static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0xDC5920, ped); } // 0x24A2AD74FA9814E2 0xDD616893 b323
	static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0xDC5940, ped); } // 0xAC29253EEF8F0180 0x09E3418D b323
	static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0xDC59F0, ped); } // 0xDE4C184B2B9B071A 0x4B865C4A b323
	static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0xDC5AB0, ped); } // 0xC5286FFC176F28A2 0xE9A5578F b323
	static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0xDC5B70, ped); } // 0x57E457CD2C0FC168 0x4F3E0633 b323
	static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0xDC5C20, ped); } // 0xE45B7F222DE47E09 0xEFEED13C b323
	static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float blendIn, float blendOut, int flags, int ragdollBlockingFlags, float moverBlendDelta, int ikFlags) { invoke<Void>(0xDC5C80, ped, scene, animDictionary, animationName, blendIn, blendOut, flags, ragdollBlockingFlags, moverBlendDelta, ikFlags); } // 0xEEA929141F699854 0x4F217E7B b323
	static void TASK_SWEEP_AIM_ENTITY(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, Entity targetEntity, float turnRate, float blendInDuration) { invoke<Void>(0xDC5CD0, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, targetEntity, turnRate, blendInDuration); } // 0x2047C02158D6405A 0x4D210467 b323
	static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0xDC5D10, ped, entity); } // 0xE4973DBDBE6E44B3 0xF65F0F4F b323
	static void TASK_SWEEP_AIM_POSITION(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, float x, float y, float z, float turnRate, float blendInDuration) { invoke<Void>(0xDC5D20, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, x, y, z, turnRate, blendInDuration); } // 0x7AFE8FDC10BC07D2 0x1683FE66 b323
	static void UPDATE_TASK_SWEEP_AIM_POSITION(Ped ped, float x, float y, float z) { invoke<Void>(0xDC5D60, ped, x, y, z); } // 0xBB106883F5201FC4 0x6345EC80 b323
	static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0xDC5DF0, ped, target); } // 0xF3B9A78A178572B1 0xBC0F153D b323
	static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0xDC5E00, ped); } // 0x3DC52677769B4AE0 0x6942DB7A b323
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0xDC5E90, ped); } // 0x90A09F3A45FED688 0x5FF6C2ED b323
	static void UNCUFF_PED(Ped ped) { invoke<Void>(0xDC5F10, ped); } // 0x67406F2C8F87FC4F 0xA23A1D61 b323
	static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0xDC5F60, ped); } // 0x74E559B3BC910685 0x511CE741 b323
}

namespace VEHICLE
{
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7) { return invoke<Vehicle>(0xDDDA00, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, p7); } // 0xAF35D0D2583051B0 0xDD75460A b323
	static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0xDDDA40, vehicle); } // 0xEA386986E786A54F 0x9803AF60 b323
	static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle vehicle, BOOL toggle, BOOL p2) { invoke<Void>(0xDDDA50, vehicle, toggle, p2); } // 0x7D6F9A3EF26136A0 0xBB54ECCA b323
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0xDDDB10, veh, toggle); } // 0x5D14D4154BFE7B2C 0x8BAAC437 b323
	static int GET_VEHICLE_HOMING_LOCKON_STATE(Vehicle vehicle) { return invoke<int>(0xDDDBD0, vehicle); } // 0xE6B0E8CFC3633BF0 0xFBDE9FD8 b323
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0xDDDC30, vehicle, model); } // 0x423E8DE37D934D89 0x013B10B6 b323
	static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0xDDDCF0, vehicleGenerator); } // 0xF6086BC836400876 0xF6BDDA30 b323
	static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0xDDDD50, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x9DEF883114668116 0x25A9A261 b323
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0xDDDF00, vehicleGenerator); } // 0x22102C9ABFCF125D 0xE4328E3F b323
	static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, BOOL enabled) { invoke<Void>(0xDDDF80, vehicleGenerator, enabled); } // 0xD9D620E0AC6DC4B0 0x40D73747 b323
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle, BOOL p7) { invoke<Void>(0xDDE010, x1, y1, z1, x2, y2, z2, toggle, p7); } // 0xC12321827687FE4D 0xB4E0E69A b323
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0xDDE040); } // 0x34AD89078831A4BC 0xAB1FDD76 b323
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0xDDE050, active); } // 0x608207E7A8FB787C 0x87F767F2 b323
	static void SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(float x, float y, float z, float radius) { invoke<Void>(0xDDE070, x, y, z, radius); } // 0x9A75585FB2E54FAD 0x935A95DA b323
	static void CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST() { invoke<Void>(0xDDE0B0); } // 0x0A436B8643716D14 0x6C73E45A b323
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, float p1) { return invoke<BOOL>(0xDDE0C0, vehicle, p1); } // 0x49733E92263139D1 0xE14FDBA6 b323
	static BOOL SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xDDE140, p0, p1, p2, p3); } // 0xE023E8AC4EF7C117 0xA0909ADB b323
	static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xDDE2A0, vehicle); } // 0xB497F06B288DCFDF 0x18D07C6C b323
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xDDE300, vehicle); } // 0xB72E26D81006005B 0x3A13D384 b323
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xDDE350, vehicle); } // 0xC53EB42A499A7E90 0xF390BA1B b323
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0xDDE370, vehicle); } // 0x5721B434AD84D57A 0x655F072C b323
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle, BOOL includeDriver, BOOL includeDeadOccupants) { return invoke<int>(0xDDE3D0, vehicle, includeDriver, includeDeadOccupants); } // 0x24CB2137731FFE89 0x1EF20849 b323
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0xDDE440, vehicle); } // 0xA7C4F2C6E744A550 0x0A2FC08C b323
	static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0xDDE4A0, modelHash); } // 0x2AD93716F184EDA4 0x838F7BF7 b323
	static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xDDE540, vehicle, seatIndex); } // 0xF7F203E31F96F6A1 0x769E5CF2 b323
	static BOOL IS_TURRET_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xDDE5E0, vehicle, seatIndex); } // 0xE33FFA906CE74880 0x7C43D32A b323
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xDDE660, multiplier); } // 0x245A6883D966D537 0xF4187E51 b323
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xDDE690, multiplier); } // 0xB3B3359379FE77D3 0x543F712B b323
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xDDE6B0, multiplier); } // 0xEAE6DCC7EEE3DB1D 0xDD46CEBE b323
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { invoke<Void>(0xDDE6D0, toggle); } // 0xD4B8E3D1917BC86B 0x09462665 b323
	static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(float value) { invoke<Void>(0xDDE6F0, value); } // 0x90B6DA738A9A25DA 0xDAE2A2BE b323
	static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0xDDE730, toggle); } // 0x26324F33423F3CC3 0x9F019C49 b323
	static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0xDDE750, value); } // 0xCAA15F13EBD417FF 0x206A58E8 b323
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0xDDE760, vehicle, doorLockStatus); } // 0xB664292EAECF7FA6 0x4CDD35D0 b323
	static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle vehicle, int doorId, int doorLockStatus) { invoke<Void>(0xDDE7B0, vehicle, doorId, doorLockStatus); } // 0xBE70724027F85BCD 0xD61D182D b323
	static void SET_VEHICLE_HAS_MUTED_SIRENS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDE830, vehicle, toggle); } // 0xD8050E0EB60CF274 0xC54156A9 b323
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0xDDE8E0, vehicle, player, toggle); } // 0x517AAF684BB50CD1 0x49829236 b323
	static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0xDDE900, vehicle, player); } // 0xF6AF6CB341349015 0x1DC50247 b323
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDE970, vehicle, toggle); } // 0xA2F80B8D040727CC 0x891BA8A4 b323
	static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDE990, vehicle, toggle); } // 0x9737A37136F07E75 0xE4EF6514 b323
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0xDDE9F0, vehicle, team, toggle); } // 0xB81F6D4A8F5EEBA8 0x4F85E783 b323
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0xDDEA70, vehicle, isAudible, isInvisible); } // 0xBA71116ADF5B514C 0xBEDEACEB b323
	static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0xDDEB20, vehicle, killDriver, explodeOnImpact); } // 0xF19D095E42D430CC 0x3764D734 b323
	static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0xDDEC10, vehicle, ped, toggle); } // 0x2E0A74E1002380B1 0xDB8CB8E2 b323
	static void ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(Vehicle vehicle) { invoke<Void>(0xDDEC30, vehicle); } // 0x99AD4CCCB128CBC9 0x811373DE b323
	static BOOL HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { return invoke<BOOL>(0xDDECB0); } // 0x6ADAABD3068C5235 0xA4E69134 b323
	static void DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0xDDED00); } // 0xEF49CF0270307CBE 0x65255524 b323
	static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0xDDED70, vehicle, state); } // 0x598803E85E8448D9 0x68639D85 b323
	static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xDDEDE0, vehicle); } // 0x7504C0F113AB50FC 0x6FC4924A b323
	static BOOL IS_VEHICLE_IN_GARAGE_AREA(const char* garageName, Vehicle vehicle) { return invoke<BOOL>(0xDDEE50, garageName, vehicle); } // 0xCEE4490CD57BB3C2 0xA90EC257 b323
	static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0xDDEEC0, vehicle, colorPrimary, colorSecondary); } // 0x4F1D4BE3A7F24601 0x57F24253 b323
	static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDEF60, vehicle, toggle); } // 0x8B7FD87F0DDB421E 0x9C49CC15 b323
	static void SET_VEHICLE_IS_RACING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDEFA0, vehicle, toggle); } // 0x07116E24E9D1929D 0xA59E3DCD b323
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xDDF060, vehicle, r, g, b); } // 0x7141766F91D15BEA 0x8DF9F9BC b323
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xDDF130, vehicle, r, g, b); } // 0xB64CF2CCA9D95F52 0x1C2B9FEF b323
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xDDF1B0, vehicle); } // 0x55E1D2758F34E437 0x51E1E33D b323
	static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xDDF200, vehicle); } // 0xF095C0405307B21B 0xD7EC8760 b323
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xDDF260, vehicle, r, g, b); } // 0x36CED73BFED89754 0x9D77259E b323
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xDDF330, vehicle, r, g, b); } // 0x8389CD56CA8072DC 0x3FF247A2 b323
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xDDF3B0, vehicle); } // 0x5FFBDEEC3E8E2009 0x7CE00B29 b323
	static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xDDF400, vehicle); } // 0x910A32E7AAD2656C 0x288AD228 b323
	static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { invoke<Void>(0xDDF460, vehicle, fade); } // 0x3AFDC536C3D01674 0x8332730C b323
	static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0xDDF4D0, vehicle); } // 0xA82819CAC9C4C403 0xD5F1EEE1 b323
	static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0xDDF550, vehicle, state); } // 0x52BBA29D5EC69356 0x37677590 b323
	static void FORCE_SUBMARINE_SURFACE_MODE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDF620, vehicle, toggle); } // 0x33506883545AC0DF 0x54E9EE75 b323
	static void SET_SUBMARINE_CRUSH_DEPTHS(Vehicle vehicle, BOOL p1, float depth1, float depth2, float depth3) { invoke<Void>(0xDDF690, vehicle, p1, depth1, depth2, depth3); } // 0xC59872A5134879C7 0x4A46E814 b323
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDF730, vehicle, toggle); } // 0x75DBEC174AEEAD10 0xA3906284 b323
	static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0xDDF750, vehicle); } // 0x26C10ECBDA5D043B 0xE97A4F5E b323
	static void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDF780, vehicle, toggle); } // 0xE3EBAAE484798530 0x0ED84792 b323
	static void SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDDF7A0, vehicle, p1); } // 0xB28B1FE5BFADD7F5 0xA739012A b323
	static void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle vehicle, float value) { invoke<Void>(0xDDF800, vehicle, value); } // 0xE842A9398079BD82 0x66FA450C b323
	static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDF860, vehicle, toggle); } // 0x8F719973E1445BA2 0x35614622 b323
	static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDF8C0, vehicle, toggle); } // 0xF4924635A19EB37D 0x4AC1EFC7 b323
	static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0xDDF920, vehicle); } // 0x4C9BF537BE2634B2 0x25EB5873 b323
	static BOOL IS_VEHICLE_SIREN_AUDIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xDDF9B0, vehicle); } // 0xB5CC40FBCB586380 0xC9458688 b323
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDFA50, vehicle, toggle); } // 0x3E8C8727991A8A0B 0xC758D19F b323
	static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { invoke<Void>(0xDDFB00, vehicle); } // 0x8386BFB614D06749 0x81594917 b323
	static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0xDDFB20, vehicle, colorPrimary, colorSecondary); } // 0xA19435F193E081AC 0x40D82D88 b323
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex, BOOL isTaskRunning) { return invoke<BOOL>(0xDDFB90, vehicle, seatIndex, isTaskRunning); } // 0x22AC59A870E6A669 0xDAF42B02 b323
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex, BOOL p2) { return invoke<Ped>(0xDDFC70, vehicle, seatIndex, p2); } // 0xBB40DD2270B65366 0x388FDE9A b323
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0xDDFCA0, vehicle, seatIndex); } // 0x83F969AA1EE2A664 0xF7C6792D b323
	static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0xDDFD20, vehicle, lightsOn, highbeamsOn); } // 0xB91B4C20085BD12F 0x7C278621 b323
	static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0xDDFDB0, vehicle, wheelID, completely); } // 0xBA291848A0815CA9 0x48C80210 b323
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xDDFE80, vehicle, speed); } // 0xAB54A438726D25D5 0x69880D14 b323
	static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL p3) { invoke<Void>(0xDDFEF0, vehicle, distance, duration, p3); } // 0x260BE8F09E326A20 0xCBC7D3C8 b323
	static void SET_FORKLIFT_FORK_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0xDDFF10, vehicle, height); } // 0x37EBBF3117BD6A25 0x943A6CFC b323
	static BOOL IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0xDDFF20, vehicle, entity); } // 0x57715966069157AD 0x7FB25568 b323
	static BOOL IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle) { return invoke<BOOL>(0xDDFF50, vehicle); } // 0x62CA17B74C435651 0x593143B9 b323
	static Vehicle FIND_HANDLER_VEHICLE_CONTAINER_IS_ATTACHED_TO(Entity entity) { return invoke<Vehicle>(0xDE0010, entity); } // 0x375E7FC44F21C8AB 0x70DD5E25 b323
	static BOOL IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0xDE0030, vehicle, entity); } // 0x89D630CF5EA96D23 0xFBF5536A b323
	static void ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(Vehicle vehicle, Entity entity) { invoke<Void>(0xDE0060, vehicle, entity); } // 0x6A98C2ECF57FA5D4 0x20AB5783 b323
	static void DETACH_CONTAINER_FROM_HANDLER_FRAME(Vehicle vehicle) { invoke<Void>(0xDE0070, vehicle); } // 0x7C0043FDFF6436BC 0x0F11D01F b323
	static void SET_VEHICLE_DISABLE_HEIGHT_MAP_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE0080, vehicle, p1); } // 0x8AA9180DE2FEDD45 0xAE040377 b323
	static void SET_BOAT_DISABLE_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE0130, vehicle, p1); } // 0x0A6A279F3AA4FD70 0x4C0E4031 b323
	static BOOL IS_HELI_LANDING_AREA_BLOCKED(Vehicle vehicle) { return invoke<BOOL>(0xDE01A0, vehicle); } // 0x634148744F385576 0x6346B7CC b323
	static void SET_HELI_TURBULENCE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0xDE0210, vehicle, p1); } // 0xE6F13851780394DA 0xCCB41A55 b323
	static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0xDE0270, vehicle, index, onRim, p3); } // 0xEC6A202EE4960385 0x89D28068 b323
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0xDE0290, vehicle, closeInstantly); } // 0x781B3D62BB013EF5 0xBB1FF6E7 b323
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE02B0, vehicle, toggle); } // 0xEB9DC3C7D8596C46 0xA198DB54 b323
	static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0xDE0360, vehicle); } // 0x678B9BB8C3F58FEB 0x4D76CD2F b323
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xDE03C0, vehicle, enabled); } // 0x29B18B4FD460CA8F 0x829ED654 b323
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly) { invoke<Void>(0xDE0470, vehicle, doorId, loose, openInstantly); } // 0x7C65DAC73C35C862 0xBB75D38B b323
	static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xDE04A0, vehicle, windowIndex); } // 0xA711568EEDB43069 0xBB8104A3 b323
	static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0xDE0500, vehicle); } // 0x85796B0549DDE156 0x51A16DC6 b323
	static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xDE0510, vehicle, windowIndex); } // 0x7AD9E6CE657D69E3 0xF840134C b323
	static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xDE0570, vehicle, windowIndex); } // 0x602E548F46E24D59 0x83B7E06A b323
	static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xDE05D0, vehicle, windowIndex); } // 0x9E5B5E4D2CCD2259 0xDDD9A8C2 b323
	static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xDE05E0, vehicle, windowIndex); } // 0x772282EBEB95E682 0x6B8E990D b323
	static void POP_OUT_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0xDE0640, vehicle); } // 0x6D645D59FB5F5AD3 0xCC95C96B b323
	static void POP_OFF_VEHICLE_ROOF_WITH_IMPULSE(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xDE06A0, vehicle, x, y, z); } // 0xE38CB9D7D39FDBCC 0xFDA7B6CA b323
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0xDE0750, vehicle, state); } // 0x34E710FF01247C5A 0xE8930226 b323
	static void SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE0870, vehicle, toggle); } // 0xC45C27EF50F36ADC 0x4221E435 b323
	static void SET_VEHICLE_HEADLIGHT_SHADOWS(Vehicle vehicle, int p1) { invoke<Void>(0xDE08C0, vehicle, p1); } // 0x1FD09E7390A74D54 b323
	static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0xDE0920, vehicle, state); } // 0xCDE5E70C1DDB954C 0x24877D84 b323
	static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0xDE0970, vehicle); } // 0xB8FF7AB45305C345 0x5B451FF7 b323
	static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0xDE09C0, vehicle); } // 0x4319E335B71FFF34 0xF2630A4C b323
	static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE0A40, vehicle, toggle); } // 0xBC2042F090AF6AD3 0x9AD1FE1E b323
	static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xDE0AF0, vehicle, multiplier); } // 0xB385454F8791F57C 0x48039D6A b323
	static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0xDE0B40, vehicle, trailer, radius); } // 0x3C7D42D58F770B54 0x2133977F b323
	static void ATTACH_VEHICLE_ON_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float offsetX, float offsetY, float offsetZ, float coordsX, float coordsY, float coordsZ, float rotationX, float rotationY, float rotationZ, float disableCollisions) { invoke<Void>(0xDE0B60, vehicle, trailer, offsetX, offsetY, offsetZ, coordsX, coordsY, coordsZ, rotationX, rotationY, rotationZ, disableCollisions); } // 0x16B5E274BDE402F8 0x12AC1A16 b323
	static void STABILISE_ENTITY_ATTACHED_TO_HELI(Vehicle vehicle, Entity entity, float p2) { invoke<Void>(0xDE0B80, vehicle, entity, p2); } // 0x374706271354CB18 0x40C4763F b323
	static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0xDE0BA0, vehicle); } // 0x90532EDF0D2BDD86 0xB5DBF91D b323
	static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0xDE0C30, vehicle); } // 0xE7CF3C4F9F489F0C 0xE142BBCC b323
	static void SET_TRAILER_INVERSE_MASS_SCALE(Vehicle vehicle, float p1) { invoke<Void>(0xDE0C60, vehicle, p1); } // 0x2A8F319B392E7B3F 0xE74E85CE b323
	static void SET_TRAILER_LEGS_RAISED(Vehicle vehicle) { invoke<Void>(0xDE0CF0, vehicle); } // 0x95CF53B3D687F9FA 0x06C47A6F b323
	static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0xDE0D50, vehicle, tyreIndex); } // 0x6E13FC662B882D1D 0xA42EFA6B b323
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { invoke<Void>(0xDE0DD0, vehicle, plateText); } // 0x95A88F0B409CDA47 0x400F9556 b323
	static const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0xDE0E20, vehicle); } // 0x7CE1CCB9B293020E 0xE8522D58 b323
	static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0xDE0E80); } // 0x4C4D6B2644F458CB 0xD24BC1AE b323
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0xDE0EA0, vehicle, plateIndex); } // 0x9088EB5A43FFB0A1 0xA1A1890E b323
	static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0xDE0EF0, vehicle); } // 0xF11BC2DD9A3E7195 0x499747B6 b323
	static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0xDE0F50, toggle); } // 0x80D9F74197EA47D9 0xD461CA7F b323
	static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction, Any p5, Any p6) { return invoke<Vehicle>(0xDE0F70, variation, x, y, z, direction, p5, p6); } // 0x63C6CCA8E68AE8C8 0xD4C2EAFD b323
	static void SWITCH_TRAIN_TRACK(int trackId, BOOL state) { invoke<Void>(0xDE0FA0, trackId, state); } // 0xFD813BB7DB977F20 0x68BFDD61 b323
	static void SET_TRAIN_TRACK_SPAWN_FREQUENCY(int trackIndex, int frequency) { invoke<Void>(0xDE0FD0, trackIndex, frequency); } // 0x21973BBF8D17EDFA 0xD5774FB7 b323
	static void DELETE_ALL_TRAINS() { invoke<Void>(0xDE1000); } // 0x736A718577F39C7D 0x83DE7ABF b323
	static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0xDE1010, train, speed); } // 0xAA0BC91BE0B796E3 0xDFC35E4D b323
	static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0xDE1080, train, speed); } // 0x16469284DB8C62B5 0xB507F51D b323
	static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0xDE10F0, toggle); } // 0x84436EC293B1415F 0xB505BD89 b323
	static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0xDE1110, toggle); } // 0x2AFD795EEAC8D30D 0xD9ABB0FF b323
	static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0xDE1130, vehicle); } // 0x57E4C39DE5EE8470 0x5D91D9AC b323
	static int GET_VEHICLE_RECORDING_ID(int recording, const char* script) { return invoke<int>(0xDE11B0, recording, script); } // 0x21543C612379DB3C 0x328D601D b323
	static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xDE11E0, recording, script); } // 0xAF514CABE74CBF15 0x91AFEFD9 b323
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0xDE1260, recording, script); } // 0x300D614A4C785FC4 0xF52CD7F5 b323
	static void REMOVE_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xDE12A0, recording, script); } // 0xF1160ACCF98A3FC8 0xD3C05B00 b323
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0xDE12F0, id, time); } // 0x92523B76657A517D 0xF31973BB b323
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0xDE1360, recording, time, script); } // 0xD242728AA6F0FBA2 0x7178558D b323
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0xDE1400, id, time); } // 0xF0F2103EFAF8CBA7 0x4D1C15C2 b323
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0xDE1470, recording, time, script); } // 0x2058206FBE79A8AD 0xD96DEC68 b323
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int id) { return invoke<float>(0xDE1510, id); } // 0x102D125411A7B6E6 0x7116785E b323
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int recording, const char* script) { return invoke<float>(0xDE1540, recording, script); } // 0x0E48D1C262390950 0x5B35EEB7 b323
	static float GET_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0xDE1580, vehicle); } // 0x2DACD605FC681475 0x7DCD644C b323
	static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0xDE15D0, vehicle); } // 0x5746F3A7AB7FE544 0xF8C3E4A2 b323
	static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { invoke<Void>(0xDE1620, vehicle, recording, script, p3); } // 0x3F878F92B3A7A071 0xCF614CA8 b323
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, int recording, const char* script, int flags, int time, int drivingStyle) { invoke<Void>(0xDE1640, vehicle, recording, script, flags, time, drivingStyle); } // 0x7D80FD645D4DA346 0x4E721AD2 b323
	static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE1660, vehicle, p1); } // 0x1F2E4E06DEA8992B 0x01B91CD0 b323
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE1680, vehicle); } // 0x54833611C17ABDEA 0xAE99C57C b323
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE16D0, vehicle); } // 0x632A689BF42301B1 0xCCF54912 b323
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE1720, vehicle); } // 0x8879EE09268305D5 0x59060F75 b323
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xDE1770, vehicle); } // 0x1C8A4C2C19E68EEC 0x61F7650D b323
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xDE17D0, vehicle); } // 0xAEA8FD591FAD4106 0x63022C58 b323
	static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(Vehicle vehicle) { return invoke<int>(0xDE1840, vehicle); } // 0x42BC05C27A946054 0xA3F44390 b323
	static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE1890, vehicle); } // 0xAB8E2EDA0C0A5883 0x8DEA18C8 b323
	static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xDE18E0, vehicle, speed); } // 0x6683AB880E427778 0x684E26E4 b323
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Vehicle vehicle, int recording, const char* script, float speed, int drivingStyle) { invoke<Void>(0xDE1940, vehicle, recording, script, speed, drivingStyle); } // 0x29DE5FA52D00428C 0x8DE8E24E b323
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { invoke<Void>(0xDE1960, vehicle, time); } // 0x9438F7AD68771A20 0xCF3EFA4B b323
	static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int drivingStyle) { invoke<Void>(0xDE19C0, vehicle, drivingStyle); } // 0xA549C3B37EA28131 0xB536CCD7 b323
	static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Vehicle vehicle, int time, int drivingStyle, BOOL p3) { invoke<Void>(0xDE1A10, vehicle, time, drivingStyle, p3); } // 0x6E63860BBB190730 0x0C8ABAA4 b323
	static void SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0xDE1A90, vehicle, x, y, z, p4); } // 0x5845066D8A1EA7F7 0x943A58EB b323
	static void SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xDE1AB0, vehicle, x, y, z); } // 0x796A877E459B99EA 0x5C9F477C b323
	static void SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xDE1B10, vehicle, x, y, z); } // 0xFAF2A78061FD9EF4 0xCD83C393 b323
	static void SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE1B70, vehicle, p1); } // 0x063AE2B2CC273588 0x2EF8435C b323
	static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE1C20, vehicle, p1); } // 0x786A4EB67B01BF0B 0xA85207B5 b323
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0xDE1CA0, p0, p1, p2, p3, p4, p5, p6); } // 0x2FA9923062DD396C 0xC8B789AD b323
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0xDE1D50, model, suppressed); } // 0x0FC2D89AC25A5814 0x42A08C9B b323
	static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xDE1D70, x, y, z, radius, modelHash, flags); } // 0x386F6CE5BAF6091C 0x57216D03 b323
	static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xDE1DF0, p0, p1, p2, p3, p4, p5, p6); } // 0xC5574E0AEB86BA68 0xDCADEB66 b323
	static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xDE1E70, p0, p1, p2, p3, p4, p5, p6); } // 0xB50807EABE20A8DC 0xD6343F6B b323
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xDE1EF0, x, y, z, radius, modelHash, flags); } // 0xF73EB622C4F1689B 0xD7E26B2C b323
	static Vehicle GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Vehicle>(0xDE1F20, train, trailerNumber); } // 0x08AAFD0814722BC3 0x2544E7A6 b323
	static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0xDE1F90, train); } // 0x5B76B14AE875C795 0x86C9497D b323
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0xDE2010, train, p1); } // 0xBBE7648349B49BE8 0x19808560 b323
	static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0xDE2090, train, x, y, z); } // 0x591CA673AA6AB736 0xD6D70803 b323
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xDE2140, model); } // 0x45A9187928F4B9E3 0x10F6085C b323
	static BOOL IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0xDE21C0, model); } // 0x9537097412CF75FE b323
	static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0xDE2240, model); } // 0xA0948AB42D7BA0DE 0x3B3907BB b323
	static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xDE22C0, model); } // 0xDCE4334788AF94EA 0x8AF7F568 b323
	static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0xDE2340, model); } // 0x7F6DB52EEFC96DF8 0x60E4C22F b323
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0xDE23C0, model); } // 0xAB935175B22E822B 0xF87DCFFD b323
	static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0xDE2440, model); } // 0xB50C0B0CEDC6CE84 0x7E702CDD b323
	static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0xDE24C0, model); } // 0xBF94DD42F63BDED2 0x328E6FF5 b323
	static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0xDE2540, model); } // 0x39DAC362EE65FA28 0xC1625277 b323
	static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0xDE25C0, vehicle); } // 0xA178472EBB8AE60D 0x033A9408 b323
	static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xDE25E0, vehicle, speed); } // 0xFD280B4D7F3ABC4D 0x5C7D4EA9 b323
	static void FORCE_SUB_THROTTLE_FOR_TIME(Vehicle vehicle, float p1, float p2) { invoke<Void>(0xDE25F0, vehicle, p1, p2); } // 0x99CAD8E7AFDB60FA 0x1128A45B b323
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xDE2680, vehicle, state); } // 0x3750146A28097A82 0x64B70B1D b323
	static void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE2730, vehicle, p1); } // 0xDBC631F109350B8C 0x486C1280 b323
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0xDE2750, vehicle, state); } // 0x4C7028F78FFD3681 0xC5D94017 b323
	static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE2800, vehicle, toggle); } // 0x1AA8A837D2169D94 0x009AB49E b323
	static void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE28B0, vehicle, p1); } // 0x2311DD7159F00582 0x758C5E2E b323
	static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0xDE2960, vehicle); } // 0x8F17BC8BA08DA62B 0xFD15C065 b323
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0xDE29B0, vehicle, dirtLevel); } // 0x79D3B596FE44EE8B 0x2B39128B b323
	static BOOL GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(Vehicle vehicle) { return invoke<BOOL>(0xDE2A20, vehicle); } // 0xBCDC5017D3CE1E9E 0xDAC523BC b323
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0xDE2A80, vehicle, doorId); } // 0x3E933CFF7B111C22 0xC2385B6F b323
	static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL disableAutoStart) { invoke<Void>(0xDE2B00, vehicle, value, instantly, disableAutoStart); } // 0x2497C4717C8B881E 0x7FBC86F1 b323
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE2BB0, vehicle, toggle); } // 0x8ABA6AF54B942B95 0x48D02A4E b323
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE2CA0, vehicle, toggle); } // 0x5AFEEDD9BB2899D7 0xEFC01CA9 b323
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorId, int speed, float angle) { invoke<Void>(0xDE2D50, vehicle, doorId, speed, angle); } // 0xF2BFA0430F0A0FCB 0x572DD360 b323
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xDE2D70, vehicle, doorId, p2, p3, p4); } // 0xA5A9653A8D2CAF48 0x4EB7BBFC b323
	static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int doorId) { return invoke<float>(0xDE2DA0, vehicle, doorId); } // 0xFE3F9C29F7B32BD5 0x0E399C26 b323
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorId, BOOL closeInstantly) { invoke<Void>(0xDE2E30, vehicle, doorId, closeInstantly); } // 0x93D9BD300D7789E5 0x142606BD b323
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId, BOOL deleteDoor) { invoke<Void>(0xDE2E50, vehicle, doorId, deleteDoor); } // 0xD4D4F6A4AB575A33 0x8147FEA7 b323
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE2E70, vehicle, toggle); } // 0x59BF8C3D52C92F66 0x90A810D1 b323
	static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0xDE2EE0, vehicle); } // 0x8AC862B0B32C5B80 0xDB817403 b323
	static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xDE2F40, vehicle); } // 0x9F243D3919F442FE 0x9CDBA8DE b323
	static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0xDE2FA0, vehicle); } // 0x3B963160CD65D41E 0xF2442EE2 b323
	static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { invoke<Void>(0xDE3010, vehicle, colorCombination); } // 0x33E8CD3322E2FE31 0xA557AEAD b323
	static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0xDE30E0, vehicle); } // 0x6A842D197F845D56 0x77AC1B4C b323
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE31C0, vehicle, toggle); } // 0x31B927BBC44156CD 0x14413319 b323
	static void SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3270, vehicle, toggle); } // 0xBE5C1255A1830FF5 0xA6D8D7A5 b323
	static void SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE3320, vehicle, p1); } // 0x9BECD4B9FEF3F8A6 0xACAB8FF3 b323
	static void SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE33E0, vehicle, p1); } // 0x88BC673CA9E0AE99 0xF0E5C41D b323
	static void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE34A0, vehicle, p1); } // 0xE851E480B814D4BA 0x2F98B4B7 b323
	static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* successIndicator) { invoke<Void>(0xDE3570, p0, modelHash, successIndicator); } // 0x055BF0AC0C34F4FD 0xE2C45631 b323
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0xDE3580, vehicle); } // 0x25BC98A59C2EA962 0x0D72CEF2 b323
	static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0xDE35E0, veh, doorID); } // 0xB8E181E559464527 0x4999E3C3 b323
	static void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle vehicle, int doorId, BOOL isBreakable) { invoke<Void>(0xDE3680, vehicle, doorId, isBreakable); } // 0x2FA133A4A9D37ED8 0x065B92B3 b323
	static BOOL IS_VEHICLE_BUMPER_BOUNCING(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0xDE3710, vehicle, frontBumper); } // 0x27B926779DEB502D 0xB3A2CC4F b323
	static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0xDE37A0, vehicle, frontBumper); } // 0x468056A6BB6F3846 0xAF25C027 b323
	static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0xDE37D0, x1, x2, y1, y2, z1, z2); } // 0x7EEF65D5F153E26A 0xFB16C6D1 b323
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xDE3880, vehicle); } // 0xB104CD1BABF302E2 0x10089F8E b323
	static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0xDE38E0, vehicle); } // 0x28D37D4F71AC5C58 0xE0B35187 b323
	static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0xDE3940, train, toggle); } // 0x317B11A312DF5534 0x899D9092 b323
	static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0xDE3A20, vehicle, pearlescentColor, wheelColor); } // 0x2036F561ADD12E33 0x515DB2A0 b323
	static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0xDE3AC0, vehicle, pearlescentColor, wheelColor); } // 0x3BC4245933A166F7 0x80E4659B b323
	static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0xDE3B30); } // 0x0F87E938BDF29D66 0x17A0BCE5 b323
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0xDE3B40, vehicle); } // 0x115722B1B9C14C1C 0x17469AA1 b323
	static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0xDE3BB0, vehicle); } // 0x953DA1E1B12C0491 0xDD2920C8 b323
	static void SET_VEHICLE_CAN_LEAK_OIL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3C00, vehicle, toggle); } // 0x51BB2D88D31A914B 0x88F0F7E7 b323
	static void SET_VEHICLE_CAN_LEAK_PETROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3CD0, vehicle, toggle); } // 0x192547247864DFDD 0x90D6EE57 b323
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3DA0, vehicle, toggle); } // 0x465BF26AB9684352 0xC40192B5 b323
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3E60, vehicle, toggle); } // 0x37C8252A7C92D017 0xAD3E05F2 b323
	static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3F20, vehicle, toggle); } // 0x91A0BD635321F145 0x1784BA1A b323
	static void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE3FE0, vehicle, toggle); } // 0xC50CE861B55EAB8B 0x40C323AE b323
	static void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE40A0, vehicle, toggle); } // 0x6EBFB22D646FFC18 0x847F1304 b323
	static void SET_DISABLE_PRETEND_OCCUPANTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE4150, vehicle, toggle); } // 0x25367DE49D64CF16 0xCBD98BA1 b323
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xDE4210, x1, y1, z1, x2, y2, z2, p6); } // 0x46A1E1A299EC4BBA 0x42CC15E0 b323
	static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0xDE4240, vehicle, value); } // 0x42A8EC77D5150CBE 0x7357C1EB b323
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xDE4290, vehicle, extraId); } // 0xD2E6822DBFD6C8BD 0x042098B5 b323
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0xDE4300, vehicle, extraId, disable); } // 0x7EE3A3C5E4A40CC9 0x642D065C b323
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xDE4320, vehicle, extraId); } // 0x1262D55792428154 0x409411CC b323
	static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE43A0, vehicle, p1); } // 0xF39C4F538B5124C2 0xC87B6A51 b323
	static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0xDE4410, vehicle, instantlyLower); } // 0xDED51F703D0FA83D 0xC5F72EAE b323
	static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0xDE4460, vehicle, instantlyRaise); } // 0x8F5FB35D7E88FC70 0xA4E4CBA3 b323
	static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0xDE44B0, vehicle); } // 0xF8C397922FC03F41 0x1B09714D b323
	static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xDE4510, vehicle, p1); } // 0x52F357A30698BCCE 0x6EF54490 b323
	static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0xDE4590, vehicle); } // 0x2959F696AE390A99 0x69200FA4 b323
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL focusOnModel) { invoke<Void>(0xDE4630, vehicle, xOffset, yOffset, zOffset, damage, radius, focusOnModel); } // 0xA1DD317EA8FD4F29 0x21B458B2 b323
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xDE4660, vehicle); } // 0xC45D23BAF168AAB8 0x8880038A b323
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xDE46C0, vehicle, health); } // 0x45F6D8EEF34ABEF1 0x1B760FB5 b323
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0xDE4780, vehicle); } // 0x7D5DABE888D2D074 0xE41595CE b323
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xDE47E0, vehicle, health); } // 0x70DB57649FA8D0D8 0x660A3692 b323
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int ms) { return invoke<BOOL>(0xDE4830, vehicle, p1, ms); } // 0x679BE1DAF71DA874 0x2FCF58C1 b323
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0xDE48C0, vehicle, nullAttributes); } // 0xD7591B0065AFAA7A 0xEF2A6016 b323
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0xDE4910, vehicle, isOnFireCheck); } // 0x4C241E39B23DF959 0x41A7267A b323
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0xDE49A0, vehicle, owned); } // 0x2B5F9D2AF1F1722D 0xB4D3DBFB b323
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE4A50, vehicle, toggle); } // 0xFBA550EA44404EE6 0xD8260751 b323
	static void SET_VEHICLE_BLIP_THROTTLE_RANDOMLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE4B00, vehicle, p1); } // 0x9F3F689B814F2599 b323
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0xDE4BB0, vehicle, duration, mode, forever); } // 0x9C8C6504B5B63D2C 0x0DF5ADB3 b323
	static void SET_VEHICLE_IN_CAR_MOD_SHOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE4C80, vehicle, toggle); } // 0x9D44FCCE98450843 0x968E5770 b323
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE4CF0, vehicle, toggle); } // 0x92F0CF722BC4202F 0x0D1CBC65 b323
	static const char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xDE4DA0, modelHash); } // 0xB215AAC32D25D019 0xEC86DF39 b323
	static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xDE4E20, vehicle, offsetX, offsetY, offsetZ); } // 0x4EC6CFBC7B2E9536 0xABF02075 b323
	static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0xDE4EF0, vehicle, livery); } // 0x60BF608F1B8CD1B6 0x7AD87059 b323
	static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0xDE4F50, vehicle); } // 0x2BB9230590DA5E8A 0xEC82A51D b323
	static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0xDE4FB0, vehicle); } // 0x87B63E25A529D526 0xFB0CA947 b323
	static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0xDE5010, vehicle, windowIndex); } // 0x46E571A0E20D01F1 0xAC4EF23D b323
	static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0xDE5080, vehicle); } // 0x11D862A3E977A9EF 0xBB619744 b323
	static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0xDE50E0, vehicle); } // 0x2D34FC3BC4ADB780 0x648E685A b323
	static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE5150, vehicle, toggle); } // 0x21D2E5662C1F6FED 0xD5FFE779 b323
	static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xDE51D0, vehicle, p1, p2, p3); } // 0xBC74B4BE25EB6C8A 0xF4E4C439 b323
	static float GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xDE5280, vehicle); } // 0xE4CB7541F413D2C5 0xF01E2AAB b323
	static float GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xDE5300, vehicle); } // 0xAE8CE82A4219AC8C 0xA41BC13D b323
	static float GET_HELI_TAIL_BOOM_HEALTH(Vehicle vehicle) { return invoke<float>(0xDE5380, vehicle); } // 0xAC51915D27E4A5F7 0x8A68388F b323
	static BOOL SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(Vehicle vehicle, BOOL toggle) { return invoke<BOOL>(0xDE5400, vehicle, toggle); } // 0x3EC8BF18AA453FE9 0x2916D69B b323
	static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, const char* name) { invoke<Void>(0xDE5460, vehicle, name); } // 0xBFDF984E2C22B94F 0xA712FF5C b323
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE5470, vehicle, toggle); } // 0x71B0892EC081D60A 0x38CC692B b323
	static void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE5520, vehicle, toggle); } // 0x3441CAD2F2231923 0xC306A9A3 b323
	static void SET_VEHICLE_DISABLE_TOWING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE55D0, vehicle, toggle); } // 0x2B6747FAA9DB9D6B 0x95A9ACCB b323
	static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0xDE5680, vehicle, state); } // 0xCFC8BE9A5E1FE575 0x24F873FB b323
	static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0xDE5700, vehicle); } // 0x9B0F3DCA3DB0F4CD 0xA6F02670 b323
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xDE5790, x, y, z, radius); } // 0x61E1DD6125A3EEE6 0x2867A834 b323
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xDE5890, vehicle); } // 0xA6E9FDCB2C76785E 0x9DA21956 b323
	static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xDE58D0, vehicle); } // 0x00689CDE5F7C6787 0x382BE070 b323
	static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0xDE5910, vehicle); } // 0x1F25887F3C104278 0x55D41928 b323
	static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0xDE5970, vehicleHash, vehicleAsset); } // 0x81A15811460FAB3A 0x902B4F06 b323
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0xDE5A20, vehicleAsset); } // 0x1BBE0523B8DB9A21 0x8DAAC3CB b323
	static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0xDE5A50, vehicleAsset); } // 0xACE699C71AB9DEB5 0x9620E9C6 b323
	static void SET_VEHICLE_TOW_TRUCK_ARM_POSITION(Vehicle vehicle, float position) { invoke<Void>(0xDE5AE0, vehicle, position); } // 0xFE54B92A344583CA 0x88236E22 b323
	static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0xDE5B80, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); } // 0x29A16F8D621C4508 0x8151571A b323
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xDE5BA0, towTruck, vehicle); } // 0xC2DB6B6708350ED8 0xC666CF33 b323
	static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0xDE5BB0, vehicle); } // 0xD0E9CE05A1E68CD8 0x3BF93651 b323
	static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0xDE5BE0, towTruck, vehicle); } // 0x146DF9EC4C4B9FD4 0x9699CFDC b323
	static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0xDE5C10, towTruck); } // 0xEFEA18DCF10F8F75 0x11EC7844 b323
	static Entity SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Entity>(0xDE5CC0, vehicle, p1, p2); } // 0x8BA6F76BC53A1493 0x4273A8D3 b323
	static void SET_VEHICLE_BULLDOZER_ARM_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0xDE5D90, vehicle, position, p2); } // 0xF8EBCCC96ADB9FB7 0xED23C8A3 b323
	static void SET_VEHICLE_TANK_TURRET_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0xDE5DB0, vehicle, position, p2); } // 0x56B94C6D7127DFBA 0xB1A52EF7 b323
	static void SET_VEHICLE_TURRET_SPEED_THIS_FRAME(Vehicle vehicle, float speed) { invoke<Void>(0xDE5DD0, vehicle, speed); } // 0x1093408B4B9D1146 0xF30C566F b323
	static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle vehicle, float angleRatio) { invoke<Void>(0xDE5DE0, vehicle, angleRatio); } // 0x30D779DE7C4F6DD3 0xA7DF64D7 b323
	static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(Vehicle vehicle, float angle) { invoke<Void>(0xDE5E50, vehicle, angle); } // 0x9AA47FFF660CB932 0xDD7936F5 b323
	static BOOL GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0xDE5EC0, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); } // 0xA4822F1CF23F4810 0x34E02FCD b323
	static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE5FB0, vehicle, toggle); } // 0xFB8794444A7D60FB 0x9B6EF0EA b323
	static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0xDE6010, vehicle); } // 0x1297A88E081430EB 0x6632BC12 b323
	static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE6080, vehicle, toggle); } // 0x222FF6A823D122E2 0x90D3A0D9 b323
	static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0xDE60F0, vehicle, turnSignal, toggle); } // 0xB5D45264751B7DF0 0xA6073B5D b323
	static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE6210, vehicle, toggle); } // 0x92B35082E0B42F66 0x6D9BA11E b323
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE62C0, vehicle, toggle); } // 0x684785568EF26A22 0xBA729A25 b323
	static void INSTANTLY_FILL_VEHICLE_POPULATION() { invoke<Void>(0xDE63A0); } // 0x48ADC8A773564670 0x37BC6ACB b323
	static BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke<BOOL>(0xDE63B0); } // 0x91D6DD290888CBAB 0x71D898EF b323
	static void NETWORK_ENABLE_EMPTY_CROWDING_VEHICLES_REMOVAL(BOOL toggle) { invoke<Void>(0xDE63D0, toggle); } // 0x51DB102F4A3BA5E0 0x0B0523B0 b323
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0xDE63F0, vehicle, trailer); } // 0x1CDD6BADC297830D 0xAE84D758 b323
	static void SET_VEHICLE_USES_LARGE_REAR_RAMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE6420, vehicle, toggle); } // 0xCAC66558B944DA67 0x0B200CE2 b323
	static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE64E0, vehicle, toggle); } // 0x09606148B6C71DEF 0x3FAC3CD4 b323
	static void SET_CONVERTIBLE_ROOF_LATCH_STATE(Vehicle vehicle, BOOL state) { invoke<Void>(0xDE65B0, vehicle, state); } // 0x1A78AD3D8240536F 0x0858678C b323
	static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0xDE6610, vehicle); } // 0x53AF99BAA671CA47 0x7D1A0616 b323
	static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0xDE6660, vehicle); } // 0xAD7E85FC227197C4 0x03B926F6 b323
	static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0xDE6710, vehicle); } // 0xA132FB5370554DB0 0x7E5A1587 b323
	static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0xDE67C0, vehicle); } // 0x5DD35C8D074E57AE 0x00478321 b323
	static float GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Hash modelHash) { return invoke<float>(0xDE67F0, modelHash); } // 0xF417C2502FFFED43 0x8F291C4A b323
	static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0xDE68A0, modelHash); } // 0xDC53FD41B4ED944C 0x7EF02883 b323
	static float GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(Hash modelHash) { return invoke<float>(0xDE6970, modelHash); } // 0xBFBA3BA79CFF7EBF 0xF3A7293F b323
	static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0xDE6A50, modelHash); } // 0x539DE94D44FDFD0D 0x7F985597 b323
	static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0xDE6AE0, modelHash); } // 0x8C044C5C84505B6A 0x29CB3537 b323
	static float GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(Hash modelHash) { return invoke<float>(0xDE6BA0, modelHash); } // 0x53409B5163D5B846 0x37FBA7BC b323
	static float GET_FLYING_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0xDE6C80, modelHash); } // 0xC6AD107DDC9054CC 0x95BB67EB b323
	static float GET_BOAT_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0xDE6CB0, modelHash); } // 0x5AA3F878A178C4FC 0x87C5D271 b323
	static float GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(int vehicleClass) { return invoke<float>(0xDE6D70, vehicleClass); } // 0x00C09F246ABEDD82 0xCE67162C b323
	static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0xDE6DA0, vehicleClass); } // 0xDBC86D85C5059461 0x5B4FDC16 b323
	static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0xDE6DE0, vehicleClass); } // 0x4F930AD022D6DE3B 0x45F2BD83 b323
	static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0xDE6E20, vehicleClass); } // 0x2F83E7E45D9EA7AE 0x3E220A9B b323
	static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0xDE6E60, vehicleClass); } // 0x4BF54C16EC8FEC03 0xD08CC1A5 b323
	static int ADD_ROAD_NODE_SPEED_ZONE(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0xDE6EA0, x, y, z, radius, speed, p5); } // 0x2CE544C68FB812A0 0xD6685803 b323
	static BOOL REMOVE_ROAD_NODE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0xDE6F50, speedzone); } // 0x1033371FC8E842A7 0x0C0332A6 b323
	static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xDE6F90, vehicle); } // 0x87E7F24270732CB1 0x6574041D b323
	static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xDE7010, vehicle); } // 0x3556041742A0DC74 0xF8EC5751 b323
	static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xDE7090, vehicle); } // 0xC0F97FCE55094987 0xADAF3513 b323
	static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0xDE7160, heli, toggle, canBeUsedByAI); } // 0x14E85C5EE7A4D542 0xE2C0DD8A b323
	static BOOL IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter) { return invoke<BOOL>(0xDE7180, ped, vehicle, seatIndex, side, onEnter); } // 0x639431E895B9AA57 0xAB0E79EB b323
	static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xDE71C0, vehicle, seatIndex); } // 0x30785D90C956BF35 0xB3EB01ED b323
	static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0xDE7270, vehicle); } // 0x33F2E3FE70EAAE1D 0xE4903AA0 b323
	static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0xDE72D0, vehicle, modKit); } // 0x1F2AA07F00B3217A 0xB8132158 b323
	static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0xDE7340, vehicle); } // 0x6325D1A044AE510D 0x9FE60927 b323
	static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0xDE73A0, vehicle); } // 0xFC058F5121E54C32 0xE5F76765 b323
	static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0xDE7420, vehicle); } // 0xB3ED1BFB4BE636DC 0xDA58D7AE b323
	static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0xDE7480, vehicle, WheelType); } // 0x487EB21CC7295BA1 0x64BDAAAD b323
	static int GET_NUM_MOD_COLORS(int paintType, BOOL p1) { return invoke<int>(0xDE74F0, paintType, p1); } // 0xA551BE18C11A476D 0x73722CD9 b323
	static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int pearlescentColor) { invoke<Void>(0xDE7570, vehicle, paintType, color, pearlescentColor); } // 0x43FEB945EE7F85B8 0xCBE9A54D b323
	static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0xDE7600, vehicle, paintType, color); } // 0x816562BADFDEC83E 0xC32613C2 b323
	static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* pearlescentColor) { invoke<Void>(0xDE7690, vehicle, paintType, color, pearlescentColor); } // 0xE8D65CA700C9A693 0xE625510A b323
	static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0xDE7740, vehicle, paintType, color); } // 0x81592BE4E3878728 0x9B76BB8E b323
	static const char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<const char*>(0xDE77F0, vehicle, p1); } // 0xB45085B721EFD38C 0x9A0840FD b323
	static const char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<const char*>(0xDE7880, vehicle); } // 0x4967A516ED23A5A1 0x9BDC0B49 b323
	static BOOL HAVE_VEHICLE_MODS_STREAMED_IN(Vehicle vehicle) { return invoke<BOOL>(0xDE7900, vehicle); } // 0x9A83F5F9963775EF 0x112D637A b323
	static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0xDE7960, vehicle, modType, modIndex, customTires); } // 0x6AF0636DDEDCB6DD 0xB52E5ED5 b323
	static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0xDE7A30, vehicle, modType); } // 0x772960298DA26FDB 0xDC520069 b323
	static int GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<int>(0xDE7AF0, vehicle, modType); } // 0xB3924ECD70E095DC 0xC1B92003 b323
	static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0xDE7BA0, vehicle, modType); } // 0xE38E9162A2500646 0x8A814FF9 b323
	static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0xDE7C20, vehicle, modType); } // 0x92D619E420858204 0x9CC80A43 b323
	static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0xDE7CE0, vehicle, modType, toggle); } // 0x2A1F4F37F95BAD08 0xD095F811 b323
	static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0xDE7D60, vehicle, modType); } // 0x84B233A8C8FC8AE7 0xF0E1689F b323
	static const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<const char*>(0xDE7DD0, vehicle, modType, modValue); } // 0x8935624F8C5592CC 0x0BA39CA7 b323
	static const char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<const char*>(0xDE7E60, vehicle, modType); } // 0x51F0FEB9F6AE98C0 0x5E113483 b323
	static const char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<const char*>(0xDE7EE0, vehicle, liveryIndex); } // 0xB4C7A93837C91A1F 0xED80B5BE b323
	static int GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<int>(0xDE7F60, vehicle, modType, modIndex); } // 0x90A38E9838E0A8C1 0x73AE5505 b323
	static Hash GET_VEHICLE_MOD_IDENTIFIER_HASH(Vehicle vehicle, int modType, int modIndex) { return invoke<Hash>(0xDE8000, vehicle, modType, modIndex); } // 0x4593CF82AA179706 0x94850968 b323
	static void PRELOAD_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex) { invoke<Void>(0xDE80A0, vehicle, modType, modIndex); } // 0x758F49C24925568A 0x6EA5F4A8 b323
	static BOOL HAS_PRELOAD_MODS_FINISHED(Vehicle vehicle) { return invoke<BOOL>(0xDE8130, vehicle); } // 0x06F43E5175EB6D96 0xA8A0D246 b323
	static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { invoke<Void>(0xDE8190, vehicle); } // 0x445D79F995508307 0xD442521F b323
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xDE81E0, vehicle, r, g, b); } // 0xB5BA80F839791C0F 0x3EDEC0DB b323
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xDE8250, vehicle, r, g, b); } // 0xB635392A4938B3C3 0x75280015 b323
	static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0xDE82C0, vehicle, tint); } // 0x57C51E6BAD752696 0x497C8787 b323
	static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0xDE8310, vehicle); } // 0x0EE21293DAD47C95 0x13D53892 b323
	static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0xDE8380); } // 0x9D1224004B3A6707 0x625C7B66 b323
	static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xDE83A0, vehicle, r, g, b); } // 0xF3CC740D36221548 0x03BC8F1B b323
	static int GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(Vehicle vehicle) { return invoke<int>(0xDE8480, vehicle); } // 0xEEBFC7A7EFDC35B4 0x749DEEA2 b323
	static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xDE84A0, vehicle); } // 0xE495D1EF4C91FD20 0x7F8C20DD b323
	static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xDE8500, vehicle); } // 0x5EF77C9ADD3B11A3 0xA0777943 b323
	static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xDE8560, vehicle); } // 0xA7ECB73355EB2F20 0xF178390B b323
	static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { invoke<Void>(0xDE85C0, vehicle, value); } // 0x93A3996368C94158 0xE943B09C b323
	static void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE8620, vehicle, toggle); } // 0x1CF38D529D7441D9 0xDF594D8D b323
	static void SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE86E0, vehicle, p1); } // 0x1F9FB66F3A3842D2 0x4D840FC4 b323
	static int ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0xDE8790, p0, p1, p2, p3, p4, p5, p6); } // 0x54B0F614960F4A5F 0x5AB26C2B b323
	static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(int p0) { invoke<Void>(0xDE8830, p0); } // 0xE30524E1871F481D 0xEF05F807 b323
	static BOOL IS_ANY_PED_RAPPELLING_FROM_HELI(Vehicle vehicle) { return invoke<BOOL>(0xDE8870, vehicle); } // 0x291E373D483E7EE7 0xD656E7E5 b323
	static void SET_VEHICLE_CHEAT_POWER_INCREASE(Vehicle vehicle, float value) { invoke<Void>(0xDE88A0, vehicle, value); } // 0xB59E4BD37AE292DB 0x642DA5AA b323
	static void SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Any p0, BOOL p1) { invoke<Void>(0xDE88F0, p0, p1); } // 0x0AD9E8F87FF7C16F 0x04F5546C b323
	static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xDE89A0, vehicle, state); } // 0xF7EC25A3EBEEC726 0xDAA388E8 b323
	static void SWING_BOAT_BOOM_TO_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xDE8A50, vehicle, ratio); } // 0xF488C566413B4232 0xA25CCB8C b323
	static void SWING_BOAT_BOOM_FREELY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE8AF0, vehicle, toggle); } // 0xC1F981A6F74F0C23 0x00966934 b323
	static void ALLOW_BOAT_BOOM_TO_ANIMATE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE8B90, vehicle, toggle); } // 0x0F3B4D4E43177236 0x113DF5FD b323
	static float GET_BOAT_BOOM_POSITION_RATIO(Vehicle vehicle) { return invoke<float>(0xDE8C30, vehicle); } // 0x6636C535F6CC2725 0x7C8D6464 b323
	static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xDE8CD0, vehicle, p1, p2); } // 0x23428FC53C60919C 0x7E84C45C b323
	static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0xDE8D50, vehicle); } // 0xAE31E7DF9B5B132E 0x7DC6D022 b323
	static void SET_VEHICLE_USE_ALTERNATE_HANDLING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE8DB0, vehicle, toggle); } // 0x1D97D1E3A70A649F 0xA03E42DF b323
	static void SET_BIKE_ON_STAND(Vehicle vehicle, float x, float y) { invoke<Void>(0xDE8E80, vehicle, x, y); } // 0x9CFA4896C3A53CBB 0x15D40761 b323
	static void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE8F00, vehicle, p1); } // 0xAB04325045427AAE 0x1984F88D b323
	static void LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle) { invoke<Void>(0xDE8FB0, vehicle); } // 0xCFD778E7904C255E 0x3FBE904F b323
	static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE9000, vehicle); } // 0xACFB2463CC22BED2 0xD1B71A25 b323
	static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0xDE9050); } // 0xB2D06FAEDE65B577 0xFEB0C0C8 b323
	static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE9080, vehicle, toggle); } // 0x02398B627547189C 0x08CD58F9 b323
	static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { invoke<Void>(0xDE9130, plane, height); } // 0xB893215D8D4C015B 0x8C4B63E2 b323
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xDE9140, vehicle, multiplier); } // 0x93AE6A61BE015BF1 0x569E5AE3 b323
	static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE9190, vehicle, toggle); } // 0x428BACCDF5E26EAD 0x1604C2F5 b323
	static int GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(Vehicle vehicle) { return invoke<int>(0xDE9240, vehicle); } // 0x42A4BEB35D372407 0x8CDB0C09 b323
	static int GET_VEHICLE_NUM_OF_BROKEN_LOOSEN_PARTS(Vehicle vehicle) { return invoke<int>(0xDE92A0, vehicle); } // 0x2C8CBFE1EA5FC631 0xABC99E21 b323
	static void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Any p0, BOOL p1) { invoke<Void>(0xDE9300, p0, p1); } // 0x4D9D109F63FEE1D4 0x900C878C b323
	static void SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE93B0, vehicle, toggle); } // 0x279D50DE5652D935 0xB3200F72 b323
	static void COPY_VEHICLE_DAMAGES(Vehicle sourceVehicle, Vehicle targetVehicle) { invoke<Void>(0xDE9460, sourceVehicle, targetVehicle); } // 0xE44A982368A4AF23 0xBAE491C7 b323
	static void DISABLE_VEHICLE_EXPLOSION_BREAK_OFF_PARTS() { invoke<Void>(0xDE94F0); } // 0xF25E02CB9C5818F8 0xF0E59BC1 b323
	static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(float distance) { invoke<Void>(0xDE9500, distance); } // 0xBC3CCA5844452B06 0x929801C6 b323
	static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0xDE9520, driver, entity, xTarget, yTarget, zTarget); } // 0x74CD9A9327A282EA 0x2343FFDF b323
	static BOOL GET_VEHICLE_LOCK_ON_TARGET(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0xDE9540, vehicle, entity); } // 0x8F5EBAB1F260CFCE 0x4A557117 b323
	static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE95B0, vehicle, toggle); } // 0x97CE68CB032583F0 0xE0FC6A32 b323
	static void SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(Vehicle vehicle, float p1) { invoke<Void>(0xDE9660, vehicle, p1); } // 0x182F266C2D9E2BEB 0x7D0DE7EA b323
	static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0xDE96C0, vehicle); } // 0x9CCC9525BF2408E0 0x65CA9286 b323
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0xDE9720, vehicle); } // 0x64473AEFDCF47DCA 0x78122DC1 b323
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xDE9760, vehicle); } // 0xAA0A52D24FB98293 0x7E0D6056 b323
	static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE97D0, vehicle, toggle); } // 0x89F149B6131E57DA 0x07B2A6DC b323
	static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL toggle) { invoke<Void>(0xDE9830, toggle); } // 0xE6C0C80B8C867537 0xD2B8ACBD b323
	static float GET_VEHICLE_CURRENT_TIME_IN_SLIP_STREAM(Vehicle vehicle) { return invoke<float>(0xDE9850, vehicle); } // 0x36492C2F0D134C56 0xA4A75FCF b323
	static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE98A0, vehicle, toggle); } // 0x06582AFF74894C75 0x50F89338 b323
	static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE99E0, vehicle, toggle); } // 0xDFFCEF48E511DB48 0xEB7D7C27 b323
	static BOOL IS_VEHICLE_SPRAYABLE(Vehicle vehicle) { return invoke<BOOL>(0xDE9A90, vehicle); } // 0x8D474C8FAEFF6CDE 0x5EB00A6A b323
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE9AF0, vehicle, toggle); } // 0x983765856F2564F9 0x081DAC12 b323
	static void DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle, int p1, int p2) { invoke<Void>(0xDE9BC0, vehicle, p1, p2); } // 0xF0E4BA16D1DB546C 0x5BD8D82D b323
	static void ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle) { invoke<Void>(0xDE9C40, vehicle); } // 0xF87D9F2301F7D206 0x450AD03A b323
	static BOOL IS_PLANE_LANDING_GEAR_INTACT(Vehicle plane) { return invoke<BOOL>(0xDE9C80, plane); } // 0x4198AB0022B15F87 0xBD085DCA b323
	static BOOL ARE_PLANE_PROPELLERS_INTACT(Vehicle plane) { return invoke<BOOL>(0xDE9D00, plane); } // 0x755D6D5267CBBD7E 0xABBDD5C6 b323
	static void SET_VEHICLE_CAN_DEFORM_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE9D70, vehicle, toggle); } // 0x0CDDA42F9E360CA6 0x9B581DE7 b323
	static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0xDE9E30, vehicle); } // 0x4AF9BD80EEBEB453 0x20B61DDE b323
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0xDE9E90, vehicle, isStolen); } // 0x67B2C79AA7FF5738 0x70912E42 b323
	static void SET_PLANE_TURBULENCE_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xDE9F40, vehicle, multiplier); } // 0xAD2D28A1AFDFF131 0xED159AE6 b323
	static BOOL ARE_WINGS_OF_PLANE_INTACT(Vehicle plane) { return invoke<BOOL>(0xDE9FC0, plane); } // 0x5991A01434CE9677 0xAF8CB3DF b323
	static void ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(Vehicle vehicle) { invoke<Void>(0xDEA050, vehicle); } // 0xB264C4D2F2B0A78B 0x45F72495 b323
	static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0xDEA060, vehicle, cargobob); } // 0x0E21D3DF1051399D 0x83D3D331 b323
	static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0xDEA070, vehicle); } // 0xADF7BE450512C12F 0x50E0EABE b323
	static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0xDEA0A0, cargobob, vehicleAttached); } // 0xD40148F22E81A1D9 0x5DEEC76C b323
	static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0xDEA0D0, cargobob); } // 0x873B82D42AC2B9E5 0x301A1D24 b323
	static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicle, int p2, float x, float y, float z) { invoke<Void>(0xDEA0F0, cargobob, vehicle, p2, x, y, z); } // 0x4127F1D84E347769 0x607DC9D5 b323
	static Vector3 GET_ATTACHED_PICK_UP_HOOK_POSITION(Vehicle cargobob) { return invoke<Vector3>(0xDEA110, cargobob); } // 0xCBDB9B923CACC92D 0xE6633DCF b323
	static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0xDEA230, cargobob); } // 0x1821D91AD4B56108 0xAF769B81 b323
	static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob, int state) { invoke<Void>(0xDEA2E0, cargobob, state); } // 0x7BEB0C7A235F6F3B 0x4D3C9A99 b323
	static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob) { invoke<Void>(0xDEA2F0, cargobob); } // 0x9768CF648F54C804 0xA8211EE9 b323
	static void SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Vehicle cargobob, float length1, float length2, BOOL p3) { invoke<Void>(0xDEA350, cargobob, length1, length2, p3); } // 0x877C1EAEAC531023 0x3A8AB081 b323
	static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0xDEA370, vehicle); } // 0x25ECB9F8017D98E0 0xB2E1E1FB b323
	static void SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDEA3F0, vehicle, p1); } // 0x2C4A1590ABF43E8B 0x2EC19A8B b323
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0xDEA4B0, disabled, weaponHash, vehicle, owner); } // 0xF4FC6A6F67D8D856 0xA688B7D1 b323
	static void SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEA4D0, vehicle, toggle); } // 0xE05DD0E9707003A3 0x123E5B90 b323
	static void SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEA580, vehicle, toggle); } // 0x21115BCD6E44656A 0xEBC225C1 b323
	static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0xDEA650, vehicle); } // 0x29439776AAA00A62 0xC025338E b323
	static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xDEA6B0, modelHash); } // 0xDEDF1C8BD47C2200 0xEA469980 b323
	static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDEA720, vehicle); } // 0xBCDF8BAF56C87B6A 0xDE86447D b323
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEA770, vehicle, toggle); } // 0x300504B23BD3B711 0x5130DB1E b323
	static void SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0xDEA830, vehicle, p1); } // 0xE5810AC70602F2F5 0xB6BE07E0 b323
	static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEA8D0, vehicle, toggle); } // 0x068F64F2470F9656 0x4BB5605D b323
	static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEA940, vehicle, toggle); } // 0xB8FBC8B1330CA9B4 0x51E0064F b323
	static void SET_VEHICLE_HANDLING_OVERRIDE(Vehicle vehicle, Hash hash) { invoke<Void>(0xDEA9F0, vehicle, hash); } // 0x10655FAB9915623D b323
	static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Vehicle vehicle, int range) { invoke<Void>(0xDEAA40, vehicle, range); } // 0x79DF7E806202CE01 0xAEF9611C b323
	static void SET_VEHICLE_STEERING_BIAS_SCALAR(Any p0, float p1) { invoke<Void>(0xDEAA90, p0, p1); } // 0x9007A2F21DC108D4 0x585E49B6 b323
	static void SET_HELI_CONTROL_LAGGING_RATE_SCALAR(Vehicle helicopter, float multiplier) { invoke<Void>(0xDEAAF0, helicopter, multiplier); } // 0x6E0859B530A365CC 0x6E67FD35 b323
	static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0xDEAB70, vehicle, friction); } // 0x1837AF7C627009BA 0x32AFD42E b323
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEABC0, vehicle, toggle); } // 0xA37B9A517B133349 0x670913A4 b323
	static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0xDEAC70, vehicle, height); } // 0xA46413066687A328 0x98A10A86 b323
	static void SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEACE0, vehicle, toggle); } // 0x5E569EC46EC21CAE 0xBC649C49 b323
	static void CLEAR_VEHICLE_ROUTE_HISTORY(Vehicle vehicle) { invoke<Void>(0xDEAD30, vehicle); } // 0x6D6AF961B72728AE 0x8DD9AA0C b323
	static Vehicle DOES_VEHICLE_EXIST_WITH_DECORATOR(const char* decorator) { return invoke<Vehicle>(0xDEAD80, decorator); } // 0x956B409B984D9BF7 0x39E68EDD b323
	static void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEADB0, vehicle, toggle); } // 0x41062318F23ED854 b323
	static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped, int index) { invoke<Void>(0xDEAE60, vehicle, ped, index); } // 0xB5C51B5502E85E83 0xAA8BD440 b323
	static void DISABLE_INDIVIDUAL_PLANE_PROPELLER(Vehicle vehicle, int propeller) { invoke<Void>(0xDEAE80, vehicle, propeller); } // 0x500873A45724C863 0x004926A3 b323
	static void SET_VEHICLE_FORCE_AFTERBURNER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDEAEE0, vehicle, toggle); } // 0xB055A34527CB8FD7 0xC195803B b323
	static void SET_DISTANT_CARS_ENABLED(BOOL toggle) { invoke<Void>(0xDEAFA0, toggle); } // 0xF796359A959DF65D 0xB5CC548B b323
	static void SET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xDEAFC0, vehicle, r, g, b); } // 0x8E0A582209A62695 b323
	static void GET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xDEB080, vehicle, r, g, b); } // 0x7619EEE8C886757F b323
	static void SET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0xDEB100, vehicle, index, toggle); } // 0x2AA720E4287BF269 b323
	static BOOL GET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0xDEB1B0, vehicle, index); } // 0x8C4B92553E4766A5 b323
	static void SET_AMBIENT_VEHICLE_NEON_ENABLED(BOOL p0) { invoke<Void>(0xDEB260, p0); } // 0x35E0654F4BAD7971 b323
	static void SET_DISABLE_SUPERDUMMY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDEB280, vehicle, p1); } // 0xB088E9A47AE6EDD5 b323
	static void REQUEST_VEHICLE_DIAL(Vehicle vehicle) { invoke<Void>(0xDEB330, vehicle); } // 0xDBA3C090E3D74690 b323
	static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0xDEB380, vehicle); } // 0xF271147EB7B40F12 0x2B2FCC28 b323
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0xDEB3E0, vehicle, value); } // 0xB77D05AC8C78AADB 0x920C2517 b323
	static void GET_VEHICLE_SIZE(Vehicle vehicle, Vector3* out1, Vector3* out2) { invoke<Void>(0xDEB440, vehicle, out1, out2); } // 0xDF7E3EEB29642C38 b323
	static float GET_FAKE_SUSPENSION_LOWERING_AMOUNT(Vehicle vehicle) { return invoke<float>(0xDEB4F0, vehicle); } // 0x53952FD2BAA19F17 0xB73A1486 b323
	static void SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(float multiplier) { invoke<Void>(0xDEB560, multiplier); } // 0x84FD40F56075E816 b323
	static void SET_CAN_ADJUST_GROUND_CLEARANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDEB580, vehicle, p1); } // 0xA7DCDF4DED40A8F4 b323
}

namespace WATER
{
	static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0xDEC0D0, x, y, z, height); } // 0xF6829842C06AE524 0xD864E17C b323
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0xDEC100, x, y, z, height); } // 0x8EE6B53CE13A9794 0x262017F8 b323
	static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return invoke<BOOL>(0xDEC270, x1, y1, z1, x2, y2, z2, result); } // 0xFFA5D878809819DB 0xAA4AE00C b323
	static int TEST_PROBE_AGAINST_ALL_WATER(float x1, float y1, float z1, float x2, float y2, float z2, int flags, float* waterHeight) { return invoke<int>(0xDEC2E0, x1, y1, z1, x2, y2, z2, flags, waterHeight); } // 0x8974647ED222EA5F 0x4A962D55 b323
	static int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, int flags, float* waterHeight) { return invoke<int>(0xDEC3A0, x, y, z, flags, waterHeight); } // 0x2B3451FA1E3142E2 0x4C71D143 b323
	static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0xDEC480, x, y, radius, height); } // 0xC443FD757C3BA637 0xC49E005A b323
	static int ADD_EXTRA_CALMING_QUAD(float xLow, float yLow, float xHigh, float yHigh, float height) { return invoke<int>(0xDEC4A0, xLow, yLow, xHigh, yHigh, height); } // 0xFDBF4CDBC07E1706 0xA9419B6D b323
	static void REMOVE_EXTRA_CALMING_QUAD(int calmingQuad) { invoke<Void>(0xDEC4E0, calmingQuad); } // 0xB1252E3E59A82AAF 0x45268B6F b323
}

namespace WEAPON
{
	static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0xDF2EE0, toggle); } // 0xC8B46D7727D864AA 0xE3438955 b323
	static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0xDF2F00, componentHash); } // 0x0DB57B41EC1DB083 0x324FA47A b323
	static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0xDF2FC0, weaponHash); } // 0xF46CDC33180FDA94 0x44E1C269 b323
	static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0xDF3090, weaponHash); } // 0x4215460B9B8B7FA0 0x2E3759AF b323
	static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0xDF30F0, weaponHash); } // 0xC3287EE3050FB74C 0x5F2DE833 b323
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL bForceInHand) { invoke<Void>(0xDF3150, ped, weaponHash, bForceInHand); } // 0xADF692B254977C0C 0xB8278882 b323
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0xDF3170, ped, weaponHash, p2); } // 0x3A87E44BB9A01D54 0xB0237302 b323
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return invoke<Entity>(0xDF3210, ped, p1); } // 0x3B390A939AF0B5FC 0x5D73CD20 b323
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0xDF3280, ped, p1); } // 0x8483E98E8B888AE2 0xB998D444 b323
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0xDF32F0, ped, weaponHash); } // 0x75C55983C2C39DAA 0x8E6F2AF1 b323
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0xDF33C0, ped, weaponHash); } // 0x1017582BCD3832DC 0xF26C5D65 b323
	static BOOL IS_PED_ARMED(Ped ped, int typeFlags) { return invoke<BOOL>(0xDF3440, ped, typeFlags); } // 0x475768A975D5AD17 0x0BFC892C b323
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0xDF3470, weaponHash); } // 0x937C71165CF334B3 0x38CA2954 b323
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0xDF34E0, ped, weaponHash, p2); } // 0x8DECB02F88F428BC 0x43D2FA82 b323
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0xDF3510, ped); } // 0xB80CA294F2F26749 0x02A32CB0 b323
	static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0xDF3580, ped, weaponSlot); } // 0xEFFED78E9011134D 0x9BC64E16 b323
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0xDF3640, ped, weaponhash); } // 0x015A522136D7F951 0x0C755733 b323
	static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0xDF3670, ped, weaponHash, ammo); } // 0x78F0424C34306220 0x7F0580C7 b323
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo, BOOL p3) { invoke<Void>(0xDF36E0, ped, weaponHash, ammo, p3); } // 0x14E56BC5B5DB6A19 0xBF90DF1A b323
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0xDF3700, ped, toggle, weaponHash); } // 0x3EDCB0505123623B 0x9CB8D278 b323
	static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0xDF3720, ped, toggle); } // 0x183DADC6AA953186 0x5A5E3B67 b323
	static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL bForceInHand) { invoke<Void>(0xDF3790, ped, weaponHash, ammoCount, isHidden, bForceInHand); } // 0xBF0FD6E56C964FCB 0xC4D88A85 b323
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand) { invoke<Void>(0xDF37C0, ped, weaponHash, ammoCount, bForceInHand); } // 0xB282DC6EBD803C75 0x5868D20D b323
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { invoke<Void>(0xDF37E0, ped, p1); } // 0xF25DF915FA38C5F3 0xA44CE817 b323
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0xDF3860, ped, weaponHash); } // 0x4899CB088EDF59B8 0x9C37F220 b323
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0xDF38F0, ped, toggle); } // 0x6F6981D2253C208F 0x00CFD6E9 b323
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0xDF3980, ped, visible, deselectWeapon, p3, p4); } // 0x0725A4CCFDED9A70 0x00BECD77 b323
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xDF39B0, ped, toggle); } // 0x476AE72C1D19D1A8 0x8A444056 b323
	static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xDF3A40, ped, weaponHash, weaponType); } // 0x2D343D2219CD027A 0xCDFBBCC6 b323
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0xDF3AC0, ped); } // 0x0E98F88A24C5F4B8 0x52C68832 b323
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xDF3B20, entity, weaponHash, weaponType); } // 0x131D401334815E94 0x6DAABB39 b323
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0xDF3BB0, entity); } // 0xAC678E40BE7C74D2 0xCEC2732B b323
	static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0xDF3C10, ped); } // 0x6B7513D9966FBEC0 0x3D3329FA b323
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0xDF3C20, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); } // 0x208A1888007FC0E6 0x81FFB874 b323
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0xDF3C40, ped, weaponHash, p2); } // 0xA38DCFFCEA8962FA 0x6961E2A4 b323
	static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xDF3C70, ped, weaponHash, ammo); } // 0x2E1202248937775C 0x73C100C3 b323
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0xDF3D20, ped, weaponHash, ammo); } // 0xDCD2A934D65CB497 0xA54B0B10 b323
	static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xDF3D50, ped, weaponHash, ammo); } // 0xDC16122C7A20C933 0x0B294796 b323
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0xDF3E10, ped, ammoTypeHash, ammo); } // 0x5FD1E1F011E76D7E 0x311C52BB b323
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash) { return invoke<int>(0xDF3E80, ped, ammoTypeHash); } // 0x39D22031557946C1 0x54077C4D b323
	static void SET_PED_AMMO_TO_DROP(Ped ped, int p1) { invoke<Void>(0xDF3EF0, ped, p1); } // 0xA4EFEF9440A5B0EF 0x2386A307 b323
	static void SET_PICKUP_AMMO_AMOUNT_SCALER(float p0) { invoke<Void>(0xDF3F50, p0); } // 0xE620FD3512A04F18 0xD6460EA2 b323
	static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0xDF3F70, ped, weaponHash); } // 0x7FEAD38B326B9F74 0x09337863 b323
	static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return invoke<BOOL>(0xDF4020, ped, coords); } // 0x6C4D0409BA1A2BC2 0x9B266079 b323
	static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0xDF4120, ped, gadgetHash, p2); } // 0xD0D7B1E680ED4A1A 0x8A256D0A b323
	static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0xDF4140, ped, gadgetHash); } // 0xF731332072F5156C 0x8DDD0B5B b323
	static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0xDF41B0, ped); } // 0x0A6DB4965674D243 0xD240123E b323
	static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0xDF4210, ped, weaponHash, p2); } // 0xFC4BD125DE7611E4 0x35A0B955 b323
	static void REMOVE_ALL_PROJECTILES_OF_TYPE(Hash weaponHash, BOOL explode) { invoke<Void>(0xDF4230, weaponHash, explode); } // 0xFC52E0F37E446528 0xA5F89919 b323
	static float GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xDF42C0, ped); } // 0x840F03E9041E2C9C 0x3612110D b323
	static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xDF42F0, ped); } // 0x814C9D19DFD69679 0xB2B2BBAA b323
	static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0xDF4320, driver, vehicle, weaponHash, p3); } // 0x717C8481234E3B88 0xA57E2E80 b323
	static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xDF4350, ped, weaponHash, componentHash); } // 0xD966D51AA5B28BB9 0x3E1E286D b323
	static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xDF43C0, ped, weaponHash, componentHash); } // 0x1E8BE90C74FB4C09 0x412AA00D b323
	static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xDF4430, ped, weaponHash, componentHash); } // 0xC593212475FAE340 0xDC0FC145 b323
	static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xDF4460, ped, weaponHash, componentHash); } // 0x0D78DE0572D3969E 0x7565FB19 b323
	static BOOL REFILL_AMMO_INSTANTLY(Ped ped) { return invoke<BOOL>(0xDF4490, ped); } // 0x8C0D57EA686FAD87 0x82EEAF0F b323
	static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xDF44F0, ped); } // 0x20AE33F3AC9C0033 0x515292C2 b323
	static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0xDF4580, weaponHash, p1, p2); } // 0x5443438F033E29C3 0x65D139A5 b323
	static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0xDF4640, weaponHash); } // 0x36E353271F0E90EE 0x1891D5BB b323
	static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0xDF4670, weaponHash); } // 0xAA08EF13F341C8FC 0x2C0DFE3C b323
	static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale, Any p7, Any p8, Any p9) { return invoke<Object>(0xDF4700, weaponHash, ammoCount, x, y, z, showWorldModel, scale, p7, p8, p9); } // 0x9541D3CF0D398F36 0x62F5987F b323
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash componentHash) { invoke<Void>(0xDF4800, weaponObject, componentHash); } // 0x33E179436C0B31DB 0xF7612A37 b323
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object object, Hash componentHash) { invoke<Void>(0xDF4850, object, componentHash); } // 0xF7D82B0D66777611 0xA6E7ED3C b323
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash componentHash) { return invoke<BOOL>(0xDF48D0, weapon, componentHash); } // 0x76A18844E743BF91 0x1D368510 b323
	static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0xDF4960, weaponObject, ped); } // 0xB1FA61371AF7C4B7 0x639AF3EF b323
	static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xDF4970, weaponHash, componentHash); } // 0x5CEE3DF569CECAB0 0xB1817BAA b323
	static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0xDF49A0, ped, p1); } // 0xCAE1DC9A0E22A16D 0xDF939A38 b323
	static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int tintIndex) { invoke<Void>(0xDF49D0, ped, weaponHash, tintIndex); } // 0x50969B9B89ED5738 0xEB2A7B23 b323
	static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xDF49F0, ped, weaponHash); } // 0x2B9EEDC07BD06B9F 0x3F9C90A7 b323
	static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { invoke<Void>(0xDF4A20, weapon, tintIndex); } // 0xF827589017D4E4A9 0x44ACC1DA b323
	static int GET_WEAPON_OBJECT_TINT_INDEX(Object weapon) { return invoke<int>(0xDF4A80, weapon); } // 0xCD183314F7CD2E57 0xD91D9576 b323
	static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0xDF4AF0, weaponHash); } // 0x5DCF6C5CAB2E9BF7 0x99E4EAAB b323
	static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0xDF4B60, weaponHash, outData); } // 0xD92C739EE34C9EBA 0xA9AD3D98 b323
	static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, Any* outData) { return invoke<BOOL>(0xDF4C10, componentHash, outData); } // 0xB3CAF387AE12E9F8 0xBB5498F4 b323
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0xDF4CB0, weaponHash); } // 0x583BE370B1EC6EB4 0x8D515E66 b323
	static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0xDF4D20, ped, xBias, yBias); } // 0x8378627201D5497D 0xB4F44C6E b323
	static Object SET_PED_SHOOT_ORDNANCE_WEAPON(Ped ped, float p1) { return invoke<Object>(0xDF4D90, ped, p1); } // 0xB4C8D77C80C0421E 0xEC2E5304 b323
	static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0xDF4DC0, weaponObject); } // 0x48164DBB970AC3F0 0xE3BD00F9 b323
	static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0xDF4E10, ped); } // 0x65F0C5AE05943EC7 0xBAF7BFBE b323
	static BOOL IS_FLASH_LIGHT_ON(Ped ped) { return invoke<BOOL>(0xDF4E80, ped); } // 0x4B7620C47217126C 0x76876154 b323
	static BOOL SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<BOOL>(0xDF4F00, distance); } // 0xCEA66DAD478CD39B 0xB0127EA7 b323
	static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0xDF4F10, ped, animStyle); } // 0x1055AC3A667F09D9 0xA5DF7484 b323
	static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0xDF4FA0, weaponHash); } // 0x3BE0BB12D25FB305 0x013AFC13 b323
	static void SET_EQIPPED_WEAPON_START_SPINNING_AT_FULL_SPEED(Ped ped) { invoke<Void>(0xDF5010, ped); } // 0xE4DCEC7FD5B739A5 0x64646F1D b323
	static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0xDF5070, weaponHash); } // 0xBC7BE5ABC0879F74 0x135E7AD4 b323
}

namespace ZONE
{
	static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0xDF5F80, x, y, z); } // 0x27040C25DE6CB2F4 0xC9018181 b323
	static int GET_ZONE_FROM_NAME_ID(const char* zoneName) { return invoke<int>(0xDF6010, zoneName); } // 0x98CD1D2934B76CC1 0x8EC68304 b323
	static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0xDF6050, zoneId); } // 0x4334BC40AA0CB4BB 0x20AB2FC9 b323
	static const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0xDF60A0, x, y, z); } // 0xCD90657D4C30E1CA 0x7875CE91 b323
	static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0xDF6150, zoneId, toggle); } // 0xBA5ECEEA120E5611 0x04E21B03 b323
	static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0xDF6170, zoneId); } // 0x5F7B268D15BA0739 0xB2FB5C4C b323
	static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0xDF61A0, scheduleId, vehicleHash); } // 0x5F7D596BAC2E7777 0x3F0A3680 b323
	static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0xDF61B0, scheduleId); } // 0x5C0DE367AA0D911C 0x7A72A24E b323
	static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0xDF6200, x, y, z); } // 0x7EE64D51E8498728 0xB5C5C99B b323
}

