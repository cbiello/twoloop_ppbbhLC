#include <iostream>
#include "listYgg2Lnf0ppnp.h" 
#include <complex>
#include <qd/qd_real.h>
std::complex<dd_real> Ygg2Lnf0ppnp216(ExVariables ex){
std::complex<dd_real> ex1=ex.ex1;
std::complex<dd_real> ex2=ex.ex2;
std::complex<dd_real> ex3=ex.ex3;
std::complex<dd_real> ex4=ex.ex4;
std::complex<dd_real> ex5=ex.ex5;
std::complex<dd_real> ex6=ex.ex6;
std::complex<dd_real> res= 
dd_real(2.)*(dd_real(7.) + dd_real(21.)*ex3 - dd_real(91.)*pow(ex3,2) + dd_real(23.)*pow(ex3,3))*pow(ex4,4) + ex2*pow(ex4,3)*(-dd_real(34.) + pow(ex3,2)*(dd_real(806.) - dd_real(140.)*ex4 - dd_real(303.)*ex6) + dd_real(19.)*ex6 + dd_real(3.)*ex3*(-dd_real(96.) + dd_real(14.)*ex4 + dd_real(31.)*ex6) + pow(ex3,3)*(-dd_real(188.) + dd_real(42.)*ex4 + dd_real(71.)*ex6)) + pow(ex2,5)*ex3*(dd_real(62.) - dd_real(91.)*ex6 + dd_real(29.)*pow(ex6,2) + pow(ex3,2)*(dd_real(46.) - dd_real(67.)*ex6 + dd_real(21.)*pow(ex6,2)) + ex3*(-dd_real(180.) + dd_real(258.)*ex6 - dd_real(96.)*pow(ex6,2) + dd_real(7.)*pow(ex6,3))) + pow(ex2,2)*pow(ex4,2)*(dd_real(18.) - dd_real(22.)*ex6 + dd_real(5.)*pow(ex6,2) + pow(ex3,2)*(-dd_real(1326.) + dd_real(1016.)*ex6 - dd_real(147.)*pow(ex6,2) - dd_real(30.)*ex4*(-dd_real(20.) + dd_real(7.)*ex6)) + ex3*(dd_real(612.) - dd_real(469.)*ex6 + dd_real(57.)*pow(ex6,2) + ex4*(-dd_real(188.) + dd_real(63.)*ex6)) + pow(ex3,3)*(dd_real(288.) - dd_real(217.)*ex6 + dd_real(25.)*pow(ex6,2) + ex4*(-dd_real(172.) + dd_real(63.)*ex6))) + pow(ex2,3)*ex4*(dd_real(10.) - dd_real(13.)*ex6 + dd_real(3.)*pow(ex6,2) + pow(ex3,2)*(dd_real(962.) - dd_real(1123.)*ex6 + dd_real(327.)*pow(ex6,2) - dd_real(19.)*pow(ex6,3) + ex4*(-dd_real(960.) + dd_real(678.)*ex6 - dd_real(84.)*pow(ex6,2))) + ex3*(-dd_real(528.) + dd_real(659.)*ex6 - dd_real(194.)*pow(ex6,2) + dd_real(9.)*pow(ex6,3) + ex4*(dd_real(312.) - dd_real(217.)*ex6 + dd_real(21.)*pow(ex6,2))) + pow(ex3,3)*(-dd_real(196.) + dd_real(221.)*ex6 - dd_real(50.)*pow(ex6,2) + ex4*(dd_real(264.) - dd_real(193.)*ex6 + dd_real(21.)*pow(ex6,2)))) - dd_real(1.)*pow(ex2,4)*(dd_real(8.)*pow(-dd_real(1.) + ex6,2) + pow(ex3,3)*(-dd_real(25.)*(dd_real(2.) - dd_real(3.)*ex6 + pow(ex6,2)) + ex4*(dd_real(180.) - dd_real(197.)*ex6 + dd_real(42.)*pow(ex6,2))) + ex3*(-dd_real(162.) + dd_real(283.)*ex6 - dd_real(137.)*pow(ex6,2) + dd_real(16.)*pow(ex6,3) + ex4*(dd_real(228.) - dd_real(245.)*ex6 + dd_real(50.)*pow(ex6,2))) + pow(ex3,2)*(dd_real(260.) - dd_real(410.)*ex6 + dd_real(180.)*pow(ex6,2) - dd_real(19.)*pow(ex6,3) + ex4*(-dd_real(680.) + dd_real(726.)*ex6 - dd_real(180.)*pow(ex6,2) + dd_real(7.)*pow(ex6,3))));
return res;
}
