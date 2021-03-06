#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#define RBAT_PULL_DOWN_R		   27000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#define RBAT_PULL_DOWN_R		   100000
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC {
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC {
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum {
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

#define TOTAL_BATTERY_NUMBER     2
/*****************************
Max Capacity of battery.
[0]：battery id = 0 for SCUD battery
[1]：battery id = 1 for JN battery
*****************************/
#ifdef MTK_MULTI_BAT_PROFILE_SUPPORT
kal_int32 g_Q_MAX_NEG_10[] = {2950, 2950};
kal_int32 g_Q_MAX_POS_0[] = {3400, 3560};
kal_int32 g_Q_MAX_POS_25[] = {4120, 4200};
kal_int32 g_Q_MAX_POS_50[] = {4100, 4160};
kal_int32 g_Q_MAX_NEG_10_H_CURRENT[] = {2450, 2450};
kal_int32 g_Q_MAX_POS_0_H_CURRENT[] = {2760, 2960};
kal_int32 g_Q_MAX_POS_25_H_CURRENT[] = {4050, 4072};
kal_int32 g_Q_MAX_POS_50_H_CURRENT[] = {4000, 4030};
#endif

/*****************************
Voltage of battery id.
[0]：battery id = 0 for SCUD battery
[1]：battery id = 1 for JN battery
*****************************/
#ifdef MTK_GET_BATTERY_ID_BY_AUXADC
#define BATTERY_ID_CHANNEL_NUM   1
kal_int32 g_battery_id_voltage[] = {500000, -1};
#endif
// ============================================================
// External function
// ============================================================

/*****************************
<DOD, Battery_Voltage> Table
[0]：battery id = 0 for SCUD battery
[1]：battery id = 1 for JN battery
*****************************/
#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[][20] = {
    {
        {-20,65170},
        {-15,52060},
        {-10,41760},
        { -5,32900},
        {  0,27190},
        {  5,22040},
        { 10,17950},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8309},
        { 35,6939},
        { 40,5823},
        { 45,4911},
        { 50,4160},
        { 55,3538},
        { 60,3021}
    },
    {
        {-20,65170},
        {-15,52060},
        {-10,41760},
        { -5,32900},
        {  0,27190},
        {  5,22040},
        { 10,17950},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8309},
        { 35,6939},
        { 40,5823},
        { 45,4911},
        { 50,4160},
        { 55,3538},
        { 60,3021}
    }
};
#endif

