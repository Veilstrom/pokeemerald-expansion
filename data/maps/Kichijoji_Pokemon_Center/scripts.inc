Kichijoji_Pokemon_Center_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kichijoji_Pokemon_Center_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Kichijoji_Pokemon_Center_OnTransition:
	setrespawn HEAL_LOCATION_KICHIJOJI
	end

Kichijoji_Pokemon_Center_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_KICHIJOJI_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
