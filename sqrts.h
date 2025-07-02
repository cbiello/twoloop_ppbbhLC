#ifndef sqrts
#define sqrts


// Define the square roots
// CB(8Mar): the explicit expressions are computed starting from Mathematica rules SqrtDefs1 and SqrtDefs2 of Simon's auxiliary files
std::complex<dd_real> SQRT1(dd_real sv[6]){
  std::complex<dd_real> res=sqrt((sv[3] + sv[4] - sv[5])*(sv[3] + sv[4] - sv[5]) + sv[5]*sv[5] - 2*sv[5]*(2*sv[1] - sv[3] - sv[4] + sv[5])+std::complex<dd_real>(0,1.e-32))/sv[0];
  return res;
}
std::complex<dd_real> SQRT2(dd_real sv[6]){
  std::complex<dd_real> res=sqrt(-4*sv[0]*sv[1]*sv[2]*(sv[1] - sv[3] - sv[4] + sv[5]) +
				(-(sv[1]*sv[2]) + sv[2]*sv[5] + sv[1]*(-sv[0] + sv[2] - sv[4] + sv[5]) - sv[4]*(-sv[0] + sv[2] - sv[4] + sv[5])
				 - sv[2]*(sv[1] - sv[3] - sv[4] + sv[5]) + sv[4]*(sv[1] - sv[3] - sv[4] + sv[5]))*
				(-(sv[1]*sv[2]) + sv[2]*sv[5] + sv[1]*(-sv[0] + sv[2] - sv[4] + sv[5]) - sv[4]*(-sv[0] + sv[2] - sv[4] + sv[5])
				 - sv[2]*(sv[1] - sv[3] - sv[4] + sv[5]) + sv[4]*(sv[1] - sv[3] - sv[4] + sv[5]))+
				std::complex<dd_real>(0,1.e-32))/(sv[0]*sv[0]);
  return res;
}
std::complex<dd_real> SQRT3(dd_real sv[6]){
  std::complex<dd_real> res=sqrt(-4*sv[2]*sv[5] + (-sv[0] + sv[2] + sv[5])*(-sv[0] + sv[2] + sv[5])+std::complex<dd_real>(0,1.e-32))/sv[0];
  return res;
}


#endif
