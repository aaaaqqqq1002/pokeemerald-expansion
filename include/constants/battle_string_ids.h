#ifndef GUARD_CONSTANTS_BATTLE_STRING_IDS_H
#define GUARD_CONSTANTS_BATTLE_STRING_IDS_H

enum StringID
{
    STRINGID_INTROMSG,
    STRINGID_INTROSENDOUT,
    STRINGID_RETURNMON,
    STRINGID_SWITCHINMON,
    STRINGID_USEDMOVE,
    STRINGID_BATTLEEND,
    STRINGID_TRAINERSLIDE,
    STRINGID_TABLE_START, // Make sure to add new messages below this marker
    // todo: make some of those names less vague: attacker/target vs pkmn, etc.
    STRINGID_TRAINER1LOSETEXT,
    STRINGID_PKMNGAINEDEXP,
    STRINGID_PKMNGREWTOLV,
    STRINGID_PKMNLEARNEDMOVE,
    STRINGID_TRYTOLEARNMOVE1,
    STRINGID_TRYTOLEARNMOVE2,
    STRINGID_TRYTOLEARNMOVE3,
    STRINGID_PKMNFORGOTMOVE,
    STRINGID_STOPLEARNINGMOVE,
    STRINGID_DIDNOTLEARNMOVE,
    STRINGID_PKMNLEARNEDMOVE2,
    STRINGID_ATTACKMISSED,
    STRINGID_PKMNPROTECTEDITSELF,
    STRINGID_STATSWONTINCREASE2,
    STRINGID_AVOIDEDDAMAGE,
    STRINGID_ITDOESNTAFFECT,
    STRINGID_ATTACKERFAINTED,
    STRINGID_TARGETFAINTED,
    STRINGID_PLAYERGOTMONEY,
    STRINGID_PLAYERWHITEOUT,
    STRINGID_PLAYERWHITEOUT2,
    STRINGID_PREVENTSESCAPE,
    STRINGID_HITXTIMES,
    STRINGID_PKMNFELLASLEEP,
    STRINGID_PKMNMADESLEEP,
    STRINGID_PKMNALREADYASLEEP,
    STRINGID_PKMNALREADYASLEEP2,
    STRINGID_PKMNWASNTAFFECTED,
    STRINGID_PKMNWASPOISONED,
    STRINGID_PKMNPOISONEDBY,
    STRINGID_PKMNHURTBYPOISON,
    STRINGID_PKMNALREADYPOISONED,
    STRINGID_PKMNBADLYPOISONED,
    STRINGID_PKMNENERGYDRAINED,
    STRINGID_PKMNWASBURNED,
    STRINGID_PKMNBURNEDBY,
    STRINGID_PKMNHURTBYBURN,
    STRINGID_PKMNWASFROZEN,
    STRINGID_PKMNFROZENBY,
    STRINGID_PKMNISFROZEN,
    STRINGID_PKMNWASDEFROSTED,
    STRINGID_PKMNWASDEFROSTED2,
    STRINGID_PKMNWASDEFROSTEDBY,
    STRINGID_PKMNWASPARALYZED,
    STRINGID_PKMNWASPARALYZEDBY,
    STRINGID_PKMNISPARALYZED,
    STRINGID_PKMNISALREADYPARALYZED,
    STRINGID_PKMNHEALEDPARALYSIS,
    STRINGID_PKMNDREAMEATEN,
    STRINGID_STATSWONTINCREASE,
    STRINGID_STATSWONTDECREASE,
    STRINGID_TEAMSTOPPEDWORKING,
    STRINGID_FOESTOPPEDWORKING,
    STRINGID_PKMNISCONFUSED,
    STRINGID_PKMNHEALEDCONFUSION,
    STRINGID_PKMNWASCONFUSED,
    STRINGID_PKMNALREADYCONFUSED,
    STRINGID_PKMNFELLINLOVE,
    STRINGID_PKMNINLOVE,
    STRINGID_PKMNIMMOBILIZEDBYLOVE,
    STRINGID_PKMNBLOWNAWAY,
    STRINGID_PKMNCHANGEDTYPE,
    STRINGID_PKMNFLINCHED,
    STRINGID_PKMNREGAINEDHEALTH,
    STRINGID_PKMNHPFULL,
    STRINGID_PKMNRAISEDSPDEF,
    STRINGID_PKMNRAISEDDEF,
    STRINGID_PKMNCOVEREDBYVEIL,
    STRINGID_PKMNUSEDSAFEGUARD,
    STRINGID_PKMNSAFEGUARDEXPIRED,
    STRINGID_PKMNWENTTOSLEEP,
    STRINGID_PKMNSLEPTHEALTHY,
    STRINGID_PKMNWHIPPEDWHIRLWIND,
    STRINGID_PKMNTOOKSUNLIGHT,
    STRINGID_PKMNLOWEREDHEAD,
    STRINGID_PKMNISGLOWING,
    STRINGID_PKMNFLEWHIGH,
    STRINGID_PKMNDUGHOLE,
    STRINGID_PKMNSQUEEZEDBYBIND,
    STRINGID_PKMNTRAPPEDINVORTEX,
    STRINGID_PKMNWRAPPEDBY,
    STRINGID_PKMNCLAMPED,
    STRINGID_PKMNHURTBY,
    STRINGID_PKMNFREEDFROM,
    STRINGID_PKMNCRASHED,
    STRINGID_PKMNSHROUDEDINMIST,
    STRINGID_PKMNPROTECTEDBYMIST,
    STRINGID_PKMNGETTINGPUMPED,
    STRINGID_PKMNHITWITHRECOIL,
    STRINGID_PKMNPROTECTEDITSELF2,
    STRINGID_PKMNBUFFETEDBYSANDSTORM,
    STRINGID_PKMNPELTEDBYHAIL,
    STRINGID_PKMNSEEDED,
    STRINGID_PKMNEVADEDATTACK,
    STRINGID_PKMNSAPPEDBYLEECHSEED,
    STRINGID_PKMNFASTASLEEP,
    STRINGID_PKMNWOKEUP,
    STRINGID_PKMNUPROARKEPTAWAKE,
    STRINGID_PKMNWOKEUPINUPROAR,
    STRINGID_PKMNCAUSEDUPROAR,
    STRINGID_PKMNMAKINGUPROAR,
    STRINGID_PKMNCALMEDDOWN,
    STRINGID_PKMNCANTSLEEPINUPROAR,
    STRINGID_PKMNSTOCKPILED,
    STRINGID_PKMNCANTSTOCKPILE,
    STRINGID_PKMNCANTSLEEPINUPROAR2,
    STRINGID_UPROARKEPTPKMNAWAKE,
    STRINGID_PKMNSTAYEDAWAKEUSING,
    STRINGID_PKMNSTORINGENERGY,
    STRINGID_PKMNUNLEASHEDENERGY,
    STRINGID_PKMNFATIGUECONFUSION,
    STRINGID_PLAYERPICKEDUPMONEY,
    STRINGID_PKMNUNAFFECTED,
    STRINGID_PKMNTRANSFORMEDINTO,
    STRINGID_PKMNMADESUBSTITUTE,
    STRINGID_PKMNHASSUBSTITUTE,
    STRINGID_SUBSTITUTEDAMAGED,
    STRINGID_PKMNSUBSTITUTEFADED,
    STRINGID_PKMNMUSTRECHARGE,
    STRINGID_PKMNRAGEBUILDING,
    STRINGID_PKMNMOVEWASDISABLED,
    STRINGID_PKMNMOVEISDISABLED,
    STRINGID_PKMNMOVEDISABLEDNOMORE,
    STRINGID_PKMNGOTENCORE,
    STRINGID_PKMNENCOREENDED,
    STRINGID_PKMNTOOKAIM,
    STRINGID_PKMNSKETCHEDMOVE,
    STRINGID_PKMNTRYINGTOTAKEFOE,
    STRINGID_PKMNTOOKFOE,
    STRINGID_PKMNREDUCEDPP,
    STRINGID_PKMNSTOLEITEM,
    STRINGID_TARGETCANTESCAPENOW,
    STRINGID_PKMNFELLINTONIGHTMARE,
    STRINGID_PKMNLOCKEDINNIGHTMARE,
    STRINGID_PKMNLAIDCURSE,
    STRINGID_PKMNAFFLICTEDBYCURSE,
    STRINGID_SPIKESSCATTERED,
    STRINGID_PKMNHURTBYSPIKES,
    STRINGID_PKMNIDENTIFIED,
    STRINGID_PKMNPERISHCOUNTFELL,
    STRINGID_PKMNBRACEDITSELF,
    STRINGID_PKMNENDUREDHIT,
    STRINGID_MAGNITUDESTRENGTH,
    STRINGID_PKMNCUTHPMAXEDATTACK,
    STRINGID_PKMNCOPIEDSTATCHANGES,
    STRINGID_PKMNGOTFREE,
    STRINGID_PKMNSHEDLEECHSEED,
    STRINGID_PKMNBLEWAWAYSPIKES,
    STRINGID_PKMNFLEDFROMBATTLE,
    STRINGID_PKMNFORESAWATTACK,
    STRINGID_PKMNTOOKATTACK,
    STRINGID_PKMNATTACK,
    STRINGID_PKMNCENTERATTENTION,
    STRINGID_PKMNCHARGINGPOWER,
    STRINGID_NATUREPOWERTURNEDINTO,
    STRINGID_PKMNSTATUSNORMAL,
    STRINGID_PKMNHASNOMOVESLEFT,
    STRINGID_PKMNSUBJECTEDTOTORMENT,
    STRINGID_PKMNCANTUSEMOVETORMENT,
    STRINGID_PKMNTIGHTENINGFOCUS,
    STRINGID_PKMNFELLFORTAUNT,
    STRINGID_PKMNCANTUSEMOVETAUNT,
    STRINGID_PKMNREADYTOHELP,
    STRINGID_PKMNSWITCHEDITEMS,
    STRINGID_PKMNCOPIEDFOE,
    STRINGID_PKMNMADEWISH,
    STRINGID_PKMNWISHCAMETRUE,
    STRINGID_PKMNPLANTEDROOTS,
    STRINGID_PKMNABSORBEDNUTRIENTS,
    STRINGID_PKMNANCHOREDITSELF,
    STRINGID_PKMNWASMADEDROWSY,
    STRINGID_PKMNKNOCKEDOFF,
    STRINGID_PKMNSWAPPEDABILITIES,
    STRINGID_PKMNSEALEDOPPONENTMOVE,
    STRINGID_PKMNCANTUSEMOVESEALED,
    STRINGID_PKMNWANTSGRUDGE,
    STRINGID_PKMNLOSTPPGRUDGE,
    STRINGID_PKMNSHROUDEDITSELF,
    STRINGID_PKMNMOVEBOUNCED,
    STRINGID_PKMNWAITSFORTARGET,
    STRINGID_PKMNSNATCHEDMOVE,
    STRINGID_PKMNMADEITRAIN,
    STRINGID_PKMNRAISEDSPEED,
    STRINGID_PKMNPROTECTEDBY,
    STRINGID_PKMNPREVENTSUSAGE,
    STRINGID_PKMNRESTOREDHPUSING,
    STRINGID_PKMNCHANGEDTYPEWITH,
    STRINGID_PKMNPREVENTSPARALYSISWITH,
    STRINGID_PKMNPREVENTSROMANCEWITH,
    STRINGID_PKMNPREVENTSPOISONINGWITH,
    STRINGID_PKMNPREVENTSCONFUSIONWITH,
    STRINGID_PKMNRAISEDFIREPOWERWITH,
    STRINGID_PKMNANCHORSITSELFWITH,
    STRINGID_PKMNCUTSATTACKWITH,
    STRINGID_PKMNPREVENTSSTATLOSSWITH,
    STRINGID_PKMNHURTSWITH,
    STRINGID_PKMNTRACED,
    STRINGID_STATSHARPLY,
    STRINGID_STATROSE,
    STRINGID_STATHARSHLY,
    STRINGID_STATFELL,
    STRINGID_ATTACKERSSTATROSE,
    STRINGID_DEFENDERSSTATROSE,
    STRINGID_ATTACKERSSTATFELL,
    STRINGID_DEFENDERSSTATFELL,
    STRINGID_CRITICALHIT,
    STRINGID_ONEHITKO,
    STRINGID_123POOF,
    STRINGID_ANDELLIPSIS,
    STRINGID_NOTVERYEFFECTIVE,
    STRINGID_SUPEREFFECTIVE,
    STRINGID_GOTAWAYSAFELY,
    STRINGID_WILDPKMNFLED,
    STRINGID_NORUNNINGFROMTRAINERS,
    STRINGID_CANTESCAPE,
    STRINGID_DONTLEAVEBIRCH,
    STRINGID_BUTNOTHINGHAPPENED,
    STRINGID_BUTITFAILED,
    STRINGID_ITHURTCONFUSION,
    STRINGID_MIRRORMOVEFAILED,
    STRINGID_STARTEDTORAIN,
    STRINGID_DOWNPOURSTARTED,
    STRINGID_RAINCONTINUES,
    STRINGID_DOWNPOURCONTINUES,
    STRINGID_RAINSTOPPED,
    STRINGID_SANDSTORMBREWED,
    STRINGID_SANDSTORMRAGES,
    STRINGID_SANDSTORMSUBSIDED,
    STRINGID_SUNLIGHTGOTBRIGHT,
    STRINGID_SUNLIGHTSTRONG,
    STRINGID_SUNLIGHTFADED,
    STRINGID_STARTEDHAIL,
    STRINGID_HAILCONTINUES,
    STRINGID_HAILSTOPPED,
    STRINGID_FAILEDTOSPITUP,
    STRINGID_FAILEDTOSWALLOW,
    STRINGID_WINDBECAMEHEATWAVE,
    STRINGID_STATCHANGESGONE,
    STRINGID_COINSSCATTERED,
    STRINGID_TOOWEAKFORSUBSTITUTE,
    STRINGID_SHAREDPAIN,
    STRINGID_BELLCHIMED,
    STRINGID_FAINTINTHREE,
    STRINGID_NOPPLEFT,
    STRINGID_BUTNOPPLEFT,
    STRINGID_PLAYERUSEDITEM,
    STRINGID_WALLYUSEDITEM,
    STRINGID_TRAINERBLOCKEDBALL,
    STRINGID_DONTBEATHIEF,
    STRINGID_ITDODGEDBALL,
    STRINGID_YOUMISSEDPKMN,
    STRINGID_PKMNBROKEFREE,
    STRINGID_ITAPPEAREDCAUGHT,
    STRINGID_AARGHALMOSTHADIT,
    STRINGID_SHOOTSOCLOSE,
    STRINGID_GOTCHAPKMNCAUGHTPLAYER,
    STRINGID_GOTCHAPKMNCAUGHTWALLY,
    STRINGID_GIVENICKNAMECAPTURED,
    STRINGID_PKMNSENTTOPC,
    STRINGID_PKMNDATAADDEDTODEX,
    STRINGID_ITISRAINING,
    STRINGID_SANDSTORMISRAGING,
    STRINGID_CANTESCAPE2,
    STRINGID_PKMNIGNORESASLEEP,
    STRINGID_PKMNIGNOREDORDERS,
    STRINGID_PKMNBEGANTONAP,
    STRINGID_PKMNLOAFING,
    STRINGID_PKMNWONTOBEY,
    STRINGID_PKMNTURNEDAWAY,
    STRINGID_PKMNPRETENDNOTNOTICE,
    STRINGID_ENEMYABOUTTOSWITCHPKMN,
    STRINGID_CREPTCLOSER,
    STRINGID_CANTGETCLOSER,
    STRINGID_PKMNWATCHINGCAREFULLY,
    STRINGID_PKMNCURIOUSABOUTX,
    STRINGID_PKMNENTHRALLEDBYX,
    STRINGID_PKMNIGNOREDX,
    STRINGID_THREWPOKEBLOCKATPKMN,
    STRINGID_OUTOFSAFARIBALLS,
    STRINGID_PKMNSITEMCUREDPARALYSIS,
    STRINGID_PKMNSITEMCUREDPOISON,
    STRINGID_PKMNSITEMHEALEDBURN,
    STRINGID_PKMNSITEMDEFROSTEDIT,
    STRINGID_PKMNSITEMWOKEIT,
    STRINGID_PKMNSITEMSNAPPEDOUT,
    STRINGID_PKMNSITEMCUREDPROBLEM,
    STRINGID_PKMNSITEMRESTOREDHEALTH,
    STRINGID_PKMNSITEMRESTOREDPP,
    STRINGID_PKMNSITEMRESTOREDSTATUS,
    STRINGID_PKMNSITEMRESTOREDHPALITTLE,
    STRINGID_ITEMALLOWSONLYYMOVE,
    STRINGID_PKMNHUNGONWITHX,
    STRINGID_EMPTYSTRING3,
    STRINGID_PKMNSXPREVENTSBURNS,
    STRINGID_PKMNSXBLOCKSY,
    STRINGID_PKMNSXRESTOREDHPALITTLE2,
    STRINGID_PKMNSXWHIPPEDUPSANDSTORM,
    STRINGID_PKMNSXPREVENTSYLOSS,
    STRINGID_PKMNSXINFATUATEDY,
    STRINGID_PKMNSXMADEYINEFFECTIVE,
    STRINGID_PKMNSXCUREDYPROBLEM,
    STRINGID_ITSUCKEDLIQUIDOOZE,
    STRINGID_PKMNTRANSFORMED,
    STRINGID_ELECTRICITYWEAKENED,
    STRINGID_FIREWEAKENED,
    STRINGID_PKMNHIDUNDERWATER,
    STRINGID_PKMNSPRANGUP,
    STRINGID_HMMOVESCANTBEFORGOTTEN,
    STRINGID_XFOUNDONEY,
    STRINGID_PLAYERDEFEATEDTRAINER1,
    STRINGID_SOOTHINGAROMA,
    STRINGID_ITEMSCANTBEUSEDNOW,
    STRINGID_FORXCOMMAYZ,
    STRINGID_USINGITEMSTATOFPKMNROSE,
    STRINGID_PKMNUSEDXTOGETPUMPED,
    STRINGID_PKMNSXMADEYUSELESS,
    STRINGID_PKMNTRAPPEDBYSANDTOMB,
    STRINGID_EMPTYSTRING4,
    STRINGID_ABOOSTED,
    STRINGID_PKMNSXINTENSIFIEDSUN,
    STRINGID_PKMNMAKESGROUNDMISS,
    STRINGID_YOUTHROWABALLNOWRIGHT,
    STRINGID_PKMNSXTOOKATTACK,
    STRINGID_PKMNCHOSEXASDESTINY,
    STRINGID_PKMNLOSTFOCUS,
    STRINGID_USENEXTPKMN,
    STRINGID_PKMNFLEDUSINGITS,
    STRINGID_PKMNFLEDUSING,
    STRINGID_PKMNWASDRAGGEDOUT,
    STRINGID_PREVENTEDFROMWORKING,
    STRINGID_PKMNSITEMNORMALIZEDSTATUS,
    STRINGID_TRAINER1USEDITEM,
    STRINGID_BOXISFULL,
    STRINGID_PKMNAVOIDEDATTACK,
    STRINGID_PKMNSXMADEITINEFFECTIVE,
    STRINGID_PKMNSXPREVENTSFLINCHING,
    STRINGID_PKMNALREADYHASBURN,
    STRINGID_STATSWONTDECREASE2,
    STRINGID_PKMNSXBLOCKSY2,
    STRINGID_PKMNSXWOREOFF,
    STRINGID_PKMNRAISEDDEFALITTLE,
    STRINGID_PKMNRAISEDSPDEFALITTLE,
    STRINGID_THEWALLSHATTERED,
    STRINGID_PKMNSXPREVENTSYSZ,
    STRINGID_PKMNSXCUREDITSYPROBLEM,
    STRINGID_ATTACKERCANTESCAPE,
    STRINGID_PKMNOBTAINEDX,
    STRINGID_PKMNOBTAINEDX2,
    STRINGID_PKMNOBTAINEDXYOBTAINEDZ,
    STRINGID_BUTNOEFFECT,
    STRINGID_PKMNSXHADNOEFFECTONY,
    STRINGID_TWOENEMIESDEFEATED,
    STRINGID_TRAINER2LOSETEXT,
    STRINGID_PKMNINCAPABLEOFPOWER,
    STRINGID_GLINTAPPEARSINEYE,
    STRINGID_PKMNGETTINGINTOPOSITION,
    STRINGID_PKMNBEGANGROWLINGDEEPLY,
    STRINGID_PKMNEAGERFORMORE,
    STRINGID_DEFEATEDOPPONENTBYREFEREE,
    STRINGID_LOSTTOOPPONENTBYREFEREE,
    STRINGID_TIEDOPPONENTBYREFEREE,
    STRINGID_QUESTIONFORFEITMATCH,
    STRINGID_FORFEITEDMATCH,
    STRINGID_PKMNTRANSFERREDSOMEONESPC,
    STRINGID_PKMNTRANSFERREDLANETTESPC,
    STRINGID_PKMNBOXSOMEONESPCFULL,
    STRINGID_PKMNBOXLANETTESPCFULL,
    STRINGID_TRAINER1WINTEXT,
    STRINGID_TRAINER2WINTEXT,
    STRINGID_ENDUREDSTURDY,
    STRINGID_POWERHERB,
    STRINGID_HURTBYITEM,
    STRINGID_PSNBYITEM,
    STRINGID_BRNBYITEM,
    STRINGID_DEFABILITYIN,
    STRINGID_GRAVITYINTENSIFIED,
    STRINGID_TARGETIDENTIFIED,
    STRINGID_TARGETWOKEUP,
    STRINGID_PKMNSTOLEANDATEITEM,
    STRINGID_TAILWINDBLEW,
    STRINGID_PKMNWENTBACK,
    STRINGID_PKMNCANTUSEITEMSANYMORE,
    STRINGID_PKMNFLUNG,
    STRINGID_PKMNPREVENTEDFROMHEALING,
    STRINGID_PKMNSWITCHEDATKANDDEF,
    STRINGID_PKMNSABILITYSUPPRESSED,
    STRINGID_SHIELDEDFROMCRITICALHITS,
    STRINGID_SWITCHEDATKANDSPATK,
    STRINGID_SWITCHEDDEFANDSPDEF,
    STRINGID_PKMNACQUIREDABILITY,
    STRINGID_POISONSPIKESSCATTERED,
    STRINGID_PKMNSWITCHEDSTATCHANGES,
    STRINGID_PKMNSURROUNDEDWITHVEILOFWATER,
    STRINGID_PKMNLEVITATEDONELECTROMAGNETISM,
    STRINGID_PKMNTWISTEDDIMENSIONS,
    STRINGID_POINTEDSTONESFLOAT,
    STRINGID_CLOAKEDINMYSTICALMOONLIGHT,
    STRINGID_TRAPPEDBYSWIRLINGMAGMA,
    STRINGID_VANISHEDINSTANTLY,
    STRINGID_PROTECTEDTEAM,
    STRINGID_SHAREDITSGUARD,
    STRINGID_SHAREDITSPOWER,
    STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON,
    STRINGID_BECAMENIMBLE,
    STRINGID_HURLEDINTOTHEAIR,
    STRINGID_HELDITEMSLOSEEFFECTS,
    STRINGID_FELLSTRAIGHTDOWN,
    STRINGID_TARGETCHANGEDTYPE,
    STRINGID_PKMNACQUIREDSIMPLE,
    STRINGID_EMPTYSTRING5,
    STRINGID_KINDOFFER,
    STRINGID_RESETSTARGETSSTATLEVELS,
    STRINGID_EMPTYSTRING6,
    STRINGID_ALLYSWITCHPOSITION,
    STRINGID_RESTORETARGETSHEALTH,
    STRINGID_TOOKPJMNINTOTHESKY,
    STRINGID_FREEDFROMSKYDROP,
    STRINGID_POSTPONETARGETMOVE,
    STRINGID_REFLECTTARGETSTYPE,
    STRINGID_TRANSFERHELDITEM,
    STRINGID_EMBARGOENDS,
    STRINGID_ELECTROMAGNETISM,
    STRINGID_BUFFERENDS,
    STRINGID_TELEKINESISENDS,
    STRINGID_TAILWINDENDS,
    STRINGID_LUCKYCHANTENDS,
    STRINGID_TRICKROOMENDS,
    STRINGID_WONDERROOMENDS,
    STRINGID_MAGICROOMENDS,
    STRINGID_MUDSPORTENDS,
    STRINGID_WATERSPORTENDS,
    STRINGID_GRAVITYENDS,
    STRINGID_AQUARINGHEAL,
    STRINGID_ELECTRICTERRAINENDS,
    STRINGID_MISTYTERRAINENDS,
    STRINGID_PSYCHICTERRAINENDS,
    STRINGID_GRASSYTERRAINENDS,
    STRINGID_TARGETABILITYSTATRAISE,
    STRINGID_TARGETSSTATWASMAXEDOUT,
    STRINGID_ATTACKERABILITYSTATRAISE,
    STRINGID_POISONHEALHPUP,
    STRINGID_BADDREAMSDMG,
    STRINGID_MOLDBREAKERENTERS,
    STRINGID_TERAVOLTENTERS,
    STRINGID_TURBOBLAZEENTERS,
    STRINGID_SLOWSTARTENTERS,
    STRINGID_SLOWSTARTEND,
    STRINGID_SOLARPOWERHPDROP,
    STRINGID_AFTERMATHDMG,
    STRINGID_ANTICIPATIONACTIVATES,
    STRINGID_FOREWARNACTIVATES,
    STRINGID_ICEBODYHPGAIN,
    STRINGID_SNOWWARNINGHAIL,
    STRINGID_FRISKACTIVATES,
    STRINGID_UNNERVEENTERS,
    STRINGID_HARVESTBERRY,
    STRINGID_MAGICBOUNCEACTIVATES,
    STRINGID_PROTEANTYPECHANGE,
    STRINGID_SYMBIOSISITEMPASS,
    STRINGID_STEALTHROCKDMG,
    STRINGID_TOXICSPIKESABSORBED,
    STRINGID_TOXICSPIKESPOISONED,
    STRINGID_STICKYWEBSWITCHIN,
    STRINGID_HEALINGWISHCAMETRUE,
    STRINGID_HEALINGWISHHEALED,
    STRINGID_LUNARDANCECAMETRUE,
    STRINGID_CUSEDBODYDISABLED,
    STRINGID_ATTACKERACQUIREDABILITY,
    STRINGID_TARGETABILITYSTATLOWER,
    STRINGID_TARGETSTATWONTGOHIGHER,
    STRINGID_PKMNMOVEBOUNCEDABILITY,
    STRINGID_IMPOSTERTRANSFORM,
    STRINGID_ASSAULTVESTDOESNTALLOW,
    STRINGID_GRAVITYPREVENTSUSAGE,
    STRINGID_HEALBLOCKPREVENTSUSAGE,
    STRINGID_NOTDONEYET,
    STRINGID_STICKYWEBUSED,
    STRINGID_QUASHSUCCESS,
    STRINGID_PKMNBLEWAWAYTOXICSPIKES,
    STRINGID_PKMNBLEWAWAYSTICKYWEB,
    STRINGID_PKMNBLEWAWAYSTEALTHROCK,
    STRINGID_IONDELUGEON,
    STRINGID_TOPSYTURVYSWITCHEDSTATS,
    STRINGID_TERRAINBECOMESMISTY,
    STRINGID_TERRAINBECOMESGRASSY,
    STRINGID_TERRAINBECOMESELECTRIC,
    STRINGID_TERRAINBECOMESPSYCHIC,
    STRINGID_TARGETELECTRIFIED,
    STRINGID_MEGAEVOREACTING,
    STRINGID_MEGAEVOEVOLVED,
    STRINGID_DRASTICALLY,
    STRINGID_SEVERELY,
    STRINGID_INFESTATION,
    STRINGID_NOEFFECTONTARGET,
    STRINGID_BURSTINGFLAMESHIT,
    STRINGID_BESTOWITEMGIVING,
    STRINGID_THIRDTYPEADDED,
    STRINGID_FELLFORFEINT,
    STRINGID_POKEMONCANNOTUSEMOVE,
    STRINGID_COVEREDINPOWDER,
    STRINGID_POWDEREXPLODES,
    STRINGID_BELCHCANTSELECT,
    STRINGID_SPECTRALTHIEFSTEAL,
    STRINGID_GRAVITYGROUNDING,
    STRINGID_MISTYTERRAINPREVENTS,
    STRINGID_GRASSYTERRAINHEALS,
    STRINGID_ELECTRICTERRAINPREVENTS,
    STRINGID_PSYCHICTERRAINPREVENTS,
    STRINGID_SAFETYGOGGLESPROTECTED,
    STRINGID_FLOWERVEILPROTECTED,
    STRINGID_SWEETVEILPROTECTED,
    STRINGID_AROMAVEILPROTECTED,
    STRINGID_CELEBRATEMESSAGE,
    STRINGID_USEDINSTRUCTEDMOVE,
    STRINGID_THROATCHOPENDS,
    STRINGID_PKMNCANTUSEMOVETHROATCHOP,
    STRINGID_LASERFOCUS,
    STRINGID_GEMACTIVATES,
    STRINGID_BERRYDMGREDUCES,
    STRINGID_AIRBALLOONFLOAT,
    STRINGID_AIRBALLOONPOP,
    STRINGID_INCINERATEBURN,
    STRINGID_BUGBITE,
    STRINGID_ILLUSIONWOREOFF,
    STRINGID_ATTACKERCUREDTARGETSTATUS,
    STRINGID_ATTACKERLOSTFIRETYPE,
    STRINGID_HEALERCURE,
    STRINGID_SCRIPTINGABILITYSTATRAISE,
    STRINGID_RECEIVERABILITYTAKEOVER,
    STRINGID_PKNMABSORBINGPOWER,
    STRINGID_NOONEWILLBEABLETORUNAWAY,
    STRINGID_DESTINYKNOTACTIVATES,
    STRINGID_CLOAKEDINAFREEZINGLIGHT,
    STRINGID_CLEARAMULETWONTLOWERSTATS,
    STRINGID_FERVENTWISHREACHED,
    STRINGID_AIRLOCKACTIVATES,
    STRINGID_PRESSUREENTERS,
    STRINGID_DARKAURAENTERS,
    STRINGID_FAIRYAURAENTERS,
    STRINGID_AURABREAKENTERS,
    STRINGID_COMATOSEENTERS,
    STRINGID_SCREENCLEANERENTERS,
    STRINGID_FETCHEDPOKEBALL,
    STRINGID_BATTLERABILITYRAISEDSTAT,
    STRINGID_ASANDSTORMKICKEDUP,
    STRINGID_PKMNSWILLPERISHIN3TURNS,
    STRINGID_ABILITYRAISEDSTATDRASTICALLY,
    STRINGID_AURAFLAREDTOLIFE,
    STRINGID_ASONEENTERS,
    STRINGID_CURIOUSMEDICINEENTERS,
    STRINGID_CANACTFASTERTHANKSTO,
    STRINGID_MICLEBERRYACTIVATES,
    STRINGID_PKMNSHOOKOFFTHETAUNT,
    STRINGID_PKMNGOTOVERITSINFATUATION,
    STRINGID_ITEMCANNOTBEREMOVED,
    STRINGID_STICKYBARBTRANSFER,
    STRINGID_PKMNBURNHEALED,
    STRINGID_REDCARDACTIVATE,
    STRINGID_EJECTBUTTONACTIVATE,
    STRINGID_ATKGOTOVERINFATUATION,
    STRINGID_TORMENTEDNOMORE,
    STRINGID_HEALBLOCKEDNOMORE,
    STRINGID_ATTACKERBECAMEFULLYCHARGED,
    STRINGID_ATTACKERBECAMEASHSPECIES,
    STRINGID_EXTREMELYHARSHSUNLIGHT,
    STRINGID_EXTREMESUNLIGHTFADED,
    STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT,
    STRINGID_EXTREMELYHARSHSUNLIGHTWASNOTLESSENED,
    STRINGID_HEAVYRAIN,
    STRINGID_HEAVYRAINLIFTED,
    STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN,
    STRINGID_NORELIEFROMHEAVYRAIN,
    STRINGID_MYSTERIOUSAIRCURRENT,
    STRINGID_STRONGWINDSDISSIPATED,
    STRINGID_MYSTERIOUSAIRCURRENTBLOWSON,
    STRINGID_ATTACKWEAKENEDBSTRONGWINDS,
    STRINGID_STUFFCHEEKSCANTSELECT,
    STRINGID_PKMNREVERTEDTOPRIMAL,
    STRINGID_BUTPOKEMONCANTUSETHEMOVE,
    STRINGID_BUTHOOPACANTUSEIT,
    STRINGID_BROKETHROUGHPROTECTION,
    STRINGID_ABILITYALLOWSONLYMOVE,
    STRINGID_SWAPPEDABILITIES,
    STRINGID_PASTELVEILPROTECTED,
    STRINGID_PASTELVEILENTERS,
    STRINGID_BATTLERTYPECHANGEDTO,
    STRINGID_BOTHCANNOLONGERESCAPE,
    STRINGID_CANTESCAPEDUETOUSEDMOVE,
    STRINGID_PKMNBECAMEWEAKERTOFIRE,
    STRINGID_ABOUTTOUSEPOLTERGEIST,
    STRINGID_CANTESCAPEBECAUSEOFCURRENTMOVE,
    STRINGID_NEUTRALIZINGGASENTERS,
    STRINGID_NEUTRALIZINGGASOVER,
    STRINGID_TARGETTOOHEAVY,
    STRINGID_PKMNTOOKTARGETHIGH,
    STRINGID_PKMNINSNAPTRAP,
    STRINGID_METEORBEAMCHARGING,
    STRINGID_HEATUPBEAK,
    STRINGID_COURTCHANGE,
    STRINGID_PLAYERLOSTTOENEMYTRAINER,
    STRINGID_PLAYERPAIDPRIZEMONEY,
    STRINGID_ZPOWERSURROUNDS,
    STRINGID_ZMOVEUNLEASHED,
    STRINGID_ZMOVERESETSSTATS,
    STRINGID_ZMOVEALLSTATSUP,
    STRINGID_ZMOVEZBOOSTCRIT,
    STRINGID_ZMOVERESTOREHP,
    STRINGID_ZMOVESTATUP,
    STRINGID_ZMOVEHPTRAP,
    STRINGID_ATTACKEREXPELLEDTHEPOISON,
    STRINGID_ATTACKERSHOOKITSELFAWAKE,
    STRINGID_ATTACKERBROKETHROUGHPARALYSIS,
    STRINGID_ATTACKERHEALEDITSBURN,
    STRINGID_ATTACKERMELTEDTHEICE,
    STRINGID_TARGETTOUGHEDITOUT,
    STRINGID_ATTACKERLOSTELECTRICTYPE,
    STRINGID_ATTACKERSWITCHEDSTATWITHTARGET,
    STRINGID_BEINGHITCHARGEDPKMNWITHPOWER,
    STRINGID_SUNLIGHTACTIVATEDABILITY,
    STRINGID_STATWASHEIGHTENED,
    STRINGID_ELECTRICTERRAINACTIVATEDABILITY,
    STRINGID_ABILITYWEAKENEDSURROUNDINGMONSSTAT,
    STRINGID_ATTACKERGAINEDSTRENGTHFROMTHEFALLEN,
    STRINGID_PKMNSABILITYPREVENTSABILITY,
    STRINGID_PREPARESHELLTRAP,
    STRINGID_SHELLTRAPDIDNTWORK,
    STRINGID_SPIKESDISAPPEAREDFROMTEAM,
    STRINGID_TOXICSPIKESDISAPPEAREDFROMTEAM,
    STRINGID_STICKYWEBDISAPPEAREDFROMTEAM,
    STRINGID_STEALTHROCKDISAPPEAREDFROMTEAM,
    STRINGID_COULDNTFULLYPROTECT,
    STRINGID_STOCKPILEDEFFECTWOREOFF,
    STRINGID_PKMNREVIVEDREADYTOFIGHT,
    STRINGID_ITEMRESTOREDSPECIESHEALTH,
    STRINGID_ITEMCUREDSPECIESSTATUS,
    STRINGID_ITEMRESTOREDSPECIESPP,
    STRINGID_THUNDERCAGETRAPPED,
    STRINGID_PKMNHURTBYFROSTBITE,
    STRINGID_PKMNGOTFROSTBITE,
    STRINGID_PKMNSITEMHEALEDFROSTBITE,
    STRINGID_ATTACKERHEALEDITSFROSTBITE,
    STRINGID_PKMNFROSTBITEHEALED,
    STRINGID_PKMNFROSTBITEHEALED2,
    STRINGID_PKMNFROSTBITEHEALEDBY,
    STRINGID_MIRRORHERBCOPIED,
    STRINGID_STARTEDSNOW,
    STRINGID_SNOWCONTINUES,
    STRINGID_SNOWSTOPPED,
    STRINGID_SNOWWARNINGSNOW,
    STRINGID_PKMNITEMMELTED,
    STRINGID_ULTRABURSTREACTING,
    STRINGID_ULTRABURSTCOMPLETED,
    STRINGID_TEAMGAINEDEXP,
    STRINGID_CURRENTMOVECANTSELECT,
    STRINGID_TARGETISBEINGSALTCURED,
    STRINGID_TARGETISHURTBYSALTCURE,
    STRINGID_TARGETCOVEREDINSTICKYCANDYSYRUP,
    STRINGID_SHARPSTEELFLOATS,
    STRINGID_SHARPSTEELDMG,
    STRINGID_PKMNBLEWAWAYSHARPSTEEL,
    STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM,
    STRINGID_TEAMTRAPPEDWITHVINES,
    STRINGID_PKMNHURTBYVINES,
    STRINGID_TEAMCAUGHTINVORTEX,
    STRINGID_PKMNHURTBYVORTEX,
    STRINGID_TEAMSURROUNDEDBYFIRE,
    STRINGID_PKMNBURNINGUP,
    STRINGID_TEAMSURROUNDEDBYROCKS,
    STRINGID_PKMNHURTBYROCKSTHROWN,
    STRINGID_MOVEBLOCKEDBYDYNAMAX,
    STRINGID_ZEROTOHEROTRANSFORMATION,
    STRINGID_THETWOMOVESBECOMEONE,
    STRINGID_ARAINBOWAPPEAREDONSIDE,
    STRINGID_THERAINBOWDISAPPEARED,
    STRINGID_WAITINGFORPARTNERSMOVE,
    STRINGID_SEAOFFIREENVELOPEDSIDE,
    STRINGID_HURTBYTHESEAOFFIRE,
    STRINGID_THESEAOFFIREDISAPPEARED,
    STRINGID_SWAMPENVELOPEDSIDE,
    STRINGID_THESWAMPDISAPPEARED,
    STRINGID_PKMNTELLCHILLINGRECEPTIONJOKE,
    STRINGID_HOSPITALITYRESTORATION,
    STRINGID_ELECTROSHOTCHARGING,
    STRINGID_ITEMWASUSEDUP,
    STRINGID_ATTACKERLOSTITSTYPE,
    STRINGID_SHEDITSTAIL,
    STRINGID_CLOAKEDINAHARSHLIGHT,
    STRINGID_SUPERSWEETAROMAWAFTS,
    STRINGID_DIMENSIONSWERETWISTED,
    STRINGID_BIZARREARENACREATED,
    STRINGID_BIZARREAREACREATED,
    STRINGID_TIDYINGUPCOMPLETE,
    STRINGID_PKMNTERASTALLIZEDINTO,
    STRINGID_BOOSTERENERGYACTIVATES,
    STRINGID_FOGCREPTUP,
    STRINGID_FOGISDEEP,
    STRINGID_FOGLIFTED,
    STRINGID_PKMNMADESHELLGLEAM,
    STRINGID_FICKLEBEAMDOUBLED,
    STRINGID_COMMANDERACTIVATES,
    STRINGID_POKEFLUTECATCHY,
    STRINGID_POKEFLUTE,
    STRINGID_MONHEARINGFLUTEAWOKE,
    STRINGID_SUNLIGHTISHARSH,
    STRINGID_ITISHAILING,
    STRINGID_ITISSNOWING,
    STRINGID_ISCOVEREDWITHGRASS,
    STRINGID_MISTSWIRLSAROUND,
    STRINGID_ELECTRICCURRENTISRUNNING,
    STRINGID_SEEMSWEIRD,
    STRINGID_WAGGLINGAFINGER,
    STRINGID_BLOCKEDBYSLEEPCLAUSE,
    STRINGID_SUPEREFFECTIVETWOFOES,
    STRINGID_NOTVERYEFFECTIVETWOFOES,
    STRINGID_ITDOESNTAFFECTTWOFOES,
    STRINGID_SENDCAUGHTMONPARTYORBOX,
    STRINGID_PKMNSENTTOPCAFTERCATCH,
    STRINGID_PKMNDYNAMAXED,
    STRINGID_PKMNGIGANTAMAXED,
    STRINGID_TIMETODYNAMAX,
    STRINGID_TIMETOGIGANTAMAX,
    STRINGID_QUESTIONFORFEITBATTLE,
    STRINGID_FORFEITBATTLEGAVEMONEY,
    STRINGID_COUNT
};

