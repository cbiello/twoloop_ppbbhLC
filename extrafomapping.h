#ifndef extrafomapping
#define extrafomapping

//CB (11mar24): define the mapping for the momentum twistor variables in order to compute the conjugate amplitudes
ExVariables trafo(ExVariables ex){
  ExVariables res;
  res.ex1= ex.ex1;
  res.ex2= -(((dd_real(1.0) + ex.ex3)*ex.ex4*(ex.ex4 - ex.ex6) + ex.ex2*ex.ex3*(ex.ex4*(-dd_real(2.0) + ex.ex5) + ex.ex6))/
	     (-((dd_real(1.0) + ex.ex3)*ex.ex4) + ex.ex2*ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5))));
  res.ex3=((-((dd_real(1.0) + ex.ex3)*ex.ex4) + ex.ex2*ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5)))*(ex.ex4*
        ((dd_real(1.0) + ex.ex3)*ex.ex4 + ex.ex2*ex.ex2*ex.ex3*(-dd_real(2.0) + ex.ex5) + ex.ex2*(-dd_real(1.0) + ex.ex3*(-dd_real(2.0) + ex.ex4 + ex.ex5))) - (-((dd_real(1.0) + ex.ex2)*ex.ex3*(ex.ex2 - ex.ex4)) + ex.ex4)*ex.ex6))/
   (ex.ex2*(-dd_real(1.0) - ex.ex4 + ex.ex6)*(ex.ex2*ex.ex3*(-(ex.ex4*(dd_real(1.0) + ex.ex4)*(-dd_real(1.0) + ex.ex5)) - ex.ex6) + (dd_real(1.0) + ex.ex3)*ex.ex4*ex.ex6));
  res.ex4= ex.ex4;
  res.ex5= -(((dd_real(1.0) + ex.ex3)*ex.ex4*(ex.ex4 - ex.ex6)*(ex.ex4 - ex.ex6) - (ex.ex2*ex.ex2)*ex.ex3*(ex.ex4*(-dd_real(1.0) + ex.ex4 + ex.ex5 - ex.ex6) + ex.ex6) + 
       ex.ex2*((ex.ex4*ex.ex4)*(-dd_real(1.0) + ex.ex3*(-dd_real(3.0) + (dd_real(2.0) + ex.ex4)*ex.ex5)) - ex.ex4*(-dd_real(1.0) + ex.ex3*(-dd_real(4.0) + (dd_real(1.0) + ex.ex4)*ex.ex5))*ex.ex6 - ex.ex3*(ex.ex6*ex.ex6)))/
     (ex.ex4*(-(ex.ex4*((dd_real(1.0) + ex.ex3)*ex.ex4 + (ex.ex2*ex.ex2)*ex.ex3*(-dd_real(2.0) + ex.ex5) + ex.ex2*(-dd_real(1.0) + ex.ex3*(-dd_real(2.0) + ex.ex4 + ex.ex5)))) + 
         (-((dd_real(1.0) + ex.ex2)*ex.ex3*(ex.ex2 - ex.ex4)) + ex.ex4)*ex.ex6)));
  res.ex6= ex.ex6;
  return res;
}
//and for permutations
ExVariables trafoperm(ExVariables ex){
  ExVariables res;
  res.ex1= ex.ex1;
  res.ex2= ((dd_real(1.0) + ex.ex2)*(-((dd_real(1.0) + ex.ex3)*ex.ex4) + ex.ex2*ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5))))/(ex.ex2*(((dd_real(1.0) + ex.ex3)*ex.ex4)/ex.ex2 - ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5))));
  res.ex3= -((ex.ex3*((dd_real(1.0) + ex.ex3)*ex.ex4*(ex.ex4 - ex.ex6) + ex.ex2*ex.ex3*(ex.ex4*(-dd_real(2.0) + ex.ex5) + ex.ex6)))/
	     ((dd_real(1.0) + ex.ex3)*ex.ex4*((dd_real(1.0) + ex.ex3)*(ex.ex4 - ex.ex6) + (ex.ex2*ex.ex3*(ex.ex4*(-dd_real(2.0) + ex.ex5) + ex.ex6))/ex.ex4)));
  res.ex4= ((dd_real(1.0) + ex.ex2)*(ex.ex2*ex.ex3 - (dd_real(1.0) + ex.ex3)*ex.ex4))/ex.ex2;
  res.ex5= (ex.ex2*(-dd_real(1.0) + ex.ex2*ex.ex3 - (dd_real(1.0) + ex.ex3)*ex.ex4*ex.ex5))/((dd_real(1.0) + ex.ex2)*(ex.ex2*ex.ex3 - (dd_real(1.0) + ex.ex3)*ex.ex4));
  res.ex6= -(((dd_real(1.0) + ex.ex3)*ex.ex4)/ex.ex2) - (dd_real(1.0) + ex.ex3)*(-dd_real(1.0) + ex.ex6) + (ex.ex2*ex.ex3*(ex.ex4*(-dd_real(1.0) + ex.ex5) + ex.ex6))/ex.ex4;
  return res;
}
//and for conjugated permuted amps
ExVariables trafopermconj(ExVariables ex){
  ExVariables res;
  res.ex1= ex.ex1;
  res.ex2= -(((ex.ex2*ex.ex3 - (dd_real(1.0) + ex.ex3)*ex.ex4)*(dd_real(1.0) + ex.ex4 - ex.ex6))/(-((dd_real(1.0) + ex.ex3)*ex.ex4) + ex.ex2*ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5))));
  res.ex3= -(((-((dd_real(1.0) + ex.ex3)*ex.ex4) + ex.ex2*ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5)))*((dd_real(1.0) + ex.ex3)*ex.ex4*(ex.ex4 - ex.ex6) + ex.ex2*ex.ex2*ex.ex3*(ex.ex4*(-dd_real(2.0) + ex.ex5) + ex.ex6) + 
         ex.ex2*(ex.ex3*ex.ex4*ex.ex4 + ex.ex4*(-dd_real(1.0) + ex.ex3*(-dd_real(2.0) + ex.ex5 - ex.ex6)) + ex.ex3*ex.ex6)))/
     ((-((dd_real(1.0) + ex.ex3)*ex.ex4) + ex.ex2*ex.ex2*ex.ex3*(dd_real(1.0) + ex.ex4*(-dd_real(1.0) + ex.ex5)) + ex.ex2*(dd_real(1.0) + ex.ex3 + ex.ex3*ex.ex4*(-dd_real(2.0) + ex.ex5) - ex.ex6))*
      ((dd_real(1.0) + ex.ex3)*ex.ex4*(ex.ex4 - ex.ex6) + ex.ex2*ex.ex3*(ex.ex4*(-dd_real(2.0) + ex.ex5) + ex.ex6))));
  res.ex4= ((dd_real(1.0) + ex.ex2)*(ex.ex2*ex.ex3 - (dd_real(1.0) + ex.ex3)*ex.ex4))/ex.ex2;
  res.ex5= (ex.ex2*(-((dd_real(1.0) + ex.ex3)*ex.ex4*(ex.ex4 - ex.ex6)*(dd_real(1.0) + ex.ex4 + ex.ex3*ex.ex4*ex.ex5 - ex.ex6)) + ex.ex2*ex.ex2*ex.ex2*ex.ex3*ex.ex3*(ex.ex4*(-dd_real(2.0) + ex.ex5) + ex.ex6) + 
       ex.ex2*ex.ex2*ex.ex3*(ex.ex4*(ex.ex4 - ex.ex6) + ex.ex3*(ex.ex6 + ex.ex4*(-dd_real(2.0) + ex.ex4 + ex.ex5 - ex.ex4*(-dd_real(2.0) + ex.ex5)*ex.ex5 - (dd_real(1.0) + ex.ex5)*ex.ex6))) + 
       ex.ex2*(-(ex.ex3*(dd_real(1.0) + ex.ex3)*ex.ex4*ex.ex4*ex.ex4*ex.ex5) + ex.ex3*(-dd_real(1.0) + ex.ex6)*ex.ex6 - ex.ex4*(-dd_real(1.0) + ex.ex6 + ex.ex3*(-dd_real(2.0) + ex.ex5 + (dd_real(4.0) + ex.ex3 + (-dd_real(1.0) + ex.ex3)*ex.ex5)*ex.ex6)) + 
          ex.ex4*ex.ex4*(dd_real(1.0) + ex.ex3*(dd_real(3.0) + ex.ex3 + ex.ex5*(-dd_real(1.0) + ex.ex6) + ex.ex3*ex.ex5*(dd_real(2.0) - ex.ex5 + ex.ex6))))))/
   ((dd_real(1.0) + ex.ex2)*(ex.ex2*ex.ex3 - (dd_real(1.0) + ex.ex3)*ex.ex4)*(ex.ex4*((dd_real(1.0) + ex.ex3)*ex.ex4 + ex.ex2*ex.ex2*ex.ex3*(-dd_real(2.0) + ex.ex5) + ex.ex2*(-dd_real(1.0) + ex.ex3*(-dd_real(2.0) + ex.ex4 + ex.ex5))) - 
							    (-((dd_real(1.0) + ex.ex2)*ex.ex3*(ex.ex2 - ex.ex4)) + ex.ex4)*ex.ex6));
  res.ex6= -(((dd_real(1.0) + ex.ex3)*ex.ex4)/ex.ex2) - (dd_real(1.0) + ex.ex3)*(-dd_real(1.0) + ex.ex6) + (ex.ex2*ex.ex3*(ex.ex4*(-dd_real(1.0) + ex.ex5) + ex.ex6))/ex.ex4;
  return res;
}


#endif
