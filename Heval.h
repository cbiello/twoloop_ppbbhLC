#ifndef Heval
#define Heval


void Hevaluation(std::complex<dd_real> H[70], std::complex<dd_real> Fr[29], std::complex<dd_real> Hperm[70], std::complex<dd_real> Frperm[29], std::complex<dd_real> Fsave[300], std::complex<dd_real> Fsavetr5[300]){

    //Calculation of the H functions
    H[0]=H11(Fsavetr5);
    H[1]=H12(Fsavetr5);
    H[2]=H13(Fsavetr5);
    H[3]=H14(Fsavetr5);
    H[4]=H15(Fsavetr5);
    H[5]=H16(Fsavetr5);
    
    H[6]=H21(Fsavetr5);
    H[7]=H22(Fsavetr5);
    H[8]=H23(Fsavetr5);
    H[9]=H24(Fsavetr5);
    H[10]=H25(Fsavetr5);
    H[11]=H26(Fsavetr5);
    H[12]=H27(Fsavetr5);
    H[13]=H218(Fsavetr5);
    H[14]=H219(Fsavetr5);

    H[15]=H31(Fsavetr5);
    H[16]=H32(Fsavetr5);
    H[17]=H33(Fsavetr5);
    H[18]=H34(Fsavetr5);
    H[19]=H35(Fsavetr5);
    H[20]=H36(Fsavetr5);
    H[21]=H37(Fsavetr5);
    H[22]=H38(Fsavetr5);
    H[23]=H39(Fsavetr5);
    H[24]=H328(Fsavetr5);
    H[25]=H330(Fsavetr5);
    H[26]=H332(Fsavetr5);
    H[27]=H333(Fsavetr5);
    H[28]=H334(Fsavetr5);
    H[29]=H335(Fsavetr5);
    H[30]=H336(Fsavetr5);
    H[31]=H337(Fsavetr5);
    H[32]=H338(Fsavetr5);
    H[33]=H339(Fsavetr5);
    H[34]=H340(Fsavetr5);
    H[35]=H342(Fsavetr5);
    H[36]=H343(Fsavetr5);
    H[37]=H345(Fsavetr5);
    H[38]=H348(Fsavetr5);
    H[39]=H353(Fsavetr5);
    H[40]=H354(Fsavetr5);
    H[41]=H355(Fsavetr5);
    H[42]=H356(Fsavetr5);
    H[43]=H362(Fsavetr5);
    H[44]=H366(Fsavetr5);
    H[45]=H376(Fsavetr5);
    H[46]=H381(Fsavetr5);
    
    H[47]=H41(Fsavetr5);
    H[48]=H42(Fsavetr5);
    H[49]=H43(Fsavetr5);
    H[50]=H44(Fsavetr5);
    H[51]=H45(Fsavetr5);
    H[52]=H46(Fsavetr5);
    H[53]=H47(Fsavetr5);
    H[54]=H48(Fsavetr5);
    H[55]=H49(Fsavetr5);
    H[56]=H410(Fsavetr5);
    H[57]=H411(Fsavetr5);
    H[58]=H412(Fsavetr5);
    H[59]=H413(Fsavetr5);
    H[60]=H414(Fsavetr5);
    H[61]=H415(Fsavetr5);
    H[62]=H416(Fsavetr5);
    H[63]=H417(Fsavetr5);
    H[64]=H418(Fsavetr5);
    H[65]=H419(Fsavetr5);
    H[66]=H420(Fsavetr5);
    H[67]=H421(Fsavetr5);
    H[68]=H422(Fsavetr5);
    H[69]=H423(Fsavetr5);

    Fr[0]=Fr11(Fsavetr5);
    Fr[1]=Fr12(Fsavetr5);
    Fr[2]=Fr13(Fsavetr5);
    Fr[3]=Fr14(Fsavetr5);
    Fr[4]=Fr15(Fsavetr5);
    Fr[5]=Fr16(Fsavetr5);

    Fr[6]=Fr21(Fsavetr5);
    Fr[7]=Fr22(Fsavetr5);
    Fr[8]=Fr23(Fsavetr5);
    Fr[9]=Fr24(Fsavetr5);
    Fr[10]=Fr25(Fsavetr5);
    Fr[11]=Fr26(Fsavetr5);
    Fr[12]=Fr27(Fsavetr5);

    Fr[13]=Fr31(Fsavetr5);
    Fr[14]=Fr32(Fsavetr5);
    Fr[15]=Fr33(Fsavetr5);
    Fr[16]=Fr34(Fsavetr5);
    Fr[17]=Fr35(Fsavetr5);
    Fr[18]=Fr36(Fsavetr5);
    Fr[19]=Fr37(Fsavetr5);
    Fr[20]=Fr38(Fsavetr5);
    Fr[21]=Fr39(Fsavetr5);

    Fr[22]=Fr41(Fsavetr5);
    Fr[23]=Fr42(Fsavetr5);
    Fr[24]=Fr43(Fsavetr5);
    Fr[25]=Fr44(Fsavetr5);
    Fr[26]=Fr45(Fsavetr5);
    Fr[27]=Fr46(Fsavetr5);
    Fr[28]=Fr47(Fsavetr5);

    //second configuration
    Hperm[0]=Hperm11(Fsave);
    Hperm[1]=Hperm12(Fsave);
    Hperm[2]=Hperm13(Fsave);
    Hperm[3]=Hperm14(Fsave);
    Hperm[4]=Hperm15(Fsave);
    Hperm[5]=Hperm16(Fsave);
    
    Hperm[6]=Hperm21(Fsave);
    Hperm[7]=Hperm22(Fsave);
    Hperm[8]=Hperm23(Fsave);
    Hperm[9]=Hperm24(Fsave);
    Hperm[10]=Hperm25(Fsave);
    Hperm[11]=Hperm26(Fsave);
    Hperm[12]=Hperm27(Fsave);
    Hperm[13]=Hperm218(Fsave);
    Hperm[14]=Hperm219(Fsave);

    Hperm[15]=Hperm31(Fsave);
    Hperm[16]=Hperm32(Fsave);
    Hperm[17]=Hperm33(Fsave);
    Hperm[18]=Hperm34(Fsave);
    Hperm[19]=Hperm35(Fsave);
    Hperm[20]=Hperm36(Fsave);
    Hperm[21]=Hperm37(Fsave);
    Hperm[22]=Hperm38(Fsave);
    Hperm[23]=Hperm39(Fsave);
    Hperm[24]=Hperm328(Fsave);
    Hperm[25]=Hperm330(Fsave);
    Hperm[26]=Hperm332(Fsave);
    Hperm[27]=Hperm333(Fsave);
    Hperm[28]=Hperm334(Fsave);
    Hperm[29]=Hperm335(Fsave);
    Hperm[30]=Hperm336(Fsave);
    Hperm[31]=Hperm337(Fsave);
    Hperm[32]=Hperm338(Fsave);
    Hperm[33]=Hperm339(Fsave);
    Hperm[34]=Hperm340(Fsave);
    Hperm[35]=Hperm342(Fsave);
    Hperm[36]=Hperm343(Fsave);
    Hperm[37]=Hperm345(Fsave);
    Hperm[38]=Hperm348(Fsave);
    Hperm[39]=Hperm353(Fsave);
    Hperm[40]=Hperm354(Fsave);
    Hperm[41]=Hperm355(Fsave);
    Hperm[42]=Hperm356(Fsave);
    Hperm[43]=Hperm362(Fsave);
    Hperm[44]=Hperm366(Fsave);
    Hperm[45]=Hperm376(Fsave);
    Hperm[46]=Hperm381(Fsave);
    
    Hperm[47]=Hperm41(Fsave);
    Hperm[48]=Hperm42(Fsave);
    Hperm[49]=Hperm43(Fsave);
    Hperm[50]=Hperm44(Fsave);
    Hperm[51]=Hperm45(Fsave);
    Hperm[52]=Hperm46(Fsave);
    Hperm[53]=Hperm47(Fsave);
    Hperm[54]=Hperm48(Fsave);
    Hperm[55]=Hperm49(Fsave);
    Hperm[56]=Hperm410(Fsave);
    Hperm[57]=Hperm411(Fsave);
    Hperm[58]=Hperm412(Fsave);
    Hperm[59]=Hperm413(Fsave);
    Hperm[60]=Hperm414(Fsave);
    Hperm[61]=Hperm415(Fsave);
    Hperm[62]=Hperm416(Fsave);
    Hperm[63]=Hperm417(Fsave);
    Hperm[64]=Hperm418(Fsave);
    Hperm[65]=Hperm419(Fsave);
    Hperm[66]=Hperm420(Fsave);
    Hperm[67]=Hperm421(Fsave);
    Hperm[68]=Hperm422(Fsave);
    Hperm[69]=Hperm423(Fsave);
    
    Frperm[0]=Frperm11(Fsave);
    Frperm[1]=Frperm12(Fsave);
    Frperm[2]=Frperm13(Fsave);
    Frperm[3]=Frperm14(Fsave);
    Frperm[4]=Frperm15(Fsave);
    Frperm[5]=Frperm16(Fsave);

    Frperm[6]=Frperm21(Fsave);
    Frperm[7]=Frperm22(Fsave);
    Frperm[8]=Frperm23(Fsave);
    Frperm[9]=Frperm24(Fsave);
    Frperm[10]=Frperm25(Fsave);
    Frperm[11]=Frperm26(Fsave);
    Frperm[12]=Frperm27(Fsave);

    Frperm[13]=Frperm31(Fsave);
    Frperm[14]=Frperm32(Fsave);
    Frperm[15]=Frperm33(Fsave);
    Frperm[16]=Frperm34(Fsave);
    Frperm[17]=Frperm35(Fsave);
    Frperm[18]=Frperm36(Fsave);
    Frperm[19]=Frperm37(Fsave);
    Frperm[20]=Frperm38(Fsave);
    Frperm[21]=Frperm39(Fsave);
    
    Frperm[22]=Frperm41(Fsave);
    Frperm[23]=Frperm42(Fsave);
    Frperm[24]=Frperm43(Fsave);
    Frperm[25]=Frperm44(Fsave);
    Frperm[26]=Frperm45(Fsave);
    Frperm[27]=Frperm46(Fsave);
    Frperm[28]=Frperm47(Fsave);

    //(09Mar24): CB check against Mathematica
    //std::cout << "CHECK Calculation of the H functions against Mathematica" << std::endl;
    //for (std::size_t i = 0; i < 70; ++i) {
    //  std::cout << "H[" << i << "] -> " << real(H[i]) << " +I*(" << imag(H[i]) << ")," << std::endl;
    //}
    //std::cout << "CHECK Calculation of the Fr functions against Mathematica" << std::endl;
    //for (std::size_t i = 0; i < 29; ++i) {
    //  std::cout << "Fr[" << i << "] -> " << real(Fr[i]) << " +I*(" << imag(Fr[i]) <<  ")," << std::endl;
    //}
    //std::cout << "CHECK Calculation of the HPERM12435 functions against Mathematica" << std::endl;
    //for (std::size_t i = 0; i < 70; ++i) {
    //  std::cout << "H[" << i << "] -> " << real(Hperm[i]) << " +I*(" << imag(Hperm[i]) <<  ")," << std::endl;
    //}
    //std::cout << "CHECK Calculation of the FrPERM12435 functions against Mathematica" << std::endl;
    //for (std::size_t i = 0; i < 29; ++i) {
    //  std::cout << "Fr[" << i << "] -> " << real(Frperm[i]) << " +I*(" << imag(Frperm[i]) <<  ")," << std::endl;
    //}
     
};


#endif