// The below IDs are all indexes into battle message tables,
// used to determine which of a set of messages to print.
// They are assigned to the MULTISTRING_CHOOSER byte of gBattleCommunication
// and read when e.g. the command printfromtable is used.

// gStatUpStringIds
enum StatUpStringID
{
    B_MSG_ATTACKER_STAT_ROSE,
    B_MSG_DEFENDER_STAT_ROSE,
    B_MSG_STAT_WONT_INCREASE,
    B_MSG_STAT_ROSE_EMPTY,
    B_MSG_STAT_ROSE_ITEM,
    B_MSG_USED_DIRE_HIT,
};

// gStatDownStringIds
enum StatDownStringID
{
    B_MSG_ATTACKER_STAT_FELL = 0,
    B_MSG_DEFENDER_STAT_FELL = 1,
    B_MSG_STAT_WONT_DECREASE,
    B_MSG_STAT_FELL_EMPTY,
};

// gMissStringIds
enum MissStringID
{
    B_MSG_MISSED,
    B_MSG_PROTECTED,
    B_MSG_AVOIDED_ATK,
    // Ability-related messages need to below this comment
    B_MSG_AVOIDED_DMG,
    B_MSG_GROUND_MISS,
};

// gAbsorbDrainStringIds
enum AbsorbDrainStringID
{
    B_MSG_ABSORB,
    B_MSG_ABSORB_OOZE,
};

