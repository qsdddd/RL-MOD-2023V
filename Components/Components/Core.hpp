#pragma once
#include "../Component.hpp"

// Manages global objects and names, along with initializing a new thread for the mod to run on.
class CoreComponent : public Component
{
private:
	HANDLE MainThread;

public:
	CoreComponent();
	~CoreComponent() override;

public:
	void OnCreate() override;
	void OnDestroy() override;
public:
	void InitializeThread();
	static bool AreGlobalsValid();
	static void InitializeGlobals(HMODULE hModule);

	UGFxData_LocalPlayer_TA* localPlayer = nullptr;
	USaveData_TA* saveData = nullptr;

private:
	static bool AreGObjectsValid();
	static bool AreGNamesValid();
};

extern class CoreComponent Core;