class USEC_ch53_E;
class CH53_DZE : USEC_ch53_E {
	scope = 2;
	side = 2;
	displayname = "USEC CH53E DZE";
	displaynameshort = "CH53_DZE";
	destrType = "DestructWreck";
	enablemanualfire = 0;
	crew = "";
	soundGetIn[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.316228,1};
	soundGetOut[] = {"\ca\Sounds\Air\Noises\heli_door_01",0.316228,1,30};
	soundEnviron[] = {"",0.0316228,1};
	soundEngineOnInt[] = {"ca\sounds\Air\UH1Y\int\int-start-final",0.1,1};
	soundEngineOnExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start",1,1,800};
	soundEngineOffInt[] = {"ca\sounds\Air\UH1Y\int\int-stop-final",0.1,1};
	soundEngineOffExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop",1,1,800};
	soundGear[] = {"\usec_ch53\sound\ch53_gear", db10, 1, 100};
	soundDammage[] = {"\usec_ch53\sound\dws_warning_beeps", 3.16228, 1, 20};
	typicalCargo[] = {};
	hiddenSelections[] = {};
	radartype = 0;
	class TransportMagazines{};
	class TransportWeapons{};
	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;
	transportMaxWeapons = 25;
	transportMaxMagazines = 80;
	transportmaxbackpacks = 15;
};