// gLeechSeedStringIds
enum LeechSeedStringID
{
    B_MSG_LEECH_SEED_SET,
    B_MSG_LEECH_SEED_MISS,
    B_MSG_LEECH_SEED_FAIL,
    B_MSG_LEECH_SEED_DRAIN,
    B_MSG_LEECH_SEED_OOZE,
};

// gMoveWeatherChangeStringIds
enum MoveWeatherChangeStringID
{
    B_MSG_STARTED_RAIN,
    B_MSG_STARTED_DOWNPOUR,
    B_MSG_WEATHER_FAILED,
    B_MSG_STARTED_SANDSTORM,
    B_MSG_STARTED_SUNLIGHT,
    B_MSG_STARTED_HAIL,
    B_MSG_STARTED_SNOW,
    B_MSG_STARTED_FOG,
};

// gWeatherEndsStringIds
enum WeatherEndStringID
{
    B_MSG_WEATHER_END_RAIN,
    B_MSG_WEATHER_END_SUN,
    B_MSG_WEATHER_END_SANDSTORM,
    B_MSG_WEATHER_END_HAIL,
    B_MSG_WEATHER_END_SNOW,
    B_MSG_WEATHER_END_FOG,
    B_MSG_WEATHER_END_STRONG_WINDS,
    B_MSG_WEATHER_END_COUNT
};

