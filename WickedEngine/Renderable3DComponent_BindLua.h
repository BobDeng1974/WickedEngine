#pragma once
#include "wiLua.h"
#include "wiLuna.h"
#include "Renderable3DComponent.h"
#include "Renderable2DComponent_BindLua.h"

class Renderable3DComponent_BindLua : public Renderable2DComponent_BindLua
{
public:
	static const char className[];
	static Luna<Renderable3DComponent_BindLua>::FunctionType methods[];
	static Luna<Renderable3DComponent_BindLua>::PropertyType properties[];

	Renderable3DComponent_BindLua(Renderable3DComponent* component = nullptr);
	Renderable3DComponent_BindLua(lua_State* L);
	~Renderable3DComponent_BindLua();

	int SetSSAOEnabled(lua_State* L);
	int SetSSREnabled(lua_State* L);
	int SetShadowsEnabled(lua_State* L);
	int SetReflectionsEnabled(lua_State* L);
	int SetFXAAEnabled(lua_State* L);
	int SetBloomEnabled(lua_State* L);
	int SetColorGradingEnabled(lua_State* L);
	int SetEmitterParticlesEnabled(lua_State* L);
	int SetHairParticlesEnabled(lua_State* L);
	int SetVolumeLightsEnabled(lua_State* L);
	int SetLightShaftsEnabled(lua_State* L);
	int SetLensFlareEnabled(lua_State* L);

	static void Bind();
};
