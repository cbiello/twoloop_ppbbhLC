#include <iostream>
#include "listYgg2Lnf0pppn.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0pppn285(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(18.)*pow(ex2,7)*pow(ex3,5)*(dd_real(1.) + ex3) + pow(dd_real(1.) + ex3,4)*(dd_real(365.) + dd_real(750.)*ex3 + dd_real(1182.)*pow(ex3,2) + dd_real(565.)*pow(ex3,3))*pow(ex4,4) + pow(ex2,6)*pow(ex3,4)*(dd_real(365.) + dd_real(565.)*pow(ex3,3) + ex3*(dd_real(804.) - dd_real(90.)*ex4) - dd_real(36.)*ex4 - dd_real(6.)*pow(ex3,2)*(-dd_real(206.) + dd_real(9.)*ex4)) + dd_real(2.)*ex2*ex3*pow(dd_real(1.) + ex3,3)*pow(ex4,3)*(-dd_real(736.) + dd_real(565.)*pow(ex3,3)*(-dd_real(2.) + ex4) + dd_real(365.)*ex4 + dd_real(6.)*ex3*(-dd_real(253.) + dd_real(125.)*ex4) + dd_real(3.)*pow(ex3,2)*(-dd_real(791.) + dd_real(394.)*ex4)) + dd_real(2.)*pow(ex2,5)*pow(ex3,3)*(-dd_real(565.)*pow(ex3,4)*(-dd_real(1.) + dd_real(2.)*ex4) + ex4*(-dd_real(353.) + dd_real(9.)*ex4) + dd_real(21.)*pow(ex3,2)*(dd_real(37.) - dd_real(135.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(5.)*ex3*(dd_real(73.) - dd_real(308.)*ex4 + dd_real(9.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(1209.) - dd_real(3010.)*ex4 + dd_real(27.)*pow(ex4,2))) + pow(ex2,2)*ex3*pow(dd_real(1.) + ex3,2)*pow(ex4,2)*(-dd_real(742.)*ex4 + dd_real(565.)*pow(ex3,4)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + dd_real(30.)*pow(ex3,2)*(dd_real(153.) - dd_real(283.)*ex4 + dd_real(25.)*pow(ex4,2)) + ex3*(dd_real(2178.) - dd_real(4498.)*ex4 + dd_real(365.)*pow(ex4,2)) + dd_real(2.)*pow(ex3,3)*(dd_real(3573.) - dd_real(5320.)*ex4 + dd_real(591.)*pow(ex4,2))) - dd_real(2.)*pow(ex2,3)*pow(ex3,2)*(dd_real(1.) + ex3)*ex4*(ex4*(-dd_real(1089.) + dd_real(380.)*ex4) + dd_real(1130.)*pow(ex3,4)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(6.)*pow(ex3,2)*(dd_real(256.) - dd_real(1371.)*ex4 + dd_real(459.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(359.) - dd_real(2259.)*ex4 + dd_real(770.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(2391.) - dd_real(8868.)*ex4 + dd_real(2956.)*pow(ex4,2))) + pow(ex2,4)*pow(ex3,2)*(dd_real(365.)*pow(ex4,2) - dd_real(6.)*ex3*ex4*(dd_real(357.) - dd_real(506.)*ex4 + dd_real(3.)*pow(ex4,2)) + dd_real(565.)*pow(ex3,5)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(365.) - dd_real(7552.)*ex4 + dd_real(8256.)*pow(ex4,2) - dd_real(54.)*pow(ex4,3)) + pow(ex3,3)*(dd_real(768.) - dd_real(13434.)*ex4 + dd_real(12607.)*pow(ex4,2) - dd_real(54.)*pow(ex4,3)) - dd_real(6.)*pow(ex3,4)*(-dd_real(200.) + dd_real(2168.)*ex4 - dd_real(1774.)*pow(ex4,2) + dd_real(3.)*pow(ex4,3)));
return res;
}