// gWeatherTurnStringIds
enum WeatherTurnStringID
{
    B_MSG_WEATHER_TURN_RAIN,
    B_MSG_WEATHER_TURN_DOWNPOUR,
    B_MSG_WEATHER_TURN_SUN,
    B_MSG_WEATHER_TURN_SANDSTORM,
    B_MSG_WEATHER_TURN_HAIL,
    B_MSG_WEATHER_TURN_SNOW,
    B_MSG_WEATHER_TURN_FOG,
    B_MSG_WEATHER_TURN_STRONG_WINDS,
};

// gSandStormHailSnowContinuesStringIds / gSandStormHailDmgStringIds/ gSandStormHailSnowEndStringIds
enum SandstormHailSnowStringID
{
    B_MSG_SANDSTORM,
    B_MSG_HAIL,
};

// gReflectLightScreenSafeguardStringIds
enum ReflectLightScreenSafeguardStringID
{
    B_MSG_SIDE_STATUS_FAILED,
    B_MSG_SET_REFLECT_SINGLE,
    B_MSG_SET_REFLECT_DOUBLE,
    B_MSG_SET_LIGHTSCREEN_SINGLE,
    B_MSG_SET_LIGHTSCREEN_DOUBLE,
    B_MSG_SET_SAFEGUARD,
};

