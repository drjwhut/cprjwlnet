/*
//###########################################################################
//
// FILE:Constant.h
//
// DESCRIPTION:
//
//         including those variables used in the Communication test program
//
//###########################################################################
// $Author: Guangxin  zhang $
// $Date: March  31, 2008$
// $Target System: DF28335 APF $
// $Version: v1.0 $
//########################################################################
*/
#define DSP28_PLLCR    10
#define DSP28_DIVSEL   2
#define BUF_SIZE   16  // Sample buffer size

#define UA_Z	    2.5//28.5//25.5//12.5//7.5//16//UAB电压传感器零飘补偿	
#define UB_Z		8//5.5//38.5//.5//20//31
#define UC_Z        0

#define UA_Cal   0.405275//0.426453//0.41031   //0.44//1.4028//1.184
#define UB_Cal   0.409048//0.426571//0.44//1.4028//1.184
#define UC_Cal   0.397728//0.44//1.4028//1.184


#define Theta_SD 0.5
#define Theta_DB  11.3778			//计算角度用到的系数 1024/90==11.3777777

#define PLL_TS      0.00008

#define Sampl_Interval  0.08

const float SIN_CONST[64] = {
0.0000000, 0.0490677, 0.0980171, 0.14673, 0.19509, 0.24298, 0.290285, 0.33689
, 0.382683, 0.427555, 0.471397, 0.514103, 0.55557, 0.595699, 0.634393, 0.671559
, 0.707107, 0.740951, 0.77301, 0.803208, 0.83147, 0.857729, 0.881921, 0.903989
, 0.92388, 0.941544, 0.95694, 0.970031, 0.980785, 0.989177, 0.995185, 0.998795
, 1.000000, 0.998795, 0.995185, 0.989177, 0.980785, 0.970031, 0.95694, 0.941544
, 0.92388, 0.903989, 0.881921, 0.857729, 0.83147, 0.803208, 0.77301, 0.740951
, 0.707107, 0.671559, 0.634393, 0.595699, 0.55557, 0.514103, 0.471397, 0.427555
, 0.382683, 0.33689, 0.290285, 0.24298, 0.19509, 0.14673, 0.0980171, 0.0490677 
};

