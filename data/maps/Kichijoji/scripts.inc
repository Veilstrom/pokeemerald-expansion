Kichijoji_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kichijoji_OnTransition,
	.byte 0

Kichijoji_OnTransition:
	setflag FLAG_VISITED_KICHIJOJI
	end