// gProtectLikeUsedStringIds
enum ProtectLikeUsedStringID
{
    B_MSG_PROTECTED_ITSELF,
    B_MSG_BRACED_ITSELF,
    B_MSG_PROTECT_FAILED,
    B_MSG_PROTECTED_TEAM,
};

// gRestUsedStringIds
enum RestUsedStringID
{
    B_MSG_REST,
    B_MSG_REST_STATUSED,
};

// gWokeUpStringIds
enum WokeUpStringID
{
    B_MSG_WOKE_UP,
    B_MSG_WOKE_UP_UPROAR,
};

// gUproarAwakeStringIds
enum UproarAwakeStringID
{
    B_MSG_CANT_SLEEP_UPROAR,
    B_MSG_UPROAR_KEPT_AWAKE,
};

// gUproarOverTurnStringIds
enum UproarOverTurnStringID
{
    B_MSG_UPROAR_CONTINUES,
    B_MSG_UPROAR_ENDS,
};

// gStockpileUsedStringIds
enum StockpileUsedStringID
{
    B_MSG_STOCKPILED,
    B_MSG_CANT_STOCKPILE,
};

// gSwallowFailStringIds
enum SwallowFailStringID
{
    B_MSG_SWALLOW_FAILED,
    B_MSG_SWALLOW_FULL_HP,
};