#if (BAT_NTC_47 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[][] = {
    {-20,483954},
    {-15,360850},
    {-10,271697},
    { -5,206463},
    {  0,158214},
    {  5,122259},
    { 10,95227},
    { 15,74730},
    { 20,59065},
    { 25,47000},
    { 30,37643},
    { 35,30334},
    { 40,24591},
    { 45,20048},
    { 50,16433},
    { 55,13539},
    { 60,11210}
};
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[][85] = {
    {/*JN battery data at negative ten degrees L159 - L241*/
        {0  ,4350},
        {1  ,4328},
        {2  ,4311},
        {4  ,4295},
        {5  ,4279},
        {6  ,4266},
        {7  ,4251},
        {9  ,4236},
        {10 ,4222},
        {11 ,4208},
        {12 ,4195},
        {14 ,4183},
        {15 ,4170},
        {16 ,4154},
        {17 ,4143},
        {19 ,4128},
        {20 ,4115},
        {21 ,4099},
        {22 ,4089},
        {24 ,4079},
        {25 ,4069},
        {26 ,4056},
        {27 ,4039},
        {28 ,4018},
        {30 ,3997},
        {31 ,3977},
        {32 ,3961},
        {33 ,3948},
        {35 ,3938},
        {36 ,3930},
        {37 ,3923},
        {38 ,3915},
        {40 ,3908},
        {41 ,3900},
        {42 ,3892},
        {43 ,3883},
        {45 ,3875},
        {46 ,3868},
        {47 ,3860},
        {48 ,3854},
        {50 ,3847},
        {51 ,3841},
        {52 ,3835},
        {53 ,3829},
        {54 ,3824},
        {56 ,3818},
        {57 ,3814},
        {58 ,3808},
        {59 ,3803},
        {61 ,3800},
        {62 ,3795},
        {63 ,3793},
        {64 ,3789},
        {66 ,3785},
        {67 ,3783},
        {68 ,3780},
        {69 ,3777},
        {71 ,3773},
        {72 ,3770},
        {73 ,3768},
        {74 ,3765},
        {76 ,3762},
        {77 ,3757},
        {78 ,3753},
        {79 ,3749},
        {80 ,3743},
        {82 ,3738},
        {83 ,3732},
        {84 ,3726},
        {85 ,3719},
        {87 ,3714},
        {88 ,3709},
        {89 ,3704},
        {90 ,3702},
        {92 ,3698},
        {93 ,3694},
        {94 ,3687},
        {95 ,3675},
        {97 ,3654},
        {98 ,3616},
        {99 ,3558},
        {100,3500},
        {101,3495}
    },
	    {/*SCUD battery data at negative ten degrees L244 - L326*/
        {0  ,4318},
        {1  ,4301},
        {2  ,4281},
        {4  ,4263},
        {5  ,4246},
        {6  ,4231},
        {7  ,4216},
        {9  ,4202},
        {10 ,4188},
        {11 ,4175},
        {12 ,4161},
        {14 ,4148},
        {15 ,4135},
        {16 ,4120},
        {17 ,4108},
        {19 ,4095},
        {20 ,4082},
        {21 ,4071},
        {22 ,4061},
        {24 ,4052},
        {25 ,4041},
        {26 ,4028},
        {27 ,4010},
        {28 ,3989},
        {30 ,3969},
        {31 ,3952},
        {32 ,3937},
        {33 ,3926},
        {35 ,3916},
        {36 ,3908},
        {37 ,3902},
        {38 ,3896},
        {40 ,3888},
        {41 ,3881},
        {42 ,3875},
        {43 ,3868},
        {45 ,3855},
        {46 ,3849},
        {47 ,3843},
        {48 ,3836},
        {50 ,3828},
        {51 ,3822},
        {52 ,3816},
        {53 ,3810},
        {54 ,3804},
        {56 ,3799},
        {57 ,3792},
        {58 ,3788},
        {59 ,3783},
        {61 ,3778},
        {62 ,3772},
        {63 ,3769},
        {64 ,3766},
        {66 ,3756},
        {67 ,3754},
        {68 ,3751},
        {69 ,3746},
        {71 ,3743},
        {72 ,3740},
        {73 ,3736},
        {74 ,3733},
        {76 ,3730},
        {77 ,3726},
        {78 ,3723},
        {79 ,3719},
        {80 ,3715},
        {82 ,3712},
        {83 ,3709},
        {84 ,3705},
        {85 ,3701},
        {87 ,3696},
        {88 ,3692},
        {89 ,3686},
        {90 ,3679},
        {92 ,3670},
        {93 ,3658},
        {94 ,3642},
        {95 ,3625},
        {97 ,3603},
        {98 ,3571},
        {99 ,3523},
        {100,3447},
        {101,3335}
    }
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[][85] = {
    {/*JN battery data at zero degrees L333 - L415*/
        {0  ,4350},
        {1  ,4334},
        {2  ,4316},
        {4  ,4302},
        {5  ,4288},
        {6  ,4274},
        {7  ,4260},
        {9  ,4246},
        {10 ,4232},
        {11 ,4219},
        {12 ,4205},
        {14 ,4192},
        {15 ,4181},
        {16 ,4168},
        {17 ,4154},
        {19 ,4143},
        {20 ,4128},
        {21 ,4116},
        {22 ,4104},
        {24 ,4092},
        {25 ,4081},
        {26 ,4072},
        {27 ,4061},
        {28 ,4047},
        {30 ,4027},
        {31 ,4005},
        {32 ,3985},
        {33 ,3970},
        {35 ,3957},
        {36 ,3948},
        {37 ,3940},
        {38 ,3932},
        {40 ,3923},
        {41 ,3913},
        {42 ,3903},
        {43 ,3895},
        {45 ,3886},
        {46 ,3878},
        {47 ,3869},
        {48 ,3862},
        {50 ,3855},
        {51 ,3849},
        {52 ,3842},
        {53 ,3836},
        {54 ,3831},
        {56 ,3825},
        {57 ,3820},
        {58 ,3815},
        {59 ,3812},
        {61 ,3806},
        {62 ,3802},
        {63 ,3797},
        {64 ,3793},
        {66 ,3790},
        {67 ,3786},
        {68 ,3783},
        {69 ,3780},
        {71 ,3778},
        {72 ,3773},
        {73 ,3771},
        {74 ,3769},
        {76 ,3766},
        {77 ,3762},
        {78 ,3759},
        {79 ,3757},
        {80 ,3751},
        {82 ,3746},
        {83 ,3740},
        {84 ,3732},
        {85 ,3725},
        {87 ,3717},
        {88 ,3709},
        {89 ,3703},
        {90 ,3698},
        {92 ,3696},
        {93 ,3693},
        {94 ,3690},
        {95 ,3684},
        {97 ,3672},
        {98 ,3643},
        {99 ,3589},
        {100,3507},
        {101,3484}
    },
	{/*SCUD battery data at zero degrees L418 - L500*/
        {0  ,4339},
        {1  ,4320},
        {2  ,4302},
        {4  ,4287},
        {5  ,4274},
        {6  ,4260},
        {7  ,4247},
        {9  ,4234},
        {10 ,4222},
        {11 ,4209},
        {12 ,4197},
        {14 ,4173},
        {15 ,4161},
        {16 ,4149},
        {17 ,4138},
        {19 ,4124},
        {20 ,4112},
        {21 ,4100},
        {22 ,4088},
        {24 ,4071},
        {25 ,4063},
        {26 ,4056},
        {27 ,4041},
        {28 ,4016},
        {30 ,3989},
        {31 ,3971},
        {32 ,3957},
        {33 ,3944},
        {35 ,3936},
        {36 ,3926},
        {37 ,3919},
        {38 ,3912},
        {40 ,3905},
        {41 ,3898},
        {42 ,3888},
        {43 ,3880},
        {45 ,3871},
        {46 ,3863},
        {47 ,3854},
        {48 ,3847},
        {50 ,3835},
        {51 ,3828},
        {52 ,3822},
        {53 ,3816},
        {54 ,3812},
        {56 ,3808},
        {57 ,3802},
        {58 ,3798},
        {59 ,3793},
        {61 ,3790},
        {62 ,3786},
        {63 ,3784},
        {64 ,3779},
        {66 ,3773},
        {67 ,3770},
        {68 ,3767},
        {69 ,3767},
        {71 ,3764},
        {72 ,3762},
        {73 ,3761},
        {74 ,3758},
        {76 ,3756},
        {77 ,3753},
        {78 ,3748},
        {79 ,3744},
        {80 ,3738},
        {82 ,3734},
        {83 ,3727},
        {84 ,3720},
        {85 ,3710},
        {87 ,3701},
        {88 ,3696},
        {89 ,3692},
        {90 ,3688},
        {92 ,3683},
        {93 ,3681},
        {94 ,3677},
        {95 ,3667},
        {97 ,3644},
        {98 ,3598},
        {99 ,3525},
        {100,3405},
        {101,3207}
    }
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[][85] = {
    {/*JN battery data at 25 degrees L507 - L589*/
        {0  ,4328},
        {1  ,4316},
        {2  ,4303},
        {4  ,4287},
        {5  ,4274},
        {6  ,4260},
        {7  ,4247},
        {9  ,4232},
        {10 ,4220},
        {11 ,4208},
        {12 ,4193},
        {14 ,4182},
        {15 ,4167},
        {16 ,4152},
        {17 ,4141},
        {19 ,4130},
        {20 ,4116},
        {21 ,4106},
        {22 ,4091},
        {24 ,4080},
        {25 ,4068},
        {26 ,4059},
        {27 ,4051},
        {28 ,4037},
        {30 ,4023},
        {31 ,4006},
        {32 ,3994},
        {33 ,3984},
        {35 ,3975},
        {36 ,3965},
        {37 ,3954},
        {38 ,3942},
        {40 ,3930},
        {41 ,3916},
        {42 ,3905},
        {43 ,3893},
        {45 ,3885},
        {46 ,3874},
        {47 ,3869},
        {48 ,3859},
        {50 ,3852},
        {51 ,3848},
        {52 ,3840},
        {53 ,3835},
        {54 ,3830},
        {56 ,3824},
        {57 ,3819},
        {58 ,3814},
        {59 ,3809},
        {61 ,3806},
        {62 ,3800},
        {63 ,3797},
        {64 ,3791},
        {66 ,3788},
        {67 ,3784},
        {68 ,3779},
        {69 ,3775},
        {71 ,3772},
        {72 ,3769},
        {73 ,3765},
        {74 ,3760},
        {76 ,3756},
        {77 ,3748},
        {78 ,3744},
        {79 ,3740},
        {80 ,3736},
        {82 ,3730},
        {83 ,3722},
        {84 ,3717},
        {85 ,3708},
        {87 ,3699},
        {88 ,3691},
        {89 ,3686},
        {90 ,3686},
        {92 ,3683},
        {93 ,3684},
        {94 ,3680},
        {95 ,3675},
        {97 ,3650},
        {98 ,3598},
        {99 ,3526},
        {100,3419},
        {101,3212}
    },
    {/*SCUD battery data at 25 degrees L592 - L674*/
        {0  ,4322},
        {1  ,4299},
        {2  ,4281},
        {4  ,4264},
        {5  ,4250},
        {6  ,4248},
        {7  ,4232},
        {9  ,4216},
        {10 ,4200},
        {11 ,4190},
        {12 ,4185},
        {14 ,4167},
        {15 ,4154},
        {16 ,4140},
        {17 ,4132},
        {19 ,4100},
        {20 ,4096},
        {21 ,4089},
        {22 ,4082},
        {24 ,4078},
        {25 ,4066},
        {26 ,4049},
        {27 ,4035},
        {28 ,4023},
        {30 ,4004},
        {31 ,3987},
        {32 ,3978},
        {33 ,3970},
        {35 ,3965},
        {36 ,3955},
        {37 ,3949},
        {38 ,3944},
        {40 ,3935},
        {41 ,3912},
        {42 ,3896},
        {43 ,3888},
        {45 ,3871},
        {46 ,3868},
        {47 ,3863},
        {48 ,3853},
        {50 ,3847},
        {51 ,3839},
        {52 ,3833},
        {53 ,3830},
        {54 ,3827},
        {56 ,3819},
        {57 ,3815},
        {58 ,3810},
        {59 ,3805},
        {61 ,3800},
        {62 ,3798},
        {63 ,3796},
        {64 ,3792},
        {66 ,3788},
        {67 ,3784},
        {68 ,3780},
        {69 ,3779},
        {71 ,3772},
        {72 ,3770},
        {73 ,3768},
        {74 ,3764},
        {76 ,3759},
        {77 ,3754},
        {78 ,3751},
        {79 ,3749},
        {80 ,3744},
        {82 ,3738},
        {83 ,3729},
        {84 ,3725},
        {85 ,3720},
        {87 ,3704},
        {88 ,3696},
        {89 ,3692},
        {90 ,3691},
        {92 ,3690},
        {93 ,3689},
        {94 ,3688},
        {95 ,3685},
        {97 ,3661},
        {98 ,3594},
        {99 ,3494},
        {100,3440},
        {101,3250}
    },
};// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[][85] = {
    {/*JN battery data at 50 degrees L679 - L761*/
        {0  ,4330},
        {1  ,4318},
        {2  ,4304},
        {4  ,4292},
        {5  ,4279},
        {6  ,4267},
        {7  ,4251},
        {9  ,4239},
        {10 ,4226},
        {11 ,4212},
        {12 ,4199},
        {14 ,4185},
        {15 ,4173},
        {16 ,4161},
        {17 ,4144},
        {19 ,4135},
        {20 ,4122},
        {21 ,4109},
        {22 ,4094},
        {24 ,4084},
        {25 ,4070},
        {26 ,4060},
        {27 ,4047},
        {28 ,4039},
        {30 ,4026},
        {31 ,4015},
        {32 ,4005},
        {33 ,3994},
        {35 ,3983},
        {36 ,3973},
        {37 ,3964},
        {38 ,3954},
        {40 ,3943},
        {41 ,3929},
        {42 ,3914},
        {43 ,3901},
        {45 ,3889},
        {46 ,3881},
        {47 ,3871},
        {48 ,3863},
        {50 ,3859},
        {51 ,3852},
        {52 ,3844},
        {53 ,3840},
        {54 ,3833},
        {56 ,3826},
        {57 ,3820},
        {58 ,3816},
        {59 ,3812},
        {61 ,3807},
        {62 ,3801},
        {63 ,3797},
        {64 ,3792},
        {66 ,3788},
        {67 ,3786},
        {68 ,3780},
        {69 ,3775},
        {71 ,3769},
        {72 ,3759},
        {73 ,3753},
        {74 ,3747},
        {76 ,3742},
        {77 ,3736},
        {78 ,3731},
        {79 ,3726},
        {80 ,3722},
        {82 ,3717},
        {83 ,3711},
        {84 ,3703},
        {85 ,3695},
        {87 ,3687},
        {88 ,3677},
        {89 ,3671},
        {90 ,3670},
        {92 ,3668},
        {93 ,3667},
        {94 ,3666},
        {95 ,3663},
        {97 ,3649},
        {98 ,3608},
        {99 ,3550},
        {100,3469},
        {101,3343}
    },
    {/*SCUD battery data at 50 degrees L764 - L846*/
        {0  ,4337},
        {1  ,4324},
        {2  ,4311},
        {4  ,4297},
        {5  ,4284},
        {6  ,4272},
        {7  ,4259},
        {9  ,4233},
        {10 ,4219},
        {11 ,4207},
        {12 ,4195},
        {14 ,4182},
        {15 ,4169},
        {16 ,4156},
        {17 ,4145},
        {19 ,4133},
        {20 ,4121},
        {21 ,4109},
        {22 ,4100},
        {24 ,4085},
        {25 ,4074},
        {26 ,4063},
        {27 ,4052},
        {28 ,4043},
        {30 ,4031},
        {31 ,4018},
        {32 ,4008},
        {33 ,4000},
        {35 ,3991},
        {36 ,3981},
        {37 ,3973},
        {38 ,3964},
        {40 ,3956},
        {41 ,3946},
        {42 ,3936},
        {43 ,3923},
        {45 ,3890},
        {46 ,3881},
        {47 ,3873},
        {48 ,3865},
        {50 ,3858},
        {51 ,3852},
        {52 ,3845},
        {53 ,3840},
        {54 ,3835},
        {56 ,3829},
        {57 ,3824},
        {58 ,3820},
        {59 ,3815},
        {61 ,3811},
        {62 ,3807},
        {63 ,3803},
        {64 ,3800},
        {66 ,3792},
        {67 ,3789},
        {68 ,3786},
        {69 ,3781},
        {71 ,3776},
        {72 ,3768},
        {73 ,3762},
        {74 ,3757},
        {76 ,3752},
        {77 ,3746},
        {78 ,3742},
        {79 ,3736},
        {80 ,3732},
        {82 ,3728},
        {83 ,3721},
        {84 ,3713},
        {85 ,3704},
        {87 ,3695},
        {88 ,3681},
        {89 ,3680},
        {90 ,3679},
        {92 ,3678},
        {93 ,3677},
        {94 ,3676},
        {95 ,3674},
        {97 ,3662},
        {98 ,3622},
        {99 ,3559},
        {100,3471},
        {101,3334}
    }
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] = {
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};
//============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[][85] = {
    {
        {813 ,4350},
        {813 ,4328},
        {814 ,4311},
        {806 ,4295},
        {801 ,4279},
        {793 ,4266},
        {788 ,4251},
        {781 ,4236},
        {775 ,4222},
        {771 ,4208},
        {768 ,4195},
        {762 ,4183},
        {761 ,4170},
        {745 ,4154},
        {751 ,4143},
        {745 ,4128},
        {745 ,4115},
        {733 ,4099},
        {732 ,4089},
        {737 ,4079},
        {739 ,4069},
        {736 ,4056},
        {732 ,4039},
        {722 ,4018},
        {718 ,3997},
        {709 ,3977},
        {707 ,3961},
        {708 ,3948},
        {711 ,3938},
        {716 ,3930},
        {718 ,3923},
        {724 ,3915},
        {728 ,3908},
        {733 ,3900},
        {737 ,3892},
        {746 ,3883},
        {748 ,3875},
        {761 ,3868},
        {770 ,3860},
        {783 ,3854},
        {798 ,3847},
        {811 ,3841},
        {823 ,3835},
        {836 ,3829},
        {852 ,3824},
        {869 ,3818},
        {889 ,3814},
        {904 ,3808},
        {921 ,3803},
        {945 ,3800},
        {962 ,3795},
        {986 ,3793},
        {1005,3789},
        {1024,3785},
        {1049,3783},
        {1067,3780},
        {1085,3777},
        {1110,3773},
        {1131,3770},
        {1155,3768},
        {1182,3765},
        {1215,3762},
        {1242,3757},
        {1277,3753},
        {1314,3749},
        {1350,3743},
        {1397,3738},
        {1450,3732},
        {1498,3726},
        {1552,3719},
        {1606,3714},
        {1654,3709},
        {1699,3704},
        {1737,3702},
        {1783,3698},
        {1826,3694},
        {1889,3687},
        {1967,3675},
        {2062,3654},
        {2181,3616},
        {2352,3558},
        {2356,3500},
        {2354,3495}
    },
    {
        {870 ,4318},
        {878 ,4301},
        {940 ,4281},
        {940 ,4263},
        {935 ,4246},
        {925 ,4231},
        {920 ,4216},
        {913 ,4202},
        {903 ,4188},
        {898 ,4175},
        {885 ,4161},
        {878 ,4148},
        {870 ,4135},
        {855 ,4120},
        {850 ,4108},
        {840 ,4095},
        {828 ,4082},
        {827 ,4071},
        {833 ,4061},
        {837 ,4052},
        {838 ,4041},
        {830 ,4028},
        {815 ,4010},
        {790 ,3989},
        {768 ,3969},
        {758 ,3952},
        {748 ,3937},
        {745 ,3926},
        {743 ,3916},
        {740 ,3908},
        {748 ,3902},
        {753 ,3896},
        {753 ,3888},
        {750 ,3881},
        {753 ,3875},
        {753 ,3868},
        {753 ,3855},
        {755 ,3849},
        {758 ,3843},
        {760 ,3836},
        {758 ,3828},
        {763 ,3822},
        {763 ,3816},
        {763 ,3810},
        {765 ,3804},
        {770 ,3799},
        {765 ,3792},
        {773 ,3788},
        {778 ,3783},
        {780 ,3778},
        {780 ,3772},
        {785 ,3769},
        {793 ,3766},
        {818 ,3756},
        {838 ,3754},
        {855 ,3751},
        {863 ,3746},
        {883 ,3743},
        {905 ,3740},
        {925 ,3736},
        {953 ,3733},
        {973 ,3730},
        {1000,3726},
        {1023,3723},
        {1058,3719},
        {1085,3715},
        {1120,3712},
        {1155,3709},
        {1198,3705},
        {1238,3701},
        {1285,3696},
        {1340,3692},
        {1393,3686},
        {1455,3679},
        {1528,3670},
        {1595,3658},
        {1663,3642},
        {1745,3625},
        {1818,3603},
        {1883,3571},
        {1945,3523},
        {2023,3447},
        {1895,3335}
    }
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[][85] = {
   {
        {409 ,4350},
        {409 ,4334},
        {407 ,4316},
        {401 ,4302},
        {404 ,4288},
        {394 ,4274},
        {396 ,4260},
        {390 ,4246},
        {384 ,4232},
        {387 ,4219},
        {384 ,4205},
        {383 ,4192},
        {387 ,4181},
        {383 ,4168},
        {380 ,4154},
        {384 ,4143},
        {379 ,4128},
        {382 ,4116},
        {384 ,4104},
        {384 ,4092},
        {387 ,4081},
        {388 ,4072},
        {393 ,4061},
        {392 ,4047},
        {387 ,4027},
        {373 ,4005},
        {369 ,3985},
        {366 ,3970},
        {360 ,3957},
        {360 ,3948},
        {358 ,3940},
        {357 ,3932},
        {353 ,3923},
        {350 ,3913},
        {346 ,3903},
        {344 ,3895},
        {347 ,3886},
        {350 ,3878},
        {351 ,3869},
        {353 ,3862},
        {354 ,3855},
        {360 ,3849},
        {364 ,3842},
        {367 ,3836},
        {372 ,3831},
        {382 ,3825},
        {388 ,3820},
        {392 ,3815},
        {405 ,3812},
        {407 ,3806},
        {417 ,3802},
        {426 ,3797},
        {432 ,3793},
        {443 ,3790},
        {449 ,3786},
        {462 ,3783},
        {473 ,3780},
        {481 ,3778},
        {485 ,3773},
        {494 ,3771},
        {505 ,3769},
        {519 ,3766},
        {528 ,3762},
        {539 ,3759},
        {553 ,3757},
        {565 ,3751},
        {579 ,3746},
        {597 ,3740},
        {608 ,3732},
        {629 ,3725},
        {654 ,3717},
        {678 ,3709},
        {702 ,3703},
        {734 ,3698},
        {778 ,3696},
        {829 ,3693},
        {896 ,3690},
        {977 ,3684},
        {1082,3672},
        {1211,3643},
        {1387,3589},
        {1614,3507},
        {1857,3484}
    },
    {
        {340 ,4339},
        {348 ,4320},
        {375 ,4302},
        {378 ,4287},
        {383 ,4274},
        {385 ,4260},
        {382 ,4247},
        {385 ,4234},
        {388 ,4222},
        {387 ,4209},
        {388 ,4197},
        {390 ,4173},
        {395 ,4161},
        {395 ,4149},
        {398 ,4138},
        {393 ,4124},
        {395 ,4112},
        {398 ,4100},
        {395 ,4088},
        {405 ,4071},
        {420 ,4063},
        {430 ,4056},
        {425 ,4041},
        {405 ,4016},
        {388 ,3989},
        {385 ,3971},
        {380 ,3957},
        {375 ,3944},
        {378 ,3936},
        {370 ,3926},
        {370 ,3919},
        {370 ,3912},
        {368 ,3905},
        {365 ,3898},
        {358 ,3888},
        {353 ,3880},
        {343 ,3871},
        {345 ,3863},
        {343 ,3854},
        {343 ,3847},
        {345 ,3835},
        {340 ,3828},
        {343 ,3822},
        {340 ,3816},
        {343 ,3812},
        {348 ,3808},
        {345 ,3802},
        {343 ,3798},
        {345 ,3793},
        {353 ,3790},
        {358 ,3786},
        {358 ,3784},
        {358 ,3779},
        {358 ,3773},
        {360 ,3770},
        {360 ,3767},
        {365 ,3767},
        {368 ,3764},
        {373 ,3762},
        {378 ,3761},
        {380 ,3758},
        {400 ,3756},
        {415 ,3753},
        {420 ,3748},
        {423 ,3744},
        {430 ,3738},
        {440 ,3734},
        {448 ,3727},
        {455 ,3720},
        {463 ,3710},
        {468 ,3701},
        {483 ,3696},
        {498 ,3692},
        {508 ,3688},
        {553 ,3683},
        {588 ,3681},
        {638 ,3677},
        {683 ,3667},
        {728 ,3644},
        {773 ,3598},
        {835 ,3525},
        {955 ,3405},
        {968 ,3207}
    } 
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[][85] = {
   {
        {108 ,4328},
        {108 ,4316},
        {111 ,4303},
        {116 ,4287},
        {114 ,4274},
        {114 ,4260},
        {111 ,4247},
        {109 ,4232},
        {104 ,4220},
        {113 ,4208},
        {111 ,4193},
        {106 ,4182},
        {119 ,4167},
        {108 ,4152},
        {111 ,4141},
        {110 ,4130},
        {118 ,4116},
        {116 ,4106},
        {125 ,4091},
        {119 ,4080},
        {123 ,4068},
        {122 ,4059},
        {127 ,4051},
        {139 ,4037},
        {137 ,4023},
        {134 ,4006},
        {133 ,3994},
        {142 ,3984},
        {144 ,3975},
        {141 ,3965},
        {139 ,3954},
        {134 ,3942},
        {134 ,3930},
        {127 ,3916},
        {120 ,3905},
        {114 ,3893},
        {104 ,3885},
        {106 ,3874},
        {106 ,3869},
        {112 ,3859},
        {99  ,3852},
        {106 ,3848},
        {103 ,3840},
        {106 ,3835},
        {105 ,3830},
        {106 ,3824},
        {106 ,3819},
        {111 ,3814},
        {108 ,3809},
        {109 ,3806},
        {116 ,3800},
        {116 ,3797},
        {114 ,3791},
        {116 ,3788},
        {116 ,3784},
        {116 ,3779},
        {116 ,3775},
        {119 ,3772},
        {119 ,3769},
        {118 ,3765},
        {116 ,3760},
        {116 ,3756},
        {123 ,3748},
        {117 ,3744},
        {113 ,3740},
        {116 ,3736},
        {118 ,3730},
        {114 ,3722},
        {117 ,3717},
        {124 ,3708},
        {121 ,3699},
        {119 ,3691},
        {119 ,3686},
        {121 ,3686},
        {123 ,3683},
        {126 ,3684},
        {135 ,3680},
        {129 ,3675},
        {143 ,3650},
        {133 ,3598},
        {141 ,3526},
        {147 ,3419},
        {163 ,3212}
    },
    {
        {177 ,4337},
        {177 ,4321},
        {178 ,4305},
        {180 ,4290},
        {177 ,4277},
        {180 ,4265},
        {182 ,4252},
        {180 ,4225},
        {182 ,4212},
        {183 ,4199},
        {182 ,4186},
        {187 ,4174},
        {185 ,4163},
        {188 ,4149},
        {192 ,4139},
        {192 ,4124},
        {197 ,4113},
        {205 ,4101},
        {203 ,4089},
        {195 ,4078},
        {193 ,4066},
        {197 ,4058},
        {200 ,4054},
        {203 ,4045},
        {207 ,4004},
        {203 ,3987},
        {202 ,3974},
        {200 ,3965},
        {190 ,3957},
        {178 ,3953},
        {175 ,3949},
        {172 ,3944},
        {170 ,3935},
        {172 ,3926},
        {172 ,3916},
        {172 ,3904},
        {173 ,3888},
        {175 ,3873},
        {175 ,3863},
        {175 ,3853},
        {178 ,3847},
        {178 ,3839},
        {180 ,3826},
        {183 ,3820},
        {182 ,3817},
        {183 ,3810},
        {183 ,3807},
        {183 ,3802},
        {182 ,3798},
        {185 ,3790},
        {187 ,3786},
        {185 ,3784},
        {182 ,3780},
        {180 ,3776},
        {182 ,3773},
        {183 ,3770},
        {188 ,3767},
        {185 ,3766},
        {190 ,3762},
        {190 ,3759},
        {185 ,3757},
        {187 ,3754},
        {193 ,3751},
        {202 ,3748},
        {217 ,3743},
        {233 ,3737},
        {238 ,3733},
        {238 ,3730},
        {260 ,3721},
        {278 ,3710},
        {230 ,3704},
        {210 ,3691},
        {200 ,3681},
        {193 ,3678},
        {188 ,3676},
        {183 ,3677},
        {183 ,3675},
        {183 ,3673},
        {180 ,3661},
        {178 ,3616},
        {178 ,3544},
        {177 ,3440},
        {268 ,3250}
    }
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[][85] = {
    {
        {76  ,4330},
        {76  ,4318},
        {79  ,4304},
        {80  ,4292},
        {82  ,4279},
        {82  ,4267},
        {75  ,4251},
        {79  ,4239},
        {82  ,4226},
        {82  ,4212},
        {83  ,4199},
        {83  ,4185},
        {83  ,4173},
        {89  ,4161},
        {78  ,4144},
        {91  ,4135},
        {82  ,4122},
        {88  ,4109},
        {81  ,4094},
        {89  ,4084},
        {78  ,4070},
        {87  ,4060},
        {80  ,4047},
        {91  ,4039},
        {90  ,4026},
        {92  ,4015},
        {90  ,4005},
        {91  ,3994},
        {94  ,3983},
        {94  ,3973},
        {104 ,3964},
        {106 ,3954},
        {104 ,3943},
        {94  ,3929},
        {86  ,3914},
        {85  ,3901},
        {75  ,3889},
        {87  ,3881},
        {75  ,3871},
        {76  ,3863},
        {88  ,3859},
        {83  ,3852},
        {81  ,3844},
        {87  ,3840},
        {86  ,3833},
        {80  ,3826},
        {84  ,3820},
        {85  ,3816},
        {87  ,3812},
        {88  ,3807},
        {89  ,3801},
        {90  ,3797},
        {87  ,3792},
        {88  ,3788},
        {93  ,3786},
        {90  ,3780},
        {90  ,3775},
        {88  ,3769},
        {81  ,3759},
        {86  ,3753},
        {86  ,3747},
        {87  ,3742},
        {83  ,3736},
        {82  ,3731},
        {83  ,3726},
        {86  ,3722},
        {87  ,3717},
        {86  ,3711},
        {81  ,3703},
        {84  ,3695},
        {79  ,3687},
        {80  ,3677},
        {81  ,3671},
        {83  ,3670},
        {87  ,3668},
        {84  ,3667},
        {91  ,3666},
        {91  ,3663},
        {88  ,3649},
        {86  ,3608},
        {94  ,3550},
        {102 ,3469},
        {118 ,3343}
    },
    {
        {110 ,4337},
        {113 ,4324},
        {113 ,4311},
        {113 ,4297},
        {113 ,4284},
        {115 ,4272},
        {115 ,4259},
        {120 ,4233},
        {115 ,4219},
        {118 ,4207},
        {120 ,4195},
        {120 ,4182},
        {118 ,4169},
        {115 ,4156},
        {120 ,4145},
        {120 ,4133},
        {123 ,4121},
        {120 ,4109},
        {125 ,4100},
        {115 ,4085},
        {122 ,4074},
        {125 ,4063},
        {122 ,4052},
        {128 ,4043},
        {127 ,4031},
        {128 ,4018},
        {128 ,4008},
        {130 ,4000},
        {133 ,3991},
        {130 ,3981},
        {135 ,3973},
        {138 ,3964},
        {145 ,3956},
        {145 ,3946},
        {150 ,3936},
        {148 ,3923},
        {123 ,3890},
        {120 ,3881},
        {118 ,3873},
        {118 ,3865},
        {118 ,3858},
        {118 ,3852},
        {115 ,3845},
        {118 ,3840},
        {118 ,3835},
        {118 ,3829},
        {118 ,3824},
        {120 ,3820},
        {118 ,3815},
        {123 ,3811},
        {123 ,3807},
        {123 ,3803},
        {125 ,3800},
        {123 ,3792},
        {125 ,3789},
        {128 ,3786},
        {125 ,3781},
        {123 ,3776},
        {120 ,3768},
        {123 ,3762},
        {118 ,3757},
        {118 ,3752},
        {115 ,3746},
        {118 ,3742},
        {115 ,3736},
        {118 ,3732},
        {120 ,3728},
        {118 ,3721},
        {120 ,3713},
        {118 ,3704},
        {120 ,3695},
        {113 ,3681},
        {118 ,3680},
        {118 ,3679},
        {120 ,3678},
        {120 ,3677},
        {123 ,3676},
        {125 ,3674},
        {125 ,3662},
        {125 ,3622},
        {133 ,3559},
        {145 ,3471},
        {188 ,3334}
    }
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] = {
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0},
    {0, 0}
};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

