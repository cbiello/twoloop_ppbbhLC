#include <iostream>
#include "listYgg2Lnf1pppn.h" 
#include <qd/qd_real.h>
#include <complex>
std::complex<dd_real> Ygg2Lnf1pppn108(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
(dd_real(229.) + dd_real(377.)*ex3 + dd_real(148.)*pow(ex3,2))*pow(ex4,2) + dd_real(2.)*pow(ex2,2)*(ex3*(dd_real(199.) + dd_real(86.)*ex4 - dd_real(199.)*ex6) + pow(ex3,2)*(dd_real(80.) + dd_real(6.)*ex4 - dd_real(80.)*ex6) + dd_real(119.)*(dd_real(1.) + ex4 - dd_real(1.)*ex6)) - dd_real(1.)*ex2*ex4*(dd_real(467.) + dd_real(229.)*ex4 + ex3*(dd_real(775.) + dd_real(160.)*ex4 - dd_real(389.)*ex6) + dd_real(4.)*pow(ex3,2)*(dd_real(77.) + dd_real(3.)*ex4 - dd_real(40.)*ex6) - dd_real(229.)*ex6);
return res;
}