// gKOFailedStringIds
enum KOFailedStringID
{
    B_MSG_KO_MISS,
    B_MSG_KO_UNAFFECTED,
};

// gMistUsedStringIds
enum MistUsedStringID
{
    B_MSG_SET_MIST,
    B_MSG_MIST_FAILED,
};

// gFocusEnergyUsedStringIds
enum FocusEnergyUsedStringID
{
    B_MSG_GETTING_PUMPED,
    B_MSG_FOCUS_ENERGY_FAILED,
};

// gTransformUsedStringIds
enum TransformUsedStringID
{
    B_MSG_TRANSFORMED,
    B_MSG_TRANSFORM_FAILED,
};

// gSubstituteUsedStringIds
enum SubstituteUsedStringID
{
    B_MSG_SET_SUBSTITUTE,
    B_MSG_SUBSTITUTE_FAILED,
};

// gPartyStatusHealStringIds
enum PartyStatusHealStringID
{
    B_MSG_BELL,
    B_MSG_BELL_SOUNDPROOF_ATTACKER,
    B_MSG_BELL_SOUNDPROOF_PARTNER,
    B_MSG_BELL_BOTH_SOUNDPROOF,
    B_MSG_SOOTHING_AROMA,
};

// gFutureMoveUsedStringIds
enum FutureMoveUsedStringID
{
    B_MSG_FUTURE_SIGHT,
    B_MSG_DOOM_DESIRE,
};

