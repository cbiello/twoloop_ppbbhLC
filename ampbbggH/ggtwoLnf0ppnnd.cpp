#include <complex>
#include <qd/qd_real.h>
#include <iostream>
#include "ampgg.h"
#include "ysubsgg2Lnf0ppnn/listYgg2Lnf0ppnn.h"
    std::complex<dd_real> ggtwoLnf0ppnnd(std::complex<dd_real> H[70] ,std::complex<dd_real> SQRTS[3],ExVariables ex){
    std::complex<dd_real> ex1=ex.ex1;
    std::complex<dd_real> ex2=ex.ex2;
    std::complex<dd_real> ex3=ex.ex3;
    std::complex<dd_real> ex4=ex.ex4;
    std::complex<dd_real> ex5=ex.ex5;
    std::complex<dd_real> ex6=ex.ex6;

std::complex<dd_real> Ygg2Lnf0ppnn[229];
Ygg2Lnf0ppnn[1] = Ygg2Lnf0ppnn1(ex);
Ygg2Lnf0ppnn[2] = Ygg2Lnf0ppnn2(ex);
Ygg2Lnf0ppnn[3] = Ygg2Lnf0ppnn3(ex);
Ygg2Lnf0ppnn[4] = Ygg2Lnf0ppnn4(ex);
Ygg2Lnf0ppnn[5] = Ygg2Lnf0ppnn5(ex);
Ygg2Lnf0ppnn[6] = Ygg2Lnf0ppnn6(ex);
Ygg2Lnf0ppnn[7] = Ygg2Lnf0ppnn7(ex);
Ygg2Lnf0ppnn[8] = Ygg2Lnf0ppnn8(ex);
Ygg2Lnf0ppnn[9] = Ygg2Lnf0ppnn9(ex);
Ygg2Lnf0ppnn[10] = Ygg2Lnf0ppnn10(ex);
Ygg2Lnf0ppnn[11] = Ygg2Lnf0ppnn11(ex);
Ygg2Lnf0ppnn[12] = Ygg2Lnf0ppnn12(ex);
Ygg2Lnf0ppnn[13] = Ygg2Lnf0ppnn13(ex);
Ygg2Lnf0ppnn[14] = Ygg2Lnf0ppnn14(ex);
Ygg2Lnf0ppnn[15] = Ygg2Lnf0ppnn15(ex);
Ygg2Lnf0ppnn[16] = Ygg2Lnf0ppnn16(ex);
Ygg2Lnf0ppnn[17] = Ygg2Lnf0ppnn17(ex);
Ygg2Lnf0ppnn[18] = Ygg2Lnf0ppnn18(ex);
Ygg2Lnf0ppnn[19] = Ygg2Lnf0ppnn19(ex);
Ygg2Lnf0ppnn[20] = Ygg2Lnf0ppnn20(ex);
Ygg2Lnf0ppnn[21] = Ygg2Lnf0ppnn21(ex);
Ygg2Lnf0ppnn[22] = Ygg2Lnf0ppnn22(ex);
Ygg2Lnf0ppnn[23] = Ygg2Lnf0ppnn23(ex);
Ygg2Lnf0ppnn[24] = Ygg2Lnf0ppnn24(ex);
Ygg2Lnf0ppnn[25] = Ygg2Lnf0ppnn25(ex);
Ygg2Lnf0ppnn[26] = Ygg2Lnf0ppnn26(ex);
Ygg2Lnf0ppnn[27] = Ygg2Lnf0ppnn27(ex);
Ygg2Lnf0ppnn[28] = Ygg2Lnf0ppnn28(ex);
Ygg2Lnf0ppnn[29] = Ygg2Lnf0ppnn29(ex);
Ygg2Lnf0ppnn[30] = Ygg2Lnf0ppnn30(ex);
Ygg2Lnf0ppnn[31] = Ygg2Lnf0ppnn31(ex);
Ygg2Lnf0ppnn[32] = Ygg2Lnf0ppnn32(ex);
Ygg2Lnf0ppnn[33] = Ygg2Lnf0ppnn33(ex);
Ygg2Lnf0ppnn[34] = Ygg2Lnf0ppnn34(ex);
Ygg2Lnf0ppnn[35] = Ygg2Lnf0ppnn35(ex);
Ygg2Lnf0ppnn[36] = Ygg2Lnf0ppnn36(ex);
Ygg2Lnf0ppnn[37] = Ygg2Lnf0ppnn37(ex);
Ygg2Lnf0ppnn[38] = Ygg2Lnf0ppnn38(ex);
Ygg2Lnf0ppnn[39] = Ygg2Lnf0ppnn39(ex);
Ygg2Lnf0ppnn[40] = Ygg2Lnf0ppnn40(ex);
Ygg2Lnf0ppnn[41] = Ygg2Lnf0ppnn41(ex);
Ygg2Lnf0ppnn[42] = Ygg2Lnf0ppnn42(ex);
Ygg2Lnf0ppnn[43] = Ygg2Lnf0ppnn43(ex);
Ygg2Lnf0ppnn[44] = Ygg2Lnf0ppnn44(ex);
Ygg2Lnf0ppnn[45] = Ygg2Lnf0ppnn45(ex);
Ygg2Lnf0ppnn[46] = Ygg2Lnf0ppnn46(ex);
Ygg2Lnf0ppnn[47] = Ygg2Lnf0ppnn47(ex);
Ygg2Lnf0ppnn[48] = Ygg2Lnf0ppnn48(ex);
Ygg2Lnf0ppnn[49] = Ygg2Lnf0ppnn49(ex);
Ygg2Lnf0ppnn[50] = Ygg2Lnf0ppnn50(ex);
Ygg2Lnf0ppnn[51] = Ygg2Lnf0ppnn51(ex);
Ygg2Lnf0ppnn[52] = Ygg2Lnf0ppnn52(ex);
Ygg2Lnf0ppnn[53] = Ygg2Lnf0ppnn53(ex);
Ygg2Lnf0ppnn[54] = Ygg2Lnf0ppnn54(ex);
Ygg2Lnf0ppnn[55] = Ygg2Lnf0ppnn55(ex);
Ygg2Lnf0ppnn[56] = Ygg2Lnf0ppnn56(ex);
Ygg2Lnf0ppnn[57] = Ygg2Lnf0ppnn57(ex);
Ygg2Lnf0ppnn[58] = Ygg2Lnf0ppnn58(ex);
Ygg2Lnf0ppnn[59] = Ygg2Lnf0ppnn59(ex);
Ygg2Lnf0ppnn[60] = Ygg2Lnf0ppnn60(ex);
Ygg2Lnf0ppnn[61] = Ygg2Lnf0ppnn61(ex);
Ygg2Lnf0ppnn[62] = Ygg2Lnf0ppnn62(ex);
Ygg2Lnf0ppnn[63] = Ygg2Lnf0ppnn63(ex);
Ygg2Lnf0ppnn[64] = Ygg2Lnf0ppnn64(ex);
Ygg2Lnf0ppnn[65] = Ygg2Lnf0ppnn65(ex);
Ygg2Lnf0ppnn[66] = Ygg2Lnf0ppnn66(ex);
Ygg2Lnf0ppnn[67] = Ygg2Lnf0ppnn67(ex);
Ygg2Lnf0ppnn[68] = Ygg2Lnf0ppnn68(ex);
Ygg2Lnf0ppnn[69] = Ygg2Lnf0ppnn69(ex);
Ygg2Lnf0ppnn[70] = Ygg2Lnf0ppnn70(ex);
Ygg2Lnf0ppnn[71] = Ygg2Lnf0ppnn71(ex);
Ygg2Lnf0ppnn[72] = Ygg2Lnf0ppnn72(ex);
Ygg2Lnf0ppnn[73] = Ygg2Lnf0ppnn73(ex);
Ygg2Lnf0ppnn[74] = Ygg2Lnf0ppnn74(ex);
Ygg2Lnf0ppnn[75] = Ygg2Lnf0ppnn75(ex);
Ygg2Lnf0ppnn[76] = Ygg2Lnf0ppnn76(ex);
Ygg2Lnf0ppnn[77] = Ygg2Lnf0ppnn77(ex);
Ygg2Lnf0ppnn[78] = Ygg2Lnf0ppnn78(ex);
Ygg2Lnf0ppnn[79] = Ygg2Lnf0ppnn79(ex);
Ygg2Lnf0ppnn[80] = Ygg2Lnf0ppnn80(ex);
Ygg2Lnf0ppnn[81] = Ygg2Lnf0ppnn81(ex);
Ygg2Lnf0ppnn[82] = Ygg2Lnf0ppnn82(ex);
Ygg2Lnf0ppnn[83] = Ygg2Lnf0ppnn83(ex);
Ygg2Lnf0ppnn[84] = Ygg2Lnf0ppnn84(ex);
Ygg2Lnf0ppnn[85] = Ygg2Lnf0ppnn85(ex);
Ygg2Lnf0ppnn[86] = Ygg2Lnf0ppnn86(ex);
Ygg2Lnf0ppnn[87] = Ygg2Lnf0ppnn87(ex);
Ygg2Lnf0ppnn[88] = Ygg2Lnf0ppnn88(ex);
Ygg2Lnf0ppnn[89] = Ygg2Lnf0ppnn89(ex);
Ygg2Lnf0ppnn[90] = Ygg2Lnf0ppnn90(ex);
Ygg2Lnf0ppnn[91] = Ygg2Lnf0ppnn91(ex);
Ygg2Lnf0ppnn[92] = Ygg2Lnf0ppnn92(ex);
Ygg2Lnf0ppnn[93] = Ygg2Lnf0ppnn93(ex);
Ygg2Lnf0ppnn[94] = Ygg2Lnf0ppnn94(ex);
Ygg2Lnf0ppnn[95] = Ygg2Lnf0ppnn95(ex);
Ygg2Lnf0ppnn[96] = Ygg2Lnf0ppnn96(ex);
Ygg2Lnf0ppnn[97] = Ygg2Lnf0ppnn97(ex);
Ygg2Lnf0ppnn[98] = Ygg2Lnf0ppnn98(ex);
Ygg2Lnf0ppnn[99] = Ygg2Lnf0ppnn99(ex);
Ygg2Lnf0ppnn[100] = Ygg2Lnf0ppnn100(ex);
Ygg2Lnf0ppnn[101] = Ygg2Lnf0ppnn101(ex);
Ygg2Lnf0ppnn[102] = Ygg2Lnf0ppnn102(ex);
Ygg2Lnf0ppnn[103] = Ygg2Lnf0ppnn103(ex);
Ygg2Lnf0ppnn[104] = Ygg2Lnf0ppnn104(ex);
Ygg2Lnf0ppnn[105] = Ygg2Lnf0ppnn105(ex);
Ygg2Lnf0ppnn[106] = Ygg2Lnf0ppnn106(ex);
Ygg2Lnf0ppnn[107] = Ygg2Lnf0ppnn107(ex);
Ygg2Lnf0ppnn[108] = Ygg2Lnf0ppnn108(ex);
Ygg2Lnf0ppnn[109] = Ygg2Lnf0ppnn109(ex);
Ygg2Lnf0ppnn[110] = Ygg2Lnf0ppnn110(ex);
Ygg2Lnf0ppnn[111] = Ygg2Lnf0ppnn111(ex);
Ygg2Lnf0ppnn[112] = Ygg2Lnf0ppnn112(ex);
Ygg2Lnf0ppnn[113] = Ygg2Lnf0ppnn113(ex);
Ygg2Lnf0ppnn[114] = Ygg2Lnf0ppnn114(ex);
Ygg2Lnf0ppnn[115] = Ygg2Lnf0ppnn115(ex);
Ygg2Lnf0ppnn[116] = Ygg2Lnf0ppnn116(ex);
Ygg2Lnf0ppnn[117] = Ygg2Lnf0ppnn117(ex);
Ygg2Lnf0ppnn[118] = Ygg2Lnf0ppnn118(ex);
Ygg2Lnf0ppnn[119] = Ygg2Lnf0ppnn119(ex);
Ygg2Lnf0ppnn[120] = Ygg2Lnf0ppnn120(ex);
Ygg2Lnf0ppnn[121] = Ygg2Lnf0ppnn121(ex);
Ygg2Lnf0ppnn[122] = Ygg2Lnf0ppnn122(ex);
Ygg2Lnf0ppnn[123] = Ygg2Lnf0ppnn123(ex);
Ygg2Lnf0ppnn[124] = Ygg2Lnf0ppnn124(ex);
Ygg2Lnf0ppnn[125] = Ygg2Lnf0ppnn125(ex);
Ygg2Lnf0ppnn[126] = Ygg2Lnf0ppnn126(ex);
Ygg2Lnf0ppnn[127] = Ygg2Lnf0ppnn127(ex);
Ygg2Lnf0ppnn[128] = Ygg2Lnf0ppnn128(ex);
Ygg2Lnf0ppnn[129] = Ygg2Lnf0ppnn129(ex);
Ygg2Lnf0ppnn[130] = Ygg2Lnf0ppnn130(ex);
Ygg2Lnf0ppnn[131] = Ygg2Lnf0ppnn131(ex);
Ygg2Lnf0ppnn[132] = Ygg2Lnf0ppnn132(ex);
Ygg2Lnf0ppnn[133] = Ygg2Lnf0ppnn133(ex);
Ygg2Lnf0ppnn[134] = Ygg2Lnf0ppnn134(ex);
Ygg2Lnf0ppnn[135] = Ygg2Lnf0ppnn135(ex);
Ygg2Lnf0ppnn[136] = Ygg2Lnf0ppnn136(ex);
Ygg2Lnf0ppnn[137] = Ygg2Lnf0ppnn137(ex);
Ygg2Lnf0ppnn[138] = Ygg2Lnf0ppnn138(ex);
Ygg2Lnf0ppnn[139] = Ygg2Lnf0ppnn139(ex);
Ygg2Lnf0ppnn[140] = Ygg2Lnf0ppnn140(ex);
Ygg2Lnf0ppnn[141] = Ygg2Lnf0ppnn141(ex);
Ygg2Lnf0ppnn[142] = Ygg2Lnf0ppnn142(ex);
Ygg2Lnf0ppnn[143] = Ygg2Lnf0ppnn143(ex);
Ygg2Lnf0ppnn[144] = Ygg2Lnf0ppnn144(ex);
Ygg2Lnf0ppnn[145] = Ygg2Lnf0ppnn145(ex);
Ygg2Lnf0ppnn[146] = Ygg2Lnf0ppnn146(ex);
Ygg2Lnf0ppnn[147] = Ygg2Lnf0ppnn147(ex);
Ygg2Lnf0ppnn[148] = Ygg2Lnf0ppnn148(ex);
Ygg2Lnf0ppnn[149] = Ygg2Lnf0ppnn149(ex);
Ygg2Lnf0ppnn[150] = Ygg2Lnf0ppnn150(ex);
Ygg2Lnf0ppnn[151] = Ygg2Lnf0ppnn151(ex);
Ygg2Lnf0ppnn[152] = Ygg2Lnf0ppnn152(ex);
Ygg2Lnf0ppnn[153] = Ygg2Lnf0ppnn153(ex);
Ygg2Lnf0ppnn[154] = Ygg2Lnf0ppnn154(ex);
Ygg2Lnf0ppnn[155] = Ygg2Lnf0ppnn155(ex);
Ygg2Lnf0ppnn[156] = Ygg2Lnf0ppnn156(ex);
Ygg2Lnf0ppnn[157] = Ygg2Lnf0ppnn157(ex);
Ygg2Lnf0ppnn[158] = Ygg2Lnf0ppnn158(ex);
Ygg2Lnf0ppnn[159] = Ygg2Lnf0ppnn159(ex);
Ygg2Lnf0ppnn[160] = Ygg2Lnf0ppnn160(ex);
Ygg2Lnf0ppnn[161] = Ygg2Lnf0ppnn161(ex);
Ygg2Lnf0ppnn[162] = Ygg2Lnf0ppnn162(ex);
Ygg2Lnf0ppnn[163] = Ygg2Lnf0ppnn163(ex);
Ygg2Lnf0ppnn[164] = Ygg2Lnf0ppnn164(ex);
Ygg2Lnf0ppnn[165] = Ygg2Lnf0ppnn165(ex);
Ygg2Lnf0ppnn[166] = Ygg2Lnf0ppnn166(ex);
Ygg2Lnf0ppnn[167] = Ygg2Lnf0ppnn167(ex);
Ygg2Lnf0ppnn[168] = Ygg2Lnf0ppnn168(ex);
Ygg2Lnf0ppnn[169] = Ygg2Lnf0ppnn169(ex);
Ygg2Lnf0ppnn[170] = Ygg2Lnf0ppnn170(ex);
Ygg2Lnf0ppnn[171] = Ygg2Lnf0ppnn171(ex);
Ygg2Lnf0ppnn[172] = Ygg2Lnf0ppnn172(ex);
Ygg2Lnf0ppnn[173] = Ygg2Lnf0ppnn173(ex);
Ygg2Lnf0ppnn[174] = Ygg2Lnf0ppnn174(ex);
Ygg2Lnf0ppnn[175] = Ygg2Lnf0ppnn175(ex);
Ygg2Lnf0ppnn[176] = Ygg2Lnf0ppnn176(ex);
Ygg2Lnf0ppnn[177] = Ygg2Lnf0ppnn177(ex);
Ygg2Lnf0ppnn[178] = Ygg2Lnf0ppnn178(ex);
Ygg2Lnf0ppnn[179] = Ygg2Lnf0ppnn179(ex);
Ygg2Lnf0ppnn[180] = Ygg2Lnf0ppnn180(ex);
Ygg2Lnf0ppnn[181] = Ygg2Lnf0ppnn181(ex);
Ygg2Lnf0ppnn[182] = Ygg2Lnf0ppnn182(ex);
Ygg2Lnf0ppnn[183] = Ygg2Lnf0ppnn183(ex);
Ygg2Lnf0ppnn[184] = Ygg2Lnf0ppnn184(ex);
Ygg2Lnf0ppnn[185] = Ygg2Lnf0ppnn185(ex);
Ygg2Lnf0ppnn[186] = Ygg2Lnf0ppnn186(ex);
Ygg2Lnf0ppnn[187] = Ygg2Lnf0ppnn187(ex);
Ygg2Lnf0ppnn[188] = Ygg2Lnf0ppnn188(ex);
Ygg2Lnf0ppnn[189] = Ygg2Lnf0ppnn189(ex);
Ygg2Lnf0ppnn[190] = Ygg2Lnf0ppnn190(ex);
Ygg2Lnf0ppnn[191] = Ygg2Lnf0ppnn191(ex);
Ygg2Lnf0ppnn[192] = Ygg2Lnf0ppnn192(ex);
Ygg2Lnf0ppnn[193] = Ygg2Lnf0ppnn193(ex);
Ygg2Lnf0ppnn[194] = Ygg2Lnf0ppnn194(ex);
Ygg2Lnf0ppnn[195] = Ygg2Lnf0ppnn195(ex);
Ygg2Lnf0ppnn[196] = Ygg2Lnf0ppnn196(ex);
Ygg2Lnf0ppnn[197] = Ygg2Lnf0ppnn197(ex);
Ygg2Lnf0ppnn[198] = Ygg2Lnf0ppnn198(ex);
Ygg2Lnf0ppnn[199] = Ygg2Lnf0ppnn199(ex);
Ygg2Lnf0ppnn[200] = Ygg2Lnf0ppnn200(ex);
Ygg2Lnf0ppnn[201] = Ygg2Lnf0ppnn201(ex);
Ygg2Lnf0ppnn[202] = Ygg2Lnf0ppnn202(ex);
Ygg2Lnf0ppnn[203] = Ygg2Lnf0ppnn203(ex);
Ygg2Lnf0ppnn[204] = Ygg2Lnf0ppnn204(ex);
Ygg2Lnf0ppnn[205] = Ygg2Lnf0ppnn205(ex);
Ygg2Lnf0ppnn[206] = Ygg2Lnf0ppnn206(ex);
Ygg2Lnf0ppnn[207] = Ygg2Lnf0ppnn207(ex);
Ygg2Lnf0ppnn[208] = Ygg2Lnf0ppnn208(ex);
Ygg2Lnf0ppnn[209] = Ygg2Lnf0ppnn209(ex);
Ygg2Lnf0ppnn[210] = Ygg2Lnf0ppnn210(ex);
Ygg2Lnf0ppnn[211] = Ygg2Lnf0ppnn211(ex);
Ygg2Lnf0ppnn[212] = Ygg2Lnf0ppnn212(ex);
Ygg2Lnf0ppnn[213] = Ygg2Lnf0ppnn213(ex);
Ygg2Lnf0ppnn[214] = Ygg2Lnf0ppnn214(ex);
Ygg2Lnf0ppnn[215] = Ygg2Lnf0ppnn215(ex);
Ygg2Lnf0ppnn[216] = Ygg2Lnf0ppnn216(ex);
Ygg2Lnf0ppnn[217] = Ygg2Lnf0ppnn217(ex);
Ygg2Lnf0ppnn[218] = Ygg2Lnf0ppnn218(ex);
Ygg2Lnf0ppnn[219] = Ygg2Lnf0ppnn219(ex);
Ygg2Lnf0ppnn[220] = Ygg2Lnf0ppnn220(ex);
Ygg2Lnf0ppnn[221] = Ygg2Lnf0ppnn221(ex);
Ygg2Lnf0ppnn[222] = Ygg2Lnf0ppnn222(ex);
Ygg2Lnf0ppnn[223] = Ygg2Lnf0ppnn223(ex);
Ygg2Lnf0ppnn[224] = Ygg2Lnf0ppnn224(ex);
Ygg2Lnf0ppnn[225] = Ygg2Lnf0ppnn225(ex);
Ygg2Lnf0ppnn[226] = Ygg2Lnf0ppnn226(ex);
Ygg2Lnf0ppnn[227] = Ygg2Lnf0ppnn227(ex);
Ygg2Lnf0ppnn[228] = Ygg2Lnf0ppnn228(ex);

std::complex<dd_real> res=
dd_real(0.027777777777777777777777777777778)*(-dd_real(4.)*pow(H[0],3) - dd_real(258.)*pow(H[2],2) - dd_real(36.)*pow(H[2],3) - dd_real(120.)*H[2]*H[4] + dd_real(54.)*H[2]*pow(H[4],2) + dd_real(16.)*pow(H[4],3) - dd_real(6.)*pow(H[0],2)*(-dd_real(20.) + dd_real(3.)*H[2] - dd_real(4.)*H[4] - dd_real(3.)*H[5]) + dd_real(72.)*pow(H[1],2)*(H[2] - dd_real(1.)*H[5]) - dd_real(252.)*pow(H[2],2)*H[5] - dd_real(36.)*H[2]*H[4]*H[5] - dd_real(54.)*pow(H[4],2)*H[5] + dd_real(258.)*pow(H[5],2) - dd_real(90.)*H[2]*pow(H[5],2) + dd_real(24.)*H[4]*pow(H[5],2) - dd_real(66.)*pow(H[5],3) + dd_real(2.)*H[0]*(dd_real(6.)*pow(H[4],2) + dd_real(6.)*(dd_real(10.) + dd_real(3.)*H[2])*H[5] - dd_real(12.)*pow(H[5],2) + H[4]*(dd_real(60.) - dd_real(18.)*H[2] + dd_real(18.)*H[5]) - dd_real(1.)*H[6]) - dd_real(3.)*H[2]*H[6] - dd_real(10.)*H[4]*H[6] + dd_real(51.)*H[5]*H[6] - dd_real(36.)*H[2]*H[11] + dd_real(36.)*H[5]*H[11] - dd_real(240.)*H[13] + dd_real(144.)*H[2]*H[14] + dd_real(216.)*H[5]*H[14] + H[1]*(dd_real(72.)*pow(H[2],2) - dd_real(6.)*(H[6] + dd_real(12.)*H[14])) + dd_real(72.)*H[16] - dd_real(360.)*H[19] + dd_real(48.)*H[24] + dd_real(24.)*H[25] + dd_real(72.)*H[27] - dd_real(144.)*H[28] - dd_real(72.)*H[33] - dd_real(72.)*H[36])*(-dd_real(0.91666666666666666666666666666667)/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]) + (dd_real(0.25)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[31])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[13],2)) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[196])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19]) + (dd_real(0.25)*Ygg2Lnf0ppnn[197])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[13])) + (H[12]*((-dd_real(0.16666666666666666666666666666667)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[25]*Ygg2Lnf0ppnn[26])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[3]*pow(Ygg2Lnf0ppnn[4],3)*pow(Ygg2Lnf0ppnn[23],2)) - (dd_real(0.16666666666666666666666666666667)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[35]*Ygg2Lnf0ppnn[36]*Ygg2Lnf0ppnn[37])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[32]*pow(Ygg2Lnf0ppnn[33],2)) + (dd_real(0.5)*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2)*Ygg2Lnf0ppnn[31]*Ygg2Lnf0ppnn[198])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],3)*Ygg2Lnf0ppnn[34]*Ygg2Lnf0ppnn[72]*Ygg2Lnf0ppnn[78]*Ygg2Lnf0ppnn[188]) + (dd_real(0.25)*Ygg2Lnf0ppnn[199])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],4)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[13]) + (dd_real(0.25)*Ygg2Lnf0ppnn[200])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[10]*Ygg2Lnf0ppnn[11]) - (dd_real(3.)*Ygg2Lnf0ppnn[3]*Ygg2Lnf0ppnn[9]*pow(Ygg2Lnf0ppnn[16],2)*Ygg2Lnf0ppnn[31]*Ygg2Lnf0ppnn[40]*Ygg2Lnf0ppnn[201])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[26]*Ygg2Lnf0ppnn[35]*Ygg2Lnf0ppnn[42]) - (dd_real(0.25)*pow(Ygg2Lnf0ppnn[12],2)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[202])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[34]*Ygg2Lnf0ppnn[69]*Ygg2Lnf0ppnn[70]) + (dd_real(3.)*Ygg2Lnf0ppnn[9]*pow(Ygg2Lnf0ppnn[16],2)*Ygg2Lnf0ppnn[31]*Ygg2Lnf0ppnn[203])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[26]*Ygg2Lnf0ppnn[35]*Ygg2Lnf0ppnn[42]) - (dd_real(0.5)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[204])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[27]*Ygg2Lnf0ppnn[34]*Ygg2Lnf0ppnn[113]) - (dd_real(0.25)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[37]*Ygg2Lnf0ppnn[205])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[27]*Ygg2Lnf0ppnn[89]) - (dd_real(0.25)*Ygg2Lnf0ppnn[206]*Ygg2Lnf0ppnn[207])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[10]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19]*Ygg2Lnf0ppnn[34]*Ygg2Lnf0ppnn[72]) - (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[41]*Ygg2Lnf0ppnn[208])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]*pow(Ygg2Lnf0ppnn[32],2)*Ygg2Lnf0ppnn[70]*Ygg2Lnf0ppnn[74]) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[209])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[3]*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[23]*Ygg2Lnf0ppnn[26]*Ygg2Lnf0ppnn[27]) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[210])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],4)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[12]*pow(Ygg2Lnf0ppnn[32],2)*Ygg2Lnf0ppnn[33]*Ygg2Lnf0ppnn[34]*Ygg2Lnf0ppnn[35])))/SQRTS[0] + (-dd_real(1.)*pow(H[2],2) + H[14])*((dd_real(2.3333333333333333333333333333333)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[31])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[13],2)) - (dd_real(1.)*pow(Ygg2Lnf0ppnn[10],3)*pow(Ygg2Lnf0ppnn[16],2)*Ygg2Lnf0ppnn[31]*Ygg2Lnf0ppnn[37])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],3)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[32]*Ygg2Lnf0ppnn[33]) - (dd_real(0.66666666666666666666666666666667)*pow(Ygg2Lnf0ppnn[4],3)*pow(Ygg2Lnf0ppnn[37],2))/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[3]*Ygg2Lnf0ppnn[10]*pow(Ygg2Lnf0ppnn[39],2)) + (dd_real(20.)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[16])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[58],2)) - (dd_real(0.5)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[71])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[69]*Ygg2Lnf0ppnn[70]) - (dd_real(1.)*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2)*pow(Ygg2Lnf0ppnn[31],2))/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[72]*Ygg2Lnf0ppnn[73]*Ygg2Lnf0ppnn[74]) + (dd_real(0.16666666666666666666666666666667)*Ygg2Lnf0ppnn[3]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[40]*Ygg2Lnf0ppnn[80]*Ygg2Lnf0ppnn[81])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[44]*pow(Ygg2Lnf0ppnn[51],2)) - (dd_real(0.33333333333333333333333333333333)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[40]*Ygg2Lnf0ppnn[82])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[44],2)*Ygg2Lnf0ppnn[51]) + (dd_real(0.33333333333333333333333333333333)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[84])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[44],2)*Ygg2Lnf0ppnn[51]) - (dd_real(0.16666666666666666666666666666667)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[85])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[4],2)*pow(Ygg2Lnf0ppnn[7],2)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[44]) + (pow(Ygg2Lnf0ppnn[16],2)*Ygg2Lnf0ppnn[37]*Ygg2Lnf0ppnn[88])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[89]) + (dd_real(10.)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[90])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[58]) + (dd_real(0.33333333333333333333333333333333)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[37]*Ygg2Lnf0ppnn[38]*Ygg2Lnf0ppnn[91])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[3],2)*Ygg2Lnf0ppnn[5]*pow(Ygg2Lnf0ppnn[10],2)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[39]) + (dd_real(0.33333333333333333333333333333333)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[211])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],3)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[13]) + (dd_real(0.5)*Ygg2Lnf0ppnn[212])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]*Ygg2Lnf0ppnn[32]*Ygg2Lnf0ppnn[70]*Ygg2Lnf0ppnn[74]) + (dd_real(0.16666666666666666666666666666667)*Ygg2Lnf0ppnn[213])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[3],2)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[5]*pow(Ygg2Lnf0ppnn[7],2)*pow(Ygg2Lnf0ppnn[10],2)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19]*Ygg2Lnf0ppnn[72])) + dd_real(0.013888888888888888888888888888889)*(dd_real(34.)*pow(H[0],3) + dd_real(36.)*pow(H[2],3) + dd_real(6.)*pow(H[0],2)*(dd_real(3.)*H[2] - dd_real(4.)*H[4]) - dd_real(72.)*pow(H[2],2)*H[4] - dd_real(28.)*pow(H[4],3) + dd_real(36.)*pow(H[4],2)*H[5] + dd_real(24.)*pow(H[5],3) - dd_real(12.)*H[5]*H[6] - dd_real(1.)*H[0]*(dd_real(36.)*pow(H[2],2) + dd_real(30.)*pow(H[4],2) - dd_real(36.)*H[2]*(H[4] - dd_real(1.)*H[5]) + dd_real(36.)*H[4]*H[5] - dd_real(42.)*pow(H[5],2) + H[6] - dd_real(36.)*H[11]) + dd_real(2.)*H[4]*(-dd_real(12.)*pow(H[5],2) + dd_real(11.)*H[6] + dd_real(36.)*H[14]) + H[2]*(-dd_real(54.)*pow(H[4],2) + dd_real(36.)*H[4]*H[5] + dd_real(18.)*pow(H[5],2) - dd_real(15.)*H[6] + dd_real(36.)*H[11] + dd_real(72.)*H[14]) - dd_real(24.)*(dd_real(6.)*H[16] - dd_real(40.)*H[19] + dd_real(5.)*H[24] + H[25] - dd_real(3.)*H[27] - dd_real(9.)*H[33]))*((dd_real(0.25)*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2))/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[69],2)*Ygg2Lnf0ppnn[77]) - (dd_real(0.25)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[106])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[69]*pow(Ygg2Lnf0ppnn[77],2)) + (pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2)*pow(Ygg2Lnf0ppnn[31],2))/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[72]*Ygg2Lnf0ppnn[78]*pow(Ygg2Lnf0ppnn[188],2)) - (dd_real(1.)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[31]*Ygg2Lnf0ppnn[214])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[72],2)*pow(Ygg2Lnf0ppnn[78],2)*Ygg2Lnf0ppnn[188]) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[215])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19]*pow(Ygg2Lnf0ppnn[72],2)) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[216])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]*pow(Ygg2Lnf0ppnn[70],2)*pow(Ygg2Lnf0ppnn[74],2))) + dd_real(0.013888888888888888888888888888889)*(-dd_real(40.)*pow(H[0],3) - dd_real(8.)*pow(H[4],3) - dd_real(12.)*pow(H[0],2)*(dd_real(6.)*H[3] + H[4]) + H[4]*(-dd_real(12.)*pow(H[5],2) + dd_real(11.)*H[6]) + dd_real(4.)*H[0]*(-dd_real(6.)*pow(H[4],2) + dd_real(3.)*pow(H[5],2) + H[6] + dd_real(18.)*H[13]) + dd_real(3.)*(-dd_real(1.)*H[5]*H[6] + dd_real(24.)*H[3]*H[13] + dd_real(24.)*H[15] - dd_real(8.)*H[19] - dd_real(8.)*H[24] - dd_real(4.)*H[25] + dd_real(18.)*H[26] + dd_real(6.)*H[38]))*((dd_real(0.5)*Ygg2Lnf0ppnn[9])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[10]*pow(Ygg2Lnf0ppnn[11],2)) - (dd_real(1.)*pow(Ygg2Lnf0ppnn[16],2)*Ygg2Lnf0ppnn[24])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[4],4)*pow(Ygg2Lnf0ppnn[23],2)) - (dd_real(0.25)*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2))/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[69],2)*Ygg2Lnf0ppnn[77]) - (dd_real(0.5)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[16],2)*pow(Ygg2Lnf0ppnn[37],2))/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[89],2)) + (dd_real(0.5)*Ygg2Lnf0ppnn[104])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[5]*pow(Ygg2Lnf0ppnn[10],2)*Ygg2Lnf0ppnn[11]) + (dd_real(0.25)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[106])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[69]*pow(Ygg2Lnf0ppnn[77],2)) - (dd_real(2.)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[9]*pow(Ygg2Lnf0ppnn[16],2))/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[34]*pow(Ygg2Lnf0ppnn[113],2)) - (dd_real(2.)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[9]*pow(Ygg2Lnf0ppnn[16],2))/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[5]*pow(Ygg2Lnf0ppnn[34],2)*Ygg2Lnf0ppnn[113]) + (Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[121])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[4],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[23]) + (dd_real(0.5)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[37]*Ygg2Lnf0ppnn[88]*Ygg2Lnf0ppnn[144])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[89]) + (dd_real(0.25)*Ygg2Lnf0ppnn[217])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]*pow(Ygg2Lnf0ppnn[70],2)) + (dd_real(0.25)*Ygg2Lnf0ppnn[218])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[5]*pow(Ygg2Lnf0ppnn[10],2)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19]*pow(Ygg2Lnf0ppnn[34],2))) + SQRTS[1]*H[20]*((-dd_real(4.)*Ygg2Lnf0ppnn[4]*Ygg2Lnf0ppnn[16]*pow(Ygg2Lnf0ppnn[37],2)*Ygg2Lnf0ppnn[88])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*pow(Ygg2Lnf0ppnn[89],2)) - (dd_real(4.)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2))/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[69],2)*Ygg2Lnf0ppnn[77]*Ygg2Lnf0ppnn[219]) + (dd_real(4.)*Ygg2Lnf0ppnn[37]*Ygg2Lnf0ppnn[88]*Ygg2Lnf0ppnn[220])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[5],2)*pow(Ygg2Lnf0ppnn[12],2)*Ygg2Lnf0ppnn[89]) - (dd_real(1.3333333333333333333333333333333)*Ygg2Lnf0ppnn[221])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[5],2)*pow(Ygg2Lnf0ppnn[12],2)*Ygg2Lnf0ppnn[18]*pow(Ygg2Lnf0ppnn[70],2)) + (dd_real(1.3333333333333333333333333333333)*Ygg2Lnf0ppnn[222])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[2]*pow(Ygg2Lnf0ppnn[4],2)*pow(Ygg2Lnf0ppnn[5],2)*pow(Ygg2Lnf0ppnn[12],2)*Ygg2Lnf0ppnn[19]) - (dd_real(1.3333333333333333333333333333333)*pow(Ygg2Lnf0ppnn[10],2)*Ygg2Lnf0ppnn[224])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[5],2)*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[71],2)*Ygg2Lnf0ppnn[223]) - (dd_real(4.)*Ygg2Lnf0ppnn[2]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[225])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[69]*pow(Ygg2Lnf0ppnn[77],2)*pow(Ygg2Lnf0ppnn[219],2))) + dd_real(0.16666666666666666666666666666667)*(dd_real(2.)*pow(H[1],3) - dd_real(2.)*pow(H[3],3) + dd_real(2.)*pow(H[4],3) - dd_real(1.)*H[1]*H[6] + H[3]*H[6] - dd_real(1.)*H[4]*H[6] + dd_real(28.)*H[19] + dd_real(6.)*H[21] - dd_real(6.)*H[31] + dd_real(6.)*H[32] - dd_real(6.)*H[40])*(dd_real(2.25)/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]) + (dd_real(0.25)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[16],2)*pow(Ygg2Lnf0ppnn[37],2))/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*pow(Ygg2Lnf0ppnn[89],2)) - (dd_real(0.25)*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[37]*Ygg2Lnf0ppnn[88]*Ygg2Lnf0ppnn[144])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[89]) + (dd_real(0.25)*Ygg2Lnf0ppnn[226])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[2],2)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19])) + (-dd_real(0.5)*pow(H[0],3) - dd_real(0.33333333333333333333333333333333)*pow(H[2],3) + H[1]*pow(H[3],2) - dd_real(1.)*pow(H[3],3) + pow(H[0],2)*(-dd_real(0.75)*H[1] + H[3] - dd_real(3.25)*H[4]) - dd_real(1.)*H[1]*H[3]*H[4] + dd_real(2.)*pow(H[3],2)*H[4] + dd_real(0.25)*H[1]*pow(H[4],2) - dd_real(1.5)*H[3]*pow(H[4],2) - dd_real(1.75)*pow(H[4],3) + H[1]*H[3]*H[5] - dd_real(0.5)*H[1]*H[4]*H[5] + dd_real(2.)*H[3]*H[4]*H[5] - dd_real(2.)*pow(H[4],2)*H[5] + dd_real(0.25)*H[1]*pow(H[5],2) - dd_real(0.25)*H[4]*pow(H[5],2) - dd_real(0.5)*pow(H[5],3) + dd_real(0.041666666666666666666666666666667)*H[1]*H[6] + dd_real(0.16666666666666666666666666666667)*H[2]*H[6] + dd_real(0.41666666666666666666666666666667)*H[3]*H[6] + dd_real(0.75)*H[4]*H[6] + dd_real(0.54166666666666666666666666666667)*H[5]*H[6] - dd_real(0.5)*H[1]*H[9] - dd_real(1.)*H[3]*H[9] - dd_real(1.5)*H[4]*H[9] + H[5]*H[9] + H[1]*H[13] - dd_real(1.)*H[3]*H[13] + dd_real(3.)*H[4]*H[13] - dd_real(1.)*H[5]*H[13] - dd_real(0.25)*H[0]*(dd_real(8.)*H[3]*H[4] + dd_real(6.)*H[4]*H[5] + dd_real(2.)*pow(H[5],2) + dd_real(2.)*H[1]*(dd_real(2.)*H[3] - dd_real(1.)*H[4] + H[5]) - dd_real(3.)*H[6] + dd_real(4.)*H[9] + dd_real(8.)*H[13]) - dd_real(67.666666666666666666666666666667)*H[19] + H[21] + H[22] - dd_real(2.)*H[24] - dd_real(1.5)*H[25] - dd_real(1.25)*H[26] - dd_real(5.)*H[34] - dd_real(1.)*H[37] - dd_real(0.75)*H[38] + H[44] - dd_real(1.)*H[46])*((dd_real(0.25)*pow(Ygg2Lnf0ppnn[12],2)*pow(Ygg2Lnf0ppnn[16],2))/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[4]*pow(Ygg2Lnf0ppnn[69],2)*Ygg2Lnf0ppnn[77]) - (dd_real(0.25)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[16]*Ygg2Lnf0ppnn[106])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[69]*pow(Ygg2Lnf0ppnn[77],2)) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[227])/(pow(Ygg2Lnf0ppnn[1],3)*Ygg2Lnf0ppnn[5]*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[18]*pow(Ygg2Lnf0ppnn[70],2)) + (dd_real(0.083333333333333333333333333333333)*Ygg2Lnf0ppnn[228])/(pow(Ygg2Lnf0ppnn[1],3)*pow(Ygg2Lnf0ppnn[4],2)*Ygg2Lnf0ppnn[12]*Ygg2Lnf0ppnn[19]*Ygg2Lnf0ppnn[75]));
    return res;
}
