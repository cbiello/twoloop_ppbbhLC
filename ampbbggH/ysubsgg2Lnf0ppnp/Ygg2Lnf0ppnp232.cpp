#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp232(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(63.)*pow(ex2,7)*pow(ex3,3) - dd_real(1.)*pow(dd_real(1.) + ex3,4)*(dd_real(519.) + dd_real(623.)*ex3 + dd_real(360.)*pow(ex3,2))*pow(ex4,2) - dd_real(1.)*pow(ex2,6)*pow(ex3,2)*(dd_real(519.) + dd_real(2146.)*pow(ex3,2) + dd_real(1343.)*pow(ex3,3) + dd_real(360.)*pow(ex3,4) + ex3*(dd_real(1430.) + dd_real(63.)*ex4)) - dd_real(1.)*ex2*pow(dd_real(1.) + ex3,3)*ex4*(dd_real(1122.)*ex4 + dd_real(720.)*pow(ex3,3)*(-dd_real(1.) + dd_real(2.)*ex4) + dd_real(2.)*pow(ex3,2)*(-dd_real(623.) + dd_real(1606.)*ex4) + ex3*(-dd_real(1038.) + dd_real(3343.)*ex4)) + pow(ex2,5)*pow(ex3,2)*(-dd_real(2034.) + dd_real(2686.)*pow(ex3,3)*(-dd_real(2.) + ex4) + dd_real(720.)*pow(ex3,4)*(-dd_real(2.) + ex4) + dd_real(933.)*ex4 + dd_real(4.)*ex3*(-dd_real(1619.) + dd_real(778.)*ex4) + pow(ex3,2)*(-dd_real(8563.) + dd_real(4292.)*ex4)) - dd_real(1.)*pow(ex2,4)*ex3*(dd_real(1.) + ex3)*(-dd_real(996.)*ex4 + dd_real(360.)*pow(ex3,4)*(dd_real(6.) - dd_real(8.)*ex4 + pow(ex4,2)) + ex3*(dd_real(3156.) - dd_real(6331.)*ex4 + dd_real(519.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(5898.) - dd_real(8584.)*ex4 + dd_real(983.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(6915.) - dd_real(11228.)*ex4 + dd_real(1163.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,3)*ex3*(dd_real(1.) + ex3)*(dd_real(6.)*ex4*(-dd_real(526.) + dd_real(173.)*ex4) + dd_real(1440.)*pow(ex3,4)*(dd_real(1.) - dd_real(3.)*ex4 + pow(ex4,2)) + dd_real(4.)*pow(ex3,3)*(dd_real(983.) - dd_real(3489.)*ex4 + dd_real(1163.)*pow(ex4,2)) + dd_real(2.)*ex3*(dd_real(1080.) - dd_real(6687.)*ex4 + dd_real(2243.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(4589.) - dd_real(19728.)*ex4 + dd_real(6597.)*pow(ex4,2))) - dd_real(1.)*pow(ex2,2)*pow(dd_real(1.) + ex3,2)*(dd_real(519.)*pow(ex4,2) + dd_real(2.)*ex3*ex4*(-dd_real(1641.) + dd_real(1963.)*ex4) + dd_real(360.)*pow(ex3,4)*(dd_real(1.) - dd_real(8.)*ex4 + dd_real(6.)*pow(ex4,2)) + pow(ex3,3)*(dd_real(623.) - dd_real(7144.)*ex4 + dd_real(5898.)*pow(ex4,2)) + pow(ex3,2)*(dd_real(519.) - dd_real(7932.)*ex4 + dd_real(7275.)*pow(ex4,2)));
return res;
}