const float COS_CONST[64] = {
1.000000, 0.998795, 0.995185, 0.989177, 0.980785, 0.970031, 0.95694, 0.941544
, 0.92388, 0.903989, 0.881921, 0.857729, 0.83147, 0.803208, 0.77301, 0.740951
, 0.707107, 0.671559, 0.634393, 0.595699, 0.55557, 0.514103, 0.471397, 0.427555
, 0.382683, 0.33689, 0.290285, 0.24298, 0.19509, 0.14673, 0.0980171, 0.0490677
, 0.000000, -0.0490677, -0.0980171, -0.14673, -0.19509, -0.24298, -0.290285
, -0.33689, -0.382683, -0.427555, -0.471397, -0.514103, -0.55557, -0.595699
, -0.634393, -0.671559, -0.707107, -0.740951, -0.77301, -0.803208, -0.83147
, -0.857729, -0.881921, -0.903989, -0.92388, -0.941544, -0.95694, -0.970031
, -0.980785, -0.989177, -0.995185, -0.998795
};
const  int  SQRT_TABLE[501]={
0,4,6,7,8,10,10,11,12,13,14,14,15,16,16,17,17,18,18,19,20,20,20,21,21,22
,22,23,23,24,24,24,25,25,26,26,26,27,27,27,28,28,28,29,29,30,30,30,30,31,31
,31,32,32,32,33,33,33,34,34,34,34,35,35,35,36,36,36,36,37,37,37,37,38,38,38
,38,39,39,39,40,40,40,40,40,41,41,41,41,42,42,42,42,43,43,43,43,44,44,44,44
,44,45,45,45,45,46,46,46,46,46,47,47,47,47,47,48,48,48,48,48,49,49,49,49,50
,50,50,50,50,50,51,51,51,51,51,52,52,52,52,52,53,53,53,53,53,54,54,54,54,54
,54,55,55,55,55,55,56,56,56,56,56,56,57,57,57,57,57,57,58,58,58,58,58,58,59
,59,59,59,59,60,60,60,60,60,60,60,61,61,61,61,61,61,62,62,62,62,62,62,63,63
,63,63,63,63,64,64,64,64,64,64,64,65,65,65,65,65,65,66,66,66,66,66,66,66,67
,67,67,67,67,67,67,68,68,68,68,68,68,68,69,69,69,69,69,69,70,70,70,70,70,70
,70,70,71,71,71,71,71,71,71,72,72,72,72,72,72,72,73,73,73,73,73,73,73,74,74
,74,74,74,74,74,74,75,75,75,75,75,75,75,76,76,76,76,76,76,76,76,77,77,77,77
,77,77,77,77,78,78,78,78,78,78,78,78,79,79,79,79,79,79,79,80,80,80,80,80,80
,80,80,80,81,81,81,81,81,81,81,81,82,82,82,82,82,82,82,82,83,83,83,83,83,83
,83,83,84,84,84,84,84,84,84,84,84,85,85,85,85,85,85,85,85,86,86,86,86,86,86
,86,86,86,87,87,87,87,87,87,87,87,87,88,88,88,88,88,88,88,88,88,89,89,89,89
,89,89,89,89,90,90,90,90,90,90,90,90,90,90,91,91,91,91,91,91,91,91,91,92,92
,92,92,92,92,92,92,92,93,93,93,93,93,93,93,93,93,94,94,94,94,94,94,94,94,94
,94,95,95,95,95,95,95,95,95,95,96,96,96,96,96,96,96,96,96,96,97,97,97,97,97
,97,97,97,97,97,98,98,98,98,98,98,98,98,98,98,99,99,99,99,99,99,99,99,99,100 
};
const float SIN_TABLE[1025]={ 
0.0000000 ,0.0015340 ,0.0030680 ,0.0046019 ,0.0061359 ,0.0076698 ,0.0092038 
,0.0107377 ,0.0122715 ,0.0138054 ,0.0153392 ,0.0168730 ,0.0184067 ,0.0199404 
,0.0214741 ,0.0230077 ,0.0245412 ,0.0260747 ,0.0276081 ,0.0291415 ,0.0306748 
,0.0322080 ,0.0337412 ,0.0352742 ,0.0368072 ,0.0383401 ,0.0398729 ,0.0414056 
,0.0429383 ,0.0444708 ,0.0460032 ,0.0475355 ,0.0490677 ,0.0505997 ,0.0521317 
,0.0536635 ,0.0551952 ,0.0567268 ,0.0582583 ,0.0597896 ,0.0613207 ,0.0628518 
,0.0643826 ,0.0659134 ,0.0674439 ,0.0689743 ,0.0705046 ,0.0720347 ,0.0735646 
,0.0750943 ,0.0766239 ,0.0781532 ,0.0796824 ,0.0812114 ,0.0827403 ,0.0842689 
,0.0857973 ,0.0873255 ,0.0888536 ,0.0903814 ,0.0919090 ,0.0934363 ,0.0949635 
,0.0964904 ,0.0980171 ,0.0995436 ,0.1010699 ,0.1025959 ,0.1041216 ,0.1056472 
,0.1071724 ,0.1086974 ,0.1102222 ,0.1117467 ,0.1132710 ,0.1147949 ,0.1163186 
,0.1178421 ,0.1193652 ,0.1208881 ,0.1224107 ,0.1239330 ,0.1254550 ,0.1269767 
,0.1284981 ,0.1300192 ,0.1315400 ,0.1330605 ,0.1345807 ,0.1361006 ,0.1376201 
,0.1391393 ,0.1406582 ,0.1421768 ,0.1436950 ,0.1452129 ,0.1467305 ,0.1482477 
,0.1497645 ,0.1512810 ,0.1527972 ,0.1543130 ,0.1558284 ,0.1573435 ,0.1588581 
,0.1603725 ,0.1618864 ,0.1633999 ,0.1649131 ,0.1664259 ,0.1679383 ,0.1694503 
,0.1709619 ,0.1724731 ,0.1739839 ,0.1754943 ,0.1770042 ,0.1785138 ,0.1800229 
,0.1815316 ,0.1830399 ,0.1845477 ,0.1860552 ,0.1875621 ,0.1890687 ,0.1905748 
,0.1920804 ,0.1935856 ,0.1950903 ,0.1965946 ,0.1980984 ,0.1996018 ,0.2011046 
,0.2026070 ,0.2041090 ,0.2056104 ,0.2071114 ,0.2086119 ,0.2101118 ,0.2116113 
,0.2131103 ,0.2146088 ,0.2161068 ,0.2176043 ,0.2191012 ,0.2205977 ,0.2220936 
,0.2235890 ,0.2250839 ,0.2265783 ,0.2280721 ,0.2295654 ,0.2310581 ,0.2325503 
,0.2340420 ,0.2355331 ,0.2370236 ,0.2385136 ,0.2400030 ,0.2414919 ,0.2429802 
,0.2444679 ,0.2459550 ,0.2474416 ,0.2489276 ,0.2504130 ,0.2518978 ,0.2533820 
,0.2548657 ,0.2563487 ,0.2578311 ,0.2593129 ,0.2607941 ,0.2622747 ,0.2637547 
,0.2652340 ,0.2667128 ,0.2681909 ,0.2696683 ,0.2711452 ,0.2726214 ,0.2740969 
,0.2755718 ,0.2770461 ,0.2785197 ,0.2799926 ,0.2814649 ,0.2829366 ,0.2844075 
,0.2858778 ,0.2873475 ,0.2888164 ,0.2902847 ,0.2917523 ,0.2932192 ,0.2946854 
,0.2961509 ,0.2976157 ,0.2990798 ,0.3005432 ,0.3020059 ,0.3034679 ,0.3049292 
,0.3063898 ,0.3078496 ,0.3093088 ,0.3107672 ,0.3122248 ,0.3136817 ,0.3151379 
,0.3165934 ,0.3180481 ,0.3195020 ,0.3209552 ,0.3224077 ,0.3238594 ,0.3253103 
,0.3267604 ,0.3282098 ,0.3296585 ,0.3311063 ,0.3325534 ,0.3339996 ,0.3354451 
,0.3368899 ,0.3383338 ,0.3397769 ,0.3412192 ,0.3426607 ,0.3441014 ,0.3455413 
,0.3469804 ,0.3484187 ,0.3498561 ,0.3512928 ,0.3527286 ,0.3541635 ,0.3555977 
,0.3570310 ,0.3584634 ,0.3598950 ,0.3613258 ,0.3627557 ,0.3641848 ,0.3656130 
,0.3670403 ,0.3684668 ,0.3698924 ,0.3713172 ,0.3727411 ,0.3741641 ,0.3755862 
,0.3770074 ,0.3784278 ,0.3798472 ,0.3812658 ,0.3826834 ,0.3841002 ,0.3855161 
,0.3869310 ,0.3883450 ,0.3897582 ,0.3911704 ,0.3925817 ,0.3939920 ,0.3954015 
,0.3968100 ,0.3982176 ,0.3996242 ,0.4010299 ,0.4024346 ,0.4038385 ,0.4052413 
,0.4066432 ,0.4080442 ,0.4094441 ,0.4108432 ,0.4122412 ,0.4136383 ,0.4150344 
,0.4164296 ,0.4178237 ,0.4192169 ,0.4206091 ,0.4220003 ,0.4233905 ,0.4247797 
,0.4261679 ,0.4275551 ,0.4289413 ,0.4303265 ,0.4317107 ,0.4330938 ,0.4344760 
,0.4358571 ,0.4372372 ,0.4386162 ,0.4399943 ,0.4413713 ,0.4427472 ,0.4441221 
,0.4454960 ,0.4468688 ,0.4482406 ,0.4496113 ,0.4509810 ,0.4523496 ,0.4537171 
,0.4550836 ,0.4564490 ,0.4578133 ,0.4591765 ,0.4605387 ,0.4618998 ,0.4632598 
,0.4646187 ,0.4659765 ,0.4673332 ,0.4686888 ,0.4700433 ,0.4713967 ,0.4727490 
,0.4741002 ,0.4754503 ,0.4767992 ,0.4781471 ,0.4794938 ,0.4808393 ,0.4821838 
,0.4835271 ,0.4848692 ,0.4862103 ,0.4875502 ,0.4888889 ,0.4902265 ,0.4915629 
,0.4928982 ,0.4942323 ,0.4955653 ,0.4968970 ,0.4982277 ,0.4995571 ,0.5008854 
,0.5022125 ,0.5035384 ,0.5048631 ,0.5061866 ,0.5075090 ,0.5088301 ,0.5101501 
,0.5114688 ,0.5127864 ,0.5141027 ,0.5154179 ,0.5167318 ,0.5180445 ,0.5193560 
,0.5206663 ,0.5219753 ,0.5232831 ,0.5245897 ,0.5258950 ,0.5271991 ,0.5285020 
,0.5298036 ,0.5311040 ,0.5324031 ,0.5337010 ,0.5349976 ,0.5362930 ,0.5375871 
,0.5388799 ,0.5401715 ,0.5414618 ,0.5427508 ,0.5440385 ,0.5453250 ,0.5466102 
,0.5478941 ,0.5491767 ,0.5504580 ,0.5517380 ,0.5530167 ,0.5542941 ,0.5555702 
,0.5568450 ,0.5581185 ,0.5593907 ,0.5606616 ,0.5619311 ,0.5631993 ,0.5644662 
,0.5657318 ,0.5669960 ,0.5682589 ,0.5695205 ,0.5707807 ,0.5720396 ,0.5732972 
,0.5745534 ,0.5758082 ,0.5770617 ,0.5783138 ,0.5795646 ,0.5808140 ,0.5820620 
,0.5833086 ,0.5845539 ,0.5857979 ,0.5870404 ,0.5882815 ,0.5895213 ,0.5907597 
,0.5919967 ,0.5932323 ,0.5944665 ,0.5956993 ,0.5969307 ,0.5981607 ,0.5993893 
,0.6006165 ,0.6018422 ,0.6030666 ,0.6042895 ,0.6055110 ,0.6067311 ,0.6079498 
,0.6091670 ,0.6103828 ,0.6115972 ,0.6128101 ,0.6140216 ,0.6152316 ,0.6164402 
,0.6176473 ,0.6188530 ,0.6200572 ,0.6212600 ,0.6224613 ,0.6236611 ,0.6248595 
,0.6260564 ,0.6272518 ,0.6284458 ,0.6296382 ,0.6308292 ,0.6320187 ,0.6332068 
,0.6343933 ,0.6355783 ,0.6367619 ,0.6379439 ,0.6391244 ,0.6403035 ,0.6414810 
,0.6426570 ,0.6438315 ,0.6450045 ,0.6461760 ,0.6473460 ,0.6485144 ,0.6496813 
,0.6508467 ,0.6520105 ,0.6531728 ,0.6543336 ,0.6554928 ,0.6566505 ,0.6578067 
,0.6589613 ,0.6601143 ,0.6612658 ,0.6624158 ,0.6635642 ,0.6647110 ,0.6658562 
,0.6669999 ,0.6681420 ,0.6692826 ,0.6704216 ,0.6715590 ,0.6726948 ,0.6738290 
,0.6749616 ,0.6760927 ,0.6772222 ,0.6783500 ,0.6794763 ,0.6806010 ,0.6817241 
,0.6828455 ,0.6839654 ,0.6850837 ,0.6862003 ,0.6873153 ,0.6884287 ,0.6895405 
,0.6906507 ,0.6917593 ,0.6928662 ,0.6939715 ,0.6950751 ,0.6961771 ,0.6972775 
,0.6983762 ,0.6994733 ,0.7005688 ,0.7016626 ,0.7027547 ,0.7038452 ,0.7049341 
,0.7060213 ,0.7071068 ,0.7081906 ,0.7092728 ,0.7103533 ,0.7114322 ,0.7125094 
,0.7135849 ,0.7146587 ,0.7157308 ,0.7168013 ,0.7178700 ,0.7189371 ,0.7200025 
,0.7210662 ,0.7221282 ,0.7231885 ,0.7242471 ,0.7253040 ,0.7263592 ,0.7274126 
,0.7284644 ,0.7295144 ,0.7305628 ,0.7316094 ,0.7326543 ,0.7336974 ,0.7347389 
,0.7357786 ,0.7368166 ,0.7378528 ,0.7388873 ,0.7399201 ,0.7409511 ,0.7419804 
,0.7430079 ,0.7440337 ,0.7450578 ,0.7460801 ,0.7471006 ,0.7481194 ,0.7491364 
,0.7501516 ,0.7511651 ,0.7521768 ,0.7531868 ,0.7541950 ,0.7552014 ,0.7562060 
,0.7572088 ,0.7582099 ,0.7592092 ,0.7602067 ,0.7612024 ,0.7621963 ,0.7631884 
,0.7641787 ,0.7651673 ,0.7661540 ,0.7671389 ,0.7681220 ,0.7691033 ,0.7700828 
,0.7710605 ,0.7720364 ,0.7730104 ,0.7739827 ,0.7749531 ,0.7759217 ,0.7768885 
,0.7778534 ,0.7788165 ,0.7797778 ,0.7807372 ,0.7816948 ,0.7826506 ,0.7836045 
,0.7845566 ,0.7855068 ,0.7864552 ,0.7874017 ,0.7883464 ,0.7892892 ,0.7902302 
,0.7911693 ,0.7921066 ,0.7930420 ,0.7939755 ,0.7949071 ,0.7958369 ,0.7967648 
,0.7976908 ,0.7986150 ,0.7995373 ,0.8004577 ,0.8013762 ,0.8022928 ,0.8032075 
,0.8041204 ,0.8050313 ,0.8059404 ,0.8068475 ,0.8077528 ,0.8086562 ,0.8095576 
,0.8104572 ,0.8113548 ,0.8122506 ,0.8131444 ,0.8140363 ,0.8149263 ,0.8158144 
,0.8167006 ,0.8175848 ,0.8184671 ,0.8193475 ,0.8202260 ,0.8211025 ,0.8219771 
,0.8228498 ,0.8237205 ,0.8245893 ,0.8254561 ,0.8263211 ,0.8271840 ,0.8280450 
,0.8289041 ,0.8297612 ,0.8306164 ,0.8314696 ,0.8323209 ,0.8331702 ,0.8340175 
,0.8348629 ,0.8357063 ,0.8365477 ,0.8373872 ,0.8382247 ,0.8390602 ,0.8398938 
,0.8407254 ,0.8415550 ,0.8423826 ,0.8432082 ,0.8440319 ,0.8448536 ,0.8456732 
,0.8464909 ,0.8473066 ,0.8481203 ,0.8489321 ,0.8497418 ,0.8505495 ,0.8513552 
,0.8521589 ,0.8529606 ,0.8537603 ,0.8545580 ,0.8553537 ,0.8561473 ,0.8569390 
,0.8577286 ,0.8585162 ,0.8593018 ,0.8600854 ,0.8608669 ,0.8616465 ,0.8624240 
,0.8631994 ,0.8639729 ,0.8647443 ,0.8655136 ,0.8662809 ,0.8670462 ,0.8678095 
,0.8685707 ,0.8693299 ,0.8700870 ,0.8708421 ,0.8715951 ,0.8723461 ,0.8730950 
,0.8738418 ,0.8745866 ,0.8753294 ,0.8760701 ,0.8768087 ,0.8775453 ,0.8782798 
,0.8790122 ,0.8797426 ,0.8804709 ,0.8811971 ,0.8819213 ,0.8826433 ,0.8833633 
,0.8840813 ,0.8847971 ,0.8855109 ,0.8862225 ,0.8869321 ,0.8876396 ,0.8883450 
,0.8890484 ,0.8897496 ,0.8904487 ,0.8911458 ,0.8918407 ,0.8925336 ,0.8932243 
,0.8939129 ,0.8945995 ,0.8952839 ,0.8959662 ,0.8966465 ,0.8973246 ,0.8980006 
,0.8986745 ,0.8993462 ,0.9000159 ,0.9006834 ,0.9013488 ,0.9020121 ,0.9026733 
,0.9033324 ,0.9039893 ,0.9046441 ,0.9052968 ,0.9059473 ,0.9065957 ,0.9072420 
,0.9078861 ,0.9085281 ,0.9091680 ,0.9098057 ,0.9104413 ,0.9110747 ,0.9117060 
,0.9123352 ,0.9129622 ,0.9135870 ,0.9142098 ,0.9148303 ,0.9154487 ,0.9160650 
,0.9166791 ,0.9172910 ,0.9179008 ,0.9185084 ,0.9191138 ,0.9197171 ,0.9203183 
,0.9209172 ,0.9215140 ,0.9221087 ,0.9227011 ,0.9232914 ,0.9238795 ,0.9244655 
,0.9250492 ,0.9256308 ,0.9262102 ,0.9267875 ,0.9273625 ,0.9279354 ,0.9285061 
,0.9290746 ,0.9296409 ,0.9302050 ,0.9307670 ,0.9313267 ,0.9318843 ,0.9324396 
,0.9329928 ,0.9335438 ,0.9340925 ,0.9346391 ,0.9351835 ,0.9357257 ,0.9362657 
,0.9368034 ,0.9373390 ,0.9378724 ,0.9384035 ,0.9389325 ,0.9394592 ,0.9399837 
,0.9405061 ,0.9410262 ,0.9415441 ,0.9420597 ,0.9425732 ,0.9430844 ,0.9435935 
,0.9441003 ,0.9446048 ,0.9451072 ,0.9456073 ,0.9461052 ,0.9466009 ,0.9470944 
,0.9475856 ,0.9480746 ,0.9485613 ,0.9490459 ,0.9495282 ,0.9500082 ,0.9504861 
,0.9509617 ,0.9514350 ,0.9519061 ,0.9523750 ,0.9528416 ,0.9533060 ,0.9537682 
,0.9542281 ,0.9546858 ,0.9551412 ,0.9555943 ,0.9560452 ,0.9564939 ,0.9569403 
,0.9573845 ,0.9578264 ,0.9582661 ,0.9587035 ,0.9591386 ,0.9595715 ,0.9600021 
,0.9604305 ,0.9608566 ,0.9612805 ,0.9617021 ,0.9621214 ,0.9625385 ,0.9629533 
,0.9633658 ,0.9637761 ,0.9641841 ,0.9645898 ,0.9649932 ,0.9653944 ,0.9657934 
,0.9661900 ,0.9665844 ,0.9669765 ,0.9673663 ,0.9677538 ,0.9681391 ,0.9685221 
,0.9689028 ,0.9692812 ,0.9696574 ,0.9700313 ,0.9704028 ,0.9707721 ,0.9711392 
,0.9715039 ,0.9718663 ,0.9722265 ,0.9725844 ,0.9729399 ,0.9732932 ,0.9736442 
,0.9739930 ,0.9743394 ,0.9746835 ,0.9750253 ,0.9753649 ,0.9757021 ,0.9760371 
,0.9763697 ,0.9767001 ,0.9770281 ,0.9773539 ,0.9776774 ,0.9779985 ,0.9783174 
,0.9786339 ,0.9789482 ,0.9792601 ,0.9795698 ,0.9798771 ,0.9801821 ,0.9804849 
,0.9807853 ,0.9810834 ,0.9813792 ,0.9816727 ,0.9819639 ,0.9822527 ,0.9825393 
,0.9828235 ,0.9831055 ,0.9833851 ,0.9836624 ,0.9839374 ,0.9842101 ,0.9844805 
,0.9847485 ,0.9850142 ,0.9852776 ,0.9855387 ,0.9857975 ,0.9860540 ,0.9863081 
,0.9865599 ,0.9868094 ,0.9870566 ,0.9873014 ,0.9875439 ,0.9877841 ,0.9880220 
,0.9882576 ,0.9884908 ,0.9887217 ,0.9889503 ,0.9891765 ,0.9894004 ,0.9896220 
,0.9898413 ,0.9900582 ,0.9902728 ,0.9904851 ,0.9906950 ,0.9909026 ,0.9911079 
,0.9913109 ,0.9915115 ,0.9917098 ,0.9919057 ,0.9920993 ,0.9922906 ,0.9924795 
,0.9926661 ,0.9928504 ,0.9930323 ,0.9932119 ,0.9933892 ,0.9935641 ,0.9937367 
,0.9939070 ,0.9940749 ,0.9942404 ,0.9944037 ,0.9945646 ,0.9947231 ,0.9948793 
,0.9950332 ,0.9951847 ,0.9953339 ,0.9954808 ,0.9956253 ,0.9957674 ,0.9959072 
,0.9960447 ,0.9961798 ,0.9963126 ,0.9964431 ,0.9965711 ,0.9966969 ,0.9968203 
,0.9969414 ,0.9970601 ,0.9971764 ,0.9972905 ,0.9974021 ,0.9975115 ,0.9976184 
,0.9977231 ,0.9978253 ,0.9979253 ,0.9980229 ,0.9981181 ,0.9982110 ,0.9983015 
,0.9983897 ,0.9984756 ,0.9985591 ,0.9986402 ,0.9987190 ,0.9987955 ,0.9988695 
,0.9989413 ,0.9990107 ,0.9990777 ,0.9991424 ,0.9992048 ,0.9992647 ,0.9993224 
,0.9993777 ,0.9994306 ,0.9994812 ,0.9995294 ,0.9995753 ,0.9996188 ,0.9996600 
,0.9996988 ,0.9997353 ,0.9997694 ,0.9998012 ,0.9998306 ,0.9998576 ,0.9998823 
,0.9999047 ,0.9999247 ,0.9999423 ,0.9999576 ,0.9999706 ,0.9999812 ,0.9999894 
,0.9999953 ,0.9999988 ,1.0000000 
} ;















