#include "f4se/GameEvents.h"

// 7D79D7BCBD040E10630ADDBE12B957FD115304A2+D
RelocPtr <BSTGlobalEvent::EventSource<ApplyColorUpdateEvent>*> g_colorUpdateDispatcher(0x06577D70);

// 61A1F6B0E46CB298CD32C55D9A653D702CCD1B67+63
RelocPtr <BSTGlobalEvent*> g_globalEvents(0x058CEC18);

RelocAddr <BSTEventDispatcher<WeaponFiredEvent>*> g_weaponFiredDispatcher(0x058E3E60);