// gItemSwapStringIds
enum ItemSwapStringID
{
    B_MSG_ITEM_SWAP_TAKEN,
    B_MSG_ITEM_SWAP_GIVEN,
    B_MSG_ITEM_SWAP_BOTH,
};

// gSportsUsedStringIds
enum SportsUsedStringID
{
    B_MSG_WEAKEN_ELECTRIC,
    B_MSG_WEAKEN_FIRE,
};

// gCaughtMonStringIds
enum CaughtMonStringID
{
    B_MSG_NO_MESSSAGE_SKIP,
    // "Lanette's" should always follow "someone's"
    B_MSG_SENT_SOMEONES_PC,
    B_MSG_SENT_LANETTES_PC,
    B_MSG_SOMEONES_BOX_FULL,
    B_MSG_LANETTES_BOX_FULL,
    B_MSG_SWAPPED_INTO_PARTY,
};

// gPrimalWeatherBlocksStringIds
enum PrimalWeatherBlockStringID
{
    B_MSG_PRIMAL_WEATHER_FIZZLED_BY_RAIN,
    B_MSG_PRIMAL_WEATHER_EVAPORATED_IN_SUN,
};

// gInobedientStringIds
enum InobedientStringID
{
    B_MSG_LOAFING,
    B_MSG_WONT_OBEY,
    B_MSG_TURNED_AWAY,
    B_MSG_PRETEND_NOT_NOTICE,
    B_MSG_INCAPABLE_OF_POWER,
};

// For randomly selecting a disobey string
// Skips the one used for Battle Palace
#define NUM_LOAF_STRINGS (B_MSG_PRETEND_NOT_NOTICE + 1)

// gSafariGetNearStringIds
enum SafariGetNearStringID
{
    B_MSG_CREPT_CLOSER,
    B_MSG_CANT_GET_CLOSER,
};

// gSafariPokeblockResultStringIds
enum SafariPokeblockResultStringID
{
    B_MSG_MON_CURIOUS,
    B_MSG_MON_ENTHRALLED,
    B_MSG_MON_IGNORED,
};

// gFlashFireStringIds
enum FlashFireStringID
{
    B_MSG_FLASH_FIRE_BOOST,
    B_MSG_FLASH_FIRE_NO_BOOST,
};

// gBerryEffectStringIds
enum BerryEffectStringID
{
    B_MSG_CURED_PROBLEM,
    B_MSG_NORMALIZED_STATUS,
};

// gNoEscapeStringIds
enum NoEscapeStringID
{
    B_MSG_CANT_ESCAPE,
    B_MSG_DONT_LEAVE_BIRCH,
    B_MSG_PREVENTS_ESCAPE,
    B_MSG_CANT_ESCAPE_2,
    B_MSG_ATTACKER_CANT_ESCAPE,
};

