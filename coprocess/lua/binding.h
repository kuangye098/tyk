#include "../../coprocess/api.h"
#ifndef TYK_COPROCESS_LUA
#define TYK_COPROCESS_LUA

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

static void LuaInit();
static void LuaReload();
// static void Node_SetEnv(char*);

static struct CoProcessMessage* LuaDispatchHook(struct CoProcessMessage*);
static void LuaDispatchEvent(char*);

void LoadCachedMiddleware(void*);
void LoadCachedModules(void*);
// void LoadCachedModules(*lua_State);
// static void Python_DispatchEvent(char*);

#endif
