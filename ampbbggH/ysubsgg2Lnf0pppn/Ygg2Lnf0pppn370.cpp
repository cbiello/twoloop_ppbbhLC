#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn370(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(54.)*pow(ex2,4)*pow(dd_real(1.) + ex4,2) + dd_real(18.)*pow(ex2,5)*pow(dd_real(1.) + ex4,2) - dd_real(30.)*pow(ex4,2)*(dd_real(1.) + dd_real(5.)*ex4 + dd_real(2.)*pow(ex4,2)) - dd_real(6.)*ex2*pow(ex4,2)*(dd_real(11.) + dd_real(59.)*ex4 + dd_real(22.)*pow(ex4,2)) + pow(ex2,3)*(dd_real(55.) + dd_real(110.)*ex4 + dd_real(37.)*pow(ex4,2) - dd_real(90.)*pow(ex4,3) - dd_real(36.)*pow(ex4,4)) - dd_real(3.)*pow(ex2,2)*(-dd_real(5.) - dd_real(10.)*ex4 + dd_real(13.)*pow(ex4,2) + dd_real(98.)*pow(ex4,3) + dd_real(36.)*pow(ex4,4));
return res;
}