// gGotPoisonedStringIds / gGotParalyzedStringIds / gFellAsleepStringIds
// gGotBurnedStringIds / gGotFrozenStringIds / gAttractUsedStringIds
enum GotStatusedStringID
{
    B_MSG_STATUSED,
    B_MSG_STATUSED_BY_ABILITY,
};

// gBRNPreventionStringIds / gPRLZPreventionStringIds / gPSNPreventionStringIds
enum StatusPreventionStringID
{
    B_MSG_ABILITY_PREVENTS_MOVE_STATUS,
    B_MSG_ABILITY_PREVENTS_ABILITY_STATUS,
    B_MSG_STATUS_HAD_NO_EFFECT,
};

// gGotDefrostedStringIds
enum GotDefrostedStringID
{
    B_MSG_DEFROSTED,
    B_MSG_DEFROSTED_BY_MOVE,
};

// gFrostbiteHealedStringIds
enum FrostbiteHealedStringID
{
    B_MSG_FROSTBITE_HEALED,
    B_MSG_FROSTBITE_HEALED_BY_MOVE,
};

// gBattlePalaceFlavorTextTable
enum BattlePalaceFlavorTextID
{
    B_MSG_GLINT_IN_EYE,
    B_MSG_GETTING_IN_POS,
    B_MSG_GROWL_DEEPLY,
    B_MSG_EAGER_FOR_MORE,
};

// gRefereeStringsTable
enum RefereeStringID
{
    B_MSG_REF_NOTHING_IS_DECIDED = 0, // Default, likely actually a magic number somewhere that should be assigned this instead if used at all
    B_MSG_REF_THATS_IT,
    B_MSG_REF_JUDGE_MIND,
    B_MSG_REF_JUDGE_SKILL,
    B_MSG_REF_JUDGE_BODY,
    B_MSG_REF_PLAYER_WON,
    B_MSG_REF_OPPONENT_WON,
    B_MSG_REF_DRAW,
    B_MSG_REF_COMMENCE_BATTLE,
};

// gSwitchInAbilityStringIds
enum SwitchInAbilityStringID
{
    B_MSG_SWITCHIN_MOLDBREAKER,
    B_MSG_SWITCHIN_TERAVOLT,
    B_MSG_SWITCHIN_TURBOBLAZE,
    B_MSG_SWITCHIN_SLOWSTART,
    B_MSG_SWITCHIN_UNNERVE,
    B_MSG_SWITCHIN_ANTICIPATION,
    B_MSG_SWITCHIN_FOREWARN,
    B_MSG_SWITCHIN_PRESSURE,
    B_MSG_SWITCHIN_DARKAURA,
    B_MSG_SWITCHIN_FAIRYAURA,
    B_MSG_SWITCHIN_AURABREAK,
    B_MSG_SWITCHIN_COMATOSE,
    B_MSG_SWITCHIN_SCREENCLEANER,
    B_MSG_SWITCHIN_ASONE,
    B_MSG_SWITCHIN_CURIOUS_MEDICINE,
    B_MSG_SWITCHIN_PASTEL_VEIL,
    B_MSG_SWITCHIN_NEUTRALIZING_GAS,
};

// gMentalHerbCureStringIds
enum MentalHerbCureStringID
{
    B_MSG_MENTALHERBCURE_INFATUATION,
    B_MSG_MENTALHERBCURE_TAUNT,
    B_MSG_MENTALHERBCURE_ENCORE,
    B_MSG_MENTALHERBCURE_TORMENT,
    B_MSG_MENTALHERBCURE_HEALBLOCK,
    B_MSG_MENTALHERBCURE_DISABLE,
};

// gTerrainPreventsStringIds
enum TerrainPreventsStringID
{
    B_MSG_TERRAINPREVENTS_MISTY,
    B_MSG_TERRAINPREVENTS_ELECTRIC,
    B_MSG_TERRAINPREVENTS_PSYCHIC,
};

// gTerrainStringIds
enum TerrainStringID
{
    B_MSG_TERRAIN_SET_MISTY,
    B_MSG_TERRAIN_SET_ELECTRIC,
    B_MSG_TERRAIN_SET_PSYCHIC,
    B_MSG_TERRAIN_SET_GRASSY,
    B_MSG_TERRAIN_END_MISTY,
    B_MSG_TERRAIN_END_ELECTRIC,
    B_MSG_TERRAIN_END_PSYCHIC,
    B_MSG_TERRAIN_END_GRASSY,
    B_MSG_TERRAIN_COUNT
};

// gStartingStatusStringIds
enum StartingStatusStringID
{
    B_MSG_SET_TRICK_ROOM = (B_MSG_TERRAIN_SET_GRASSY + 1),
    B_MSG_SET_MAGIC_ROOM,
    B_MSG_SET_WONDER_ROOM,
    B_MSG_SET_TAILWIND,
    B_MSG_SET_RAINBOW,
    B_MSG_SET_SEA_OF_FIRE,
    B_MSG_SET_SWAMP,
    B_MSG_STARTING_STATUS_COUNT,
};

// gWrappedStringIds
// These correspond in order to sTrappingMoves!
enum WrappedStringID
{
    B_MSG_WRAPPED_BIND,
    B_MSG_WRAPPED_WRAP,
    B_MSG_WRAPPED_FIRE_SPIN,
    B_MSG_WRAPPED_CLAMP,
    B_MSG_WRAPPED_WHIRLPOOL,
    B_MSG_WRAPPED_SAND_TOMB,
    B_MSG_WRAPPED_MAGMA_STORM,
    B_MSG_WRAPPED_INFESTATION,
    B_MSG_WRAPPED_SNAP_TRAP,
    B_MSG_WRAPPED_THUNDER_CAGE,
    NUM_TRAPPING_MOVES,
};

// z effects
enum ZEffectStringID
{
    B_MSG_Z_RESET_STATS,
    B_MSG_Z_ALL_STATS_UP,
    B_MSG_Z_BOOST_CRITS,
    B_MSG_Z_FOLLOW_ME,
    B_MSG_Z_RECOVER_HP,
    B_MSG_Z_STAT_UP,
    B_MSG_Z_HP_TRAP,
};

// gDmgHazardsStringIds
enum DmgHazardStringID
{
    B_MSG_PKMNHURTBYSPIKES,
    B_MSG_STEALTHROCKDMG,
    B_MSG_SHARPSTEELDMG,
    B_MSG_POINTEDSTONESFLOAT,
    B_MSG_SPIKESSCATTERED,
    B_MSG_SHARPSTEELFLOATS,
};

// gDamageNonTypesStartStringIds
enum DamageNonTypesStartStringID
{
    B_MSG_TRAPPED_WITH_VINES,
    B_MSG_CAUGHT_IN_VORTEX,
    B_MSG_SURROUNDED_BY_FIRE,
    B_MSG_SURROUNDED_BY_ROCKS,
};

// gDamageNonTypesDmgStringIds
enum DamageNonTypesDmgStringID
{
    B_MSG_HURT_BY_VINES,
    B_MSG_HURT_BY_VORTEX,
    B_MSG_BURNING_UP,
    B_MSG_HURT_BY_ROCKS_THROWN,
};

#endif // GUARD_CONSTANTS_BATTLE_STRING_IDS_H
