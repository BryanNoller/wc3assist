#pragma once

PyMethodDef JassMethods[];

static DWORD _Jass_Deg2Rad = GetGameBase() + 0x0022f5b0; // (R)R
static DWORD _Jass_Rad2Deg = GetGameBase() + 0x00242b00; // (R)R
static DWORD _Jass_Sin = GetGameBase() + 0x00248380; // (R)R
static DWORD _Jass_Cos = GetGameBase() + 0x0022bd90; // (R)R
static DWORD _Jass_Tan = GetGameBase() + 0x00248dd0; // (R)R
static DWORD _Jass_Asin = GetGameBase() + 0x0022aa60; // (R)R
static DWORD _Jass_Acos = GetGameBase() + 0x00229de0; // (R)R
static DWORD _Jass_Atan = GetGameBase() + 0x0022ab20; // (R)R
static DWORD _Jass_Atan2 = GetGameBase() + 0x0022aaa0; // (RR)R
static DWORD _Jass_SquareRoot = GetGameBase() + 0x002483b0; // (R)R
static DWORD _Jass_Pow = GetGameBase() + 0x00242180; // (RR)R
static DWORD _Jass_I2R = GetGameBase() + 0x00237460; // (I)R
static DWORD _Jass_R2I = GetGameBase() + 0x00242a20; // (R)I
static DWORD _Jass_I2S = GetGameBase() + 0x00237480; // (I)S
static DWORD _Jass_R2S = GetGameBase() + 0x00242a30; // (R)S
static DWORD _Jass_R2SW = GetGameBase() + 0x00242a70; // (RII)S
static DWORD _Jass_S2I = GetGameBase() + 0x002436d0; // (S)I
static DWORD _Jass_S2R = GetGameBase() + 0x00243700; // (S)R
static DWORD _Jass_GetHandleId = GetGameBase() + 0x002329d0; // (Hhandle;)I
static DWORD _Jass_SubString = GetGameBase() + 0x00248a80; // (SII)S
static DWORD _Jass_StringLength = GetGameBase() + 0x002487a0; // (S)I
static DWORD _Jass_StringCase = GetGameBase() + 0x002486f0; // (SB)S
static DWORD _Jass_StringHash = GetGameBase() + 0x00248780; // (S)I
static DWORD _Jass_GetLocalizedString = GetGameBase() + 0x00233400; // (S)S
static DWORD _Jass_GetLocalizedHotkey = GetGameBase() + 0x002333d0; // (S)I
static DWORD _Jass_ConvertRace = GetGameBase() + 0x0022bb10; // (I)Hrace;
static DWORD _Jass_ConvertAllianceType = GetGameBase() + 0x0022b930; // (I)Halliancetype;
static DWORD _Jass_ConvertRacePref = GetGameBase() + 0x0022bb20; // (I)Hracepreference;
static DWORD _Jass_ConvertIGameState = GetGameBase() + 0x0022ba00; // (I)Higamestate;
static DWORD _Jass_ConvertFGameState = GetGameBase() + 0x0022b9a0; // (I)Hfgamestate;
static DWORD _Jass_ConvertPlayerState = GetGameBase() + 0x0022baf0; // (I)Hplayerstate;
static DWORD _Jass_ConvertPlayerScore = GetGameBase() + 0x0022bad0; // (I)Hplayerscore;
static DWORD _Jass_ConvertStartLocPrio = GetGameBase() + 0x0022bb60; // (I)Hstartlocprio;
static DWORD _Jass_ConvertPlayerGameResult = GetGameBase() + 0x0022bac0; // (I)Hplayergameresult;
static DWORD _Jass_ConvertUnitState = GetGameBase() + 0x0022bbe0; // (I)Hunitstate;
static DWORD _Jass_ConvertAIDifficulty = GetGameBase() + 0x0022b920; // (I)Haidifficulty;
static DWORD _Jass_ConvertGameEvent = GetGameBase() + 0x0022b9d0; // (I)Hgameevent;
static DWORD _Jass_ConvertPlayerEvent = GetGameBase() + 0x0022bab0; // (I)Hplayerevent;
static DWORD _Jass_ConvertPlayerUnitEvent = GetGameBase() + 0x0022bb00; // (I)Hplayerunitevent;
static DWORD _Jass_ConvertUnitEvent = GetGameBase() + 0x0022bbd0; // (I)Hunitevent;
static DWORD _Jass_ConvertWidgetEvent = GetGameBase() + 0x0022bc30; // (I)Hwidgetevent;
static DWORD _Jass_ConvertDialogEvent = GetGameBase() + 0x0022b980; // (I)Hdialogevent;
static DWORD _Jass_ConvertLimitOp = GetGameBase() + 0x0022ba20; // (I)Hlimitop;
static DWORD _Jass_ConvertUnitType = GetGameBase() + 0x0022bbf0; // (I)Hunittype;
static DWORD _Jass_ConvertGameSpeed = GetGameBase() + 0x0022b9e0; // (I)Hgamespeed;
static DWORD _Jass_ConvertPlacement = GetGameBase() + 0x0022ba90; // (I)Hplacement;
static DWORD _Jass_ConvertGameDifficulty = GetGameBase() + 0x0022b9c0; // (I)Hgamedifficulty;
static DWORD _Jass_ConvertGameType = GetGameBase() + 0x0022b9f0; // (I)Hgametype;
static DWORD _Jass_ConvertMapFlag = GetGameBase() + 0x0022ba50; // (I)Hmapflag;
static DWORD _Jass_ConvertMapVisibility = GetGameBase() + 0x0022ba70; // (I)Hmapvisibility;
static DWORD _Jass_ConvertMapSetting = GetGameBase() + 0x0022ba60; // (I)Hmapsetting;
static DWORD _Jass_ConvertMapDensity = GetGameBase() + 0x0022ba40; // (I)Hmapdensity;
static DWORD _Jass_ConvertMapControl = GetGameBase() + 0x0022ba30; // (I)Hmapcontrol;
static DWORD _Jass_ConvertPlayerColor = GetGameBase() + 0x0022baa0; // (I)Hplayercolor;
static DWORD _Jass_ConvertPlayerSlotState = GetGameBase() + 0x0022bae0; // (I)Hplayerslotstate;
static DWORD _Jass_ConvertVolumeGroup = GetGameBase() + 0x0022bc10; // (I)Hvolumegroup;
static DWORD _Jass_ConvertCameraField = GetGameBase() + 0x0022b960; // (I)Hcamerafield;
static DWORD _Jass_ConvertBlendMode = GetGameBase() + 0x0022b950; // (I)Hblendmode;
static DWORD _Jass_ConvertRarityControl = GetGameBase() + 0x0022bb40; // (I)Hraritycontrol;
static DWORD _Jass_ConvertTexMapFlags = GetGameBase() + 0x0022bb70; // (I)Htexmapflags;
static DWORD _Jass_ConvertFogState = GetGameBase() + 0x0022b9b0; // (I)Hfogstate;
static DWORD _Jass_ConvertEffectType = GetGameBase() + 0x0022b990; // (I)Heffecttype;
static DWORD _Jass_ConvertVersion = GetGameBase() + 0x0022bc00; // (I)Hversion;
static DWORD _Jass_ConvertItemType = GetGameBase() + 0x0022ba10; // (I)Hitemtype;
static DWORD _Jass_ConvertAttackType = GetGameBase() + 0x0022b940; // (I)Hattacktype;
static DWORD _Jass_ConvertDamageType = GetGameBase() + 0x0022b970; // (I)Hdamagetype;
static DWORD _Jass_ConvertWeaponType = GetGameBase() + 0x0022bc20; // (I)Hweapontype;
static DWORD _Jass_ConvertSoundType = GetGameBase() + 0x0022bb50; // (I)Hsoundtype;
static DWORD _Jass_ConvertPathingType = GetGameBase() + 0x0022ba80; // (I)Hpathingtype;
static DWORD _Jass_SetMapName = GetGameBase() + 0x00246230; // (S)V
static DWORD _Jass_SetMapDescription = GetGameBase() + 0x002461a0; // (S)V
static DWORD _Jass_SetTeams = GetGameBase() + 0x00246e80; // (I)V
static DWORD _Jass_SetPlayers = GetGameBase() + 0x002467b0; // (I)V
static DWORD _Jass_SetGameTypeSupported = GetGameBase() + 0x002459f0; // (Hgametype;B)V
static DWORD _Jass_SetMapFlag = GetGameBase() + 0x002461d0; // (Hmapflag;B)V
static DWORD _Jass_SetGameSpeed = GetGameBase() + 0x002459d0; // (Hgamespeed;)V
static DWORD _Jass_SetGamePlacement = GetGameBase() + 0x002459b0; // (Hplacement;)V
static DWORD _Jass_SetGameDifficulty = GetGameBase() + 0x00245990; // (Hgamedifficulty;)V
static DWORD _Jass_SetResourceDensity = GetGameBase() + 0x00246940; // (Hmapdensity;)V
static DWORD _Jass_SetCreatureDensity = GetGameBase() + 0x00244bd0; // (Hmapdensity;)V
static DWORD _Jass_DefineStartLocation = GetGameBase() + 0x0022f550; // (IRR)V
static DWORD _Jass_DefineStartLocationLoc = GetGameBase() + 0x0022f570; // (IHlocation;)V
static DWORD _Jass_SetStartLocPrioCount = GetGameBase() + 0x00246e50; // (II)V
static DWORD _Jass_SetStartLocPrio = GetGameBase() + 0x00246e10; // (IIIHstartlocprio;)V
static DWORD _Jass_GetStartLocPrioSlot = GetGameBase() + 0x00235800; // (II)I
static DWORD _Jass_GetStartLocPrio = GetGameBase() + 0x002357d0; // (II)Hstartlocprio;
static DWORD _Jass_GetTeams = GetGameBase() + 0x00235b40; // ()I
static DWORD _Jass_GetPlayers = GetGameBase() + 0x00234580; // ()I
static DWORD _Jass_IsGameTypeSupported = GetGameBase() + 0x00237cc0; // (Hgametype;)B
static DWORD _Jass_IsMapFlagSet = GetGameBase() + 0x00238070; // (Hmapflag;)B
static DWORD _Jass_GetGameTypeSelected = GetGameBase() + 0x002329c0; // ()Hgametype;
static DWORD _Jass_GetGamePlacement = GetGameBase() + 0x002329a0; // ()Hplacement;
static DWORD _Jass_GetGameSpeed = GetGameBase() + 0x002329b0; // ()Hgamespeed;
static DWORD _Jass_GetGameDifficulty = GetGameBase() + 0x00232990; // ()Hgamedifficulty;
static DWORD _Jass_GetResourceDensity = GetGameBase() + 0x00234a30; // ()Hmapdensity;
static DWORD _Jass_GetCreatureDensity = GetGameBase() + 0x002320b0; // ()Hmapdensity;
static DWORD _Jass_GetStartLocationX = GetGameBase() + 0x00235880; // (I)R
static DWORD _Jass_GetStartLocationY = GetGameBase() + 0x002358a0; // (I)R
static DWORD _Jass_GetStartLocationLoc = GetGameBase() + 0x00235830; // (I)Hlocation;
static DWORD _Jass_SetPlayerTeam = GetGameBase() + 0x002466f0; // (Hplayer;I)V
static DWORD _Jass_SetPlayerStartLocation = GetGameBase() + 0x00246610; // (Hplayer;I)V
static DWORD _Jass_ForcePlayerStartLocation = GetGameBase() + 0x00231040; // (Hplayer;I)V
static DWORD _Jass_SetPlayerAlliance = GetGameBase() + 0x00246340; // (Hplayer;Hplayer;Halliancetype;B)V
static DWORD _Jass_SetPlayerTaxRate = GetGameBase() + 0x00246690; // (Hplayer;Hplayer;Hplayerstate;I)V
static DWORD _Jass_SetPlayerRacePreference = GetGameBase() + 0x002465b0; // (Hplayer;Hracepreference;)V
static DWORD _Jass_SetPlayerRaceSelectable = GetGameBase() + 0x002465e0; // (Hplayer;B)V
static DWORD _Jass_SetPlayerController = GetGameBase() + 0x00246400; // (Hplayer;Hmapcontrol;)V
static DWORD _Jass_SetPlayerColor = GetGameBase() + 0x002463e0; // (Hplayer;Hplayercolor;)V
static DWORD _Jass_SetPlayerOnScoreScreen = GetGameBase() + 0x00246590; // (Hplayer;B)V
static DWORD _Jass_SetPlayerName = GetGameBase() + 0x00246550; // (Hplayer;S)V
static DWORD _Jass_GetPlayerTeam = GetGameBase() + 0x00234390; // (Hplayer;)I
static DWORD _Jass_GetPlayerName = GetGameBase() + 0x00233f70; // (Hplayer;)S
static DWORD _Jass_GetPlayerStartLocation = GetGameBase() + 0x00234230; // (Hplayer;)I
static DWORD _Jass_GetPlayerStartLocationX = GetGameBase() + 0x00234250; // (Hplayer;)R
static DWORD _Jass_GetPlayerStartLocationY = GetGameBase() + 0x00234280; // (Hplayer;)R
static DWORD _Jass_GetPlayerColor = GetGameBase() + 0x00233ed0; // (Hplayer;)Hplayercolor;
static DWORD _Jass_GetPlayerSelectable = GetGameBase() + 0x002341f0; // (Hplayer;)B
static DWORD _Jass_GetPlayerController = GetGameBase() + 0x00233ef0; // (Hplayer;)Hmapcontrol;
static DWORD _Jass_GetPlayerSlotState = GetGameBase() + 0x00234210; // (Hplayer;)Hplayerslotstate;
static DWORD _Jass_GetPlayerTaxRate = GetGameBase() + 0x00234340; // (Hplayer;Hplayer;Hplayerstate;)I
static DWORD _Jass_IsPlayerRacePrefSet = GetGameBase() + 0x002383b0; // (Hplayer;Hracepreference;)B
static DWORD _Jass_Location = GetGameBase() + 0x00240e20; // (RR)Hlocation;
static DWORD _Jass_RemoveLocation = GetGameBase() + 0x00243090; // (Hlocation;)V
static DWORD _Jass_MoveLocation = GetGameBase() + 0x002410d0; // (Hlocation;RR)V
static DWORD _Jass_GetLocationX = GetGameBase() + 0x00233470; // (Hlocation;)R
static DWORD _Jass_GetLocationY = GetGameBase() + 0x00233490; // (Hlocation;)R
static DWORD _Jass_GetLocationZ = GetGameBase() + 0x002334b0; // (Hlocation;)R
static DWORD _Jass_CreateTimer = GetGameBase() + 0x0022ed00; // ()Htimer;
static DWORD _Jass_DestroyTimer = GetGameBase() + 0x0022f9e0; // (Htimer;)V
static DWORD _Jass_TimerStart = GetGameBase() + 0x002492f0; // (Htimer;RBC)V
static DWORD _Jass_TimerGetTimeout = GetGameBase() + 0x002492c0; // (Htimer;)R
static DWORD _Jass_TimerGetElapsed = GetGameBase() + 0x00249260; // (Htimer;)R
static DWORD _Jass_TimerGetRemaining = GetGameBase() + 0x00249290; // (Htimer;)R
static DWORD _Jass_PauseTimer = GetGameBase() + 0x00241d10; // (Htimer;)V
static DWORD _Jass_ResumeTimer = GetGameBase() + 0x002435f0; // (Htimer;)V
static DWORD _Jass_GetExpiredTimer = GetGameBase() + 0x00232660; // ()Htimer;
static DWORD _Jass_Condition = GetGameBase() + 0x0022b810; // (C)Hconditionfunc;
static DWORD _Jass_DestroyCondition = GetGameBase() + 0x0022f780; // (Hconditionfunc;)V
static DWORD _Jass_Filter = GetGameBase() + 0x00230970; // (C)Hfilterfunc;
static DWORD _Jass_DestroyFilter = GetGameBase() + 0x0022f820; // (Hfilterfunc;)V
static DWORD _Jass_DestroyBoolExpr = GetGameBase() + 0x0022f760; // (Hboolexpr;)V
static DWORD _Jass_And = GetGameBase() + 0x0022a950; // (Hboolexpr;Hboolexpr;)Hboolexpr;
static DWORD _Jass_Or = GetGameBase() + 0x002419b0; // (Hboolexpr;Hboolexpr;)Hboolexpr;
static DWORD _Jass_Not = GetGameBase() + 0x00241810; // (Hboolexpr;)Hboolexpr;
static DWORD _Jass_CreateRegion = GetGameBase() + 0x0022e8b0; // ()Hregion;
static DWORD _Jass_RemoveRegion = GetGameBase() + 0x00243100; // (Hregion;)V
static DWORD _Jass_RegionAddRect = GetGameBase() + 0x00242d10; // (Hregion;Hrect;)V
static DWORD _Jass_RegionClearRect = GetGameBase() + 0x00242dc0; // (Hregion;Hrect;)V
static DWORD _Jass_RegionAddCell = GetGameBase() + 0x00242cb0; // (Hregion;RR)V
static DWORD _Jass_RegionAddCellAtLoc = GetGameBase() + 0x00242cd0; // (Hregion;Hlocation;)V
static DWORD _Jass_RegionClearCell = GetGameBase() + 0x00242d60; // (Hregion;RR)V
static DWORD _Jass_RegionClearCellAtLoc = GetGameBase() + 0x00242d80; // (Hregion;Hlocation;)V
static DWORD _Jass_IsUnitInRegion = GetGameBase() + 0x00238c50; // (Hregion;Hunit;)B
static DWORD _Jass_IsPointInRegion = GetGameBase() + 0x00238490; // (Hregion;RR)B
static DWORD _Jass_IsLocationInRegion = GetGameBase() + 0x00237f80; // (Hregion;Hlocation;)B
static DWORD _Jass_Rect = GetGameBase() + 0x0023f7c0; // (RRRR)Hrect;
static DWORD _Jass_RectFromLoc = GetGameBase() + 0x00242b30; // (Hlocation;Hlocation;)Hrect;
static DWORD _Jass_RemoveRect = GetGameBase() + 0x002430e0; // (Hrect;)V
static DWORD _Jass_SetRect = GetGameBase() + 0x0023f980; // (Hrect;RRRR)V
static DWORD _Jass_SetRectFromLoc = GetGameBase() + 0x002467f0; // (Hrect;Hlocation;Hlocation;)V
static DWORD _Jass_GetRectCenterX = GetGameBase() + 0x00234700; // (Hrect;)R
static DWORD _Jass_GetRectCenterY = GetGameBase() + 0x00234760; // (Hrect;)R
static DWORD _Jass_MoveRectTo = GetGameBase() + 0x00241100; // (Hrect;RR)V
static DWORD _Jass_MoveRectToLoc = GetGameBase() + 0x00241130; // (Hrect;Hlocation;)V
static DWORD _Jass_GetRectMinX = GetGameBase() + 0x00234800; // (Hrect;)R
static DWORD _Jass_GetRectMinY = GetGameBase() + 0x00234820; // (Hrect;)R
static DWORD _Jass_GetRectMaxX = GetGameBase() + 0x002347c0; // (Hrect;)R
static DWORD _Jass_GetRectMaxY = GetGameBase() + 0x002347e0; // (Hrect;)R
static DWORD _Jass_GetWorldBounds = GetGameBase() + 0x00236a40; // ()Hrect;
static DWORD _Jass_SetFogStateRect = GetGameBase() + 0x002458b0; // (Hplayer;Hfogstate;Hrect;B)V
static DWORD _Jass_SetFogStateRadius = GetGameBase() + 0x002457e0; // (Hplayer;Hfogstate;RRRB)V
static DWORD _Jass_SetFogStateRadiusLoc = GetGameBase() + 0x00245840; // (Hplayer;Hfogstate;Hlocation;RB)V
static DWORD _Jass_FogMaskEnable = GetGameBase() + 0x00230df0; // (B)V
static DWORD _Jass_IsFogMaskEnabled = GetGameBase() + 0x00237b90; // ()B
static DWORD _Jass_FogEnable = GetGameBase() + 0x00230dc0; // (B)V
static DWORD _Jass_IsFogEnabled = GetGameBase() + 0x00237b80; // ()B
static DWORD _Jass_CreateFogModifierRect = GetGameBase() + 0x0022e100; // (Hplayer;Hfogstate;Hrect;BB)Hfogmodifier;
static DWORD _Jass_CreateFogModifierRadius = GetGameBase() + 0x0022df40; // (Hplayer;Hfogstate;RRRBB)Hfogmodifier;
static DWORD _Jass_CreateFogModifierRadiusLoc = GetGameBase() + 0x0022e020; // (Hplayer;Hfogstate;Hlocation;RBB)Hfogmodifier;
static DWORD _Jass_DestroyFogModifier = GetGameBase() + 0x0022f850; // (Hfogmodifier;)V
static DWORD _Jass_FogModifierStart = GetGameBase() + 0x00230e10; // (Hfogmodifier;)V
static DWORD _Jass_FogModifierStop = GetGameBase() + 0x00230e30; // (Hfogmodifier;)V
static DWORD _Jass_CreateTrigger = GetGameBase() + 0x0022eff0; // ()Htrigger;
static DWORD _Jass_DestroyTrigger = GetGameBase() + 0x0022fa20; // (Htrigger;)V
static DWORD _Jass_ResetTrigger = GetGameBase() + 0x00243450; // (Htrigger;)V
static DWORD _Jass_EnableTrigger = GetGameBase() + 0x00230260; // (Htrigger;)V
static DWORD _Jass_DisableTrigger = GetGameBase() + 0x0022fea0; // (Htrigger;)V
static DWORD _Jass_IsTriggerEnabled = GetGameBase() + 0x002386d0; // (Htrigger;)B
static DWORD _Jass_TriggerWaitOnSleeps = GetGameBase() + 0x0024a800; // (Htrigger;B)V
static DWORD _Jass_IsTriggerWaitOnSleeps = GetGameBase() + 0x002386f0; // (Htrigger;)B
static DWORD _Jass_TriggerRegisterVariableEvent = GetGameBase() + 0x0024a660; // (Htrigger;SHlimitop;R)Hevent;
static DWORD _Jass_TriggerRegisterTimerEvent = GetGameBase() + 0x0024a070; // (Htrigger;RB)Hevent;
static DWORD _Jass_TriggerRegisterTimerExpireEvent = GetGameBase() + 0x0024a130; // (Htrigger;Htimer;)Hevent;
static DWORD _Jass_TriggerRegisterGameStateEvent = GetGameBase() + 0x00249960; // (Htrigger;Hgamestate;Hlimitop;R)Hevent;
static DWORD _Jass_GetEventGameState = GetGameBase() + 0x00232500; // ()Hgamestate;
static DWORD _Jass_TriggerRegisterDialogEvent = GetGameBase() + 0x002495e0; // (Htrigger;Hdialog;)Hevent;
static DWORD _Jass_TriggerRegisterDialogButtonEvent = GetGameBase() + 0x00249520; // (Htrigger;Hbutton;)Hevent;
static DWORD _Jass_GetClickedButton = GetGameBase() + 0x00231f20; // ()Hbutton;
static DWORD _Jass_GetClickedDialog = GetGameBase() + 0x00231f70; // ()Hdialog;
static DWORD _Jass_GetTournamentFinishSoonTimeRemaining = GetGameBase() + 0x00235d40; // ()R;
static DWORD _Jass_GetTournamentFinishNowRule = GetGameBase() + 0x00235d10; // ()I;
static DWORD _Jass_GetTournamentFinishNowPlayer = GetGameBase() + 0x00235cb0; // ()Hplayer;
static DWORD _Jass_GetTournamentScore = GetGameBase() + 0x00235d70; // (Hplayer;)I
static DWORD _Jass_GetSaveBasicFilename = GetGameBase() + 0x00234b50; // ()S
static DWORD _Jass_TriggerRegisterGameEvent = GetGameBase() + 0x00249880; // (Htrigger;Hgameevent;)Hevent;
static DWORD _Jass_GetWinningPlayer = GetGameBase() + 0x00236a10; // ()Hplayer;
static DWORD _Jass_TriggerRegisterPlayerStateEvent = GetGameBase() + 0x00249e50; // (Htrigger;Hplayer;Hplayerstate;Hlimitop;R)Hevent;
static DWORD _Jass_GetEventPlayerState = GetGameBase() + 0x002325a0; // ()Hplayerstate;
static DWORD _Jass_TriggerRegisterPlayerEvent = GetGameBase() + 0x00249d30; // (Htrigger;Hplayer;Hplayerevent;)Hevent;
static DWORD _Jass_TriggerRegisterPlayerUnitEvent = GetGameBase() + 0x00249f70; // (Htrigger;Hplayer;Hplayerunitevent;Hboolexpr;)Hevent;
static DWORD _Jass_GetAttacker = GetGameBase() + 0x00231900; // ()Hunit;
static DWORD _Jass_GetRescuer = GetGameBase() + 0x00234860; // ()Hunit;
static DWORD _Jass_GetDyingUnit = GetGameBase() + 0x00232360; // ()Hunit;
static DWORD _Jass_GetKillingUnit = GetGameBase() + 0x00232ff0; // ()Hunit;
static DWORD _Jass_GetDecayingUnit = GetGameBase() + 0x00232120; // ()Hunit;
static DWORD _Jass_GetConstructingStructure = GetGameBase() + 0x00232000; // ()Hunit;
static DWORD _Jass_GetCancelledStructure = GetGameBase() + 0x00231df0; // ()Hunit;
static DWORD _Jass_GetConstructedStructure = GetGameBase() + 0x00231fe0; // ()Hunit;
static DWORD _Jass_GetTrainedUnitType = GetGameBase() + 0x00235e20; // ()I
static DWORD _Jass_GetResearchingUnit = GetGameBase() + 0x00234980; // ()Hunit;
static DWORD _Jass_GetResearched = GetGameBase() + 0x002348e0; // ()I
static DWORD _Jass_GetTrainedUnit = GetGameBase() + 0x00235da0; // ()Hunit;
static DWORD _Jass_GetSellingUnit = GetGameBase() + 0x00234be0; // ()Hunit;
static DWORD _Jass_GetSoldUnit = GetGameBase() + 0x00234d90; // ()Hunit;
static DWORD _Jass_GetBuyingUnit = GetGameBase() + 0x00231980; // ()Hunit;
static DWORD _Jass_GetSoldItem = GetGameBase() + 0x00234d00; // ()Hitem;
static DWORD _Jass_GetChangingUnit = GetGameBase() + 0x00231e10; // ()Hunit;
static DWORD _Jass_GetChangingUnitPrevOwner = GetGameBase() + 0x00231e90; // ()Hplayer;
static DWORD _Jass_GetDetectedUnit = GetGameBase() + 0x00232320; // ()Hunit;
static DWORD _Jass_GetOrderedUnit = GetGameBase() + 0x00233d50; // ()Hunit;
static DWORD _Jass_OrderId = GetGameBase() + 0x00241ae0; // (S)I
static DWORD _Jass_OrderId2String = GetGameBase() + 0x00241ab0; // (I)S
static DWORD _Jass_AbilityId = GetGameBase() + 0x00229db0; // (S)I
static DWORD _Jass_AbilityId2String = GetGameBase() + 0x00229d80; // (I)S
static DWORD _Jass_UnitId = GetGameBase() + 0x0024b120; // (S)I
static DWORD _Jass_UnitId2String = GetGameBase() + 0x0024b0f0; // (I)S
static DWORD _Jass_GetObjectName = GetGameBase() + 0x002336d0; // (I)S
static DWORD _Jass_GetIssuedOrderId = GetGameBase() + 0x00232d90; // ()I
static DWORD _Jass_GetOrderPointX = GetGameBase() + 0x002337f0; // ()R
static DWORD _Jass_GetOrderPointY = GetGameBase() + 0x00233840; // ()R
static DWORD _Jass_GetOrderPointLoc = GetGameBase() + 0x00233750; // ()Hlocation;
static DWORD _Jass_GetOrderTarget = GetGameBase() + 0x00233890; // ()Hwidget;
static DWORD _Jass_GetOrderTargetDestructable = GetGameBase() + 0x002339f0; // ()Hdestructable;
static DWORD _Jass_GetOrderTargetItem = GetGameBase() + 0x00233b10; // ()Hitem;
static DWORD _Jass_GetOrderTargetUnit = GetGameBase() + 0x00233c30; // ()Hunit;
static DWORD _Jass_GetSpellAbilityUnit = GetGameBase() + 0x00235070; // ()Hunit;
static DWORD _Jass_GetSpellAbilityId = GetGameBase() + 0x00235000; // ()I
static DWORD _Jass_GetSpellAbility = GetGameBase() + 0x00234eb0; // ()Hability;
static DWORD _Jass_GetSpellTargetLoc = GetGameBase() + 0x002353f0; // ()Hlocation;
static DWORD _Jass_GetSpellTargetX = GetGameBase() + 0x00235610; // ()R
static DWORD _Jass_GetSpellTargetY = GetGameBase() + 0x002356f0; // ()R
static DWORD _Jass_GetSpellTargetDestructable = GetGameBase() + 0x00235190; // ()Hdestructable;
static DWORD _Jass_GetSpellTargetItem = GetGameBase() + 0x002352c0; // ()Hitem;
static DWORD _Jass_GetSpellTargetUnit = GetGameBase() + 0x002354e0; // ()Hunit;
static DWORD _Jass_GetLevelingUnit = GetGameBase() + 0x00233180; // ()Hunit;
static DWORD _Jass_GetLearningUnit = GetGameBase() + 0x002330e0; // ()Hunit;
static DWORD _Jass_GetLearnedSkill = GetGameBase() + 0x00233060; // ()I
static DWORD _Jass_GetLearnedSkillLevel = GetGameBase() + 0x002330a0; // ()I
static DWORD _Jass_GetRevivableUnit = GetGameBase() + 0x00234a40; // ()Hunit;
static DWORD _Jass_GetRevivingUnit = GetGameBase() + 0x00234aa0; // ()Hunit;
static DWORD _Jass_GetSummoningUnit = GetGameBase() + 0x00235ad0; // ()Hunit;
static DWORD _Jass_GetSummonedUnit = GetGameBase() + 0x00235a50; // ()Hunit;
static DWORD _Jass_GetTransportUnit = GetGameBase() + 0x00235ee0; // ()Hunit;
static DWORD _Jass_GetLoadedUnit = GetGameBase() + 0x00233320; // ()Hunit;
static DWORD _Jass_GetManipulatingUnit = GetGameBase() + 0x002335b0; // ()Hunit;
static DWORD _Jass_GetManipulatedItem = GetGameBase() + 0x00233510; // ()Hitem;
static DWORD _Jass_TriggerRegisterPlayerAllianceChange = GetGameBase() + 0x00249b90; // (Htrigger;Hplayer;Halliancetype;)Hevent;
static DWORD _Jass_TriggerRegisterPlayerChatEvent = GetGameBase() + 0x00249c60; // (Htrigger;Hplayer;SB)Hevent;
static DWORD _Jass_GetEventPlayerChatString = GetGameBase() + 0x00232530; // ()S
static DWORD _Jass_GetEventPlayerChatStringMatched = GetGameBase() + 0x00232570; // ()S
static DWORD _Jass_TriggerRegisterUnitStateEvent = GetGameBase() + 0x0024a570; // (Htrigger;Hunit;Hunitstate;Hlimitop;R)Hevent;
static DWORD _Jass_GetEventUnitState = GetGameBase() + 0x00232620; // ()Hunitstate;
static DWORD _Jass_TriggerRegisterDeathEvent = GetGameBase() + 0x00249450; // (Htrigger;Hwidget;)Hevent;
static DWORD _Jass_TriggerRegisterUnitEvent = GetGameBase() + 0x0024a370; // (Htrigger;Hunit;Hunitevent;)Hevent;
static DWORD _Jass_GetEventDamage = GetGameBase() + 0x00232420; // ()R
static DWORD _Jass_GetEventDamageSource = GetGameBase() + 0x00232440; // ()Hunit;
static DWORD _Jass_GetEventDetectingPlayer = GetGameBase() + 0x002324b0; // ()Hplayer;
static DWORD _Jass_GetEventTargetUnit = GetGameBase() + 0x002325d0; // ()Hunit;
static DWORD _Jass_TriggerRegisterFilterUnitEvent = GetGameBase() + 0x00249780; // (Htrigger;Hunit;Hunitevent;Hboolexpr;)Hevent;
static DWORD _Jass_TriggerRegisterUnitInRange = GetGameBase() + 0x0024a480; // (Htrigger;Hunit;RHboolexpr;)Hevent;
static DWORD _Jass_TriggerRegisterEnterRegion = GetGameBase() + 0x002496a0; // (Htrigger;Hregion;Hboolexpr;)Hevent;
static DWORD _Jass_TriggerRegisterLeaveRegion = GetGameBase() + 0x00249ab0; // (Htrigger;Hregion;Hboolexpr;)Hevent;
static DWORD _Jass_GetTriggeringRegion = GetGameBase() + 0x00236080; // ()Hregion;
static DWORD _Jass_GetEnteringUnit = GetGameBase() + 0x00232380; // ()Hunit;
static DWORD _Jass_GetLeavingUnit = GetGameBase() + 0x00233140; // ()Hunit;
static DWORD _Jass_TriggerAddCondition = GetGameBase() + 0x00249360; // (Htrigger;Hboolexpr;)Htriggercondition;
static DWORD _Jass_TriggerRemoveCondition = GetGameBase() + 0x0024a760; // (Htrigger;Htriggercondition;)V
static DWORD _Jass_TriggerClearConditions = GetGameBase() + 0x002493d0; // (Htrigger;)V
static DWORD _Jass_TriggerAddAction = GetGameBase() + 0x00249320; // (Htrigger;C)Htriggeraction;
static DWORD _Jass_TriggerRemoveAction = GetGameBase() + 0x0024a730; // (Htrigger;Htriggeraction;)V
static DWORD _Jass_TriggerClearActions = GetGameBase() + 0x002493b0; // (Htrigger;)V
static DWORD _Jass_TriggerSleepAction = GetGameBase() + 0x0024a790; // (R)V
static DWORD _Jass_TriggerWaitForSound = GetGameBase() + 0x0024a7e0; // (Hsound;R)V
static DWORD _Jass_TriggerExecute = GetGameBase() + 0x00249410; // (Htrigger;)V
static DWORD _Jass_TriggerExecuteWait = GetGameBase() + 0x00249430; // (Htrigger;)V
static DWORD _Jass_TriggerEvaluate = GetGameBase() + 0x002493f0; // (Htrigger;)B
static DWORD _Jass_TriggerSyncStart = GetGameBase() + 0x0024a7d0; // ()V
static DWORD _Jass_TriggerSyncReady = GetGameBase() + 0x0024a7a0; // ()V
static DWORD _Jass_GetTriggerWidget = GetGameBase() + 0x00236060; // ()Hwidget;
static DWORD _Jass_GetTriggerDestructable = GetGameBase() + 0x00235f60; // ()Hdestructable;
static DWORD _Jass_GetTriggerUnit = GetGameBase() + 0x00236040; // ()Hunit;
static DWORD _Jass_GetTriggerPlayer = GetGameBase() + 0x00236020; // ()Hplayer;
static DWORD _Jass_GetTriggeringTrigger = GetGameBase() + 0x00236100; // ()Htrigger;
static DWORD _Jass_GetTriggerEventId = GetGameBase() + 0x00235fc0; // ()Heventid;
static DWORD _Jass_GetTriggerEvalCount = GetGameBase() + 0x00235f80; // (Htrigger;)I
static DWORD _Jass_GetTriggerExecCount = GetGameBase() + 0x00236000; // (Htrigger;)I
static DWORD _Jass_GetFilterUnit = GetGameBase() + 0x00232720; // ()Hunit;
static DWORD _Jass_GetEnumUnit = GetGameBase() + 0x00232400; // ()Hunit;
static DWORD _Jass_GetEnumPlayer = GetGameBase() + 0x002323e0; // ()Hplayer;
static DWORD _Jass_GetFilterPlayer = GetGameBase() + 0x00232700; // ()Hplayer;
static DWORD _Jass_GetFilterDestructable = GetGameBase() + 0x002326c0; // ()Hdestructable;
static DWORD _Jass_GetEnumDestructable = GetGameBase() + 0x002323a0; // ()Hdestructable;
static DWORD _Jass_GetFilterItem = GetGameBase() + 0x002326e0; // ()Hitem;
static DWORD _Jass_GetEnumItem = GetGameBase() + 0x002323c0; // ()Hitem;
static DWORD _Jass_CreateGroup = GetGameBase() + 0x0022e2d0; // ()Hgroup;
static DWORD _Jass_DestroyGroup = GetGameBase() + 0x0022f890; // (Hgroup;)V
static DWORD _Jass_GroupAddUnit = GetGameBase() + 0x00236b40; // (Hgroup;Hunit;)V
static DWORD _Jass_GroupRemoveUnit = GetGameBase() + 0x00237060; // (Hgroup;Hunit;)V
static DWORD _Jass_GroupClear = GetGameBase() + 0x00236b70; // (Hgroup;)V
static DWORD _Jass_GroupEnumUnitsOfType = GetGameBase() + 0x00236d80; // (Hgroup;SHboolexpr;)V
static DWORD _Jass_GroupEnumUnitsOfTypeCounted = GetGameBase() + 0x00236dd0; // (Hgroup;SHboolexpr;I)V
static DWORD _Jass_GroupEnumUnitsInRect = GetGameBase() + 0x00236c80; // (Hgroup;Hrect;Hboolexpr;)V
static DWORD _Jass_GroupEnumUnitsInRectCounted = GetGameBase() + 0x00236ce0; // (Hgroup;Hrect;Hboolexpr;I)V
static DWORD _Jass_GroupEnumUnitsOfPlayer = GetGameBase() + 0x00236d40; // (Hgroup;Hplayer;Hboolexpr;)V
static DWORD _Jass_GroupEnumUnitsInRange = GetGameBase() + 0x00236b90; // (Hgroup;RRRHboolexpr;)V
static DWORD _Jass_GroupEnumUnitsInRangeOfLoc = GetGameBase() + 0x00236c00; // (Hgroup;Hlocation;RHboolexpr;)V
static DWORD _Jass_GroupEnumUnitsInRangeCounted = GetGameBase() + 0x00236bc0; // (Hgroup;RRRHboolexpr;I)V
static DWORD _Jass_GroupEnumUnitsInRangeOfLocCounted = GetGameBase() + 0x00236c40; // (Hgroup;Hlocation;RHboolexpr;I)V
static DWORD _Jass_GroupEnumUnitsSelected = GetGameBase() + 0x00236e20; // (Hgroup;Hplayer;Hboolexpr;)V
static DWORD _Jass_GroupImmediateOrder = GetGameBase() + 0x00236f70; // (Hgroup;S)B
static DWORD _Jass_GroupImmediateOrderById = GetGameBase() + 0x00236f90; // (Hgroup;I)B
static DWORD _Jass_GroupPointOrder = GetGameBase() + 0x00236fb0; // (Hgroup;SRR)B
static DWORD _Jass_GroupPointOrderLoc = GetGameBase() + 0x00237040; // (Hgroup;SHlocation;)B
static DWORD _Jass_GroupPointOrderById = GetGameBase() + 0x00236fd0; // (Hgroup;IRR)B
static DWORD _Jass_GroupPointOrderByIdLoc = GetGameBase() + 0x00237000; // (Hgroup;IHlocation;)B
static DWORD _Jass_GroupTargetOrder = GetGameBase() + 0x00237090; // (Hgroup;SHwidget;)B
static DWORD _Jass_GroupTargetOrderById = GetGameBase() + 0x002370b0; // (Hgroup;IHwidget;)B
static DWORD _Jass_ForGroup = GetGameBase() + 0x00230ea0; // (Hgroup;C)V
static DWORD _Jass_FirstOfGroup = GetGameBase() + 0x00230aa0; // (Hgroup;)Hunit;
static DWORD _Jass_CreateForce = GetGameBase() + 0x0022e1f0; // ()Hforce;
static DWORD _Jass_DestroyForce = GetGameBase() + 0x0022f870; // (Hforce;)V
static DWORD _Jass_ForceAddPlayer = GetGameBase() + 0x00230ec0; // (Hforce;Hplayer;)V
static DWORD _Jass_ForceRemovePlayer = GetGameBase() + 0x002310a0; // (Hforce;Hplayer;)V
static DWORD _Jass_ForceClear = GetGameBase() + 0x00230f40; // (Hforce;)V
static DWORD _Jass_ForceEnumPlayers = GetGameBase() + 0x00230fe0; // (Hforce;Hboolexpr;)V
static DWORD _Jass_ForceEnumPlayersCounted = GetGameBase() + 0x00231010; // (Hforce;Hboolexpr;I)V
static DWORD _Jass_ForceEnumAllies = GetGameBase() + 0x00230f60; // (Hforce;Hplayer;Hboolexpr;)V
static DWORD _Jass_ForceEnumEnemies = GetGameBase() + 0x00230fa0; // (Hforce;Hplayer;Hboolexpr;)V
static DWORD _Jass_ForForce = GetGameBase() + 0x00230e80; // (Hforce;C)V
static DWORD _Jass_GetWidgetLife = GetGameBase() + 0x00236960; // (Hwidget;)R
static DWORD _Jass_SetWidgetLife = GetGameBase() + 0x002480c0; // (Hwidget;R)V
static DWORD _Jass_GetWidgetX = GetGameBase() + 0x00236990; // (Hwidget;)R
static DWORD _Jass_GetWidgetY = GetGameBase() + 0x002369d0; // (Hwidget;)R
static DWORD _Jass_CreateDestructable = GetGameBase() + 0x0022dea0; // (IRRRRI)Hdestructable;
static DWORD _Jass_CreateDestructableZ = GetGameBase() + 0x0022def0; // (IRRRRRI)Hdestructable;
static DWORD _Jass_CreateDeadDestructable = GetGameBase() + 0x0022ddb0; // (IRRRRI)Hdestructable;
static DWORD _Jass_CreateDeadDestructableZ = GetGameBase() + 0x0022de00; // (IRRRRRI)Hdestructable;
static DWORD _Jass_RemoveDestructable = GetGameBase() + 0x00242fd0; // (Hdestructable;)V
static DWORD _Jass_KillDestructable = GetGameBase() + 0x0023fec0; // (Hdestructable;)V
static DWORD _Jass_SetDestructableInvulnerable = GetGameBase() + 0x00244e10; // (Hdestructable;B)V
static DWORD _Jass_IsDestructableInvulnerable = GetGameBase() + 0x00237a90; // (Hdestructable;)B
static DWORD _Jass_EnumDestructablesInRect = GetGameBase() + 0x00230390; // (Hrect;Hboolexpr;C)V
static DWORD _Jass_GetDestructableTypeId = GetGameBase() + 0x00232280; // (Hdestructable;)I
static DWORD _Jass_GetDestructableX = GetGameBase() + 0x002322a0; // (Hdestructable;)R
static DWORD _Jass_GetDestructableY = GetGameBase() + 0x002322e0; // (Hdestructable;)R
static DWORD _Jass_SetDestructableLife = GetGameBase() + 0x00244e30; // (Hdestructable;R)V
static DWORD _Jass_GetDestructableLife = GetGameBase() + 0x002321c0; // (Hdestructable;)R
static DWORD _Jass_SetDestructableMaxLife = GetGameBase() + 0x00244e50; // (Hdestructable;R)V
static DWORD _Jass_GetDestructableMaxLife = GetGameBase() + 0x00232200; // (Hdestructable;)R
static DWORD _Jass_DestructableRestoreLife = GetGameBase() + 0x0022fbd0; // (Hdestructable;RB)V
static DWORD _Jass_QueueDestructableAnimation = GetGameBase() + 0x002429e0; // (Hdestructable;S)V
static DWORD _Jass_SetDestructableAnimation = GetGameBase() + 0x00244d20; // (Hdestructable;S)V
static DWORD _Jass_SetDestructableAnimationSpeed = GetGameBase() + 0x00244de0; // (Hdestructable;R)V
static DWORD _Jass_ShowDestructable = GetGameBase() + 0x002480e0; // (Hdestructable;B)V
static DWORD _Jass_GetDestructableOccluderHeight = GetGameBase() + 0x00232260; // (Hdestructable;)R
static DWORD _Jass_SetDestructableOccluderHeight = GetGameBase() + 0x00244ea0; // (Hdestructable;R)V
static DWORD _Jass_GetDestructableName = GetGameBase() + 0x00232230; // (Hdestructable;)S
static DWORD _Jass_CreateUnit = GetGameBase() + 0x0022f140; // (Hplayer;IRRR)Hunit;
static DWORD _Jass_CreateUnitByName = GetGameBase() + 0x0022f220; // (Hplayer;SRRR)Hunit;
static DWORD _Jass_CreateUnitAtLoc = GetGameBase() + 0x0022f1a0; // (Hplayer;IHlocation;R)Hunit;
static DWORD _Jass_CreateUnitAtLocByName = GetGameBase() + 0x0022f1f0; // (Hplayer;SHlocation;R)Hunit;
static DWORD _Jass_CreateCorpse = GetGameBase() + 0x0022dd00; // (Hplayer;IRRR)Hunit;
static DWORD _Jass_GetUnitState = GetGameBase() + 0x00236830; // (Hunit;Hunitstate;)R
static DWORD _Jass_GetUnitFoodUsed = GetGameBase() + 0x00236410; // (Hunit;)I
static DWORD _Jass_GetUnitFoodMade = GetGameBase() + 0x002363f0; // (Hunit;)I
static DWORD _Jass_GetFoodMade = GetGameBase() + 0x002327b0; // (I)I
static DWORD _Jass_GetFoodUsed = GetGameBase() + 0x002327c0; // (I)I
static DWORD _Jass_SetUnitUseFood = GetGameBase() + 0x00247e50; // (Hunit;B)V
static DWORD _Jass_GetUnitX = GetGameBase() + 0x002368e0; // (Hunit;)R
static DWORD _Jass_GetUnitY = GetGameBase() + 0x00236920; // (Hunit;)R
static DWORD _Jass_GetUnitLoc = GetGameBase() + 0x002364b0; // (Hunit;)Hlocation;
static DWORD _Jass_GetUnitRallyPoint = GetGameBase() + 0x002366f0; // (Hunit;)Hlocation;
static DWORD _Jass_GetUnitRallyUnit = GetGameBase() + 0x00236760; // (Hunit;)Hunit;
static DWORD _Jass_GetUnitRallyDestructable = GetGameBase() + 0x00236620; // (Hunit;)Hdestructable;
static DWORD _Jass_GetUnitFacing = GetGameBase() + 0x00236360; // (Hunit;)R
static DWORD _Jass_GetUnitMoveSpeed = GetGameBase() + 0x00236510; // (Hunit;)R
static DWORD _Jass_GetUnitDefaultMoveSpeed = GetGameBase() + 0x00236270; // (Hunit;)R
static DWORD _Jass_GetUnitTypeId = GetGameBase() + 0x002368a0; // (Hunit;)I
static DWORD _Jass_GetUnitRace = GetGameBase() + 0x00236600; // (Hunit;)Hrace;
static DWORD _Jass_GetUnitName = GetGameBase() + 0x00236570; // (Hunit;)S
static DWORD _Jass_GetUnitPointValue = GetGameBase() + 0x002365a0; // (Hunit;)I
static DWORD _Jass_GetUnitPointValueByType = GetGameBase() + 0x002365c0; // (I)I
static DWORD _Jass_SetUnitX = GetGameBase() + 0x00247f80; // (Hunit;R)V
static DWORD _Jass_SetUnitY = GetGameBase() + 0x00247fe0; // (Hunit;R)V
static DWORD _Jass_SetUnitPosition = GetGameBase() + 0x00247c40; // (Hunit;RR)V
static DWORD _Jass_SetUnitPositionLoc = GetGameBase() + 0x00247ca0; // (Hunit;Hlocation;)V
static DWORD _Jass_SetUnitFacing = GetGameBase() + 0x002477f0; // (Hunit;R)V
static DWORD _Jass_SetUnitFacingTimed = GetGameBase() + 0x00247830; // (Hunit;RR)V
static DWORD _Jass_SetUnitFlyHeight = GetGameBase() + 0x00247940; // (Hunit;RR)V
static DWORD _Jass_SetUnitMoveSpeed = GetGameBase() + 0x00247b60; // (Hunit;R)V
static DWORD _Jass_SetUnitTurnSpeed = GetGameBase() + 0x00247df0; // (Hunit;R)V
static DWORD _Jass_SetUnitPropWindow = GetGameBase() + 0x00247ce0; // (Hunit;R)V
static DWORD _Jass_SetUnitCreepGuard = GetGameBase() + 0x00247760; // (Hunit;B)V
static DWORD _Jass_GetUnitAcquireRange = GetGameBase() + 0x00236180; // (Hunit;)R
static DWORD _Jass_GetUnitTurnSpeed = GetGameBase() + 0x00236870; // (Hunit;)R
static DWORD _Jass_GetUnitPropWindow = GetGameBase() + 0x002365d0; // (Hunit;)R
static DWORD _Jass_GetUnitFlyHeight = GetGameBase() + 0x002363d0; // (Hunit;)R
static DWORD _Jass_GetUnitDefaultAcquireRange = GetGameBase() + 0x00236210; // (Hunit;)R
static DWORD _Jass_GetUnitDefaultTurnSpeed = GetGameBase() + 0x00236330; // (Hunit;)R
static DWORD _Jass_GetUnitDefaultPropWindow = GetGameBase() + 0x00236300; // (Hunit;)R
static DWORD _Jass_GetUnitDefaultFlyHeight = GetGameBase() + 0x00236240; // (Hunit;)R
static DWORD _Jass_SetUnitAcquireRange = GetGameBase() + 0x00247520; // (Hunit;R)V
static DWORD _Jass_SetUnitState = GetGameBase() + 0x00247d90; // (Hunit;Hunitstate;R)V
static DWORD _Jass_SetUnitOwner = GetGameBase() + 0x00247b80; // (Hunit;Hplayer;B)V
static DWORD _Jass_SetUnitRescuable = GetGameBase() + 0x00247d00; // (Hunit;Hplayer;B)V
static DWORD _Jass_SetUnitRescueRange = GetGameBase() + 0x00247d30; // (Hunit;R)V
static DWORD _Jass_SetUnitColor = GetGameBase() + 0x00247720; // (Hunit;Hplayercolor;)V
static DWORD _Jass_QueueUnitAnimation = GetGameBase() + 0x00242a00; // (Hunit;S)V
static DWORD _Jass_SetUnitAnimation = GetGameBase() + 0x00247540; // (Hunit;S)V
static DWORD _Jass_SetUnitAnimationWithRarity = GetGameBase() + 0x002476d0; // (Hunit;SHraritycontrol;)V
static DWORD _Jass_SetUnitAnimationByIndex = GetGameBase() + 0x00247560; // (Hunit;I)V
static DWORD _Jass_AddUnitAnimationProperties = GetGameBase() + 0x0022a790; // (Hunit;SB)V
static DWORD _Jass_SetUnitScale = GetGameBase() + 0x00247d50; // (Hunit;RRR)V
static DWORD _Jass_SetUnitTimeScale = GetGameBase() + 0x00247dc0; // (Hunit;R)V
static DWORD _Jass_SetUnitBlendTime = GetGameBase() + 0x002476f0; // (Hunit;R)V
static DWORD _Jass_SetUnitVertexColor = GetGameBase() + 0x00247ee0; // (Hunit;IIII)V
static DWORD _Jass_SetUnitLookAt = GetGameBase() + 0x002479f0; // (Hunit;SHunit;RRR)V
static DWORD _Jass_SetUnitPathing = GetGameBase() + 0x00247bc0; // (Hunit;B)V
static DWORD _Jass_ResetUnitLookAt = GetGameBase() + 0x00243490; // (Hunit;)V
static DWORD _Jass_SetHeroStr = GetGameBase() + 0x00245ba0; // (Hunit;IB)V
static DWORD _Jass_SetHeroAgi = GetGameBase() + 0x00245a30; // (Hunit;IB)V
static DWORD _Jass_SetHeroInt = GetGameBase() + 0x00245a90; // (Hunit;IB)V
static DWORD _Jass_GetHeroStr = GetGameBase() + 0x00232c00; // (Hunit;B)I
static DWORD _Jass_GetHeroAgi = GetGameBase() + 0x002329e0; // (Hunit;B)I
static DWORD _Jass_GetHeroInt = GetGameBase() + 0x00232a40; // (Hunit;B)I
static DWORD _Jass_GetHeroSkillPoints = GetGameBase() + 0x00232ba0; // (Hunit;)I
static DWORD _Jass_UnitStripHeroLevel = GetGameBase() + 0x0024b680; // (Hunit;I)B
static DWORD _Jass_UnitModifySkillPoints = GetGameBase() + 0x0024b300; // (Hunit;I)B
static DWORD _Jass_GetHeroXP = GetGameBase() + 0x00232c60; // (Hunit;)I
static DWORD _Jass_SetHeroXP = GetGameBase() + 0x00245c00; // (Hunit;IB)V
static DWORD _Jass_AddHeroXP = GetGameBase() + 0x00229ff0; // (Hunit;IB)V
static DWORD _Jass_SetHeroLevel = GetGameBase() + 0x00245af0; // (Hunit;IB)V
static DWORD _Jass_GetHeroLevel = GetGameBase() + 0x00232aa0; // (Hunit;)I
static DWORD _Jass_GetUnitLevel = GetGameBase() + 0x00236440; // (Hunit;)I
static DWORD _Jass_GetHeroProperName = GetGameBase() + 0x00232b00; // (Hunit;)S
static DWORD _Jass_SuspendHeroXP = GetGameBase() + 0x00248b20; // (Hunit;B)V
static DWORD _Jass_IsSuspendedXP = GetGameBase() + 0x00238600; // (Hunit;)B
static DWORD _Jass_SelectHeroSkill = GetGameBase() + 0x00243fc0; // (Hunit;I)V
static DWORD _Jass_GetUnitAbilityLevel = GetGameBase() + 0x00236120; // (Hunit;I)I
static DWORD _Jass_ReviveHero = GetGameBase() + 0x00243610; // (Hunit;RRB)B
static DWORD _Jass_ReviveHeroLoc = GetGameBase() + 0x00243690; // (Hunit;Hlocation;B)B
static DWORD _Jass_SetUnitExploded = GetGameBase() + 0x00247790; // (Hunit;B)V
static DWORD _Jass_SetUnitInvulnerable = GetGameBase() + 0x002479a0; // (Hunit;B)V
static DWORD _Jass_PauseUnit = GetGameBase() + 0x00241d30; // (Hunit;B)V
static DWORD _Jass_IsUnitPaused = GetGameBase() + 0x00238de0; // (Hunit;)B
static DWORD _Jass_UnitAddItem = GetGameBase() + 0x0024a920; // (Hunit;Hitem;)B
static DWORD _Jass_UnitAddItemById = GetGameBase() + 0x0024aa10; // (Hunit;I)Hitem;
static DWORD _Jass_UnitAddItemToSlotById = GetGameBase() + 0x0024aac0; // (Hunit;II)B
static DWORD _Jass_UnitRemoveItem = GetGameBase() + 0x0024b480; // (Hunit;Hitem;)V
static DWORD _Jass_UnitRemoveItemFromSlot = GetGameBase() + 0x0024b4c0; // (Hunit;I)Hitem;
static DWORD _Jass_UnitHasItem = GetGameBase() + 0x0024b0a0; // (Hunit;Hitem;)B
static DWORD _Jass_UnitItemInSlot = GetGameBase() + 0x0024b260; // (Hunit;I)Hitem;
static DWORD _Jass_UnitInventorySize = GetGameBase() + 0x0024b1f0; // (Hunit;)I
static DWORD _Jass_UnitDropItemPoint = GetGameBase() + 0x0024af30; // (Hunit;Hitem;RR)B
static DWORD _Jass_UnitDropItemSlot = GetGameBase() + 0x0024af90; // (Hunit;Hitem;I)B
static DWORD _Jass_UnitDropItemTarget = GetGameBase() + 0x0024b000; // (Hunit;Hitem;Hwidget;)B
static DWORD _Jass_UnitUseItem = GetGameBase() + 0x0024b740; // (Hunit;Hitem;)B
static DWORD _Jass_UnitUseItemPoint = GetGameBase() + 0x0024b7b0; // (Hunit;Hitem;RR)B
static DWORD _Jass_UnitUseItemTarget = GetGameBase() + 0x0024b820; // (Hunit;Hitem;Hwidget;)B
static DWORD _Jass_GetUnitCurrentOrder = GetGameBase() + 0x002361b0; // (Hunit;)I
static DWORD _Jass_SetResourceAmount = GetGameBase() + 0x002468f0; // (Hunit;I)V
static DWORD _Jass_AddResourceAmount = GetGameBase() + 0x0022a440; // (Hunit;I)V
static DWORD _Jass_GetResourceAmount = GetGameBase() + 0x002349e0; // (Hunit;)I
static DWORD _Jass_SelectUnit = GetGameBase() + 0x00244020; // (Hunit;B)V
static DWORD _Jass_ClearSelection = GetGameBase() + 0x0022b560; // ()V
static DWORD _Jass_UnitAddIndicator = GetGameBase() + 0x0024a890; // (Hunit;IIII)V
static DWORD _Jass_AddIndicator = GetGameBase() + 0x0022a060; // (Hwidget;IIII)V
static DWORD _Jass_KillUnit = GetGameBase() + 0x0023ff00; // (Hunit;)V
static DWORD _Jass_RemoveUnit = GetGameBase() + 0x00243290; // (Hunit;)V
static DWORD _Jass_ShowUnit = GetGameBase() + 0x00248180; // (Hunit;B)V
static DWORD _Jass_IsUnitInForce = GetGameBase() + 0x00238b00; // (Hunit;Hforce;)B
static DWORD _Jass_IsUnitInGroup = GetGameBase() + 0x00238b40; // (Hunit;Hgroup;)B
static DWORD _Jass_IsUnitOwnedByPlayer = GetGameBase() + 0x00238da0; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitAlly = GetGameBase() + 0x00238740; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitEnemy = GetGameBase() + 0x002387e0; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitVisible = GetGameBase() + 0x002390a0; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitDetected = GetGameBase() + 0x002387a0; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitInvisible = GetGameBase() + 0x00238cc0; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitFogged = GetGameBase() + 0x00238860; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitMasked = GetGameBase() + 0x00238d20; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitSelected = GetGameBase() + 0x00238e60; // (Hunit;Hplayer;)B
static DWORD _Jass_IsUnitRace = GetGameBase() + 0x00238e30; // (Hunit;Hrace;)B
static DWORD _Jass_IsUnitType = GetGameBase() + 0x00238ee0; // (Hunit;Hunittype;)B
static DWORD _Jass_IsUnit = GetGameBase() + 0x00238710; // (Hunit;Hunit;)B
static DWORD _Jass_IsUnitInRange = GetGameBase() + 0x00238b70; // (Hunit;Hunit;R)B
static DWORD _Jass_IsUnitInRangeXY = GetGameBase() + 0x00238c00; // (Hunit;RRR)B
static DWORD _Jass_IsUnitInRangeLoc = GetGameBase() + 0x00238bc0; // (Hunit;Hlocation;R)B
static DWORD _Jass_IsUnitHidden = GetGameBase() + 0x002388e0; // (Hunit;)B
static DWORD _Jass_IsUnitIllusion = GetGameBase() + 0x00238ae0; // (Hunit;)B
static DWORD _Jass_IsUnitInTransport = GetGameBase() + 0x00238c90; // (Hunit;Hunit;)B
static DWORD _Jass_IsUnitLoaded = GetGameBase() + 0x00238d00; // (Hunit;)B
static DWORD _Jass_IsHeroUnitId = GetGameBase() + 0x00237d70; // (I)B
static DWORD _Jass_IsUnitIdType = GetGameBase() + 0x00238900; // (IHunittype;)B
static DWORD _Jass_GetOwningPlayer = GetGameBase() + 0x00233dd0; // (Hunit;)Hplayer;
static DWORD _Jass_UnitShareVision = GetGameBase() + 0x0024b650; // (Hunit;Hplayer;B)V
static DWORD _Jass_UnitSuspendDecay = GetGameBase() + 0x0024b6e0; // (Hunit;B)V
static DWORD _Jass_UnitAddType = GetGameBase() + 0x0024ac00; // (Hunit;Hunittype;)B
static DWORD _Jass_UnitRemoveType = GetGameBase() + 0x0024b520; // (Hunit;Hunittype;)B
static DWORD _Jass_UnitAddAbility = GetGameBase() + 0x0024a820; // (Hunit;I)B
static DWORD _Jass_UnitRemoveAbility = GetGameBase() + 0x0024b3c0; // (Hunit;I)B
static DWORD _Jass_UnitMakeAbilityPermanent = GetGameBase() + 0x0024b2b0; // (Hunit;BI)B
static DWORD _Jass_UnitHasBuffsEx = GetGameBase() + 0x0024b060; // (Hunit;BBBBBBB)B
static DWORD _Jass_UnitCountBuffsEx = GetGameBase() + 0x0024ad50; // (Hunit;BBBBBBB)I
static DWORD _Jass_UnitRemoveBuffs = GetGameBase() + 0x0024b410; // (Hunit;BB)V
static DWORD _Jass_UnitRemoveBuffsEx = GetGameBase() + 0x0024b440; // (Hunit;BBBBBBB)V
static DWORD _Jass_UnitAddSleep = GetGameBase() + 0x0024ab60; // (Hunit;B)V
static DWORD _Jass_UnitCanSleep = GetGameBase() + 0x0024acd0; // (Hunit;)B
static DWORD _Jass_UnitAddSleepPerm = GetGameBase() + 0x0024abb0; // (Hunit;B)V
static DWORD _Jass_UnitCanSleepPerm = GetGameBase() + 0x0024ad10; // (Hunit;)B
static DWORD _Jass_UnitIsSleeping = GetGameBase() + 0x0024b220; // (Hunit;)B
static DWORD _Jass_UnitWakeUp = GetGameBase() + 0x0024b8a0; // (Hunit;)V
static DWORD _Jass_UnitApplyTimedLife = GetGameBase() + 0x0024ac60; // (Hunit;IR)V
static DWORD _Jass_UnitIgnoreAlarm = GetGameBase() + 0x0024b150; // (Hunit;B)B
static DWORD _Jass_UnitIgnoreAlarmToggled = GetGameBase() + 0x0024b1b0; // (Hunit;)B
static DWORD _Jass_UnitDamagePoint = GetGameBase() + 0x0024ad90; // (Hunit;RRRRRBBHattacktype;Hdamagetype;Hweapontype;)B
static DWORD _Jass_UnitDamageTarget = GetGameBase() + 0x0024ae80; // (Hunit;Hwidget;RBBHattacktype;Hdamagetype;Hweapontype;)B
static DWORD _Jass_DecUnitAbilityLevel = GetGameBase() + 0x0022f400; // (Hunit;I)I
static DWORD _Jass_IncUnitAbilityLevel = GetGameBase() + 0x00237570; // (Hunit;I)I
static DWORD _Jass_SetUnitAbilityLevel = GetGameBase() + 0x00247450; // (Hunit;II)I
static DWORD _Jass_UnitResetCooldown = GetGameBase() + 0x0024b580; // (Hunit;)V
static DWORD _Jass_UnitSetConstructionProgress = GetGameBase() + 0x0024b5a0; // (Hunit;I)V
static DWORD _Jass_UnitSetUpgradeProgress = GetGameBase() + 0x0024b5e0; // (Hunit;I)V
static DWORD _Jass_UnitPauseTimedLife = GetGameBase() + 0x0024b360; // (Hunit;B)V
static DWORD _Jass_UnitSetUsesAltIcon = GetGameBase() + 0x0024b620; // (Hunit;B)V
static DWORD _Jass_IssueImmediateOrderById = GetGameBase() + 0x002392c0; // (Hunit;I)B
static DWORD _Jass_IssuePointOrderById = GetGameBase() + 0x00239690; // (Hunit;IRR)B
static DWORD _Jass_IssuePointOrderByIdLoc = GetGameBase() + 0x00239830; // (Hunit;IHlocation;)B
static DWORD _Jass_IssueTargetOrderById = GetGameBase() + 0x002398e0; // (Hunit;IHwidget;)B
static DWORD _Jass_IssueInstantPointOrderById = GetGameBase() + 0x00239360; // (Hunit;IRRHwidget;)B
static DWORD _Jass_IssueInstantTargetOrderById = GetGameBase() + 0x00239410; // (Hunit;IHwidget;Hwidget;)B
static DWORD _Jass_IssueBuildOrderById = GetGameBase() + 0x002391f0; // (Hunit;IRR)B
static DWORD _Jass_IssueNeutralImmediateOrderById = GetGameBase() + 0x00239550; // (Hplayer;Hunit;I)B
static DWORD _Jass_IssueNeutralPointOrderById = GetGameBase() + 0x002395b0; // (Hplayer;Hunit;IRR)B
static DWORD _Jass_IssueNeutralTargetOrderById = GetGameBase() + 0x00239620; // (Hplayer;Hunit;IHwidget;)B
static DWORD _Jass_IssueImmediateOrder = GetGameBase() + 0x002392a0; // (Hunit;S)B
static DWORD _Jass_IssuePointOrder = GetGameBase() + 0x00239670; // (Hunit;SRR)B
static DWORD _Jass_IssuePointOrderLoc = GetGameBase() + 0x00239870; // (Hunit;SHlocation;)B
static DWORD _Jass_IssueTargetOrder = GetGameBase() + 0x002398c0; // (Hunit;SHwidget;)B
static DWORD _Jass_IssueInstantPointOrder = GetGameBase() + 0x00239340; // (Hunit;SRRHwidget;)B
static DWORD _Jass_IssueInstantTargetOrder = GetGameBase() + 0x002393f0; // (Hunit;SHwidget;Hwidget;)B
static DWORD _Jass_IssueBuildOrder = GetGameBase() + 0x002391d0; // (Hunit;SRR)B
static DWORD _Jass_IssueNeutralImmediateOrder = GetGameBase() + 0x00239530; // (Hplayer;Hunit;S)B
static DWORD _Jass_IssueNeutralPointOrder = GetGameBase() + 0x00239590; // (Hplayer;Hunit;SRR)B
static DWORD _Jass_IssueNeutralTargetOrder = GetGameBase() + 0x00239600; // (Hplayer;Hunit;SHwidget;)B
static DWORD _Jass_WaygateGetDestinationX = GetGameBase() + 0x0024baa0; // (Hunit;)R
static DWORD _Jass_WaygateGetDestinationY = GetGameBase() + 0x0024baf0; // (Hunit;)R
static DWORD _Jass_WaygateSetDestination = GetGameBase() + 0x0024bb80; // (Hunit;RR)V
static DWORD _Jass_WaygateActivate = GetGameBase() + 0x0024ba60; // (Hunit;B)V
static DWORD _Jass_WaygateIsActive = GetGameBase() + 0x0024bb40; // (Hunit;)B
static DWORD _Jass_AddItemToAllStock = GetGameBase() + 0x0022a200; // (III)V
static DWORD _Jass_AddItemToStock = GetGameBase() + 0x0022a220; // (Hunit;III)V
static DWORD _Jass_AddUnitToAllStock = GetGameBase() + 0x0022a840; // (III)V
static DWORD _Jass_AddUnitToStock = GetGameBase() + 0x0022a860; // (Hunit;III)V
static DWORD _Jass_RemoveItemFromAllStock = GetGameBase() + 0x00243040; // (I)V
static DWORD _Jass_RemoveItemFromStock = GetGameBase() + 0x00243050; // (Hunit;I)V
static DWORD _Jass_RemoveUnitFromAllStock = GetGameBase() + 0x002432c0; // (I)V
static DWORD _Jass_RemoveUnitFromStock = GetGameBase() + 0x002432d0; // (Hunit;I)V
static DWORD _Jass_SetAllItemTypeSlots = GetGameBase() + 0x00244170; // (I)V
static DWORD _Jass_SetAllUnitTypeSlots = GetGameBase() + 0x00244180; // (I)V
static DWORD _Jass_SetItemTypeSlots = GetGameBase() + 0x00246040; // (Hunit;I)V
static DWORD _Jass_SetUnitTypeSlots = GetGameBase() + 0x00247e10; // (Hunit;I)V
static DWORD _Jass_GetUnitUserData = GetGameBase() + 0x002368c0; // (Hunit;)I
static DWORD _Jass_SetUnitUserData = GetGameBase() + 0x00247ec0; // (Hunit;I)V
static DWORD _Jass_CreateItem = GetGameBase() + 0x0022e450; // (IRR)Hitem;
static DWORD _Jass_RemoveItem = GetGameBase() + 0x00243010; // (Hitem;)V
static DWORD _Jass_GetItemPlayer = GetGameBase() + 0x00232e80; // (Hitem;)Hplayer;
static DWORD _Jass_GetItemTypeId = GetGameBase() + 0x00232ef0; // (Hitem;)I
static DWORD _Jass_GetItemX = GetGameBase() + 0x00232f30; // (Hitem;)R
static DWORD _Jass_GetItemY = GetGameBase() + 0x00232f70; // (Hitem;)R
static DWORD _Jass_SetItemPosition = GetGameBase() + 0x00245fc0; // (Hitem;RR)V
static DWORD _Jass_SetItemDropOnDeath = GetGameBase() + 0x00245ee0; // (Hitem;B)V
static DWORD _Jass_SetItemDroppable = GetGameBase() + 0x00245f10; // (Hitem;B)V
static DWORD _Jass_SetItemPawnable = GetGameBase() + 0x00245f60; // (Hitem;B)V
static DWORD _Jass_SetItemPlayer = GetGameBase() + 0x00245f90; // (Hitem;Hplayer;B)V
static DWORD _Jass_SetItemInvulnerable = GetGameBase() + 0x00245f40; // (Hitem;B)V
static DWORD _Jass_IsItemInvulnerable = GetGameBase() + 0x00237e30; // (Hitem;)B
static DWORD _Jass_GetItemLevel = GetGameBase() + 0x00232e30; // (Hitem;)I
static DWORD _Jass_GetItemType = GetGameBase() + 0x00232ed0; // (Hitem;)Hitemtype;
static DWORD _Jass_SetItemVisible = GetGameBase() + 0x002460a0; // (Hitem;B)V
static DWORD _Jass_IsItemVisible = GetGameBase() + 0x00237ef0; // (Hitem;)B
static DWORD _Jass_EnumItemsInRect = GetGameBase() + 0x00230480; // (Hrect;Hboolexpr;C)V
static DWORD _Jass_IsItemOwned = GetGameBase() + 0x00237e50; // (Hitem;)B
static DWORD _Jass_IsItemPowerup = GetGameBase() + 0x00237eb0; // (Hitem;)B
static DWORD _Jass_IsItemSellable = GetGameBase() + 0x00237ed0; // (Hitem;)B
static DWORD _Jass_IsItemPawnable = GetGameBase() + 0x00237e90; // (Hitem;)B
static DWORD _Jass_IsItemIdPowerup = GetGameBase() + 0x00237e10; // (I)B
static DWORD _Jass_IsItemIdSellable = GetGameBase() + 0x00237e20; // (I)B
static DWORD _Jass_IsItemIdPawnable = GetGameBase() + 0x00237e00; // (I)B
static DWORD _Jass_SetItemDropID = GetGameBase() + 0x00245ec0; // (Hitem;I)V
static DWORD _Jass_GetItemName = GetGameBase() + 0x00232e50; // (Hitem;)S
static DWORD _Jass_GetItemCharges = GetGameBase() + 0x00232e10; // (Hitem;)I
static DWORD _Jass_SetItemCharges = GetGameBase() + 0x00245e60; // (Hitem;I)V
static DWORD _Jass_GetItemUserData = GetGameBase() + 0x00232f10; // (Hitem;)I
static DWORD _Jass_SetItemUserData = GetGameBase() + 0x00246080; // (Hitem;I)V
static DWORD _Jass_Player = GetGameBase() + 0x00242080; // (I)Hplayer;
static DWORD _Jass_GetLocalPlayer = GetGameBase() + 0x00233380; // ()Hplayer;
static DWORD _Jass_IsPlayerAlly = GetGameBase() + 0x00238260; // (Hplayer;Hplayer;)B
static DWORD _Jass_IsPlayerEnemy = GetGameBase() + 0x002382b0; // (Hplayer;Hplayer;)B
static DWORD _Jass_IsPlayerInForce = GetGameBase() + 0x00238360; // (Hplayer;Hforce;)B
static DWORD _Jass_IsPlayerObserver = GetGameBase() + 0x00238390; // (Hplayer;)B
static DWORD _Jass_GetPlayerRace = GetGameBase() + 0x00233fa0; // (Hplayer;)Hrace;
static DWORD _Jass_GetPlayerId = GetGameBase() + 0x00233f50; // (Hplayer;)I
static DWORD _Jass_SetPlayerTechMaxAllowed = GetGameBase() + 0x00246720; // (Hplayer;II)V
static DWORD _Jass_GetPlayerTechMaxAllowed = GetGameBase() + 0x002343f0; // (Hplayer;I)I
static DWORD _Jass_AddPlayerTechResearched = GetGameBase() + 0x0022a3e0; // (Hplayer;II)V
static DWORD _Jass_SetPlayerTechResearched = GetGameBase() + 0x00246750; // (Hplayer;II)V
static DWORD _Jass_GetPlayerTechResearched = GetGameBase() + 0x00234430; // (Hplayer;IB)B
static DWORD _Jass_GetPlayerTechCount = GetGameBase() + 0x002343c0; // (Hplayer;IB)I
static DWORD _Jass_SetPlayerAbilityAvailable = GetGameBase() + 0x00246310; // (Hplayer;IB)V
static DWORD _Jass_GetPlayerUnitCount = GetGameBase() + 0x002344d0; // (Hplayer;B)I
static DWORD _Jass_GetPlayerTypedUnitCount = GetGameBase() + 0x00234460; // (Hplayer;SBB)I
static DWORD _Jass_GetPlayerStructureCount = GetGameBase() + 0x00234310; // (Hplayer;B)I
static DWORD _Jass_IsVisibleToPlayer = GetGameBase() + 0x00239170; // (RRHplayer;)B
static DWORD _Jass_IsLocationVisibleToPlayer = GetGameBase() + 0x00238000; // (Hlocation;Hplayer;)B
static DWORD _Jass_IsFoggedToPlayer = GetGameBase() + 0x00237c30; // (RRHplayer;)B
static DWORD _Jass_IsLocationFoggedToPlayer = GetGameBase() + 0x00237f40; // (Hlocation;Hplayer;)B
static DWORD _Jass_IsMaskedToPlayer = GetGameBase() + 0x00238110; // (RRHplayer;)B
static DWORD _Jass_IsLocationMaskedToPlayer = GetGameBase() + 0x00237fc0; // (Hlocation;Hplayer;)B
static DWORD _Jass_SetPlayerState = GetGameBase() + 0x00246630; // (Hplayer;Hplayerstate;I)V
static DWORD _Jass_GetPlayerState = GetGameBase() + 0x002342b0; // (Hplayer;Hplayerstate;)I
static DWORD _Jass_GetPlayerScore = GetGameBase() + 0x00233fc0; // (Hplayer;Hplayerscore;)I
static DWORD _Jass_GetPlayerAlliance = GetGameBase() + 0x00233e80; // (Hplayer;Hplayer;Halliancetype;)B
static DWORD _Jass_RemovePlayer = GetGameBase() + 0x002430c0; // (Hplayer;Hplayergameresult;)V
static DWORD _Jass_CachePlayerHeroData = GetGameBase() + 0x0022abc0; // (Hplayer;)V
static DWORD _Jass_GetPlayerHandicap = GetGameBase() + 0x00233f10; // (Hplayer;)R
static DWORD _Jass_SetPlayerHandicap = GetGameBase() + 0x00246430; // (Hplayer;R)V
static DWORD _Jass_GetPlayerHandicapXP = GetGameBase() + 0x00233f30; // (Hplayer;)R
static DWORD _Jass_SetPlayerHandicapXP = GetGameBase() + 0x002464f0; // (Hplayer;R)V
static DWORD _Jass_SetPlayerUnitsOwner = GetGameBase() + 0x00246790; // (Hplayer;I)V
static DWORD _Jass_CripplePlayer = GetGameBase() + 0x0022f350; // (Hplayer;Hforce;B)V
static DWORD _Jass_VersionGet = GetGameBase() + 0x0024b9e0; // ()Hversion;
static DWORD _Jass_VersionCompatible = GetGameBase() + 0x0024b9d0; // (Hversion;)B
static DWORD _Jass_VersionSupported = GetGameBase() + 0x0024b9f0; // (Hversion;)B
static DWORD _Jass_EndGame = GetGameBase() + 0x00230350; // (B)V
static DWORD _Jass_ChangeLevel = GetGameBase() + 0x0022b1f0; // (SB)V
static DWORD _Jass_RestartGame = GetGameBase() + 0x002434f0; // (B)V
static DWORD _Jass_ReloadGame = GetGameBase() + 0x00242f30; // ()V
static DWORD _Jass_LoadGame = GetGameBase() + 0x00240860; // (SB)V
static DWORD _Jass_SaveGame = GetGameBase() + 0x002439e0; // (S)V
static DWORD _Jass_RenameSaveDirectory = GetGameBase() + 0x00243320; // (SS)B
static DWORD _Jass_RemoveSaveDirectory = GetGameBase() + 0x00243120; // (S)B
static DWORD _Jass_CopySaveGame = GetGameBase() + 0x0022bc40; // (SS)B
static DWORD _Jass_SaveGameExists = GetGameBase() + 0x00243ad0; // (S)B
static DWORD _Jass_SetFloatGameState = GetGameBase() + 0x002450b0; // (Hfgamestate;R)V
static DWORD _Jass_GetFloatGameState = GetGameBase() + 0x00232750; // (Hfgamestate;)R
static DWORD _Jass_SetIntegerGameState = GetGameBase() + 0x00245dd0; // (Higamestate;I)V
static DWORD _Jass_GetIntegerGameState = GetGameBase() + 0x00232d60; // (Higamestate;)I
static DWORD _Jass_SyncSelections = GetGameBase() + 0x00248bb0; // ()V
static DWORD _Jass_DialogCreate = GetGameBase() + 0x0022fcb0; // ()Hdialog;
static DWORD _Jass_DialogDestroy = GetGameBase() + 0x0022fda0; // (Hdialog;)V
static DWORD _Jass_DialogSetAsync = GetGameBase() + 0x0022fe10; // (Hdialog;)V
static DWORD _Jass_DialogClear = GetGameBase() + 0x0022fc90; // (Hdialog;)V
static DWORD _Jass_DialogSetMessage = GetGameBase() + 0x0022fe30; // (Hdialog;S)V
static DWORD _Jass_DialogAddButton = GetGameBase() + 0x0022fbf0; // (Hdialog;SI)Hbutton;
static DWORD _Jass_DialogAddQuitButton = GetGameBase() + 0x0022fc40; // (Hdialog;BSI)Hbutton;
static DWORD _Jass_DialogDisplay = GetGameBase() + 0x0022fdc0; // (Hplayer;Hdialog;B)V
static DWORD _Jass_SetMissionAvailable = GetGameBase() + 0x00246260; // (IIB)V
static DWORD _Jass_SetCampaignAvailable = GetGameBase() + 0x00244660; // (IB)V
static DWORD _Jass_SetCampaignMenuRace = GetGameBase() + 0x00244690; // (Hrace;)V
static DWORD _Jass_SetCampaignMenuRaceEx = GetGameBase() + 0x002446c0; // (I)V
static DWORD _Jass_ForceCampaignSelectScreen = GetGameBase() + 0x00230ef0; // ()V
static DWORD _Jass_SetOpCinematicAvailable = GetGameBase() + 0x002462e0; // (IB)V
static DWORD _Jass_SetEdCinematicAvailable = GetGameBase() + 0x00244ff0; // (IB)V
static DWORD _Jass_SetTutorialCleared = GetGameBase() + 0x002473e0; // (B)V
static DWORD _Jass_GetDefaultDifficulty = GetGameBase() + 0x00232160; // ()Hgamedifficulty;
static DWORD _Jass_SetDefaultDifficulty = GetGameBase() + 0x00244c90; // (Hgamedifficulty;)V
static DWORD _Jass_ReloadGameCachesFromDisk = GetGameBase() + 0x00242f50; // ()B
static DWORD _Jass_SetCustomCampaignButtonVisible = GetGameBase() + 0x00244c30; // (IB)V
static DWORD _Jass_GetCustomCampaignButtonVisible = GetGameBase() + 0x002320f0; // (I)B
static DWORD _Jass_DoNotSaveReplay = GetGameBase() + 0x00230130; // ()V
static DWORD _Jass_InitGameCache = GetGameBase() + 0x002375f0; // (S)Hgamecache;
static DWORD _Jass_SaveGameCache = GetGameBase() + 0x00243aa0; // (Hgamecache;)B
static DWORD _Jass_StoreInteger = GetGameBase() + 0x00248590; // (Hgamecache;SSI)V
static DWORD _Jass_StoreReal = GetGameBase() + 0x002485e0; // (Hgamecache;SSR)V
static DWORD _Jass_StoreBoolean = GetGameBase() + 0x00248530; // (Hgamecache;SSB)V
static DWORD _Jass_StoreUnit = GetGameBase() + 0x00248690; // (Hgamecache;SSHunit;)B
static DWORD _Jass_StoreString = GetGameBase() + 0x00248630; // (Hgamecache;SSS)B
static DWORD _Jass_SaveInteger = GetGameBase() + 0x00243ba0; // (Hhashtable;III)V
static DWORD _Jass_SaveReal = GetGameBase() + 0x00243d20; // (Hhashtable;IIR)V
static DWORD _Jass_SaveBoolean = GetGameBase() + 0x00243880; // (Hhashtable;IIB)V
static DWORD _Jass_SaveStr = GetGameBase() + 0x00243e00; // (Hhashtable;IIS)B
static DWORD _Jass_SavePlayerHandle = GetGameBase() + 0x00243cc0; // (Hhashtable;IIHplayer;)B
static DWORD _Jass_SaveWidgetHandle = GetGameBase() + 0x00243fa0; // (Hhashtable;IIHwidget;)B
static DWORD _Jass_SaveDestructableHandle = GetGameBase() + 0x00243920; // (Hhashtable;IIHdestructable;)B
static DWORD _Jass_SaveItemHandle = GetGameBase() + 0x00243be0; // (Hhashtable;IIHitem;)B
static DWORD _Jass_SaveUnitHandle = GetGameBase() + 0x00243f60; // (Hhashtable;IIHunit;)B
static DWORD _Jass_SaveAbilityHandle = GetGameBase() + 0x00243840; // (Hhashtable;IIHability;)B
static DWORD _Jass_SaveTimerHandle = GetGameBase() + 0x00243e80; // (Hhashtable;IIHtimer;)B
static DWORD _Jass_SaveRegionHandle = GetGameBase() + 0x00243d80; // (Hhashtable;IIHregion;)B
static DWORD _Jass_SaveTriggerHandle = GetGameBase() + 0x00243f20; // (Hhashtable;IIHtrigger;)B
static DWORD _Jass_SaveTriggerConditionHandle = GetGameBase() + 0x00243ee0; // (Hhashtable;IIHtriggercondition;)B
static DWORD _Jass_SaveTriggerActionHandle = GetGameBase() + 0x00243ec0; // (Hhashtable;IIHtriggeraction;)B
static DWORD _Jass_SaveTriggerEventHandle = GetGameBase() + 0x00243f00; // (Hhashtable;IIHevent;)B
static DWORD _Jass_SaveForceHandle = GetGameBase() + 0x002439c0; // (Hhashtable;IIHforce;)B
static DWORD _Jass_SaveGroupHandle = GetGameBase() + 0x00243b40; // (Hhashtable;IIHgroup;)B
static DWORD _Jass_SaveLocationHandle = GetGameBase() + 0x00243c60; // (Hhashtable;IIHlocation;)B
static DWORD _Jass_SaveRectHandle = GetGameBase() + 0x00243d60; // (Hhashtable;IIHrect;)B
static DWORD _Jass_SaveBooleanExprHandle = GetGameBase() + 0x002438c0; // (Hhashtable;IIHboolexpr;)B
static DWORD _Jass_SaveSoundHandle = GetGameBase() + 0x00243de0; // (Hhashtable;IIHsound;)B
static DWORD _Jass_SaveEffectHandle = GetGameBase() + 0x00243960; // (Hhashtable;IIHeffect;)B
static DWORD _Jass_SaveUnitPoolHandle = GetGameBase() + 0x00243f80; // (Hhashtable;IIHunitpool;)B
static DWORD _Jass_SaveItemPoolHandle = GetGameBase() + 0x00243c00; // (Hhashtable;IIHitempool;)B
static DWORD _Jass_SaveQuestHandle = GetGameBase() + 0x00243ce0; // (Hhashtable;IIHquest;)B
static DWORD _Jass_SaveQuestItemHandle = GetGameBase() + 0x00243d00; // (Hhashtable;IIHquestitem;)B
static DWORD _Jass_SaveDefeatConditionHandle = GetGameBase() + 0x00243900; // (Hhashtable;IIHdefeatcondition;)B
static DWORD _Jass_SaveTimerDialogHandle = GetGameBase() + 0x00243e60; // (Hhashtable;IIHtimerdialog;)B
static DWORD _Jass_SaveLeaderboardHandle = GetGameBase() + 0x00243c20; // (Hhashtable;IIHleaderboard;)B
static DWORD _Jass_SaveMultiboardHandle = GetGameBase() + 0x00243c80; // (Hhashtable;IIHmultiboard;)B
static DWORD _Jass_SaveMultiboardItemHandle = GetGameBase() + 0x00243ca0; // (Hhashtable;IIHmultiboarditem;)B
static DWORD _Jass_SaveTrackableHandle = GetGameBase() + 0x00243ea0; // (Hhashtable;IIHtrackable;)B
static DWORD _Jass_SaveDialogHandle = GetGameBase() + 0x00243940; // (Hhashtable;IIHdialog;)B
static DWORD _Jass_SaveButtonHandle = GetGameBase() + 0x002438e0; // (Hhashtable;IIHbutton;)B
static DWORD _Jass_SaveTextTagHandle = GetGameBase() + 0x00243e40; // (Hhashtable;IIHtexttag;)B
static DWORD _Jass_SaveLightningHandle = GetGameBase() + 0x00243c40; // (Hhashtable;IIHlightning;)B
static DWORD _Jass_SaveImageHandle = GetGameBase() + 0x00243b80; // (Hhashtable;IIHimage;)B
static DWORD _Jass_SaveUbersplatHandle = GetGameBase() + 0x00243f40; // (Hhashtable;IIHubersplat;)B
static DWORD _Jass_SaveFogStateHandle = GetGameBase() + 0x002439a0; // (Hhashtable;IIHfogstate;)B
static DWORD _Jass_SaveFogModifierHandle = GetGameBase() + 0x00243980; // (Hhashtable;IIHfogmodifier;)B
static DWORD _Jass_SaveAgentHandle = GetGameBase() + 0x00243860; // (Hhashtable;IIHagent;)B
static DWORD _Jass_SaveHashtableHandle = GetGameBase() + 0x00243b60; // (Hhashtable;IIHhashtable;)B
static DWORD _Jass_SyncStoredInteger = GetGameBase() + 0x00248c50; // (Hgamecache;SS)V
static DWORD _Jass_SyncStoredReal = GetGameBase() + 0x00248cb0; // (Hgamecache;SS)V
static DWORD _Jass_SyncStoredBoolean = GetGameBase() + 0x00248bf0; // (Hgamecache;SS)V
static DWORD _Jass_SyncStoredUnit = GetGameBase() + 0x00248d70; // (Hgamecache;SS)V
static DWORD _Jass_SyncStoredString = GetGameBase() + 0x00248d10; // (Hgamecache;SS)V
static DWORD _Jass_GetStoredInteger = GetGameBase() + 0x00235940; // (Hgamecache;SS)I
static DWORD _Jass_GetStoredReal = GetGameBase() + 0x00235990; // (Hgamecache;SS)R
static DWORD _Jass_GetStoredBoolean = GetGameBase() + 0x002358f0; // (Hgamecache;SS)B
static DWORD _Jass_RestoreUnit = GetGameBase() + 0x00243520; // (Hgamecache;SSHplayer;RRR)Hunit;
static DWORD _Jass_GetStoredString = GetGameBase() + 0x002359f0; // (Hgamecache;SS)S
static DWORD _Jass_HaveStoredInteger = GetGameBase() + 0x00237320; // (Hgamecache;SS)B
static DWORD _Jass_HaveStoredReal = GetGameBase() + 0x00237370; // (Hgamecache;SS)B
static DWORD _Jass_HaveStoredBoolean = GetGameBase() + 0x002372d0; // (Hgamecache;SS)B
static DWORD _Jass_HaveStoredUnit = GetGameBase() + 0x00237410; // (Hgamecache;SS)B
static DWORD _Jass_HaveStoredString = GetGameBase() + 0x002373c0; // (Hgamecache;SS)B
static DWORD _Jass_FlushGameCache = GetGameBase() + 0x00230b70; // (Hgamecache;)V
static DWORD _Jass_FlushStoredMission = GetGameBase() + 0x00230c90; // (Hgamecache;S)V
static DWORD _Jass_FlushStoredInteger = GetGameBase() + 0x00230c40; // (Hgamecache;SS)V
static DWORD _Jass_FlushStoredReal = GetGameBase() + 0x00230cd0; // (Hgamecache;SS)V
static DWORD _Jass_FlushStoredBoolean = GetGameBase() + 0x00230bf0; // (Hgamecache;SS)V
static DWORD _Jass_FlushStoredUnit = GetGameBase() + 0x00230d70; // (Hgamecache;SS)V
static DWORD _Jass_FlushStoredString = GetGameBase() + 0x00230d20; // (Hgamecache;SS)V
static DWORD _Jass_InitHashtable = GetGameBase() + 0x00237700; // ()Hhashtable;
static DWORD _Jass_LoadInteger = GetGameBase() + 0x00240940; // (Hhashtable;II)I;
static DWORD _Jass_LoadReal = GetGameBase() + 0x00240ac0; // (Hhashtable;II)R;
static DWORD _Jass_LoadBoolean = GetGameBase() + 0x00240700; // (Hhashtable;II)B;
static DWORD _Jass_LoadStr = GetGameBase() + 0x00240c60; // (Hhashtable;II)S;
static DWORD _Jass_LoadPlayerHandle = GetGameBase() + 0x00240a60; // (Hhashtable;II)Hplayer;
static DWORD _Jass_LoadWidgetHandle = GetGameBase() + 0x00240e00; // (Hhashtable;II)Hwidget;
static DWORD _Jass_LoadDestructableHandle = GetGameBase() + 0x002407a0; // (Hhashtable;II)Hdestructable;
static DWORD _Jass_LoadItemHandle = GetGameBase() + 0x00240980; // (Hhashtable;II)Hitem;
static DWORD _Jass_LoadUnitHandle = GetGameBase() + 0x00240dc0; // (Hhashtable;II)Hunit;
static DWORD _Jass_LoadAbilityHandle = GetGameBase() + 0x002406e0; // (Hhashtable;II)Hability;
static DWORD _Jass_LoadTimerHandle = GetGameBase() + 0x00240ce0; // (Hhashtable;II)Htimer;
static DWORD _Jass_LoadRegionHandle = GetGameBase() + 0x00240b20; // (Hhashtable;II)Hregion;
static DWORD _Jass_LoadTriggerHandle = GetGameBase() + 0x00240d80; // (Hhashtable;II)Htrigger;
static DWORD _Jass_LoadTriggerConditionHandle = GetGameBase() + 0x00240d40; // (Hhashtable;II)Htriggercondition;
static DWORD _Jass_LoadTriggerActionHandle = GetGameBase() + 0x00240d20; // (Hhashtable;II)Htriggeraction;
static DWORD _Jass_LoadTriggerEventHandle = GetGameBase() + 0x00240d60; // (Hhashtable;II)Hevent;
static DWORD _Jass_LoadForceHandle = GetGameBase() + 0x00240840; // (Hhashtable;II)Hforce;
static DWORD _Jass_LoadGroupHandle = GetGameBase() + 0x002408e0; // (Hhashtable;II)Hgroup;
static DWORD _Jass_LoadLocationHandle = GetGameBase() + 0x00240a00; // (Hhashtable;II)Hlocation;
static DWORD _Jass_LoadRectHandle = GetGameBase() + 0x00240b00; // (Hhashtable;II)Hrect;
static DWORD _Jass_LoadBooleanExprHandle = GetGameBase() + 0x00240740; // (Hhashtable;II)Hboolexpr;
static DWORD _Jass_LoadSoundHandle = GetGameBase() + 0x00240c40; // (Hhashtable;II)Hsound;
static DWORD _Jass_LoadEffectHandle = GetGameBase() + 0x002407e0; // (Hhashtable;II)Heffect;
static DWORD _Jass_LoadUnitPoolHandle = GetGameBase() + 0x00240de0; // (Hhashtable;II)Hunitpool;
static DWORD _Jass_LoadItemPoolHandle = GetGameBase() + 0x002409a0; // (Hhashtable;II)Hitempool;
static DWORD _Jass_LoadQuestHandle = GetGameBase() + 0x00240a80; // (Hhashtable;II)Hquest;
static DWORD _Jass_LoadQuestItemHandle = GetGameBase() + 0x00240aa0; // (Hhashtable;II)Hquestitem;
static DWORD _Jass_LoadDefeatConditionHandle = GetGameBase() + 0x00240780; // (Hhashtable;II)Hdefeatcondition;
static DWORD _Jass_LoadTimerDialogHandle = GetGameBase() + 0x00240cc0; // (Hhashtable;II)Htimerdialog;
static DWORD _Jass_LoadLeaderboardHandle = GetGameBase() + 0x002409c0; // (Hhashtable;II)Hleaderboard;
static DWORD _Jass_LoadMultiboardHandle = GetGameBase() + 0x00240a20; // (Hhashtable;II)Hmultiboard;
static DWORD _Jass_LoadMultiboardItemHandle = GetGameBase() + 0x00240a40; // (Hhashtable;II)Hmultiboarditem;
static DWORD _Jass_LoadTrackableHandle = GetGameBase() + 0x00240d00; // (Hhashtable;II)Htrackable;
static DWORD _Jass_LoadDialogHandle = GetGameBase() + 0x002407c0; // (Hhashtable;II)Hdialog;
static DWORD _Jass_LoadButtonHandle = GetGameBase() + 0x00240760; // (Hhashtable;II)Hbutton;
static DWORD _Jass_LoadTextTagHandle = GetGameBase() + 0x00240ca0; // (Hhashtable;II)Htexttag;
static DWORD _Jass_LoadLightningHandle = GetGameBase() + 0x002409e0; // (Hhashtable;II)Hlightning;
static DWORD _Jass_LoadImageHandle = GetGameBase() + 0x00240920; // (Hhashtable;II)Himage;
static DWORD _Jass_LoadUbersplatHandle = GetGameBase() + 0x00240da0; // (Hhashtable;II)Hubersplat;
static DWORD _Jass_LoadFogStateHandle = GetGameBase() + 0x00240820; // (Hhashtable;II)Hfogstate;
static DWORD _Jass_LoadFogModifierHandle = GetGameBase() + 0x00240800; // (Hhashtable;II)Hfogmodifier;
static DWORD _Jass_LoadHashtableHandle = GetGameBase() + 0x00240900; // (Hhashtable;II)Hhashtable;
static DWORD _Jass_HaveSavedInteger = GetGameBase() + 0x00237210; // (Hhashtable;II)B
static DWORD _Jass_HaveSavedReal = GetGameBase() + 0x00237250; // (Hhashtable;II)B
static DWORD _Jass_HaveSavedBoolean = GetGameBase() + 0x00237190; // (Hhashtable;II)B
static DWORD _Jass_HaveSavedString = GetGameBase() + 0x00237290; // (Hhashtable;II)B
static DWORD _Jass_HaveSavedHandle = GetGameBase() + 0x002371d0; // (Hhashtable;II)B
static DWORD _Jass_RemoveSavedInteger = GetGameBase() + 0x00243200; // (Hhashtable;II)V
static DWORD _Jass_RemoveSavedReal = GetGameBase() + 0x00243230; // (Hhashtable;II)V
static DWORD _Jass_RemoveSavedBoolean = GetGameBase() + 0x002431a0; // (Hhashtable;II)V
static DWORD _Jass_RemoveSavedString = GetGameBase() + 0x00243260; // (Hhashtable;II)V
static DWORD _Jass_RemoveSavedHandle = GetGameBase() + 0x002431d0; // (Hhashtable;II)V
static DWORD _Jass_FlushParentHashtable = GetGameBase() + 0x00230bb0; // (Hhashtable;)V
static DWORD _Jass_FlushChildHashtable = GetGameBase() + 0x00230b40; // (Hhashtable;I)V
static DWORD _Jass_GetRandomInt = GetGameBase() + 0x00234610; // (II)I
static DWORD _Jass_GetRandomReal = GetGameBase() + 0x00234650; // (RR)R
static DWORD _Jass_CreateUnitPool = GetGameBase() + 0x0022f250; // ()Hunitpool;
static DWORD _Jass_DestroyUnitPool = GetGameBase() + 0x0022fa60; // (Hunitpool;)V
static DWORD _Jass_UnitPoolAddUnitType = GetGameBase() + 0x0024b380; // (Hunitpool;IR)V
static DWORD _Jass_UnitPoolRemoveUnitType = GetGameBase() + 0x0024b3a0; // (Hunitpool;I)V
static DWORD _Jass_PlaceRandomUnit = GetGameBase() + 0x00241f10; // (Hunitpool;Hplayer;RRR)Hunit;
static DWORD _Jass_CreateItemPool = GetGameBase() + 0x0022e480; // ()Hitempool;
static DWORD _Jass_DestroyItemPool = GetGameBase() + 0x0022f8d0; // (Hitempool;)V
static DWORD _Jass_ItemPoolAddItemType = GetGameBase() + 0x00239ba0; // (Hitempool;IR)V
static DWORD _Jass_ItemPoolRemoveItemType = GetGameBase() + 0x00239bc0; // (Hitempool;I)V
static DWORD _Jass_PlaceRandomItem = GetGameBase() + 0x00241ed0; // (Hitempool;RR)Hitem;
static DWORD _Jass_ChooseRandomCreep = GetGameBase() + 0x0022b2f0; // (I)I
static DWORD _Jass_ChooseRandomNPBuilding = GetGameBase() + 0x0022b350; // ()I
static DWORD _Jass_ChooseRandomItem = GetGameBase() + 0x0022b310; // (I)I
static DWORD _Jass_ChooseRandomItemEx = GetGameBase() + 0x0022b330; // (Hitemtype;I)I
static DWORD _Jass_SetRandomSeed = GetGameBase() + 0x002467c0; // (I)V
static DWORD _Jass_DisplayTextToPlayer = GetGameBase() + 0x0022ff30; // (Hplayer;RRS)V
static DWORD _Jass_DisplayTimedTextToPlayer = GetGameBase() + 0x002300c0; // (Hplayer;RRRS)V
static DWORD _Jass_DisplayTimedTextFromPlayer = GetGameBase() + 0x0022ffe0; // (Hplayer;RRRS)V
static DWORD _Jass_ClearTextMessages = GetGameBase() + 0x0022b770; // ()V
static DWORD _Jass_EnableUserControl = GetGameBase() + 0x00230280; // (B)V
static DWORD _Jass_EnableUserUI = GetGameBase() + 0x002302b0; // (B)V
static DWORD _Jass_DisableRestartMission = GetGameBase() + 0x0022fe80; // (B)V
static DWORD _Jass_ForceUIKey = GetGameBase() + 0x00231150; // (S)V
static DWORD _Jass_ForceUICancel = GetGameBase() + 0x002310d0; // ()V
static DWORD _Jass_DisplayLoadDialog = GetGameBase() + 0x0022ff10; // ()V
static DWORD _Jass_SetTerrainFog = GetGameBase() + 0x00246eb0; // (RRRRR)V
static DWORD _Jass_SetUnitFog = GetGameBase() + 0x00247990; // (RRRRR)V
static DWORD _Jass_SetTerrainFogEx = GetGameBase() + 0x00246ec0; // (IRRRRRR)V
static DWORD _Jass_ResetTerrainFog = GetGameBase() + 0x00243400; // ()V
static DWORD _Jass_SetDayNightModels = GetGameBase() + 0x00244c50; // (SS)V
static DWORD _Jass_SetSkyModel = GetGameBase() + 0x00246960; // (S)V
static DWORD _Jass_SuspendTimeOfDay = GetGameBase() + 0x00248b80; // (B)V
static DWORD _Jass_SetTimeOfDayScale = GetGameBase() + 0x00247370; // (R)V
static DWORD _Jass_GetTimeOfDayScale = GetGameBase() + 0x00235c80; // ()R
static DWORD _Jass_ShowInterface = GetGameBase() + 0x00248130; // (BR)V
static DWORD _Jass_PauseGame = GetGameBase() + 0x00241ce0; // (B)V
static DWORD _Jass_PingMinimap = GetGameBase() + 0x00241de0; // (RRR)V
static DWORD _Jass_PingMinimapEx = GetGameBase() + 0x00241e40; // (RRRIIIB)V
static DWORD _Jass_SetIntroShotText = GetGameBase() + 0x00245e30; // (S)V
static DWORD _Jass_SetIntroShotModel = GetGameBase() + 0x00245e10; // (S)V
static DWORD _Jass_EnableOcclusion = GetGameBase() + 0x002301f0; // (B)V
static DWORD _Jass_EnableWorldFogBoundary = GetGameBase() + 0x002302f0; // (B)V
static DWORD _Jass_PlayModelCinematic = GetGameBase() + 0x00241fc0; // (S)V
static DWORD _Jass_PlayCinematic = GetGameBase() + 0x00241fa0; // (S)V
static DWORD _Jass_SetAltMinimapIcon = GetGameBase() + 0x002441c0; // (S)V
static DWORD _Jass_CreateTextTag = GetGameBase() + 0x0022ece0; // ()Htexttag;
static DWORD _Jass_DestroyTextTag = GetGameBase() + 0x0022f9b0; // (Htexttag;)V
static DWORD _Jass_SetTextTagText = GetGameBase() + 0x00247280; // (Htexttag;SR)V
static DWORD _Jass_SetTextTagPos = GetGameBase() + 0x00247140; // (Htexttag;RRR)V
static DWORD _Jass_SetTextTagPosUnit = GetGameBase() + 0x002471e0; // (Htexttag;Hunit;R)V
static DWORD _Jass_SetTextTagColor = GetGameBase() + 0x00247040; // (Htexttag;IIII)V
static DWORD _Jass_SetTextTagVelocity = GetGameBase() + 0x002472d0; // (Htexttag;RR)V
static DWORD _Jass_SetTextTagVisibility = GetGameBase() + 0x00247330; // (Htexttag;B)V
static DWORD _Jass_SetTextTagSuspended = GetGameBase() + 0x00247250; // (Htexttag;B)V
static DWORD _Jass_SetTextTagPermanent = GetGameBase() + 0x00247110; // (Htexttag;B)V
static DWORD _Jass_SetTextTagAge = GetGameBase() + 0x00247000; // (Htexttag;R)V
static DWORD _Jass_SetTextTagLifespan = GetGameBase() + 0x002470d0; // (Htexttag;R)V
static DWORD _Jass_SetTextTagFadepoint = GetGameBase() + 0x00247090; // (Htexttag;R)V
static DWORD _Jass_SetReservedLocalHeroButtons = GetGameBase() + 0x002468d0; // (I)V
static DWORD _Jass_GetAllyColorFilterState = GetGameBase() + 0x002318d0; // ()I
static DWORD _Jass_SetAllyColorFilterState = GetGameBase() + 0x00244190; // (I)V
static DWORD _Jass_GetCreepCampFilterState = GetGameBase() + 0x002320c0; // ()B
static DWORD _Jass_SetCreepCampFilterState = GetGameBase() + 0x00244bf0; // (B)V
static DWORD _Jass_EnableMinimapFilterButtons = GetGameBase() + 0x002301b0; // (BB)V
static DWORD _Jass_EnableDragSelect = GetGameBase() + 0x00230190; // (BB)V
static DWORD _Jass_EnablePreSelect = GetGameBase() + 0x00230220; // (BB)V
static DWORD _Jass_EnableSelect = GetGameBase() + 0x00230240; // (BB)V
static DWORD _Jass_CreateTrackable = GetGameBase() + 0x0022eee0; // (SRRR)Htrackable;
static DWORD _Jass_TriggerRegisterTrackableHitEvent = GetGameBase() + 0x0024a1f0; // (Htrigger;Htrackable;)Hevent;
static DWORD _Jass_TriggerRegisterTrackableTrackEvent = GetGameBase() + 0x0024a2b0; // (Htrigger;Htrackable;)Hevent;
static DWORD _Jass_GetTriggeringTrackable = GetGameBase() + 0x002360c0; // ()Htrackable;
static DWORD _Jass_CreateQuest = GetGameBase() + 0x0022e840; // ()Hquest;
static DWORD _Jass_DestroyQuest = GetGameBase() + 0x0022f960; // (Hquest;)V
static DWORD _Jass_QuestSetTitle = GetGameBase() + 0x002429b0; // (Hquest;S)V
static DWORD _Jass_QuestSetDescription = GetGameBase() + 0x00242890; // (Hquest;S)V
static DWORD _Jass_QuestSetIconPath = GetGameBase() + 0x00242950; // (Hquest;S)V
static DWORD _Jass_QuestSetRequired = GetGameBase() + 0x00242980; // (Hquest;B)V
static DWORD _Jass_QuestSetCompleted = GetGameBase() + 0x00242860; // (Hquest;B)V
static DWORD _Jass_QuestSetDiscovered = GetGameBase() + 0x002428c0; // (Hquest;B)V
static DWORD _Jass_QuestSetFailed = GetGameBase() + 0x00242920; // (Hquest;B)V
static DWORD _Jass_QuestSetEnabled = GetGameBase() + 0x002428f0; // (Hquest;B)V
static DWORD _Jass_IsQuestRequired = GetGameBase() + 0x00238550; // (Hquest;)B
static DWORD _Jass_IsQuestCompleted = GetGameBase() + 0x002384b0; // (Hquest;)B
static DWORD _Jass_IsQuestDiscovered = GetGameBase() + 0x002384d0; // (Hquest;)B
static DWORD _Jass_IsQuestFailed = GetGameBase() + 0x00238510; // (Hquest;)B
static DWORD _Jass_IsQuestEnabled = GetGameBase() + 0x002384f0; // (Hquest;)B
static DWORD _Jass_QuestCreateItem = GetGameBase() + 0x00242730; // (Hquest;)Hquestitem;
static DWORD _Jass_QuestItemSetDescription = GetGameBase() + 0x00242810; // (Hquestitem;S)V
static DWORD _Jass_QuestItemSetCompleted = GetGameBase() + 0x002427e0; // (Hquestitem;B)V
static DWORD _Jass_IsQuestItemCompleted = GetGameBase() + 0x00238530; // (Hquestitem;)B
static DWORD _Jass_CreateDefeatCondition = GetGameBase() + 0x0022de50; // ()Hdefeatcondition;
static DWORD _Jass_DestroyDefeatCondition = GetGameBase() + 0x0022f7b0; // (Hdefeatcondition;)V
static DWORD _Jass_DefeatConditionSetDescription = GetGameBase() + 0x0022f520; // (Hdefeatcondition;S)V
static DWORD _Jass_FlashQuestDialogButton = GetGameBase() + 0x00230af0; // ()V
static DWORD _Jass_ForceQuestDialogUpdate = GetGameBase() + 0x00231070; // ()V
static DWORD _Jass_CreateTimerDialog = GetGameBase() + 0x0022ede0; // (Htimer;)Htimerdialog;
static DWORD _Jass_DestroyTimerDialog = GetGameBase() + 0x0022fa00; // (Htimerdialog;)V
static DWORD _Jass_TimerDialogSetTitle = GetGameBase() + 0x002491d0; // (Htimerdialog;S)V
static DWORD _Jass_TimerDialogSetTitleColor = GetGameBase() + 0x00249200; // (Htimerdialog;IIII)V
static DWORD _Jass_TimerDialogSetTimeColor = GetGameBase() + 0x00249170; // (Htimerdialog;IIII)V
static DWORD _Jass_TimerDialogSetSpeed = GetGameBase() + 0x00249140; // (Htimerdialog;R)V
static DWORD _Jass_TimerDialogDisplay = GetGameBase() + 0x002490f0; // (Htimerdialog;B)V
static DWORD _Jass_IsTimerDialogDisplayed = GetGameBase() + 0x00238690; // (Htimerdialog;)B
static DWORD _Jass_TimerDialogSetRealTimeRemaining = GetGameBase() + 0x00249110; // (Htimerdialog;R)V
static DWORD _Jass_CreateLeaderboard = GetGameBase() + 0x0022e560; // ()Hleaderboard;
static DWORD _Jass_DestroyLeaderboard = GetGameBase() + 0x0022f8f0; // (Hleaderboard;)V
static DWORD _Jass_LeaderboardGetItemCount = GetGameBase() + 0x0023fff0; // (Hleaderboard;)I
static DWORD _Jass_LeaderboardSetSizeByItemCount = GetGameBase() + 0x00240390; // (Hleaderboard;I)V
static DWORD _Jass_LeaderboardAddItem = GetGameBase() + 0x0023ff20; // (Hleaderboard;SIHplayer;)V
static DWORD _Jass_LeaderboardRemoveItem = GetGameBase() + 0x00240110; // (Hleaderboard;I)V
static DWORD _Jass_LeaderboardRemovePlayerItem = GetGameBase() + 0x00240140; // (Hleaderboard;Hplayer;)V
static DWORD _Jass_LeaderboardSortItemsByValue = GetGameBase() + 0x002404d0; // (Hleaderboard;B)V
static DWORD _Jass_LeaderboardSortItemsByPlayer = GetGameBase() + 0x002404a0; // (Hleaderboard;B)V
static DWORD _Jass_LeaderboardSortItemsByLabel = GetGameBase() + 0x00240470; // (Hleaderboard;B)V
static DWORD _Jass_LeaderboardClear = GetGameBase() + 0x0023ff70; // (Hleaderboard;)V
static DWORD _Jass_LeaderboardDisplay = GetGameBase() + 0x0023ffa0; // (Hleaderboard;B)V
static DWORD _Jass_IsLeaderboardDisplayed = GetGameBase() + 0x00237f10; // (Hleaderboard;)B
static DWORD _Jass_LeaderboardGetLabelText = GetGameBase() + 0x00240020; // (Hleaderboard;)S
static DWORD _Jass_PlayerSetLeaderboard = GetGameBase() + 0x00242110; // (Hplayer;Hleaderboard;)V
static DWORD _Jass_PlayerGetLeaderboard = GetGameBase() + 0x002420b0; // (Hplayer;)Hleaderboard;
static DWORD _Jass_LeaderboardHasPlayerItem = GetGameBase() + 0x002400c0; // (Hleaderboard;Hplayer;)B
static DWORD _Jass_LeaderboardGetPlayerIndex = GetGameBase() + 0x00240070; // (Hleaderboard;Hplayer;)I
static DWORD _Jass_LeaderboardSetLabel = GetGameBase() + 0x00240300; // (Hleaderboard;S)V
static DWORD _Jass_LeaderboardSetLabelColor = GetGameBase() + 0x00240330; // (Hleaderboard;IIII)V
static DWORD _Jass_LeaderboardSetValueColor = GetGameBase() + 0x00240410; // (Hleaderboard;IIII)V
static DWORD _Jass_LeaderboardSetStyle = GetGameBase() + 0x002403c0; // (Hleaderboard;BBBB)V
static DWORD _Jass_LeaderboardSetItemValue = GetGameBase() + 0x00240270; // (Hleaderboard;II)V
static DWORD _Jass_LeaderboardSetItemLabel = GetGameBase() + 0x00240180; // (Hleaderboard;IS)V
static DWORD _Jass_LeaderboardSetItemStyle = GetGameBase() + 0x00240220; // (Hleaderboard;IBBB)V
static DWORD _Jass_LeaderboardSetItemLabelColor = GetGameBase() + 0x002401c0; // (Hleaderboard;IIIII)V
static DWORD _Jass_LeaderboardSetItemValueColor = GetGameBase() + 0x002402a0; // (Hleaderboard;IIIII)V
static DWORD _Jass_CreateMultiboard = GetGameBase() + 0x0022e750; // ()Hmultiboard;
static DWORD _Jass_DestroyMultiboard = GetGameBase() + 0x0022f940; // (Hmultiboard;)V
static DWORD _Jass_MultiboardDisplay = GetGameBase() + 0x00241270; // (Hmultiboard;B)V
static DWORD _Jass_MultiboardMinimize = GetGameBase() + 0x002413b0; // (Hmultiboard;B)V
static DWORD _Jass_IsMultiboardDisplayed = GetGameBase() + 0x00238190; // (Hmultiboard;)B
static DWORD _Jass_IsMultiboardMinimized = GetGameBase() + 0x002381b0; // (Hmultiboard;)B
static DWORD _Jass_MultiboardClear = GetGameBase() + 0x00241240; // (Hmultiboard;)V
static DWORD _Jass_MultiboardSetTitleText = GetGameBase() + 0x00241660; // (Hmultiboard;S)V
static DWORD _Jass_MultiboardGetTitleText = GetGameBase() + 0x00241390; // (Hmultiboard;)S
static DWORD _Jass_MultiboardSetTitleTextColor = GetGameBase() + 0x00241690; // (Hmultiboard;IIII)V
static DWORD _Jass_MultiboardGetRowCount = GetGameBase() + 0x00241370; // (Hmultiboard;)I
static DWORD _Jass_MultiboardGetColumnCount = GetGameBase() + 0x00241290; // (Hmultiboard;)I
static DWORD _Jass_MultiboardSetColumnCount = GetGameBase() + 0x002413f0; // (Hmultiboard;I)V
static DWORD _Jass_MultiboardSetRowCount = GetGameBase() + 0x00241640; // (Hmultiboard;I)V
static DWORD _Jass_MultiboardSetItemsStyle = GetGameBase() + 0x00241540; // (Hmultiboard;BB)V
static DWORD _Jass_MultiboardSetItemsValueColor = GetGameBase() + 0x002415b0; // (Hmultiboard;IIII)V
static DWORD _Jass_MultiboardSetItemsValue = GetGameBase() + 0x00241580; // (Hmultiboard;S)V
static DWORD _Jass_MultiboardSetItemsWidth = GetGameBase() + 0x00241610; // (Hmultiboard;R)V
static DWORD _Jass_MultiboardSetItemsIcon = GetGameBase() + 0x00241510; // (Hmultiboard;S)V
static DWORD _Jass_MultiboardGetItem = GetGameBase() + 0x002412b0; // (Hmultiboard;II)Hmultiboarditem;
static DWORD _Jass_MultiboardReleaseItem = GetGameBase() + 0x002413d0; // (Hmultiboarditem;)V
static DWORD _Jass_MultiboardSetItemStyle = GetGameBase() + 0x00241440; // (Hmultiboarditem;BB)V
static DWORD _Jass_MultiboardSetItemValue = GetGameBase() + 0x00241460; // (Hmultiboarditem;S)V
static DWORD _Jass_MultiboardSetItemValueColor = GetGameBase() + 0x00241490; // (Hmultiboarditem;IIII)V
static DWORD _Jass_MultiboardSetItemWidth = GetGameBase() + 0x002414e0; // (Hmultiboarditem;R)V
static DWORD _Jass_MultiboardSetItemIcon = GetGameBase() + 0x00241410; // (Hmultiboarditem;S)V
static DWORD _Jass_MultiboardSuppressDisplay = GetGameBase() + 0x002416e0; // (B)V
static DWORD _Jass_SetCameraBounds = GetGameBase() + 0x002443a0; // (RRRRRRRR)V
static DWORD _Jass_SetCameraPosition = GetGameBase() + 0x00244510; // (RR)V
static DWORD _Jass_SetCameraQuickPosition = GetGameBase() + 0x00244560; // (RR)V
static DWORD _Jass_ResetToGameCamera = GetGameBase() + 0x00243420; // (R)V
static DWORD _Jass_StopCamera = GetGameBase() + 0x002484e0; // ()V
static DWORD _Jass_PanCameraTo = GetGameBase() + 0x00241b60; // (RR)V
static DWORD _Jass_PanCameraToTimed = GetGameBase() + 0x00241bb0; // (RRR)V
static DWORD _Jass_PanCameraToWithZ = GetGameBase() + 0x00241c70; // (RRR)V
static DWORD _Jass_PanCameraToTimedWithZ = GetGameBase() + 0x00241c10; // (RRRR)V
static DWORD _Jass_SetCinematicCamera = GetGameBase() + 0x00244b30; // (S)V
static DWORD _Jass_SetCameraField = GetGameBase() + 0x00244480; // (Hcamerafield;RR)V
static DWORD _Jass_AdjustCameraField = GetGameBase() + 0x0022a910; // (Hcamerafield;RR)V
static DWORD _Jass_SetCameraTargetController = GetGameBase() + 0x00244600; // (Hunit;RRB)V
static DWORD _Jass_SetCameraOrientController = GetGameBase() + 0x002444c0; // (Hunit;RR)V
static DWORD _Jass_SetCameraRotateMode = GetGameBase() + 0x002445a0; // (RRRR)V
static DWORD _Jass_CreateCameraSetup = GetGameBase() + 0x0022dc10; // ()Hcamerasetup;
static DWORD _Jass_CameraSetupSetField = GetGameBase() + 0x0022b170; // (Hcamerasetup;Hcamerafield;RR)V
static DWORD _Jass_CameraSetupGetField = GetGameBase() + 0x0022b0e0; // (Hcamerasetup;Hcamerafield;)R
static DWORD _Jass_CameraSetupSetDestPosition = GetGameBase() + 0x0022b120; // (Hcamerasetup;RRR)V
static DWORD _Jass_CameraSetupGetDestPositionLoc = GetGameBase() + 0x0022b040; // (Hcamerasetup;)Hlocation;
static DWORD _Jass_CameraSetupGetDestPositionX = GetGameBase() + 0x0022b090; // (Hcamerasetup;)R
static DWORD _Jass_CameraSetupGetDestPositionY = GetGameBase() + 0x0022b0c0; // (Hcamerasetup;)R
static DWORD _Jass_CameraSetupApply = GetGameBase() + 0x0022af80; // (Hcamerasetup;BB)V
static DWORD _Jass_CameraSetupApplyWithZ = GetGameBase() + 0x0022b010; // (Hcamerasetup;R)V
static DWORD _Jass_CameraSetupApplyForceDuration = GetGameBase() + 0x0022afb0; // (Hcamerasetup;BR)V
static DWORD _Jass_CameraSetupApplyForceDurationWithZ = GetGameBase() + 0x0022afe0; // (Hcamerasetup;RR)V
static DWORD _Jass_CameraSetTargetNoise = GetGameBase() + 0x0022ae20; // (RR)V
static DWORD _Jass_CameraSetSourceNoise = GetGameBase() + 0x0022ace0; // (RR)V
static DWORD _Jass_CameraSetTargetNoiseEx = GetGameBase() + 0x0022aed0; // (RRB)V
static DWORD _Jass_CameraSetSourceNoiseEx = GetGameBase() + 0x0022ad80; // (RRB)V
static DWORD _Jass_CameraSetSmoothingFactor = GetGameBase() + 0x0022acb0; // (R)V
static DWORD _Jass_GetCameraMargin = GetGameBase() + 0x00231c70; // (I)R
static DWORD _Jass_GetCameraBoundMinX = GetGameBase() + 0x00231ac0; // ()R
static DWORD _Jass_GetCameraBoundMinY = GetGameBase() + 0x00231af0; // ()R
static DWORD _Jass_GetCameraBoundMaxX = GetGameBase() + 0x00231a60; // ()R
static DWORD _Jass_GetCameraBoundMaxY = GetGameBase() + 0x00231a90; // ()R
static DWORD _Jass_GetCameraField = GetGameBase() + 0x00231c40; // (Hcamerafield;)R
static DWORD _Jass_GetCameraTargetPositionX = GetGameBase() + 0x00231d30; // ()R
static DWORD _Jass_GetCameraTargetPositionY = GetGameBase() + 0x00231d70; // ()R
static DWORD _Jass_GetCameraTargetPositionZ = GetGameBase() + 0x00231db0; // ()R
static DWORD _Jass_GetCameraTargetPositionLoc = GetGameBase() + 0x00231ce0; // ()Hlocation;
static DWORD _Jass_GetCameraEyePositionX = GetGameBase() + 0x00231b80; // ()R
static DWORD _Jass_GetCameraEyePositionY = GetGameBase() + 0x00231bc0; // ()R
static DWORD _Jass_GetCameraEyePositionZ = GetGameBase() + 0x00231c00; // ()R
static DWORD _Jass_GetCameraEyePositionLoc = GetGameBase() + 0x00231b30; // ()Hlocation;
static DWORD _Jass_SetCineFilterTexture = GetGameBase() + 0x00244b00; // (S)V
static DWORD _Jass_SetCineFilterBlendMode = GetGameBase() + 0x002446e0; // (Hblendmode;)V
static DWORD _Jass_SetCineFilterTexMapFlags = GetGameBase() + 0x00244ac0; // (Htexmapflags;)V
static DWORD _Jass_SetCineFilterStartUV = GetGameBase() + 0x00244a30; // (RRRR)V
static DWORD _Jass_SetCineFilterEndUV = GetGameBase() + 0x002448a0; // (RRRR)V
static DWORD _Jass_SetCineFilterStartColor = GetGameBase() + 0x00244930; // (IIII)V
static DWORD _Jass_SetCineFilterEndColor = GetGameBase() + 0x002447a0; // (IIII)V
static DWORD _Jass_SetCineFilterDuration = GetGameBase() + 0x00244780; // (R)V
static DWORD _Jass_DisplayCineFilter = GetGameBase() + 0x0022fee0; // (B)V
static DWORD _Jass_IsCineFilterDisplayed = GetGameBase() + 0x00237a40; // ()B
static DWORD _Jass_SetCinematicScene = GetGameBase() + 0x00244b70; // (IHplayercolor;SSRR)V
static DWORD _Jass_EndCinematicScene = GetGameBase() + 0x00230330; // ()V
static DWORD _Jass_ForceCinematicSubtitles = GetGameBase() + 0x00230f20; // (B)V
static DWORD _Jass_NewSoundEnvironment = GetGameBase() + 0x002417c0; // (S)V
static DWORD _Jass_CreateSound = GetGameBase() + 0x0022e990; // (SBBBIIS)Hsound;
static DWORD _Jass_CreateSoundFilenameWithLabel = GetGameBase() + 0x0022eab0; // (SBBBIIS)Hsound;
static DWORD _Jass_CreateSoundFromLabel = GetGameBase() + 0x0022ebd0; // (SBBBII)Hsound;
static DWORD _Jass_CreateMIDISound = GetGameBase() + 0x0022e650; // (SII)Hsound;
static DWORD _Jass_SetStackedSound = GetGameBase() + 0x00246c70; // (SRR)V
static DWORD _Jass_ClearStackedSound = GetGameBase() + 0x0022b5f0; // (SRR)V
static DWORD _Jass_SetStackedSoundRect = GetGameBase() + 0x00246cd0; // (SHrect;)V
static DWORD _Jass_ClearStackedSoundRect = GetGameBase() + 0x0022b640; // (SHrect;)V
static DWORD _Jass_SetSoundParamsFromLabel = GetGameBase() + 0x00246b10; // (Hsound;S)V
static DWORD _Jass_SetSoundChannel = GetGameBase() + 0x002469a0; // (Hsound;I)V
static DWORD _Jass_SetSoundVolume = GetGameBase() + 0x00246c50; // (Hsound;I)V
static DWORD _Jass_SetSoundPitch = GetGameBase() + 0x00246b40; // (Hsound;R)V
static DWORD _Jass_SetSoundPlayPosition = GetGameBase() + 0x00246b70; // (Hsound;I)V
static DWORD _Jass_SetSoundDistances = GetGameBase() + 0x00246aa0; // (Hsound;RR)V
static DWORD _Jass_SetSoundDistanceCutoff = GetGameBase() + 0x00246a70; // (Hsound;R)V
static DWORD _Jass_SetSoundConeAngles = GetGameBase() + 0x002469c0; // (Hsound;RRI)V
static DWORD _Jass_SetSoundConeOrientation = GetGameBase() + 0x00246a10; // (Hsound;RRR)V
static DWORD _Jass_SetSoundPosition = GetGameBase() + 0x00246b90; // (Hsound;RRR)V
static DWORD _Jass_SetSoundVelocity = GetGameBase() + 0x00246bf0; // (Hsound;RRR)V
static DWORD _Jass_AttachSoundToUnit = GetGameBase() + 0x0022ab40; // (Hsound;Hunit;)V
static DWORD _Jass_StartSound = GetGameBase() + 0x00248490; // (Hsound;)V
static DWORD _Jass_StopSound = GetGameBase() + 0x00248510; // (Hsound;BB)V
static DWORD _Jass_KillSoundWhenDone = GetGameBase() + 0x0023fee0; // (Hsound;)V
static DWORD _Jass_SetMapMusic = GetGameBase() + 0x00246200; // (SBI)V
static DWORD _Jass_ClearMapMusic = GetGameBase() + 0x0022b470; // ()V
static DWORD _Jass_PlayMusic = GetGameBase() + 0x00241fe0; // (S)V
static DWORD _Jass_PlayMusicEx = GetGameBase() + 0x00242010; // (SII)V
static DWORD _Jass_StopMusic = GetGameBase() + 0x00248500; // (B)V
static DWORD _Jass_ResumeMusic = GetGameBase() + 0x002435e0; // ()V
static DWORD _Jass_PlayThematicMusic = GetGameBase() + 0x00242040; // (S)V
static DWORD _Jass_PlayThematicMusicEx = GetGameBase() + 0x00242060; // (SI)V
static DWORD _Jass_EndThematicMusic = GetGameBase() + 0x00230380; // ()V
static DWORD _Jass_SetMusicVolume = GetGameBase() + 0x002462a0; // (I)V
static DWORD _Jass_SetMusicPlayPosition = GetGameBase() + 0x00246290; // (I)V
static DWORD _Jass_SetThematicMusicPlayPosition = GetGameBase() + 0x00247360; // (I)V
static DWORD _Jass_SetSoundDuration = GetGameBase() + 0x00246ae0; // (Hsound;I)V
static DWORD _Jass_GetSoundDuration = GetGameBase() + 0x00234e10; // (Hsound;)I
static DWORD _Jass_GetSoundFileDuration = GetGameBase() + 0x00234e30; // (S)I
static DWORD _Jass_VolumeGroupSetVolume = GetGameBase() + 0x0024ba10; // (Hvolumegroup;R)V
static DWORD _Jass_VolumeGroupReset = GetGameBase() + 0x0024ba00; // ()V
static DWORD _Jass_GetSoundIsPlaying = GetGameBase() + 0x00234e70; // (Hsound;)B
static DWORD _Jass_GetSoundIsLoading = GetGameBase() + 0x00234e50; // (Hsound;)B
static DWORD _Jass_RegisterStackedSound = GetGameBase() + 0x00242ef0; // (Hsound;BRR)V
static DWORD _Jass_UnregisterStackedSound = GetGameBase() + 0x0024b990; // (Hsound;BRR)V
static DWORD _Jass_AddWeatherEffect = GetGameBase() + 0x0022a8a0; // (Hrect;I)Hweathereffect;
static DWORD _Jass_RemoveWeatherEffect = GetGameBase() + 0x00243310; // (Hweathereffect;)V
static DWORD _Jass_EnableWeatherEffect = GetGameBase() + 0x002302e0; // (Hweathereffect;B)V
static DWORD _Jass_TerrainDeformCrater = GetGameBase() + 0x00248e10; // (RRRRIB)Hterraindeformation;
static DWORD _Jass_TerrainDeformRipple = GetGameBase() + 0x00248ed0; // (RRRRIIRRRB)Hterraindeformation;
static DWORD _Jass_TerrainDeformWave = GetGameBase() + 0x00248f70; // (RRRRRRRRII)Hterraindeformation;
static DWORD _Jass_TerrainDeformRandom = GetGameBase() + 0x00248e70; // (RRRRRII)Hterraindeformation;
static DWORD _Jass_TerrainDeformStop = GetGameBase() + 0x00248f50; // (Hterraindeformation;I)V
static DWORD _Jass_TerrainDeformStopAll = GetGameBase() + 0x00248f60; // ()V
static DWORD _Jass_DestroyEffect = GetGameBase() + 0x0022f800; // (Heffect;)V
static DWORD _Jass_AddSpecialEffect = GetGameBase() + 0x0022a490; // (SRR)Heffect;
static DWORD _Jass_AddSpecialEffectLoc = GetGameBase() + 0x0022a4b0; // (SHlocation;)Heffect;
static DWORD _Jass_AddSpecialEffectTarget = GetGameBase() + 0x0022a4f0; // (SHwidget;S)Heffect;
static DWORD _Jass_AddSpellEffect = GetGameBase() + 0x0022a520; // (SHeffecttype;RR)Heffect;
static DWORD _Jass_AddSpellEffectLoc = GetGameBase() + 0x0022a5b0; // (SHeffecttype;Hlocation;)Heffect;
static DWORD _Jass_AddSpellEffectById = GetGameBase() + 0x0022a540; // (IHeffecttype;RR)Heffect;
static DWORD _Jass_AddSpellEffectByIdLoc = GetGameBase() + 0x0022a570; // (IHeffecttype;Hlocation;)Heffect;
static DWORD _Jass_AddSpellEffectTarget = GetGameBase() + 0x0022a610; // (SHeffecttype;Hwidget;S)Heffect;
static DWORD _Jass_AddSpellEffectTargetById = GetGameBase() + 0x0022a630; // (IHeffecttype;Hwidget;S)Heffect;
static DWORD _Jass_AddLightning = GetGameBase() + 0x0022a260; // (SBRRRR)Hlightning;
static DWORD _Jass_AddLightningEx = GetGameBase() + 0x0022a2e0; // (SBRRRRRR)Hlightning;
static DWORD _Jass_DestroyLightning = GetGameBase() + 0x0022f920; // (Hlightning;)B
static DWORD _Jass_GetLightningColorA = GetGameBase() + 0x002331e0; // (Hlightning;)R
static DWORD _Jass_GetLightningColorR = GetGameBase() + 0x002332d0; // (Hlightning;)R
static DWORD _Jass_GetLightningColorG = GetGameBase() + 0x00233280; // (Hlightning;)R
static DWORD _Jass_GetLightningColorB = GetGameBase() + 0x00233230; // (Hlightning;)R
static DWORD _Jass_MoveLightning = GetGameBase() + 0x00240f70; // (Hlightning;BRRRR)B
static DWORD _Jass_MoveLightningEx = GetGameBase() + 0x00240ff0; // (Hlightning;BRRRRRR)B
static DWORD _Jass_SetLightningColor = GetGameBase() + 0x00246110; // (Hlightning;RRRR)B
static DWORD _Jass_GetAbilityEffect = GetGameBase() + 0x002317f0; // (SHeffecttype;I)S
static DWORD _Jass_GetAbilityEffectById = GetGameBase() + 0x00231820; // (IHeffecttype;I)S
static DWORD _Jass_GetAbilitySound = GetGameBase() + 0x00231840; // (SHsoundtype;)S
static DWORD _Jass_GetAbilitySoundById = GetGameBase() + 0x00231880; // (IHsoundtype;)S
static DWORD _Jass_GetTerrainCliffLevel = GetGameBase() + 0x00235b50; // (RR)I
static DWORD _Jass_SetWaterBaseColor = GetGameBase() + 0x00248070; // (IIII)V
static DWORD _Jass_SetWaterDeforms = GetGameBase() + 0x002480b0; // (B)V
static DWORD _Jass_GetTerrainType = GetGameBase() + 0x00235bf0; // (RR)I
static DWORD _Jass_GetTerrainVariance = GetGameBase() + 0x00235c40; // (RR)I
static DWORD _Jass_SetTerrainType = GetGameBase() + 0x00246fa0; // (RRIIII)V
static DWORD _Jass_IsTerrainPathable = GetGameBase() + 0x00238660; // (RRHpathingtype;)B
static DWORD _Jass_SetTerrainPathable = GetGameBase() + 0x00246f70; // (RRHpathingtype;B)V
static DWORD _Jass_CreateImage = GetGameBase() + 0x0022e3b0; // (SRRRRRRRRRI)Himage;
static DWORD _Jass_DestroyImage = GetGameBase() + 0x0022f8b0; // (Himage;)V
static DWORD _Jass_ShowImage = GetGameBase() + 0x00248110; // (Himage;B)V
static DWORD _Jass_SetImageConstantHeight = GetGameBase() + 0x00245d00; // (Himage;BR)V
static DWORD _Jass_SetImagePosition = GetGameBase() + 0x00245d30; // (Himage;RRR)V
static DWORD _Jass_SetImageColor = GetGameBase() + 0x00245cc0; // (Himage;IIII)V
static DWORD _Jass_SetImageRender = GetGameBase() + 0x00245d70; // (Himage;B)V
static DWORD _Jass_SetImageRenderAlways = GetGameBase() + 0x00245d90; // (Himage;B)V
static DWORD _Jass_SetImageAboveWater = GetGameBase() + 0x00245ca0; // (Himage;BB)V
static DWORD _Jass_SetImageType = GetGameBase() + 0x00245db0; // (Himage;I)V
static DWORD _Jass_CreateUbersplat = GetGameBase() + 0x0022f0d0; // (RRSIIIIBB)Hubersplat;
static DWORD _Jass_DestroyUbersplat = GetGameBase() + 0x0022fa40; // (Hubersplat;)V
static DWORD _Jass_ResetUbersplat = GetGameBase() + 0x00243470; // (Hubersplat;)V
static DWORD _Jass_FinishUbersplat = GetGameBase() + 0x00230a80; // (Hubersplat;)V
static DWORD _Jass_ShowUbersplat = GetGameBase() + 0x00248160; // (Hubersplat;B)V
static DWORD _Jass_SetUbersplatRender = GetGameBase() + 0x00247410; // (Hubersplat;B)V
static DWORD _Jass_SetUbersplatRenderAlways = GetGameBase() + 0x00247430; // (Hubersplat;B)V
static DWORD _Jass_SetBlight = GetGameBase() + 0x00244230; // (Hplayer;RRRB)V
static DWORD _Jass_SetBlightLoc = GetGameBase() + 0x00244290; // (Hplayer;Hlocation;RB)V
static DWORD _Jass_SetBlightRect = GetGameBase() + 0x00244340; // (Hplayer;Hrect;B)V
static DWORD _Jass_SetBlightPoint = GetGameBase() + 0x002442f0; // (Hplayer;RRB)V
static DWORD _Jass_CreateBlightedGoldmine = GetGameBase() + 0x0022db50; // (Hplayer;RRR)Hunit;
static DWORD _Jass_IsPointBlighted = GetGameBase() + 0x00238470; // (RR)B
static DWORD _Jass_SetDoodadAnimation = GetGameBase() + 0x00244ef0; // (RRRIBSB)V
static DWORD _Jass_SetDoodadAnimationRect = GetGameBase() + 0x00244f50; // (Hrect;ISB)V
static DWORD _Jass_StartMeleeAI = GetGameBase() + 0x00248460; // (Hplayer;S)V
static DWORD _Jass_StartCampaignAI = GetGameBase() + 0x00248410; // (Hplayer;S)V
static DWORD _Jass_CommandAI = GetGameBase() + 0x0022b7a0; // (Hplayer;II)V
static DWORD _Jass_PauseCompAI = GetGameBase() + 0x00241cc0; // (Hplayer;B)V
static DWORD _Jass_GetAIDifficulty = GetGameBase() + 0x00231750; // (Hplayer;)Haidifficulty;
static DWORD _Jass_RemoveGuardPosition = GetGameBase() + 0x00242ff0; // (Hunit;)V
static DWORD _Jass_RecycleGuardPosition = GetGameBase() + 0x00242c90; // (Hunit;)V
static DWORD _Jass_RemoveAllGuardPositions = GetGameBase() + 0x00242f90; // (Hplayer;)V
static DWORD _Jass_ExecuteFunc = GetGameBase() + 0x002308a0; // (S)V
static DWORD _Jass_Cheat = GetGameBase() + 0x0022b230; // (S)V
static DWORD _Jass_IsNoVictoryCheat = GetGameBase() + 0x00238200; // ()B
static DWORD _Jass_IsNoDefeatCheat = GetGameBase() + 0x002381d0; // ()B
static DWORD _Jass_Preload = GetGameBase() + 0x00242230; // (S)V
static DWORD _Jass_PreloadEnd = GetGameBase() + 0x00242260; // (R)V
static DWORD _Jass_PreloadStart = GetGameBase() + 0x00242380; // ()V
static DWORD _Jass_PreloadRefresh = GetGameBase() + 0x00242370; // ()V
static DWORD _Jass_PreloadEndEx = GetGameBase() + 0x002422b0; // ()V
static DWORD _Jass_PreloadGenStart = GetGameBase() + 0x00242350; // ()V
static DWORD _Jass_PreloadGenClear = GetGameBase() + 0x00242300; // ()V
static DWORD _Jass_PreloadGenEnd = GetGameBase() + 0x00242320; // (S)V
static DWORD _Jass_Preloader = GetGameBase() + 0x002423a0; // (S)V
static DWORD _Jass_DebugS = GetGameBase() + 0x0096e660; // (S)V
static DWORD _Jass_DebugFI = GetGameBase() + 0x0096e650; // (SI)V
static DWORD _Jass_DebugUnitID = GetGameBase() + 0x0096e670; // (SI)V
static DWORD _Jass_DisplayText = GetGameBase() + 0x0096e810; // (IS)V
static DWORD _Jass_DisplayTextI = GetGameBase() + 0x0096e820; // (ISI)V
static DWORD _Jass_DisplayTextII = GetGameBase() + 0x0096e830; // (ISII)V
static DWORD _Jass_DisplayTextIII = GetGameBase() + 0x0096e840; // (ISIII)V
static DWORD _Jass_SuicideUnit = GetGameBase() + 0x00975390; // (II)V
static DWORD _Jass_SuicideUnitEx = GetGameBase() + 0x009753e0; // (III)V
static DWORD _Jass_Sleep = GetGameBase() + 0x00975090; // (R)V
static DWORD _Jass_StartThread = GetGameBase() + 0x00975150; // (C)V
static DWORD _Jass_GetAiPlayer = GetGameBase() + 0x0096f310; // ()I
static DWORD _Jass_DoAiScriptDebug = GetGameBase() + 0x0096e850; // ()B
static DWORD _Jass_GetHeroId = GetGameBase() + 0x0096fe60; // ()I
static DWORD _Jass_GetHeroLevelAI = GetGameBase() + 0x0096fee0; // ()I
static DWORD _Jass_SetHeroLevels = GetGameBase() + 0x00974700; // (C)V
static DWORD _Jass_SetNewHeroes = GetGameBase() + 0x00974920; // (B)V
static DWORD _Jass_GetUnitCount = GetGameBase() + 0x009707e0; // (I)I
static DWORD _Jass_GetPlayerUnitTypeCount = GetGameBase() + 0x00970660; // (Hplayer;I)I
static DWORD _Jass_GetTownUnitCount = GetGameBase() + 0x00970710; // (IIB)I
static DWORD _Jass_GetUnitCountDone = GetGameBase() + 0x00970850; // (I)I
static DWORD _Jass_GetUpgradeLevel = GetGameBase() + 0x00970970; // (I)I
static DWORD _Jass_GetUnitGoldCost = GetGameBase() + 0x00970890; // (I)I
static DWORD _Jass_GetUnitWoodCost = GetGameBase() + 0x009708f0; // (I)I
static DWORD _Jass_GetUnitBuildTime = GetGameBase() + 0x00970790; // (I)I
static DWORD _Jass_GetUpgradeGoldCost = GetGameBase() + 0x00970950; // (I)I
static DWORD _Jass_GetUpgradeWoodCost = GetGameBase() + 0x009709d0; // (I)I
static DWORD _Jass_GetEnemyPower = GetGameBase() + 0x0096fc20; // ()I
static DWORD _Jass_GetMinesOwned = GetGameBase() + 0x00970120; // ()I
static DWORD _Jass_GetGoldOwned = GetGameBase() + 0x0096fe30; // ()I
static DWORD _Jass_TownWithMine = GetGameBase() + 0x00975800; // ()I
static DWORD _Jass_TownHasMine = GetGameBase() + 0x00975770; // (I)B
static DWORD _Jass_TownHasHall = GetGameBase() + 0x00975730; // (I)B
static DWORD _Jass_GetNextExpansion = GetGameBase() + 0x00970170; // ()I
static DWORD _Jass_GetExpansionPeon = GetGameBase() + 0x0096fce0; // ()Hunit;
static DWORD _Jass_GetEnemyExpansion = GetGameBase() + 0x0096fbe0; // ()Hunit;
static DWORD _Jass_SetExpansion = GetGameBase() + 0x00974470; // (Hunit;I)B
static DWORD _Jass_GetBuilding = GetGameBase() + 0x0096f4b0; // (Hplayer;)Hunit;
static DWORD _Jass_SetAllianceTarget = GetGameBase() + 0x009741e0; // (Hunit;)V
static DWORD _Jass_GetAllianceTarget = GetGameBase() + 0x0096f340; // ()Hunit;
static DWORD _Jass_SetProduce = GetGameBase() + 0x009749f0; // (III)B
static DWORD _Jass_MergeUnits = GetGameBase() + 0x00971fb0; // (IIII)B
static DWORD _Jass_ConvertUnits = GetGameBase() + 0x0096e3e0; // (II)B
static DWORD _Jass_SetUpgrade = GetGameBase() + 0x00974d70; // (I)B
static DWORD _Jass_Unsummon = GetGameBase() + 0x00975bc0; // (Hunit;)V
static DWORD _Jass_ClearHarvestAI = GetGameBase() + 0x0096de70; // ()V
static DWORD _Jass_HarvestGold = GetGameBase() + 0x00970d40; // (II)V
static DWORD _Jass_HarvestWood = GetGameBase() + 0x00970db0; // (II)V
static DWORD _Jass_StopGathering = GetGameBase() + 0x00975240; // ()V
static DWORD _Jass_AddGuardPost = GetGameBase() + 0x0096cbc0; // (IRR)V
static DWORD _Jass_FillGuardPosts = GetGameBase() + 0x0096eae0; // ()V
static DWORD _Jass_ReturnGuardPosts = GetGameBase() + 0x00973e40; // ()V
static DWORD _Jass_CreateCaptains = GetGameBase() + 0x0096e5c0; // ()V
static DWORD _Jass_SetCaptainHome = GetGameBase() + 0x009743b0; // (IRR)V
static DWORD _Jass_ResetCaptainLocs = GetGameBase() + 0x00973e00; // ()V
static DWORD _Jass_ShiftTownSpot = GetGameBase() + 0x00975050; // (RR)V
static DWORD _Jass_SetCaptainChanges = GetGameBase() + 0x00974340; // (B)V
static DWORD _Jass_TeleportCaptain = GetGameBase() + 0x00975430; // (RR)V
static DWORD _Jass_ClearCaptainTargets = GetGameBase() + 0x0096de10; // ()V
static DWORD _Jass_CaptainVsUnits = GetGameBase() + 0x0096dbb0; // (Hplayer;)V
static DWORD _Jass_CaptainVsPlayer = GetGameBase() + 0x0096db20; // (Hplayer;)V
static DWORD _Jass_CaptainAttack = GetGameBase() + 0x0096d880; // (RR)V
static DWORD _Jass_GroupTimedLife = GetGameBase() + 0x00970b20; // (B)V
static DWORD _Jass_CaptainGoHome = GetGameBase() + 0x0096d8c0; // ()V
static DWORD _Jass_CaptainIsHome = GetGameBase() + 0x0096d9f0; // ()B
static DWORD _Jass_CaptainRetreating = GetGameBase() + 0x0096dae0; // ()B
static DWORD _Jass_CaptainIsFull = GetGameBase() + 0x0096d9b0; // ()B
static DWORD _Jass_CaptainIsEmpty = GetGameBase() + 0x0096d970; // ()B
static DWORD _Jass_CaptainGroupSize = GetGameBase() + 0x0096d8f0; // ()I
static DWORD _Jass_CaptainReadiness = GetGameBase() + 0x0096da20; // ()I
static DWORD _Jass_CaptainReadinessHP = GetGameBase() + 0x0096da60; // ()I
static DWORD _Jass_CaptainReadinessMa = GetGameBase() + 0x0096daa0; // ()I
static DWORD _Jass_CaptainInCombat = GetGameBase() + 0x0096d930; // (B)B
static DWORD _Jass_TownThreatened = GetGameBase() + 0x009757b0; // ()B
static DWORD _Jass_CaptainAtGoal = GetGameBase() + 0x0096d850; // ()B
static DWORD _Jass_CreepsOnMap = GetGameBase() + 0x0096e610; // ()B
static DWORD _Jass_RemoveInjuries = GetGameBase() + 0x00973920; // ()V
static DWORD _Jass_RemoveSiege = GetGameBase() + 0x00973a00; // ()V
static DWORD _Jass_IsTowered = GetGameBase() + 0x00971370; // (Hunit;)B
static DWORD _Jass_DisablePathing = GetGameBase() + 0x0096e7c0; // ()V
static DWORD _Jass_SetAmphibious = GetGameBase() + 0x009742a0; // ()V
static DWORD _Jass_InitAssault = GetGameBase() + 0x00971080; // ()V
static DWORD _Jass_AddAssault = GetGameBase() + 0x0096c930; // (II)B
static DWORD _Jass_AddDefenders = GetGameBase() + 0x0096cb50; // (II)B
static DWORD _Jass_GetCreepCamp = GetGameBase() + 0x0096fb60; // (IIB)Hunit;
static DWORD _Jass_StartGetEnemyBase = GetGameBase() + 0x00975120; // ()V
static DWORD _Jass_WaitGetEnemyBase = GetGameBase() + 0x00975c80; // ()B
static DWORD _Jass_GetMegaTarget = GetGameBase() + 0x009700e0; // ()Hunit;
static DWORD _Jass_GetEnemyBase = GetGameBase() + 0x0096fba0; // ()Hunit;
static DWORD _Jass_GetExpansionFoe = GetGameBase() + 0x0096fc30; // ()Hunit;
static DWORD _Jass_GetExpansionX = GetGameBase() + 0x0096fd20; // ()I
static DWORD _Jass_GetExpansionY = GetGameBase() + 0x0096fda0; // ()I
static DWORD _Jass_SetStagePoint = GetGameBase() + 0x00974bb0; // (RR)V
static DWORD _Jass_AttackMoveKill = GetGameBase() + 0x0096cfa0; // (Hunit;)V
static DWORD _Jass_AttackMoveXY = GetGameBase() + 0x0096d070; // (II)V
static DWORD _Jass_LoadZepWave = GetGameBase() + 0x00971850; // (II)V
static DWORD _Jass_SuicidePlayer = GetGameBase() + 0x00975270; // (Hplayer;B)B
static DWORD _Jass_SuicidePlayerUnits = GetGameBase() + 0x00975300; // (Hplayer;B)B
static DWORD _Jass_UnitAlive = GetGameBase() + 0x00975970; // (Hunit;)B
static DWORD _Jass_UnitInvis = GetGameBase() + 0x009759d0; // (Hunit;)B
static DWORD _Jass_IgnoredUnits = GetGameBase() + 0x00971040; // (I)I
static DWORD _Jass_CommandsWaiting = GetGameBase() + 0x0096e190; // ()I
static DWORD _Jass_GetLastCommand = GetGameBase() + 0x0096ff50; // ()I
static DWORD _Jass_GetLastData = GetGameBase() + 0x0096ff90; // ()I
static DWORD _Jass_PopLastCommand = GetGameBase() + 0x00972930; // ()V
static DWORD _Jass_SetCampaignAI = GetGameBase() + 0x00974300; // ()V
static DWORD _Jass_SetMeleeAI = GetGameBase() + 0x009748f0; // ()V
static DWORD _Jass_SetTargetHeroes = GetGameBase() + 0x00974bf0; // (B)V
static DWORD _Jass_SetHeroesFlee = GetGameBase() + 0x009747b0; // (B)V
static DWORD _Jass_SetHeroesBuyItems = GetGameBase() + 0x00974770; // (B)V
static DWORD _Jass_SetIgnoreInjured = GetGameBase() + 0x00974880; // (B)V
static DWORD _Jass_SetPeonsRepair = GetGameBase() + 0x00974980; // (B)V
static DWORD _Jass_SetRandomPaths = GetGameBase() + 0x00974a50; // (B)V
static DWORD _Jass_SetDefendPlayer = GetGameBase() + 0x00974400; // (B)V
static DWORD _Jass_SetHeroesTakeItems = GetGameBase() + 0x00974840; // (B)V
static DWORD _Jass_SetUnitsFlee = GetGameBase() + 0x00974d10; // (B)V
static DWORD _Jass_SetGroupsFlee = GetGameBase() + 0x009745b0; // (B)V
static DWORD _Jass_SetSlowChopping = GetGameBase() + 0x00974b10; // (B)V
static DWORD _Jass_SetSmartArtillery = GetGameBase() + 0x00974b70; // (B)V
static DWORD _Jass_SetWatchMegaTargets = GetGameBase() + 0x00974db0; // (B)V
static DWORD _Jass_SetReplacementCount = GetGameBase() + 0x00974ad0; // (I)V
static DWORD _Jass_PurchaseZeppelin = GetGameBase() + 0x009729c0; // ()V
static DWORD _Jass_MeleeDifficulty = GetGameBase() + 0x00971f00; // ()I
static DWORD _Jass_DebugBreak = GetGameBase() + 0x0096e640; // (I)V
DWORD Jass_Deg2Rad(DWORD arg_0_R);
DWORD Jass_Rad2Deg(DWORD arg_0_R);
DWORD Jass_Sin(DWORD arg_0_R);
DWORD Jass_Cos(DWORD arg_0_R);
DWORD Jass_Tan(DWORD arg_0_R);
DWORD Jass_Asin(DWORD arg_0_R);
DWORD Jass_Acos(DWORD arg_0_R);
DWORD Jass_Atan(DWORD arg_0_R);
DWORD Jass_Atan2(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_SquareRoot(DWORD arg_0_R);
DWORD Jass_Pow(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_I2R(DWORD arg_0_I);
DWORD Jass_R2I(DWORD arg_0_R);
DWORD Jass_I2S(DWORD arg_0_I);
DWORD Jass_R2S(DWORD arg_0_R);
DWORD Jass_R2SW(DWORD arg_0_R, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_S2I(DWORD arg_0_S);
DWORD Jass_S2R(DWORD arg_0_S);
DWORD Jass_GetHandleId(DWORD arg_0_Hhandle);
DWORD Jass_SubString(DWORD arg_0_S, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_StringLength(DWORD arg_0_S);
DWORD Jass_StringCase(DWORD arg_0_S, DWORD arg_4_B);
DWORD Jass_StringHash(DWORD arg_0_S);
DWORD Jass_GetLocalizedString(DWORD arg_0_S);
DWORD Jass_GetLocalizedHotkey(DWORD arg_0_S);
DWORD Jass_ConvertRace(DWORD arg_0_I);
DWORD Jass_ConvertAllianceType(DWORD arg_0_I);
DWORD Jass_ConvertRacePref(DWORD arg_0_I);
DWORD Jass_ConvertIGameState(DWORD arg_0_I);
DWORD Jass_ConvertFGameState(DWORD arg_0_I);
DWORD Jass_ConvertPlayerState(DWORD arg_0_I);
DWORD Jass_ConvertPlayerScore(DWORD arg_0_I);
DWORD Jass_ConvertStartLocPrio(DWORD arg_0_I);
DWORD Jass_ConvertPlayerGameResult(DWORD arg_0_I);
DWORD Jass_ConvertUnitState(DWORD arg_0_I);
DWORD Jass_ConvertAIDifficulty(DWORD arg_0_I);
DWORD Jass_ConvertGameEvent(DWORD arg_0_I);
DWORD Jass_ConvertPlayerEvent(DWORD arg_0_I);
DWORD Jass_ConvertPlayerUnitEvent(DWORD arg_0_I);
DWORD Jass_ConvertUnitEvent(DWORD arg_0_I);
DWORD Jass_ConvertWidgetEvent(DWORD arg_0_I);
DWORD Jass_ConvertDialogEvent(DWORD arg_0_I);
DWORD Jass_ConvertLimitOp(DWORD arg_0_I);
DWORD Jass_ConvertUnitType(DWORD arg_0_I);
DWORD Jass_ConvertGameSpeed(DWORD arg_0_I);
DWORD Jass_ConvertPlacement(DWORD arg_0_I);
DWORD Jass_ConvertGameDifficulty(DWORD arg_0_I);
DWORD Jass_ConvertGameType(DWORD arg_0_I);
DWORD Jass_ConvertMapFlag(DWORD arg_0_I);
DWORD Jass_ConvertMapVisibility(DWORD arg_0_I);
DWORD Jass_ConvertMapSetting(DWORD arg_0_I);
DWORD Jass_ConvertMapDensity(DWORD arg_0_I);
DWORD Jass_ConvertMapControl(DWORD arg_0_I);
DWORD Jass_ConvertPlayerColor(DWORD arg_0_I);
DWORD Jass_ConvertPlayerSlotState(DWORD arg_0_I);
DWORD Jass_ConvertVolumeGroup(DWORD arg_0_I);
DWORD Jass_ConvertCameraField(DWORD arg_0_I);
DWORD Jass_ConvertBlendMode(DWORD arg_0_I);
DWORD Jass_ConvertRarityControl(DWORD arg_0_I);
DWORD Jass_ConvertTexMapFlags(DWORD arg_0_I);
DWORD Jass_ConvertFogState(DWORD arg_0_I);
DWORD Jass_ConvertEffectType(DWORD arg_0_I);
DWORD Jass_ConvertVersion(DWORD arg_0_I);
DWORD Jass_ConvertItemType(DWORD arg_0_I);
DWORD Jass_ConvertAttackType(DWORD arg_0_I);
DWORD Jass_ConvertDamageType(DWORD arg_0_I);
DWORD Jass_ConvertWeaponType(DWORD arg_0_I);
DWORD Jass_ConvertSoundType(DWORD arg_0_I);
DWORD Jass_ConvertPathingType(DWORD arg_0_I);
DWORD Jass_SetMapName(DWORD arg_0_S);
DWORD Jass_SetMapDescription(DWORD arg_0_S);
DWORD Jass_SetTeams(DWORD arg_0_I);
DWORD Jass_SetPlayers(DWORD arg_0_I);
DWORD Jass_SetGameTypeSupported(DWORD arg_0_Hgametype, DWORD arg_4_B);
DWORD Jass_SetMapFlag(DWORD arg_0_Hmapflag, DWORD arg_4_B);
DWORD Jass_SetGameSpeed(DWORD arg_0_Hgamespeed);
DWORD Jass_SetGamePlacement(DWORD arg_0_Hplacement);
DWORD Jass_SetGameDifficulty(DWORD arg_0_Hgamedifficulty);
DWORD Jass_SetResourceDensity(DWORD arg_0_Hmapdensity);
DWORD Jass_SetCreatureDensity(DWORD arg_0_Hmapdensity);
DWORD Jass_DefineStartLocation(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_DefineStartLocationLoc(DWORD arg_0_I, DWORD arg_4_Hlocation);
DWORD Jass_SetStartLocPrioCount(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_SetStartLocPrio(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hstartlocprio);
DWORD Jass_GetStartLocPrioSlot(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_GetStartLocPrio(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_GetTeams();
DWORD Jass_GetPlayers();
DWORD Jass_IsGameTypeSupported(DWORD arg_0_Hgametype);
DWORD Jass_IsMapFlagSet(DWORD arg_0_Hmapflag);
DWORD Jass_GetGameTypeSelected();
DWORD Jass_GetGamePlacement();
DWORD Jass_GetGameSpeed();
DWORD Jass_GetGameDifficulty();
DWORD Jass_GetResourceDensity();
DWORD Jass_GetCreatureDensity();
DWORD Jass_GetStartLocationX(DWORD arg_0_I);
DWORD Jass_GetStartLocationY(DWORD arg_0_I);
DWORD Jass_GetStartLocationLoc(DWORD arg_0_I);
DWORD Jass_SetPlayerTeam(DWORD arg_0_Hplayer, DWORD arg_4_I);
DWORD Jass_SetPlayerStartLocation(DWORD arg_0_Hplayer, DWORD arg_4_I);
DWORD Jass_ForcePlayerStartLocation(DWORD arg_0_Hplayer, DWORD arg_4_I);
DWORD Jass_SetPlayerAlliance(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Halliancetype, DWORD arg_C_B);
DWORD Jass_SetPlayerTaxRate(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerstate, DWORD arg_C_I);
DWORD Jass_SetPlayerRacePreference(DWORD arg_0_Hplayer, DWORD arg_4_Hracepreference);
DWORD Jass_SetPlayerRaceSelectable(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_SetPlayerController(DWORD arg_0_Hplayer, DWORD arg_4_Hmapcontrol);
DWORD Jass_SetPlayerColor(DWORD arg_0_Hplayer, DWORD arg_4_Hplayercolor);
DWORD Jass_SetPlayerOnScoreScreen(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_SetPlayerName(DWORD arg_0_Hplayer, DWORD arg_4_S);
DWORD Jass_GetPlayerTeam(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerName(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerStartLocation(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerStartLocationX(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerStartLocationY(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerColor(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerSelectable(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerController(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerSlotState(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerTaxRate(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerstate);
DWORD Jass_IsPlayerRacePrefSet(DWORD arg_0_Hplayer, DWORD arg_4_Hracepreference);
DWORD Jass_Location(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_RemoveLocation(DWORD arg_0_Hlocation);
DWORD Jass_MoveLocation(DWORD arg_0_Hlocation, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_GetLocationX(DWORD arg_0_Hlocation);
DWORD Jass_GetLocationY(DWORD arg_0_Hlocation);
DWORD Jass_GetLocationZ(DWORD arg_0_Hlocation);
DWORD Jass_CreateTimer();
DWORD Jass_DestroyTimer(DWORD arg_0_Htimer);
DWORD Jass_TimerStart(DWORD arg_0_Htimer, DWORD arg_4_R, DWORD arg_8_B, DWORD arg_C_C);
DWORD Jass_TimerGetTimeout(DWORD arg_0_Htimer);
DWORD Jass_TimerGetElapsed(DWORD arg_0_Htimer);
DWORD Jass_TimerGetRemaining(DWORD arg_0_Htimer);
DWORD Jass_PauseTimer(DWORD arg_0_Htimer);
DWORD Jass_ResumeTimer(DWORD arg_0_Htimer);
DWORD Jass_GetExpiredTimer();
DWORD Jass_Condition(DWORD arg_0_C);
DWORD Jass_DestroyCondition(DWORD arg_0_Hconditionfunc);
DWORD Jass_Filter(DWORD arg_0_C);
DWORD Jass_DestroyFilter(DWORD arg_0_Hfilterfunc);
DWORD Jass_DestroyBoolExpr(DWORD arg_0_Hboolexpr);
DWORD Jass_And(DWORD arg_0_Hboolexpr, DWORD arg_4_Hboolexpr);
DWORD Jass_Or(DWORD arg_0_Hboolexpr, DWORD arg_4_Hboolexpr);
DWORD Jass_Not(DWORD arg_0_Hboolexpr);
DWORD Jass_CreateRegion();
DWORD Jass_RemoveRegion(DWORD arg_0_Hregion);
DWORD Jass_RegionAddRect(DWORD arg_0_Hregion, DWORD arg_4_Hrect);
DWORD Jass_RegionClearRect(DWORD arg_0_Hregion, DWORD arg_4_Hrect);
DWORD Jass_RegionAddCell(DWORD arg_0_Hregion, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_RegionAddCellAtLoc(DWORD arg_0_Hregion, DWORD arg_4_Hlocation);
DWORD Jass_RegionClearCell(DWORD arg_0_Hregion, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_RegionClearCellAtLoc(DWORD arg_0_Hregion, DWORD arg_4_Hlocation);
DWORD Jass_IsUnitInRegion(DWORD arg_0_Hregion, DWORD arg_4_Hunit);
DWORD Jass_IsPointInRegion(DWORD arg_0_Hregion, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_IsLocationInRegion(DWORD arg_0_Hregion, DWORD arg_4_Hlocation);
DWORD Jass_Rect(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_RectFromLoc(DWORD arg_0_Hlocation, DWORD arg_4_Hlocation);
DWORD Jass_RemoveRect(DWORD arg_0_Hrect);
DWORD Jass_SetRect(DWORD arg_0_Hrect, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_SetRectFromLoc(DWORD arg_0_Hrect, DWORD arg_4_Hlocation, DWORD arg_8_Hlocation);
DWORD Jass_GetRectCenterX(DWORD arg_0_Hrect);
DWORD Jass_GetRectCenterY(DWORD arg_0_Hrect);
DWORD Jass_MoveRectTo(DWORD arg_0_Hrect, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_MoveRectToLoc(DWORD arg_0_Hrect, DWORD arg_4_Hlocation);
DWORD Jass_GetRectMinX(DWORD arg_0_Hrect);
DWORD Jass_GetRectMinY(DWORD arg_0_Hrect);
DWORD Jass_GetRectMaxX(DWORD arg_0_Hrect);
DWORD Jass_GetRectMaxY(DWORD arg_0_Hrect);
DWORD Jass_GetWorldBounds();
DWORD Jass_SetFogStateRect(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hrect, DWORD arg_C_B);
DWORD Jass_SetFogStateRadius(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_B);
DWORD Jass_SetFogStateRadiusLoc(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hlocation, DWORD arg_C_R, DWORD arg_10_B);
DWORD Jass_FogMaskEnable(DWORD arg_0_B);
DWORD Jass_IsFogMaskEnabled();
DWORD Jass_FogEnable(DWORD arg_0_B);
DWORD Jass_IsFogEnabled();
DWORD Jass_CreateFogModifierRect(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hrect, DWORD arg_C_B, DWORD arg_10_B);
DWORD Jass_CreateFogModifierRadius(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_B, DWORD arg_18_B);
DWORD Jass_CreateFogModifierRadiusLoc(DWORD arg_0_Hplayer, DWORD arg_4_Hfogstate, DWORD arg_8_Hlocation, DWORD arg_C_R, DWORD arg_10_B, DWORD arg_14_B);
DWORD Jass_DestroyFogModifier(DWORD arg_0_Hfogmodifier);
DWORD Jass_FogModifierStart(DWORD arg_0_Hfogmodifier);
DWORD Jass_FogModifierStop(DWORD arg_0_Hfogmodifier);
DWORD Jass_CreateTrigger();
DWORD Jass_DestroyTrigger(DWORD arg_0_Htrigger);
DWORD Jass_ResetTrigger(DWORD arg_0_Htrigger);
DWORD Jass_EnableTrigger(DWORD arg_0_Htrigger);
DWORD Jass_DisableTrigger(DWORD arg_0_Htrigger);
DWORD Jass_IsTriggerEnabled(DWORD arg_0_Htrigger);
DWORD Jass_TriggerWaitOnSleeps(DWORD arg_0_Htrigger, DWORD arg_4_B);
DWORD Jass_IsTriggerWaitOnSleeps(DWORD arg_0_Htrigger);
DWORD Jass_TriggerRegisterVariableEvent(DWORD arg_0_Htrigger, DWORD arg_4_S, DWORD arg_8_Hlimitop, DWORD arg_C_R);
DWORD Jass_TriggerRegisterTimerEvent(DWORD arg_0_Htrigger, DWORD arg_4_R, DWORD arg_8_B);
DWORD Jass_TriggerRegisterTimerExpireEvent(DWORD arg_0_Htrigger, DWORD arg_4_Htimer);
DWORD Jass_TriggerRegisterGameStateEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hgamestate, DWORD arg_8_Hlimitop, DWORD arg_C_R);
DWORD Jass_GetEventGameState();
DWORD Jass_TriggerRegisterDialogEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hdialog);
DWORD Jass_TriggerRegisterDialogButtonEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hbutton);
DWORD Jass_GetClickedButton();
DWORD Jass_GetClickedDialog();
DWORD Jass_GetTournamentFinishSoonTimeRemaining();
DWORD Jass_GetTournamentFinishNowRule();
DWORD Jass_GetTournamentFinishNowPlayer();
DWORD Jass_GetTournamentScore(DWORD arg_0_Hplayer);
DWORD Jass_GetSaveBasicFilename();
DWORD Jass_TriggerRegisterGameEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hgameevent);
DWORD Jass_GetWinningPlayer();
DWORD Jass_TriggerRegisterPlayerStateEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerstate, DWORD arg_C_Hlimitop, DWORD arg_10_R);
DWORD Jass_GetEventPlayerState();
DWORD Jass_TriggerRegisterPlayerEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerevent);
DWORD Jass_TriggerRegisterPlayerUnitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Hplayerunitevent, DWORD arg_C_Hboolexpr);
DWORD Jass_GetAttacker();
DWORD Jass_GetRescuer();
DWORD Jass_GetDyingUnit();
DWORD Jass_GetKillingUnit();
DWORD Jass_GetDecayingUnit();
DWORD Jass_GetConstructingStructure();
DWORD Jass_GetCancelledStructure();
DWORD Jass_GetConstructedStructure();
DWORD Jass_GetTrainedUnitType();
DWORD Jass_GetResearchingUnit();
DWORD Jass_GetResearched();
DWORD Jass_GetTrainedUnit();
DWORD Jass_GetSellingUnit();
DWORD Jass_GetSoldUnit();
DWORD Jass_GetBuyingUnit();
DWORD Jass_GetSoldItem();
DWORD Jass_GetChangingUnit();
DWORD Jass_GetChangingUnitPrevOwner();
DWORD Jass_GetDetectedUnit();
DWORD Jass_GetOrderedUnit();
DWORD Jass_OrderId(DWORD arg_0_S);
DWORD Jass_OrderId2String(DWORD arg_0_I);
DWORD Jass_AbilityId(DWORD arg_0_S);
DWORD Jass_AbilityId2String(DWORD arg_0_I);
DWORD Jass_UnitId(DWORD arg_0_S);
DWORD Jass_UnitId2String(DWORD arg_0_I);
DWORD Jass_GetObjectName(DWORD arg_0_I);
DWORD Jass_GetIssuedOrderId();
DWORD Jass_GetOrderPointX();
DWORD Jass_GetOrderPointY();
DWORD Jass_GetOrderPointLoc();
DWORD Jass_GetOrderTarget();
DWORD Jass_GetOrderTargetDestructable();
DWORD Jass_GetOrderTargetItem();
DWORD Jass_GetOrderTargetUnit();
DWORD Jass_GetSpellAbilityUnit();
DWORD Jass_GetSpellAbilityId();
DWORD Jass_GetSpellAbility();
DWORD Jass_GetSpellTargetLoc();
DWORD Jass_GetSpellTargetX();
DWORD Jass_GetSpellTargetY();
DWORD Jass_GetSpellTargetDestructable();
DWORD Jass_GetSpellTargetItem();
DWORD Jass_GetSpellTargetUnit();
DWORD Jass_GetLevelingUnit();
DWORD Jass_GetLearningUnit();
DWORD Jass_GetLearnedSkill();
DWORD Jass_GetLearnedSkillLevel();
DWORD Jass_GetRevivableUnit();
DWORD Jass_GetRevivingUnit();
DWORD Jass_GetSummoningUnit();
DWORD Jass_GetSummonedUnit();
DWORD Jass_GetTransportUnit();
DWORD Jass_GetLoadedUnit();
DWORD Jass_GetManipulatingUnit();
DWORD Jass_GetManipulatedItem();
DWORD Jass_TriggerRegisterPlayerAllianceChange(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_Halliancetype);
DWORD Jass_TriggerRegisterPlayerChatEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hplayer, DWORD arg_8_S, DWORD arg_C_B);
DWORD Jass_GetEventPlayerChatString();
DWORD Jass_GetEventPlayerChatStringMatched();
DWORD Jass_TriggerRegisterUnitStateEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_Hunitstate, DWORD arg_C_Hlimitop, DWORD arg_10_R);
DWORD Jass_GetEventUnitState();
DWORD Jass_TriggerRegisterDeathEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hwidget);
DWORD Jass_TriggerRegisterUnitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_Hunitevent);
DWORD Jass_GetEventDamage();
DWORD Jass_GetEventDamageSource();
DWORD Jass_GetEventDetectingPlayer();
DWORD Jass_GetEventTargetUnit();
DWORD Jass_TriggerRegisterFilterUnitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_Hunitevent, DWORD arg_C_Hboolexpr);
DWORD Jass_TriggerRegisterUnitInRange(DWORD arg_0_Htrigger, DWORD arg_4_Hunit, DWORD arg_8_R, DWORD arg_C_Hboolexpr);
DWORD Jass_TriggerRegisterEnterRegion(DWORD arg_0_Htrigger, DWORD arg_4_Hregion, DWORD arg_8_Hboolexpr);
DWORD Jass_TriggerRegisterLeaveRegion(DWORD arg_0_Htrigger, DWORD arg_4_Hregion, DWORD arg_8_Hboolexpr);
DWORD Jass_GetTriggeringRegion();
DWORD Jass_GetEnteringUnit();
DWORD Jass_GetLeavingUnit();
DWORD Jass_TriggerAddCondition(DWORD arg_0_Htrigger, DWORD arg_4_Hboolexpr);
DWORD Jass_TriggerRemoveCondition(DWORD arg_0_Htrigger, DWORD arg_4_Htriggercondition);
DWORD Jass_TriggerClearConditions(DWORD arg_0_Htrigger);
DWORD Jass_TriggerAddAction(DWORD arg_0_Htrigger, DWORD arg_4_C);
DWORD Jass_TriggerRemoveAction(DWORD arg_0_Htrigger, DWORD arg_4_Htriggeraction);
DWORD Jass_TriggerClearActions(DWORD arg_0_Htrigger);
DWORD Jass_TriggerSleepAction(DWORD arg_0_R);
DWORD Jass_TriggerWaitForSound(DWORD arg_0_Hsound, DWORD arg_4_R);
DWORD Jass_TriggerExecute(DWORD arg_0_Htrigger);
DWORD Jass_TriggerExecuteWait(DWORD arg_0_Htrigger);
DWORD Jass_TriggerEvaluate(DWORD arg_0_Htrigger);
DWORD Jass_TriggerSyncStart();
DWORD Jass_TriggerSyncReady();
DWORD Jass_GetTriggerWidget();
DWORD Jass_GetTriggerDestructable();
DWORD Jass_GetTriggerUnit();
DWORD Jass_GetTriggerPlayer();
DWORD Jass_GetTriggeringTrigger();
DWORD Jass_GetTriggerEventId();
DWORD Jass_GetTriggerEvalCount(DWORD arg_0_Htrigger);
DWORD Jass_GetTriggerExecCount(DWORD arg_0_Htrigger);
DWORD Jass_GetFilterUnit();
DWORD Jass_GetEnumUnit();
DWORD Jass_GetEnumPlayer();
DWORD Jass_GetFilterPlayer();
DWORD Jass_GetFilterDestructable();
DWORD Jass_GetEnumDestructable();
DWORD Jass_GetFilterItem();
DWORD Jass_GetEnumItem();
DWORD Jass_CreateGroup();
DWORD Jass_DestroyGroup(DWORD arg_0_Hgroup);
DWORD Jass_GroupAddUnit(DWORD arg_0_Hgroup, DWORD arg_4_Hunit);
DWORD Jass_GroupRemoveUnit(DWORD arg_0_Hgroup, DWORD arg_4_Hunit);
DWORD Jass_GroupClear(DWORD arg_0_Hgroup);
DWORD Jass_GroupEnumUnitsOfType(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hboolexpr);
DWORD Jass_GroupEnumUnitsOfTypeCounted(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hboolexpr, DWORD arg_C_I);
DWORD Jass_GroupEnumUnitsInRect(DWORD arg_0_Hgroup, DWORD arg_4_Hrect, DWORD arg_8_Hboolexpr);
DWORD Jass_GroupEnumUnitsInRectCounted(DWORD arg_0_Hgroup, DWORD arg_4_Hrect, DWORD arg_8_Hboolexpr, DWORD arg_C_I);
DWORD Jass_GroupEnumUnitsOfPlayer(DWORD arg_0_Hgroup, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr);
DWORD Jass_GroupEnumUnitsInRange(DWORD arg_0_Hgroup, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hboolexpr);
DWORD Jass_GroupEnumUnitsInRangeOfLoc(DWORD arg_0_Hgroup, DWORD arg_4_Hlocation, DWORD arg_8_R, DWORD arg_C_Hboolexpr);
DWORD Jass_GroupEnumUnitsInRangeCounted(DWORD arg_0_Hgroup, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hboolexpr, DWORD arg_14_I);
DWORD Jass_GroupEnumUnitsInRangeOfLocCounted(DWORD arg_0_Hgroup, DWORD arg_4_Hlocation, DWORD arg_8_R, DWORD arg_C_Hboolexpr, DWORD arg_10_I);
DWORD Jass_GroupEnumUnitsSelected(DWORD arg_0_Hgroup, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr);
DWORD Jass_GroupImmediateOrder(DWORD arg_0_Hgroup, DWORD arg_4_S);
DWORD Jass_GroupImmediateOrderById(DWORD arg_0_Hgroup, DWORD arg_4_I);
DWORD Jass_GroupPointOrder(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_GroupPointOrderLoc(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hlocation);
DWORD Jass_GroupPointOrderById(DWORD arg_0_Hgroup, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_GroupPointOrderByIdLoc(DWORD arg_0_Hgroup, DWORD arg_4_I, DWORD arg_8_Hlocation);
DWORD Jass_GroupTargetOrder(DWORD arg_0_Hgroup, DWORD arg_4_S, DWORD arg_8_Hwidget);
DWORD Jass_GroupTargetOrderById(DWORD arg_0_Hgroup, DWORD arg_4_I, DWORD arg_8_Hwidget);
DWORD Jass_ForGroup(DWORD arg_0_Hgroup, DWORD arg_4_C);
DWORD Jass_FirstOfGroup(DWORD arg_0_Hgroup);
DWORD Jass_CreateForce();
DWORD Jass_DestroyForce(DWORD arg_0_Hforce);
DWORD Jass_ForceAddPlayer(DWORD arg_0_Hforce, DWORD arg_4_Hplayer);
DWORD Jass_ForceRemovePlayer(DWORD arg_0_Hforce, DWORD arg_4_Hplayer);
DWORD Jass_ForceClear(DWORD arg_0_Hforce);
DWORD Jass_ForceEnumPlayers(DWORD arg_0_Hforce, DWORD arg_4_Hboolexpr);
DWORD Jass_ForceEnumPlayersCounted(DWORD arg_0_Hforce, DWORD arg_4_Hboolexpr, DWORD arg_8_I);
DWORD Jass_ForceEnumAllies(DWORD arg_0_Hforce, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr);
DWORD Jass_ForceEnumEnemies(DWORD arg_0_Hforce, DWORD arg_4_Hplayer, DWORD arg_8_Hboolexpr);
DWORD Jass_ForForce(DWORD arg_0_Hforce, DWORD arg_4_C);
DWORD Jass_GetWidgetLife(DWORD arg_0_Hwidget);
DWORD Jass_SetWidgetLife(DWORD arg_0_Hwidget, DWORD arg_4_R);
DWORD Jass_GetWidgetX(DWORD arg_0_Hwidget);
DWORD Jass_GetWidgetY(DWORD arg_0_Hwidget);
DWORD Jass_CreateDestructable(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_I);
DWORD Jass_CreateDestructableZ(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_I);
DWORD Jass_CreateDeadDestructable(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_I);
DWORD Jass_CreateDeadDestructableZ(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_I);
DWORD Jass_RemoveDestructable(DWORD arg_0_Hdestructable);
DWORD Jass_KillDestructable(DWORD arg_0_Hdestructable);
DWORD Jass_SetDestructableInvulnerable(DWORD arg_0_Hdestructable, DWORD arg_4_B);
DWORD Jass_IsDestructableInvulnerable(DWORD arg_0_Hdestructable);
DWORD Jass_EnumDestructablesInRect(DWORD arg_0_Hrect, DWORD arg_4_Hboolexpr, DWORD arg_8_C);
DWORD Jass_GetDestructableTypeId(DWORD arg_0_Hdestructable);
DWORD Jass_GetDestructableX(DWORD arg_0_Hdestructable);
DWORD Jass_GetDestructableY(DWORD arg_0_Hdestructable);
DWORD Jass_SetDestructableLife(DWORD arg_0_Hdestructable, DWORD arg_4_R);
DWORD Jass_GetDestructableLife(DWORD arg_0_Hdestructable);
DWORD Jass_SetDestructableMaxLife(DWORD arg_0_Hdestructable, DWORD arg_4_R);
DWORD Jass_GetDestructableMaxLife(DWORD arg_0_Hdestructable);
DWORD Jass_DestructableRestoreLife(DWORD arg_0_Hdestructable, DWORD arg_4_R, DWORD arg_8_B);
DWORD Jass_QueueDestructableAnimation(DWORD arg_0_Hdestructable, DWORD arg_4_S);
DWORD Jass_SetDestructableAnimation(DWORD arg_0_Hdestructable, DWORD arg_4_S);
DWORD Jass_SetDestructableAnimationSpeed(DWORD arg_0_Hdestructable, DWORD arg_4_R);
DWORD Jass_ShowDestructable(DWORD arg_0_Hdestructable, DWORD arg_4_B);
DWORD Jass_GetDestructableOccluderHeight(DWORD arg_0_Hdestructable);
DWORD Jass_SetDestructableOccluderHeight(DWORD arg_0_Hdestructable, DWORD arg_4_R);
DWORD Jass_GetDestructableName(DWORD arg_0_Hdestructable);
DWORD Jass_CreateUnit(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_CreateUnitByName(DWORD arg_0_Hplayer, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_CreateUnitAtLoc(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_Hlocation, DWORD arg_C_R);
DWORD Jass_CreateUnitAtLocByName(DWORD arg_0_Hplayer, DWORD arg_4_S, DWORD arg_8_Hlocation, DWORD arg_C_R);
DWORD Jass_CreateCorpse(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_GetUnitState(DWORD arg_0_Hunit, DWORD arg_4_Hunitstate);
DWORD Jass_GetUnitFoodUsed(DWORD arg_0_Hunit);
DWORD Jass_GetUnitFoodMade(DWORD arg_0_Hunit);
DWORD Jass_GetFoodMade(DWORD arg_0_I);
DWORD Jass_GetFoodUsed(DWORD arg_0_I);
DWORD Jass_SetUnitUseFood(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_GetUnitX(DWORD arg_0_Hunit);
DWORD Jass_GetUnitY(DWORD arg_0_Hunit);
DWORD Jass_GetUnitLoc(DWORD arg_0_Hunit);
DWORD Jass_GetUnitRallyPoint(DWORD arg_0_Hunit);
DWORD Jass_GetUnitRallyUnit(DWORD arg_0_Hunit);
DWORD Jass_GetUnitRallyDestructable(DWORD arg_0_Hunit);
DWORD Jass_GetUnitFacing(DWORD arg_0_Hunit);
DWORD Jass_GetUnitMoveSpeed(DWORD arg_0_Hunit);
DWORD Jass_GetUnitDefaultMoveSpeed(DWORD arg_0_Hunit);
DWORD Jass_GetUnitTypeId(DWORD arg_0_Hunit);
DWORD Jass_GetUnitRace(DWORD arg_0_Hunit);
DWORD Jass_GetUnitName(DWORD arg_0_Hunit);
DWORD Jass_GetUnitPointValue(DWORD arg_0_Hunit);
DWORD Jass_GetUnitPointValueByType(DWORD arg_0_I);
DWORD Jass_SetUnitX(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitY(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitPosition(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetUnitPositionLoc(DWORD arg_0_Hunit, DWORD arg_4_Hlocation);
DWORD Jass_SetUnitFacing(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitFacingTimed(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetUnitFlyHeight(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetUnitMoveSpeed(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitTurnSpeed(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitPropWindow(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitCreepGuard(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_GetUnitAcquireRange(DWORD arg_0_Hunit);
DWORD Jass_GetUnitTurnSpeed(DWORD arg_0_Hunit);
DWORD Jass_GetUnitPropWindow(DWORD arg_0_Hunit);
DWORD Jass_GetUnitFlyHeight(DWORD arg_0_Hunit);
DWORD Jass_GetUnitDefaultAcquireRange(DWORD arg_0_Hunit);
DWORD Jass_GetUnitDefaultTurnSpeed(DWORD arg_0_Hunit);
DWORD Jass_GetUnitDefaultPropWindow(DWORD arg_0_Hunit);
DWORD Jass_GetUnitDefaultFlyHeight(DWORD arg_0_Hunit);
DWORD Jass_SetUnitAcquireRange(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitState(DWORD arg_0_Hunit, DWORD arg_4_Hunitstate, DWORD arg_8_R);
DWORD Jass_SetUnitOwner(DWORD arg_0_Hunit, DWORD arg_4_Hplayer, DWORD arg_8_B);
DWORD Jass_SetUnitRescuable(DWORD arg_0_Hunit, DWORD arg_4_Hplayer, DWORD arg_8_B);
DWORD Jass_SetUnitRescueRange(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitColor(DWORD arg_0_Hunit, DWORD arg_4_Hplayercolor);
DWORD Jass_QueueUnitAnimation(DWORD arg_0_Hunit, DWORD arg_4_S);
DWORD Jass_SetUnitAnimation(DWORD arg_0_Hunit, DWORD arg_4_S);
DWORD Jass_SetUnitAnimationWithRarity(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hraritycontrol);
DWORD Jass_SetUnitAnimationByIndex(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_AddUnitAnimationProperties(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_B);
DWORD Jass_SetUnitScale(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetUnitTimeScale(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitBlendTime(DWORD arg_0_Hunit, DWORD arg_4_R);
DWORD Jass_SetUnitVertexColor(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_SetUnitLookAt(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hunit, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R);
DWORD Jass_SetUnitPathing(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_ResetUnitLookAt(DWORD arg_0_Hunit);
DWORD Jass_SetHeroStr(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_SetHeroAgi(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_SetHeroInt(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_GetHeroStr(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_GetHeroAgi(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_GetHeroInt(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_GetHeroSkillPoints(DWORD arg_0_Hunit);
DWORD Jass_UnitStripHeroLevel(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitModifySkillPoints(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_GetHeroXP(DWORD arg_0_Hunit);
DWORD Jass_SetHeroXP(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_AddHeroXP(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_SetHeroLevel(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_GetHeroLevel(DWORD arg_0_Hunit);
DWORD Jass_GetUnitLevel(DWORD arg_0_Hunit);
DWORD Jass_GetHeroProperName(DWORD arg_0_Hunit);
DWORD Jass_SuspendHeroXP(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_IsSuspendedXP(DWORD arg_0_Hunit);
DWORD Jass_SelectHeroSkill(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_GetUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_ReviveHero(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_B);
DWORD Jass_ReviveHeroLoc(DWORD arg_0_Hunit, DWORD arg_4_Hlocation, DWORD arg_8_B);
DWORD Jass_SetUnitExploded(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_SetUnitInvulnerable(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_PauseUnit(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_IsUnitPaused(DWORD arg_0_Hunit);
DWORD Jass_UnitAddItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem);
DWORD Jass_UnitAddItemById(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitAddItemToSlotById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_UnitRemoveItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem);
DWORD Jass_UnitRemoveItemFromSlot(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitHasItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem);
DWORD Jass_UnitItemInSlot(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitInventorySize(DWORD arg_0_Hunit);
DWORD Jass_UnitDropItemPoint(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_UnitDropItemSlot(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_I);
DWORD Jass_UnitDropItemTarget(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_Hwidget);
DWORD Jass_UnitUseItem(DWORD arg_0_Hunit, DWORD arg_4_Hitem);
DWORD Jass_UnitUseItemPoint(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_UnitUseItemTarget(DWORD arg_0_Hunit, DWORD arg_4_Hitem, DWORD arg_8_Hwidget);
DWORD Jass_GetUnitCurrentOrder(DWORD arg_0_Hunit);
DWORD Jass_SetResourceAmount(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_AddResourceAmount(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_GetResourceAmount(DWORD arg_0_Hunit);
DWORD Jass_SelectUnit(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_ClearSelection();
DWORD Jass_UnitAddIndicator(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_AddIndicator(DWORD arg_0_Hwidget, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_KillUnit(DWORD arg_0_Hunit);
DWORD Jass_RemoveUnit(DWORD arg_0_Hunit);
DWORD Jass_ShowUnit(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_IsUnitInForce(DWORD arg_0_Hunit, DWORD arg_4_Hforce);
DWORD Jass_IsUnitInGroup(DWORD arg_0_Hunit, DWORD arg_4_Hgroup);
DWORD Jass_IsUnitOwnedByPlayer(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitAlly(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitEnemy(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitVisible(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitDetected(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitInvisible(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitFogged(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitMasked(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitSelected(DWORD arg_0_Hunit, DWORD arg_4_Hplayer);
DWORD Jass_IsUnitRace(DWORD arg_0_Hunit, DWORD arg_4_Hrace);
DWORD Jass_IsUnitType(DWORD arg_0_Hunit, DWORD arg_4_Hunittype);
DWORD Jass_IsUnit(DWORD arg_0_Hunit, DWORD arg_4_Hunit);
DWORD Jass_IsUnitInRange(DWORD arg_0_Hunit, DWORD arg_4_Hunit, DWORD arg_8_R);
DWORD Jass_IsUnitInRangeXY(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_IsUnitInRangeLoc(DWORD arg_0_Hunit, DWORD arg_4_Hlocation, DWORD arg_8_R);
DWORD Jass_IsUnitHidden(DWORD arg_0_Hunit);
DWORD Jass_IsUnitIllusion(DWORD arg_0_Hunit);
DWORD Jass_IsUnitInTransport(DWORD arg_0_Hunit, DWORD arg_4_Hunit);
DWORD Jass_IsUnitLoaded(DWORD arg_0_Hunit);
DWORD Jass_IsHeroUnitId(DWORD arg_0_I);
DWORD Jass_IsUnitIdType(DWORD arg_0_I, DWORD arg_4_Hunittype);
DWORD Jass_GetOwningPlayer(DWORD arg_0_Hunit);
DWORD Jass_UnitShareVision(DWORD arg_0_Hunit, DWORD arg_4_Hplayer, DWORD arg_8_B);
DWORD Jass_UnitSuspendDecay(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_UnitAddType(DWORD arg_0_Hunit, DWORD arg_4_Hunittype);
DWORD Jass_UnitRemoveType(DWORD arg_0_Hunit, DWORD arg_4_Hunittype);
DWORD Jass_UnitAddAbility(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitRemoveAbility(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitMakeAbilityPermanent(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_I);
DWORD Jass_UnitHasBuffsEx(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_B, DWORD arg_18_B, DWORD arg_1C_B);
DWORD Jass_UnitCountBuffsEx(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_B, DWORD arg_18_B, DWORD arg_1C_B);
DWORD Jass_UnitRemoveBuffs(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B);
DWORD Jass_UnitRemoveBuffsEx(DWORD arg_0_Hunit, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_B, DWORD arg_18_B, DWORD arg_1C_B);
DWORD Jass_UnitAddSleep(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_UnitCanSleep(DWORD arg_0_Hunit);
DWORD Jass_UnitAddSleepPerm(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_UnitCanSleepPerm(DWORD arg_0_Hunit);
DWORD Jass_UnitIsSleeping(DWORD arg_0_Hunit);
DWORD Jass_UnitWakeUp(DWORD arg_0_Hunit);
DWORD Jass_UnitApplyTimedLife(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R);
DWORD Jass_UnitIgnoreAlarm(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_UnitIgnoreAlarmToggled(DWORD arg_0_Hunit);
DWORD Jass_UnitDamagePoint(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_B, DWORD arg_1C_B, DWORD arg_20_Hattacktype, DWORD arg_24_Hdamagetype, DWORD arg_28_Hweapontype);
DWORD Jass_UnitDamageTarget(DWORD arg_0_Hunit, DWORD arg_4_Hwidget, DWORD arg_8_R, DWORD arg_C_B, DWORD arg_10_B, DWORD arg_14_Hattacktype, DWORD arg_18_Hdamagetype, DWORD arg_1C_Hweapontype);
DWORD Jass_DecUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_IncUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_SetUnitAbilityLevel(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_UnitResetCooldown(DWORD arg_0_Hunit);
DWORD Jass_UnitSetConstructionProgress(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitSetUpgradeProgress(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_UnitPauseTimedLife(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_UnitSetUsesAltIcon(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_IssueImmediateOrderById(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_IssuePointOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_IssuePointOrderByIdLoc(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_Hlocation);
DWORD Jass_IssueTargetOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_Hwidget);
DWORD Jass_IssueInstantPointOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hwidget);
DWORD Jass_IssueInstantTargetOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_Hwidget, DWORD arg_C_Hwidget);
DWORD Jass_IssueBuildOrderById(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_IssueNeutralImmediateOrderById(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_I);
DWORD Jass_IssueNeutralPointOrderById(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_I, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_IssueNeutralTargetOrderById(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_I, DWORD arg_C_Hwidget);
DWORD Jass_IssueImmediateOrder(DWORD arg_0_Hunit, DWORD arg_4_S);
DWORD Jass_IssuePointOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_IssuePointOrderLoc(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hlocation);
DWORD Jass_IssueTargetOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hwidget);
DWORD Jass_IssueInstantPointOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_Hwidget);
DWORD Jass_IssueInstantTargetOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_Hwidget, DWORD arg_C_Hwidget);
DWORD Jass_IssueBuildOrder(DWORD arg_0_Hunit, DWORD arg_4_S, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_IssueNeutralImmediateOrder(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_S);
DWORD Jass_IssueNeutralPointOrder(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_S, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_IssueNeutralTargetOrder(DWORD arg_0_Hplayer, DWORD arg_4_Hunit, DWORD arg_8_S, DWORD arg_C_Hwidget);
DWORD Jass_WaygateGetDestinationX(DWORD arg_0_Hunit);
DWORD Jass_WaygateGetDestinationY(DWORD arg_0_Hunit);
DWORD Jass_WaygateSetDestination(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_WaygateActivate(DWORD arg_0_Hunit, DWORD arg_4_B);
DWORD Jass_WaygateIsActive(DWORD arg_0_Hunit);
DWORD Jass_AddItemToAllStock(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_AddItemToStock(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_AddUnitToAllStock(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_AddUnitToStock(DWORD arg_0_Hunit, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_RemoveItemFromAllStock(DWORD arg_0_I);
DWORD Jass_RemoveItemFromStock(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_RemoveUnitFromAllStock(DWORD arg_0_I);
DWORD Jass_RemoveUnitFromStock(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_SetAllItemTypeSlots(DWORD arg_0_I);
DWORD Jass_SetAllUnitTypeSlots(DWORD arg_0_I);
DWORD Jass_SetItemTypeSlots(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_SetUnitTypeSlots(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_GetUnitUserData(DWORD arg_0_Hunit);
DWORD Jass_SetUnitUserData(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_CreateItem(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_RemoveItem(DWORD arg_0_Hitem);
DWORD Jass_GetItemPlayer(DWORD arg_0_Hitem);
DWORD Jass_GetItemTypeId(DWORD arg_0_Hitem);
DWORD Jass_GetItemX(DWORD arg_0_Hitem);
DWORD Jass_GetItemY(DWORD arg_0_Hitem);
DWORD Jass_SetItemPosition(DWORD arg_0_Hitem, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetItemDropOnDeath(DWORD arg_0_Hitem, DWORD arg_4_B);
DWORD Jass_SetItemDroppable(DWORD arg_0_Hitem, DWORD arg_4_B);
DWORD Jass_SetItemPawnable(DWORD arg_0_Hitem, DWORD arg_4_B);
DWORD Jass_SetItemPlayer(DWORD arg_0_Hitem, DWORD arg_4_Hplayer, DWORD arg_8_B);
DWORD Jass_SetItemInvulnerable(DWORD arg_0_Hitem, DWORD arg_4_B);
DWORD Jass_IsItemInvulnerable(DWORD arg_0_Hitem);
DWORD Jass_GetItemLevel(DWORD arg_0_Hitem);
DWORD Jass_GetItemType(DWORD arg_0_Hitem);
DWORD Jass_SetItemVisible(DWORD arg_0_Hitem, DWORD arg_4_B);
DWORD Jass_IsItemVisible(DWORD arg_0_Hitem);
DWORD Jass_EnumItemsInRect(DWORD arg_0_Hrect, DWORD arg_4_Hboolexpr, DWORD arg_8_C);
DWORD Jass_IsItemOwned(DWORD arg_0_Hitem);
DWORD Jass_IsItemPowerup(DWORD arg_0_Hitem);
DWORD Jass_IsItemSellable(DWORD arg_0_Hitem);
DWORD Jass_IsItemPawnable(DWORD arg_0_Hitem);
DWORD Jass_IsItemIdPowerup(DWORD arg_0_I);
DWORD Jass_IsItemIdSellable(DWORD arg_0_I);
DWORD Jass_IsItemIdPawnable(DWORD arg_0_I);
DWORD Jass_SetItemDropID(DWORD arg_0_Hitem, DWORD arg_4_I);
DWORD Jass_GetItemName(DWORD arg_0_Hitem);
DWORD Jass_GetItemCharges(DWORD arg_0_Hitem);
DWORD Jass_SetItemCharges(DWORD arg_0_Hitem, DWORD arg_4_I);
DWORD Jass_GetItemUserData(DWORD arg_0_Hitem);
DWORD Jass_SetItemUserData(DWORD arg_0_Hitem, DWORD arg_4_I);
DWORD Jass_Player(DWORD arg_0_I);
DWORD Jass_GetLocalPlayer();
DWORD Jass_IsPlayerAlly(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer);
DWORD Jass_IsPlayerEnemy(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer);
DWORD Jass_IsPlayerInForce(DWORD arg_0_Hplayer, DWORD arg_4_Hforce);
DWORD Jass_IsPlayerObserver(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerRace(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerId(DWORD arg_0_Hplayer);
DWORD Jass_SetPlayerTechMaxAllowed(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_GetPlayerTechMaxAllowed(DWORD arg_0_Hplayer, DWORD arg_4_I);
DWORD Jass_AddPlayerTechResearched(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_SetPlayerTechResearched(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_GetPlayerTechResearched(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_GetPlayerTechCount(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_SetPlayerAbilityAvailable(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_GetPlayerUnitCount(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_GetPlayerTypedUnitCount(DWORD arg_0_Hplayer, DWORD arg_4_S, DWORD arg_8_B, DWORD arg_C_B);
DWORD Jass_GetPlayerStructureCount(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_IsVisibleToPlayer(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hplayer);
DWORD Jass_IsLocationVisibleToPlayer(DWORD arg_0_Hlocation, DWORD arg_4_Hplayer);
DWORD Jass_IsFoggedToPlayer(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hplayer);
DWORD Jass_IsLocationFoggedToPlayer(DWORD arg_0_Hlocation, DWORD arg_4_Hplayer);
DWORD Jass_IsMaskedToPlayer(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hplayer);
DWORD Jass_IsLocationMaskedToPlayer(DWORD arg_0_Hlocation, DWORD arg_4_Hplayer);
DWORD Jass_SetPlayerState(DWORD arg_0_Hplayer, DWORD arg_4_Hplayerstate, DWORD arg_8_I);
DWORD Jass_GetPlayerState(DWORD arg_0_Hplayer, DWORD arg_4_Hplayerstate);
DWORD Jass_GetPlayerScore(DWORD arg_0_Hplayer, DWORD arg_4_Hplayerscore);
DWORD Jass_GetPlayerAlliance(DWORD arg_0_Hplayer, DWORD arg_4_Hplayer, DWORD arg_8_Halliancetype);
DWORD Jass_RemovePlayer(DWORD arg_0_Hplayer, DWORD arg_4_Hplayergameresult);
DWORD Jass_CachePlayerHeroData(DWORD arg_0_Hplayer);
DWORD Jass_GetPlayerHandicap(DWORD arg_0_Hplayer);
DWORD Jass_SetPlayerHandicap(DWORD arg_0_Hplayer, DWORD arg_4_R);
DWORD Jass_GetPlayerHandicapXP(DWORD arg_0_Hplayer);
DWORD Jass_SetPlayerHandicapXP(DWORD arg_0_Hplayer, DWORD arg_4_R);
DWORD Jass_SetPlayerUnitsOwner(DWORD arg_0_Hplayer, DWORD arg_4_I);
DWORD Jass_CripplePlayer(DWORD arg_0_Hplayer, DWORD arg_4_Hforce, DWORD arg_8_B);
DWORD Jass_VersionGet();
DWORD Jass_VersionCompatible(DWORD arg_0_Hversion);
DWORD Jass_VersionSupported(DWORD arg_0_Hversion);
DWORD Jass_EndGame(DWORD arg_0_B);
DWORD Jass_ChangeLevel(DWORD arg_0_S, DWORD arg_4_B);
DWORD Jass_RestartGame(DWORD arg_0_B);
DWORD Jass_ReloadGame();
DWORD Jass_LoadGame(DWORD arg_0_S, DWORD arg_4_B);
DWORD Jass_SaveGame(DWORD arg_0_S);
DWORD Jass_RenameSaveDirectory(DWORD arg_0_S, DWORD arg_4_S);
DWORD Jass_RemoveSaveDirectory(DWORD arg_0_S);
DWORD Jass_CopySaveGame(DWORD arg_0_S, DWORD arg_4_S);
DWORD Jass_SaveGameExists(DWORD arg_0_S);
DWORD Jass_SetFloatGameState(DWORD arg_0_Hfgamestate, DWORD arg_4_R);
DWORD Jass_GetFloatGameState(DWORD arg_0_Hfgamestate);
DWORD Jass_SetIntegerGameState(DWORD arg_0_Higamestate, DWORD arg_4_I);
DWORD Jass_GetIntegerGameState(DWORD arg_0_Higamestate);
DWORD Jass_SyncSelections();
DWORD Jass_DialogCreate();
DWORD Jass_DialogDestroy(DWORD arg_0_Hdialog);
DWORD Jass_DialogSetAsync(DWORD arg_0_Hdialog);
DWORD Jass_DialogClear(DWORD arg_0_Hdialog);
DWORD Jass_DialogSetMessage(DWORD arg_0_Hdialog, DWORD arg_4_S);
DWORD Jass_DialogAddButton(DWORD arg_0_Hdialog, DWORD arg_4_S, DWORD arg_8_I);
DWORD Jass_DialogAddQuitButton(DWORD arg_0_Hdialog, DWORD arg_4_B, DWORD arg_8_S, DWORD arg_C_I);
DWORD Jass_DialogDisplay(DWORD arg_0_Hplayer, DWORD arg_4_Hdialog, DWORD arg_8_B);
DWORD Jass_SetMissionAvailable(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_SetCampaignAvailable(DWORD arg_0_I, DWORD arg_4_B);
DWORD Jass_SetCampaignMenuRace(DWORD arg_0_Hrace);
DWORD Jass_SetCampaignMenuRaceEx(DWORD arg_0_I);
DWORD Jass_ForceCampaignSelectScreen();
DWORD Jass_SetOpCinematicAvailable(DWORD arg_0_I, DWORD arg_4_B);
DWORD Jass_SetEdCinematicAvailable(DWORD arg_0_I, DWORD arg_4_B);
DWORD Jass_SetTutorialCleared(DWORD arg_0_B);
DWORD Jass_GetDefaultDifficulty();
DWORD Jass_SetDefaultDifficulty(DWORD arg_0_Hgamedifficulty);
DWORD Jass_ReloadGameCachesFromDisk();
DWORD Jass_SetCustomCampaignButtonVisible(DWORD arg_0_I, DWORD arg_4_B);
DWORD Jass_GetCustomCampaignButtonVisible(DWORD arg_0_I);
DWORD Jass_DoNotSaveReplay();
DWORD Jass_InitGameCache(DWORD arg_0_S);
DWORD Jass_SaveGameCache(DWORD arg_0_Hgamecache);
DWORD Jass_StoreInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_I);
DWORD Jass_StoreReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_R);
DWORD Jass_StoreBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_B);
DWORD Jass_StoreUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_Hunit);
DWORD Jass_StoreString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_S);
DWORD Jass_SaveInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_SaveReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_R);
DWORD Jass_SaveBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_B);
DWORD Jass_SaveStr(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_S);
DWORD Jass_SavePlayerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hplayer);
DWORD Jass_SaveWidgetHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hwidget);
DWORD Jass_SaveDestructableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hdestructable);
DWORD Jass_SaveItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hitem);
DWORD Jass_SaveUnitHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hunit);
DWORD Jass_SaveAbilityHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hability);
DWORD Jass_SaveTimerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htimer);
DWORD Jass_SaveRegionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hregion);
DWORD Jass_SaveTriggerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htrigger);
DWORD Jass_SaveTriggerConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htriggercondition);
DWORD Jass_SaveTriggerActionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htriggeraction);
DWORD Jass_SaveTriggerEventHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hevent);
DWORD Jass_SaveForceHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hforce);
DWORD Jass_SaveGroupHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hgroup);
DWORD Jass_SaveLocationHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hlocation);
DWORD Jass_SaveRectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hrect);
DWORD Jass_SaveBooleanExprHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hboolexpr);
DWORD Jass_SaveSoundHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hsound);
DWORD Jass_SaveEffectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Heffect);
DWORD Jass_SaveUnitPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hunitpool);
DWORD Jass_SaveItemPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hitempool);
DWORD Jass_SaveQuestHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hquest);
DWORD Jass_SaveQuestItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hquestitem);
DWORD Jass_SaveDefeatConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hdefeatcondition);
DWORD Jass_SaveTimerDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htimerdialog);
DWORD Jass_SaveLeaderboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hleaderboard);
DWORD Jass_SaveMultiboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hmultiboard);
DWORD Jass_SaveMultiboardItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hmultiboarditem);
DWORD Jass_SaveTrackableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htrackable);
DWORD Jass_SaveDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hdialog);
DWORD Jass_SaveButtonHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hbutton);
DWORD Jass_SaveTextTagHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Htexttag);
DWORD Jass_SaveLightningHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hlightning);
DWORD Jass_SaveImageHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Himage);
DWORD Jass_SaveUbersplatHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hubersplat);
DWORD Jass_SaveFogStateHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hfogstate);
DWORD Jass_SaveFogModifierHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hfogmodifier);
DWORD Jass_SaveAgentHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hagent);
DWORD Jass_SaveHashtableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_Hhashtable);
DWORD Jass_SyncStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_SyncStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_SyncStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_SyncStoredUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_SyncStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_GetStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_GetStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_GetStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_RestoreUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S, DWORD arg_C_Hplayer, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R);
DWORD Jass_GetStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_HaveStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_HaveStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_HaveStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_HaveStoredUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_HaveStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_FlushGameCache(DWORD arg_0_Hgamecache);
DWORD Jass_FlushStoredMission(DWORD arg_0_Hgamecache, DWORD arg_4_S);
DWORD Jass_FlushStoredInteger(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_FlushStoredReal(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_FlushStoredBoolean(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_FlushStoredUnit(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_FlushStoredString(DWORD arg_0_Hgamecache, DWORD arg_4_S, DWORD arg_8_S);
DWORD Jass_InitHashtable();
DWORD Jass_LoadInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadStr(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadPlayerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadWidgetHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadDestructableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadUnitHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadAbilityHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTimerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadRegionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTriggerHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTriggerConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTriggerActionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTriggerEventHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadForceHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadGroupHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadLocationHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadRectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadBooleanExprHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadSoundHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadEffectHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadUnitPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadItemPoolHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadQuestHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadQuestItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadDefeatConditionHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTimerDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadLeaderboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadMultiboardHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadMultiboardItemHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTrackableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadDialogHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadButtonHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadTextTagHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadLightningHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadImageHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadUbersplatHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadFogStateHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadFogModifierHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LoadHashtableHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_HaveSavedInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_HaveSavedReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_HaveSavedBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_HaveSavedString(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_HaveSavedHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_RemoveSavedInteger(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_RemoveSavedReal(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_RemoveSavedBoolean(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_RemoveSavedString(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_RemoveSavedHandle(DWORD arg_0_Hhashtable, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_FlushParentHashtable(DWORD arg_0_Hhashtable);
DWORD Jass_FlushChildHashtable(DWORD arg_0_Hhashtable, DWORD arg_4_I);
DWORD Jass_GetRandomInt(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_GetRandomReal(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_CreateUnitPool();
DWORD Jass_DestroyUnitPool(DWORD arg_0_Hunitpool);
DWORD Jass_UnitPoolAddUnitType(DWORD arg_0_Hunitpool, DWORD arg_4_I, DWORD arg_8_R);
DWORD Jass_UnitPoolRemoveUnitType(DWORD arg_0_Hunitpool, DWORD arg_4_I);
DWORD Jass_PlaceRandomUnit(DWORD arg_0_Hunitpool, DWORD arg_4_Hplayer, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_CreateItemPool();
DWORD Jass_DestroyItemPool(DWORD arg_0_Hitempool);
DWORD Jass_ItemPoolAddItemType(DWORD arg_0_Hitempool, DWORD arg_4_I, DWORD arg_8_R);
DWORD Jass_ItemPoolRemoveItemType(DWORD arg_0_Hitempool, DWORD arg_4_I);
DWORD Jass_PlaceRandomItem(DWORD arg_0_Hitempool, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_ChooseRandomCreep(DWORD arg_0_I);
DWORD Jass_ChooseRandomNPBuilding();
DWORD Jass_ChooseRandomItem(DWORD arg_0_I);
DWORD Jass_ChooseRandomItemEx(DWORD arg_0_Hitemtype, DWORD arg_4_I);
DWORD Jass_SetRandomSeed(DWORD arg_0_I);
DWORD Jass_DisplayTextToPlayer(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_S);
DWORD Jass_DisplayTimedTextToPlayer(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_S);
DWORD Jass_DisplayTimedTextFromPlayer(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_S);
DWORD Jass_ClearTextMessages();
DWORD Jass_EnableUserControl(DWORD arg_0_B);
DWORD Jass_EnableUserUI(DWORD arg_0_B);
DWORD Jass_DisableRestartMission(DWORD arg_0_B);
DWORD Jass_ForceUIKey(DWORD arg_0_S);
DWORD Jass_ForceUICancel();
DWORD Jass_DisplayLoadDialog();
DWORD Jass_SetTerrainFog(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_SetUnitFog(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_SetTerrainFogEx(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R);
DWORD Jass_ResetTerrainFog();
DWORD Jass_SetDayNightModels(DWORD arg_0_S, DWORD arg_4_S);
DWORD Jass_SetSkyModel(DWORD arg_0_S);
DWORD Jass_SuspendTimeOfDay(DWORD arg_0_B);
DWORD Jass_SetTimeOfDayScale(DWORD arg_0_R);
DWORD Jass_GetTimeOfDayScale();
DWORD Jass_ShowInterface(DWORD arg_0_B, DWORD arg_4_R);
DWORD Jass_PauseGame(DWORD arg_0_B);
DWORD Jass_PingMinimap(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_PingMinimapEx(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_B);
DWORD Jass_SetIntroShotText(DWORD arg_0_S);
DWORD Jass_SetIntroShotModel(DWORD arg_0_S);
DWORD Jass_EnableOcclusion(DWORD arg_0_B);
DWORD Jass_EnableWorldFogBoundary(DWORD arg_0_B);
DWORD Jass_PlayModelCinematic(DWORD arg_0_S);
DWORD Jass_PlayCinematic(DWORD arg_0_S);
DWORD Jass_SetAltMinimapIcon(DWORD arg_0_S);
DWORD Jass_CreateTextTag();
DWORD Jass_DestroyTextTag(DWORD arg_0_Htexttag);
DWORD Jass_SetTextTagText(DWORD arg_0_Htexttag, DWORD arg_4_S, DWORD arg_8_R);
DWORD Jass_SetTextTagPos(DWORD arg_0_Htexttag, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetTextTagPosUnit(DWORD arg_0_Htexttag, DWORD arg_4_Hunit, DWORD arg_8_R);
DWORD Jass_SetTextTagColor(DWORD arg_0_Htexttag, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_SetTextTagVelocity(DWORD arg_0_Htexttag, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetTextTagVisibility(DWORD arg_0_Htexttag, DWORD arg_4_B);
DWORD Jass_SetTextTagSuspended(DWORD arg_0_Htexttag, DWORD arg_4_B);
DWORD Jass_SetTextTagPermanent(DWORD arg_0_Htexttag, DWORD arg_4_B);
DWORD Jass_SetTextTagAge(DWORD arg_0_Htexttag, DWORD arg_4_R);
DWORD Jass_SetTextTagLifespan(DWORD arg_0_Htexttag, DWORD arg_4_R);
DWORD Jass_SetTextTagFadepoint(DWORD arg_0_Htexttag, DWORD arg_4_R);
DWORD Jass_SetReservedLocalHeroButtons(DWORD arg_0_I);
DWORD Jass_GetAllyColorFilterState();
DWORD Jass_SetAllyColorFilterState(DWORD arg_0_I);
DWORD Jass_GetCreepCampFilterState();
DWORD Jass_SetCreepCampFilterState(DWORD arg_0_B);
DWORD Jass_EnableMinimapFilterButtons(DWORD arg_0_B, DWORD arg_4_B);
DWORD Jass_EnableDragSelect(DWORD arg_0_B, DWORD arg_4_B);
DWORD Jass_EnablePreSelect(DWORD arg_0_B, DWORD arg_4_B);
DWORD Jass_EnableSelect(DWORD arg_0_B, DWORD arg_4_B);
DWORD Jass_CreateTrackable(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_TriggerRegisterTrackableHitEvent(DWORD arg_0_Htrigger, DWORD arg_4_Htrackable);
DWORD Jass_TriggerRegisterTrackableTrackEvent(DWORD arg_0_Htrigger, DWORD arg_4_Htrackable);
DWORD Jass_GetTriggeringTrackable();
DWORD Jass_CreateQuest();
DWORD Jass_DestroyQuest(DWORD arg_0_Hquest);
DWORD Jass_QuestSetTitle(DWORD arg_0_Hquest, DWORD arg_4_S);
DWORD Jass_QuestSetDescription(DWORD arg_0_Hquest, DWORD arg_4_S);
DWORD Jass_QuestSetIconPath(DWORD arg_0_Hquest, DWORD arg_4_S);
DWORD Jass_QuestSetRequired(DWORD arg_0_Hquest, DWORD arg_4_B);
DWORD Jass_QuestSetCompleted(DWORD arg_0_Hquest, DWORD arg_4_B);
DWORD Jass_QuestSetDiscovered(DWORD arg_0_Hquest, DWORD arg_4_B);
DWORD Jass_QuestSetFailed(DWORD arg_0_Hquest, DWORD arg_4_B);
DWORD Jass_QuestSetEnabled(DWORD arg_0_Hquest, DWORD arg_4_B);
DWORD Jass_IsQuestRequired(DWORD arg_0_Hquest);
DWORD Jass_IsQuestCompleted(DWORD arg_0_Hquest);
DWORD Jass_IsQuestDiscovered(DWORD arg_0_Hquest);
DWORD Jass_IsQuestFailed(DWORD arg_0_Hquest);
DWORD Jass_IsQuestEnabled(DWORD arg_0_Hquest);
DWORD Jass_QuestCreateItem(DWORD arg_0_Hquest);
DWORD Jass_QuestItemSetDescription(DWORD arg_0_Hquestitem, DWORD arg_4_S);
DWORD Jass_QuestItemSetCompleted(DWORD arg_0_Hquestitem, DWORD arg_4_B);
DWORD Jass_IsQuestItemCompleted(DWORD arg_0_Hquestitem);
DWORD Jass_CreateDefeatCondition();
DWORD Jass_DestroyDefeatCondition(DWORD arg_0_Hdefeatcondition);
DWORD Jass_DefeatConditionSetDescription(DWORD arg_0_Hdefeatcondition, DWORD arg_4_S);
DWORD Jass_FlashQuestDialogButton();
DWORD Jass_ForceQuestDialogUpdate();
DWORD Jass_CreateTimerDialog(DWORD arg_0_Htimer);
DWORD Jass_DestroyTimerDialog(DWORD arg_0_Htimerdialog);
DWORD Jass_TimerDialogSetTitle(DWORD arg_0_Htimerdialog, DWORD arg_4_S);
DWORD Jass_TimerDialogSetTitleColor(DWORD arg_0_Htimerdialog, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_TimerDialogSetTimeColor(DWORD arg_0_Htimerdialog, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_TimerDialogSetSpeed(DWORD arg_0_Htimerdialog, DWORD arg_4_R);
DWORD Jass_TimerDialogDisplay(DWORD arg_0_Htimerdialog, DWORD arg_4_B);
DWORD Jass_IsTimerDialogDisplayed(DWORD arg_0_Htimerdialog);
DWORD Jass_TimerDialogSetRealTimeRemaining(DWORD arg_0_Htimerdialog, DWORD arg_4_R);
DWORD Jass_CreateLeaderboard();
DWORD Jass_DestroyLeaderboard(DWORD arg_0_Hleaderboard);
DWORD Jass_LeaderboardGetItemCount(DWORD arg_0_Hleaderboard);
DWORD Jass_LeaderboardSetSizeByItemCount(DWORD arg_0_Hleaderboard, DWORD arg_4_I);
DWORD Jass_LeaderboardAddItem(DWORD arg_0_Hleaderboard, DWORD arg_4_S, DWORD arg_8_I, DWORD arg_C_Hplayer);
DWORD Jass_LeaderboardRemoveItem(DWORD arg_0_Hleaderboard, DWORD arg_4_I);
DWORD Jass_LeaderboardRemovePlayerItem(DWORD arg_0_Hleaderboard, DWORD arg_4_Hplayer);
DWORD Jass_LeaderboardSortItemsByValue(DWORD arg_0_Hleaderboard, DWORD arg_4_B);
DWORD Jass_LeaderboardSortItemsByPlayer(DWORD arg_0_Hleaderboard, DWORD arg_4_B);
DWORD Jass_LeaderboardSortItemsByLabel(DWORD arg_0_Hleaderboard, DWORD arg_4_B);
DWORD Jass_LeaderboardClear(DWORD arg_0_Hleaderboard);
DWORD Jass_LeaderboardDisplay(DWORD arg_0_Hleaderboard, DWORD arg_4_B);
DWORD Jass_IsLeaderboardDisplayed(DWORD arg_0_Hleaderboard);
DWORD Jass_LeaderboardGetLabelText(DWORD arg_0_Hleaderboard);
DWORD Jass_PlayerSetLeaderboard(DWORD arg_0_Hplayer, DWORD arg_4_Hleaderboard);
DWORD Jass_PlayerGetLeaderboard(DWORD arg_0_Hplayer);
DWORD Jass_LeaderboardHasPlayerItem(DWORD arg_0_Hleaderboard, DWORD arg_4_Hplayer);
DWORD Jass_LeaderboardGetPlayerIndex(DWORD arg_0_Hleaderboard, DWORD arg_4_Hplayer);
DWORD Jass_LeaderboardSetLabel(DWORD arg_0_Hleaderboard, DWORD arg_4_S);
DWORD Jass_LeaderboardSetLabelColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_LeaderboardSetValueColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_LeaderboardSetStyle(DWORD arg_0_Hleaderboard, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B);
DWORD Jass_LeaderboardSetItemValue(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_LeaderboardSetItemLabel(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_S);
DWORD Jass_LeaderboardSetItemStyle(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_B);
DWORD Jass_LeaderboardSetItemLabelColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I);
DWORD Jass_LeaderboardSetItemValueColor(DWORD arg_0_Hleaderboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I);
DWORD Jass_CreateMultiboard();
DWORD Jass_DestroyMultiboard(DWORD arg_0_Hmultiboard);
DWORD Jass_MultiboardDisplay(DWORD arg_0_Hmultiboard, DWORD arg_4_B);
DWORD Jass_MultiboardMinimize(DWORD arg_0_Hmultiboard, DWORD arg_4_B);
DWORD Jass_IsMultiboardDisplayed(DWORD arg_0_Hmultiboard);
DWORD Jass_IsMultiboardMinimized(DWORD arg_0_Hmultiboard);
DWORD Jass_MultiboardClear(DWORD arg_0_Hmultiboard);
DWORD Jass_MultiboardSetTitleText(DWORD arg_0_Hmultiboard, DWORD arg_4_S);
DWORD Jass_MultiboardGetTitleText(DWORD arg_0_Hmultiboard);
DWORD Jass_MultiboardSetTitleTextColor(DWORD arg_0_Hmultiboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_MultiboardGetRowCount(DWORD arg_0_Hmultiboard);
DWORD Jass_MultiboardGetColumnCount(DWORD arg_0_Hmultiboard);
DWORD Jass_MultiboardSetColumnCount(DWORD arg_0_Hmultiboard, DWORD arg_4_I);
DWORD Jass_MultiboardSetRowCount(DWORD arg_0_Hmultiboard, DWORD arg_4_I);
DWORD Jass_MultiboardSetItemsStyle(DWORD arg_0_Hmultiboard, DWORD arg_4_B, DWORD arg_8_B);
DWORD Jass_MultiboardSetItemsValueColor(DWORD arg_0_Hmultiboard, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_MultiboardSetItemsValue(DWORD arg_0_Hmultiboard, DWORD arg_4_S);
DWORD Jass_MultiboardSetItemsWidth(DWORD arg_0_Hmultiboard, DWORD arg_4_R);
DWORD Jass_MultiboardSetItemsIcon(DWORD arg_0_Hmultiboard, DWORD arg_4_S);
DWORD Jass_MultiboardGetItem(DWORD arg_0_Hmultiboard, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_MultiboardReleaseItem(DWORD arg_0_Hmultiboarditem);
DWORD Jass_MultiboardSetItemStyle(DWORD arg_0_Hmultiboarditem, DWORD arg_4_B, DWORD arg_8_B);
DWORD Jass_MultiboardSetItemValue(DWORD arg_0_Hmultiboarditem, DWORD arg_4_S);
DWORD Jass_MultiboardSetItemValueColor(DWORD arg_0_Hmultiboarditem, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_MultiboardSetItemWidth(DWORD arg_0_Hmultiboarditem, DWORD arg_4_R);
DWORD Jass_MultiboardSetItemIcon(DWORD arg_0_Hmultiboarditem, DWORD arg_4_S);
DWORD Jass_MultiboardSuppressDisplay(DWORD arg_0_B);
DWORD Jass_SetCameraBounds(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R);
DWORD Jass_SetCameraPosition(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_SetCameraQuickPosition(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_ResetToGameCamera(DWORD arg_0_R);
DWORD Jass_StopCamera();
DWORD Jass_PanCameraTo(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_PanCameraToTimed(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_PanCameraToWithZ(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_PanCameraToTimedWithZ(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetCinematicCamera(DWORD arg_0_S);
DWORD Jass_SetCameraField(DWORD arg_0_Hcamerafield, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_AdjustCameraField(DWORD arg_0_Hcamerafield, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetCameraTargetController(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_B);
DWORD Jass_SetCameraOrientController(DWORD arg_0_Hunit, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetCameraRotateMode(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_CreateCameraSetup();
DWORD Jass_CameraSetupSetField(DWORD arg_0_Hcamerasetup, DWORD arg_4_Hcamerafield, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_CameraSetupGetField(DWORD arg_0_Hcamerasetup, DWORD arg_4_Hcamerafield);
DWORD Jass_CameraSetupSetDestPosition(DWORD arg_0_Hcamerasetup, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_CameraSetupGetDestPositionLoc(DWORD arg_0_Hcamerasetup);
DWORD Jass_CameraSetupGetDestPositionX(DWORD arg_0_Hcamerasetup);
DWORD Jass_CameraSetupGetDestPositionY(DWORD arg_0_Hcamerasetup);
DWORD Jass_CameraSetupApply(DWORD arg_0_Hcamerasetup, DWORD arg_4_B, DWORD arg_8_B);
DWORD Jass_CameraSetupApplyWithZ(DWORD arg_0_Hcamerasetup, DWORD arg_4_R);
DWORD Jass_CameraSetupApplyForceDuration(DWORD arg_0_Hcamerasetup, DWORD arg_4_B, DWORD arg_8_R);
DWORD Jass_CameraSetupApplyForceDurationWithZ(DWORD arg_0_Hcamerasetup, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_CameraSetTargetNoise(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_CameraSetSourceNoise(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_CameraSetTargetNoiseEx(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_B);
DWORD Jass_CameraSetSourceNoiseEx(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_B);
DWORD Jass_CameraSetSmoothingFactor(DWORD arg_0_R);
DWORD Jass_GetCameraMargin(DWORD arg_0_I);
DWORD Jass_GetCameraBoundMinX();
DWORD Jass_GetCameraBoundMinY();
DWORD Jass_GetCameraBoundMaxX();
DWORD Jass_GetCameraBoundMaxY();
DWORD Jass_GetCameraField(DWORD arg_0_Hcamerafield);
DWORD Jass_GetCameraTargetPositionX();
DWORD Jass_GetCameraTargetPositionY();
DWORD Jass_GetCameraTargetPositionZ();
DWORD Jass_GetCameraTargetPositionLoc();
DWORD Jass_GetCameraEyePositionX();
DWORD Jass_GetCameraEyePositionY();
DWORD Jass_GetCameraEyePositionZ();
DWORD Jass_GetCameraEyePositionLoc();
DWORD Jass_SetCineFilterTexture(DWORD arg_0_S);
DWORD Jass_SetCineFilterBlendMode(DWORD arg_0_Hblendmode);
DWORD Jass_SetCineFilterTexMapFlags(DWORD arg_0_Htexmapflags);
DWORD Jass_SetCineFilterStartUV(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetCineFilterEndUV(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetCineFilterStartColor(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_SetCineFilterEndColor(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_SetCineFilterDuration(DWORD arg_0_R);
DWORD Jass_DisplayCineFilter(DWORD arg_0_B);
DWORD Jass_IsCineFilterDisplayed();
DWORD Jass_SetCinematicScene(DWORD arg_0_I, DWORD arg_4_Hplayercolor, DWORD arg_8_S, DWORD arg_C_S, DWORD arg_10_R, DWORD arg_14_R);
DWORD Jass_EndCinematicScene();
DWORD Jass_ForceCinematicSubtitles(DWORD arg_0_B);
DWORD Jass_NewSoundEnvironment(DWORD arg_0_S);
DWORD Jass_CreateSound(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_S);
DWORD Jass_CreateSoundFilenameWithLabel(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_S);
DWORD Jass_CreateSoundFromLabel(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_B, DWORD arg_C_B, DWORD arg_10_I, DWORD arg_14_I);
DWORD Jass_CreateMIDISound(DWORD arg_0_S, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_SetStackedSound(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_ClearStackedSound(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetStackedSoundRect(DWORD arg_0_S, DWORD arg_4_Hrect);
DWORD Jass_ClearStackedSoundRect(DWORD arg_0_S, DWORD arg_4_Hrect);
DWORD Jass_SetSoundParamsFromLabel(DWORD arg_0_Hsound, DWORD arg_4_S);
DWORD Jass_SetSoundChannel(DWORD arg_0_Hsound, DWORD arg_4_I);
DWORD Jass_SetSoundVolume(DWORD arg_0_Hsound, DWORD arg_4_I);
DWORD Jass_SetSoundPitch(DWORD arg_0_Hsound, DWORD arg_4_R);
DWORD Jass_SetSoundPlayPosition(DWORD arg_0_Hsound, DWORD arg_4_I);
DWORD Jass_SetSoundDistances(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_SetSoundDistanceCutoff(DWORD arg_0_Hsound, DWORD arg_4_R);
DWORD Jass_SetSoundConeAngles(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_I);
DWORD Jass_SetSoundConeOrientation(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetSoundPosition(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetSoundVelocity(DWORD arg_0_Hsound, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_AttachSoundToUnit(DWORD arg_0_Hsound, DWORD arg_4_Hunit);
DWORD Jass_StartSound(DWORD arg_0_Hsound);
DWORD Jass_StopSound(DWORD arg_0_Hsound, DWORD arg_4_B, DWORD arg_8_B);
DWORD Jass_KillSoundWhenDone(DWORD arg_0_Hsound);
DWORD Jass_SetMapMusic(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_I);
DWORD Jass_ClearMapMusic();
DWORD Jass_PlayMusic(DWORD arg_0_S);
DWORD Jass_PlayMusicEx(DWORD arg_0_S, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_StopMusic(DWORD arg_0_B);
DWORD Jass_ResumeMusic();
DWORD Jass_PlayThematicMusic(DWORD arg_0_S);
DWORD Jass_PlayThematicMusicEx(DWORD arg_0_S, DWORD arg_4_I);
DWORD Jass_EndThematicMusic();
DWORD Jass_SetMusicVolume(DWORD arg_0_I);
DWORD Jass_SetMusicPlayPosition(DWORD arg_0_I);
DWORD Jass_SetThematicMusicPlayPosition(DWORD arg_0_I);
DWORD Jass_SetSoundDuration(DWORD arg_0_Hsound, DWORD arg_4_I);
DWORD Jass_GetSoundDuration(DWORD arg_0_Hsound);
DWORD Jass_GetSoundFileDuration(DWORD arg_0_S);
DWORD Jass_VolumeGroupSetVolume(DWORD arg_0_Hvolumegroup, DWORD arg_4_R);
DWORD Jass_VolumeGroupReset();
DWORD Jass_GetSoundIsPlaying(DWORD arg_0_Hsound);
DWORD Jass_GetSoundIsLoading(DWORD arg_0_Hsound);
DWORD Jass_RegisterStackedSound(DWORD arg_0_Hsound, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_UnregisterStackedSound(DWORD arg_0_Hsound, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_AddWeatherEffect(DWORD arg_0_Hrect, DWORD arg_4_I);
DWORD Jass_RemoveWeatherEffect(DWORD arg_0_Hweathereffect);
DWORD Jass_EnableWeatherEffect(DWORD arg_0_Hweathereffect, DWORD arg_4_B);
DWORD Jass_TerrainDeformCrater(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_I, DWORD arg_14_B);
DWORD Jass_TerrainDeformRipple(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_R, DWORD arg_1C_R, DWORD arg_20_R, DWORD arg_24_B);
DWORD Jass_TerrainDeformWave(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R, DWORD arg_20_I, DWORD arg_24_I);
DWORD Jass_TerrainDeformRandom(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_I, DWORD arg_18_I);
DWORD Jass_TerrainDeformStop(DWORD arg_0_Hterraindeformation, DWORD arg_4_I);
DWORD Jass_TerrainDeformStopAll();
DWORD Jass_DestroyEffect(DWORD arg_0_Heffect);
DWORD Jass_AddSpecialEffect(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_AddSpecialEffectLoc(DWORD arg_0_S, DWORD arg_4_Hlocation);
DWORD Jass_AddSpecialEffectTarget(DWORD arg_0_S, DWORD arg_4_Hwidget, DWORD arg_8_S);
DWORD Jass_AddSpellEffect(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_AddSpellEffectLoc(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_Hlocation);
DWORD Jass_AddSpellEffectById(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_AddSpellEffectByIdLoc(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_Hlocation);
DWORD Jass_AddSpellEffectTarget(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_Hwidget, DWORD arg_C_S);
DWORD Jass_AddSpellEffectTargetById(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_Hwidget, DWORD arg_C_S);
DWORD Jass_AddLightning(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R);
DWORD Jass_AddLightningEx(DWORD arg_0_S, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R);
DWORD Jass_DestroyLightning(DWORD arg_0_Hlightning);
DWORD Jass_GetLightningColorA(DWORD arg_0_Hlightning);
DWORD Jass_GetLightningColorR(DWORD arg_0_Hlightning);
DWORD Jass_GetLightningColorG(DWORD arg_0_Hlightning);
DWORD Jass_GetLightningColorB(DWORD arg_0_Hlightning);
DWORD Jass_MoveLightning(DWORD arg_0_Hlightning, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R);
DWORD Jass_MoveLightningEx(DWORD arg_0_Hlightning, DWORD arg_4_B, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R);
DWORD Jass_SetLightningColor(DWORD arg_0_Hlightning, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R);
DWORD Jass_GetAbilityEffect(DWORD arg_0_S, DWORD arg_4_Heffecttype, DWORD arg_8_I);
DWORD Jass_GetAbilityEffectById(DWORD arg_0_I, DWORD arg_4_Heffecttype, DWORD arg_8_I);
DWORD Jass_GetAbilitySound(DWORD arg_0_S, DWORD arg_4_Hsoundtype);
DWORD Jass_GetAbilitySoundById(DWORD arg_0_I, DWORD arg_4_Hsoundtype);
DWORD Jass_GetTerrainCliffLevel(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_SetWaterBaseColor(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_SetWaterDeforms(DWORD arg_0_B);
DWORD Jass_GetTerrainType(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_GetTerrainVariance(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_SetTerrainType(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I);
DWORD Jass_IsTerrainPathable(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hpathingtype);
DWORD Jass_SetTerrainPathable(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_Hpathingtype, DWORD arg_C_B);
DWORD Jass_CreateImage(DWORD arg_0_S, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_R, DWORD arg_14_R, DWORD arg_18_R, DWORD arg_1C_R, DWORD arg_20_R, DWORD arg_24_R, DWORD arg_28_I);
DWORD Jass_DestroyImage(DWORD arg_0_Himage);
DWORD Jass_ShowImage(DWORD arg_0_Himage, DWORD arg_4_B);
DWORD Jass_SetImageConstantHeight(DWORD arg_0_Himage, DWORD arg_4_B, DWORD arg_8_R);
DWORD Jass_SetImagePosition(DWORD arg_0_Himage, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_SetImageColor(DWORD arg_0_Himage, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_SetImageRender(DWORD arg_0_Himage, DWORD arg_4_B);
DWORD Jass_SetImageRenderAlways(DWORD arg_0_Himage, DWORD arg_4_B);
DWORD Jass_SetImageAboveWater(DWORD arg_0_Himage, DWORD arg_4_B, DWORD arg_8_B);
DWORD Jass_SetImageType(DWORD arg_0_Himage, DWORD arg_4_I);
DWORD Jass_CreateUbersplat(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_S, DWORD arg_C_I, DWORD arg_10_I, DWORD arg_14_I, DWORD arg_18_I, DWORD arg_1C_B, DWORD arg_20_B);
DWORD Jass_DestroyUbersplat(DWORD arg_0_Hubersplat);
DWORD Jass_ResetUbersplat(DWORD arg_0_Hubersplat);
DWORD Jass_FinishUbersplat(DWORD arg_0_Hubersplat);
DWORD Jass_ShowUbersplat(DWORD arg_0_Hubersplat, DWORD arg_4_B);
DWORD Jass_SetUbersplatRender(DWORD arg_0_Hubersplat, DWORD arg_4_B);
DWORD Jass_SetUbersplatRenderAlways(DWORD arg_0_Hubersplat, DWORD arg_4_B);
DWORD Jass_SetBlight(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R, DWORD arg_10_B);
DWORD Jass_SetBlightLoc(DWORD arg_0_Hplayer, DWORD arg_4_Hlocation, DWORD arg_8_R, DWORD arg_C_B);
DWORD Jass_SetBlightRect(DWORD arg_0_Hplayer, DWORD arg_4_Hrect, DWORD arg_8_B);
DWORD Jass_SetBlightPoint(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_B);
DWORD Jass_CreateBlightedGoldmine(DWORD arg_0_Hplayer, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_R);
DWORD Jass_IsPointBlighted(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_SetDoodadAnimation(DWORD arg_0_R, DWORD arg_4_R, DWORD arg_8_R, DWORD arg_C_I, DWORD arg_10_B, DWORD arg_14_S, DWORD arg_18_B);
DWORD Jass_SetDoodadAnimationRect(DWORD arg_0_Hrect, DWORD arg_4_I, DWORD arg_8_S, DWORD arg_C_B);
DWORD Jass_StartMeleeAI(DWORD arg_0_Hplayer, DWORD arg_4_S);
DWORD Jass_StartCampaignAI(DWORD arg_0_Hplayer, DWORD arg_4_S);
DWORD Jass_CommandAI(DWORD arg_0_Hplayer, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_PauseCompAI(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_GetAIDifficulty(DWORD arg_0_Hplayer);
DWORD Jass_RemoveGuardPosition(DWORD arg_0_Hunit);
DWORD Jass_RecycleGuardPosition(DWORD arg_0_Hunit);
DWORD Jass_RemoveAllGuardPositions(DWORD arg_0_Hplayer);
DWORD Jass_ExecuteFunc(DWORD arg_0_S);
DWORD Jass_Cheat(DWORD arg_0_S);
DWORD Jass_IsNoVictoryCheat();
DWORD Jass_IsNoDefeatCheat();
DWORD Jass_Preload(DWORD arg_0_S);
DWORD Jass_PreloadEnd(DWORD arg_0_R);
DWORD Jass_PreloadStart();
DWORD Jass_PreloadRefresh();
DWORD Jass_PreloadEndEx();
DWORD Jass_PreloadGenStart();
DWORD Jass_PreloadGenClear();
DWORD Jass_PreloadGenEnd(DWORD arg_0_S);
DWORD Jass_Preloader(DWORD arg_0_S);
DWORD Jass_DebugS(DWORD arg_0_S);
DWORD Jass_DebugFI(DWORD arg_0_S, DWORD arg_4_I);
DWORD Jass_DebugUnitID(DWORD arg_0_S, DWORD arg_4_I);
DWORD Jass_DisplayText(DWORD arg_0_I, DWORD arg_4_S);
DWORD Jass_DisplayTextI(DWORD arg_0_I, DWORD arg_4_S, DWORD arg_8_I);
DWORD Jass_DisplayTextII(DWORD arg_0_I, DWORD arg_4_S, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_DisplayTextIII(DWORD arg_0_I, DWORD arg_4_S, DWORD arg_8_I, DWORD arg_C_I, DWORD arg_10_I);
DWORD Jass_SuicideUnit(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_SuicideUnitEx(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_Sleep(DWORD arg_0_R);
DWORD Jass_StartThread(DWORD arg_0_C);
DWORD Jass_GetAiPlayer();
DWORD Jass_DoAiScriptDebug();
DWORD Jass_GetHeroId();
DWORD Jass_GetHeroLevelAI();
DWORD Jass_SetHeroLevels(DWORD arg_0_C);
DWORD Jass_SetNewHeroes(DWORD arg_0_B);
DWORD Jass_GetUnitCount(DWORD arg_0_I);
DWORD Jass_GetPlayerUnitTypeCount(DWORD arg_0_Hplayer, DWORD arg_4_I);
DWORD Jass_GetTownUnitCount(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_GetUnitCountDone(DWORD arg_0_I);
DWORD Jass_GetUpgradeLevel(DWORD arg_0_I);
DWORD Jass_GetUnitGoldCost(DWORD arg_0_I);
DWORD Jass_GetUnitWoodCost(DWORD arg_0_I);
DWORD Jass_GetUnitBuildTime(DWORD arg_0_I);
DWORD Jass_GetUpgradeGoldCost(DWORD arg_0_I);
DWORD Jass_GetUpgradeWoodCost(DWORD arg_0_I);
DWORD Jass_GetEnemyPower();
DWORD Jass_GetMinesOwned();
DWORD Jass_GetGoldOwned();
DWORD Jass_TownWithMine();
DWORD Jass_TownHasMine(DWORD arg_0_I);
DWORD Jass_TownHasHall(DWORD arg_0_I);
DWORD Jass_GetNextExpansion();
DWORD Jass_GetExpansionPeon();
DWORD Jass_GetEnemyExpansion();
DWORD Jass_SetExpansion(DWORD arg_0_Hunit, DWORD arg_4_I);
DWORD Jass_GetBuilding(DWORD arg_0_Hplayer);
DWORD Jass_SetAllianceTarget(DWORD arg_0_Hunit);
DWORD Jass_GetAllianceTarget();
DWORD Jass_SetProduce(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I);
DWORD Jass_MergeUnits(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_I, DWORD arg_C_I);
DWORD Jass_ConvertUnits(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_SetUpgrade(DWORD arg_0_I);
DWORD Jass_Unsummon(DWORD arg_0_Hunit);
DWORD Jass_ClearHarvestAI();
DWORD Jass_HarvestGold(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_HarvestWood(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_StopGathering();
DWORD Jass_AddGuardPost(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_FillGuardPosts();
DWORD Jass_ReturnGuardPosts();
DWORD Jass_CreateCaptains();
DWORD Jass_SetCaptainHome(DWORD arg_0_I, DWORD arg_4_R, DWORD arg_8_R);
DWORD Jass_ResetCaptainLocs();
DWORD Jass_ShiftTownSpot(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_SetCaptainChanges(DWORD arg_0_B);
DWORD Jass_TeleportCaptain(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_ClearCaptainTargets();
DWORD Jass_CaptainVsUnits(DWORD arg_0_Hplayer);
DWORD Jass_CaptainVsPlayer(DWORD arg_0_Hplayer);
DWORD Jass_CaptainAttack(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_GroupTimedLife(DWORD arg_0_B);
DWORD Jass_CaptainGoHome();
DWORD Jass_CaptainIsHome();
DWORD Jass_CaptainRetreating();
DWORD Jass_CaptainIsFull();
DWORD Jass_CaptainIsEmpty();
DWORD Jass_CaptainGroupSize();
DWORD Jass_CaptainReadiness();
DWORD Jass_CaptainReadinessHP();
DWORD Jass_CaptainReadinessMa();
DWORD Jass_CaptainInCombat(DWORD arg_0_B);
DWORD Jass_TownThreatened();
DWORD Jass_CaptainAtGoal();
DWORD Jass_CreepsOnMap();
DWORD Jass_RemoveInjuries();
DWORD Jass_RemoveSiege();
DWORD Jass_IsTowered(DWORD arg_0_Hunit);
DWORD Jass_DisablePathing();
DWORD Jass_SetAmphibious();
DWORD Jass_InitAssault();
DWORD Jass_AddAssault(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_AddDefenders(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_GetCreepCamp(DWORD arg_0_I, DWORD arg_4_I, DWORD arg_8_B);
DWORD Jass_StartGetEnemyBase();
DWORD Jass_WaitGetEnemyBase();
DWORD Jass_GetMegaTarget();
DWORD Jass_GetEnemyBase();
DWORD Jass_GetExpansionFoe();
DWORD Jass_GetExpansionX();
DWORD Jass_GetExpansionY();
DWORD Jass_SetStagePoint(DWORD arg_0_R, DWORD arg_4_R);
DWORD Jass_AttackMoveKill(DWORD arg_0_Hunit);
DWORD Jass_AttackMoveXY(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_LoadZepWave(DWORD arg_0_I, DWORD arg_4_I);
DWORD Jass_SuicidePlayer(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_SuicidePlayerUnits(DWORD arg_0_Hplayer, DWORD arg_4_B);
DWORD Jass_UnitAlive(DWORD arg_0_Hunit);
DWORD Jass_UnitInvis(DWORD arg_0_Hunit);
DWORD Jass_IgnoredUnits(DWORD arg_0_I);
DWORD Jass_CommandsWaiting();
DWORD Jass_GetLastCommand();
DWORD Jass_GetLastData();
DWORD Jass_PopLastCommand();
DWORD Jass_SetCampaignAI();
DWORD Jass_SetMeleeAI();
DWORD Jass_SetTargetHeroes(DWORD arg_0_B);
DWORD Jass_SetHeroesFlee(DWORD arg_0_B);
DWORD Jass_SetHeroesBuyItems(DWORD arg_0_B);
DWORD Jass_SetIgnoreInjured(DWORD arg_0_B);
DWORD Jass_SetPeonsRepair(DWORD arg_0_B);
DWORD Jass_SetRandomPaths(DWORD arg_0_B);
DWORD Jass_SetDefendPlayer(DWORD arg_0_B);
DWORD Jass_SetHeroesTakeItems(DWORD arg_0_B);
DWORD Jass_SetUnitsFlee(DWORD arg_0_B);
DWORD Jass_SetGroupsFlee(DWORD arg_0_B);
DWORD Jass_SetSlowChopping(DWORD arg_0_B);
DWORD Jass_SetSmartArtillery(DWORD arg_0_B);
DWORD Jass_SetWatchMegaTargets(DWORD arg_0_B);
DWORD Jass_SetReplacementCount(DWORD arg_0_I);
DWORD Jass_PurchaseZeppelin();
DWORD Jass_MeleeDifficulty();
DWORD Jass_DebugBreak(DWORD arg_0_I);
