#ifndef pentagoneval
#define pentagoneval

#include <iomanip>
#include <qd/qd_real.h>

void Fevaluation(std::complex<dd_real> Fsave[300], std::complex<dd_real> Fsavetr5[300], dd_real s12, dd_real s23, dd_real s34, dd_real s45, dd_real s15, dd_real s5, int precflag){
  
    // PENTAGON FUNCTIONS
    using namespace PentagonFunctions;

    #if precflag == 1
      using T = double;
    #else
      using T = dd_real;
    #endif  
    
    //    std::complex<T> Fsaveaux[300];
    //    std::complex<T> Fsavetr5aux[300];
    T s12aux, s23aux, s34aux, s45aux, s15aux, s5aux;
    s12aux = to_double(s12);
    s23aux = to_double(s23);
    s34aux = to_double(s34);
    s45aux = to_double(s45);
    s15aux = to_double(s15);
    s5aux = to_double(s5);
    
    constexpr KinType KT = KinType::m1; //pentagons with one mass

    //std::cout << std::setprecision(64)  << std::endl;
    //std::cout << "Debug ERROR" << std::endl;
    //std::cout << "s12= " << s12 << std::endl;
    //std::cout << "s23= " << s23 << std::endl;
    //std::cout << "s34= " << s34 << std::endl;
    //std::cout << "s45= " << s45 << std::endl;
    //std::cout << "s15= " << s15 << std::endl;
    //std::cout << "s5= " << s5 << std::endl;
    
        std::vector<FunID<KT>> needed_functions = {
       {1, 1}, {1, 6}, {1, 10}, {1, 3}, {1, 2}, {1, 7}, {2, 5}, {2, 6}, {2, 8}, 
       {2, 10}, {2, 3}, {2, 1}, {2, 21}, {2, 24}, {1, 4}, {1, 5}, {1, 9}, {1, 11}, 
       {2, 2}, {2, 4}, {2, 7}, {2, 9}, {2, 12}, {2, 17}, {2, 18}, {3, 5}, {3, 6}, 
       {3, 7}, {3, 8}, {3, 9}, {3, 10}, {3, 11}, {3, 12}, {3, 14}, {3, 15}, 
       {3, 16}, {3, 17}, {3, 18}, {3, 19}, {3, 20}, {3, 21}, {3, 22}, {3, 23}, 
       {3, 24}, {3, 25}, {3, 26}, {3, 27}, {3, 28}, {3, 33}, {3, 34}, {3, 35}, 
       {3, 36}, {3, 37}, {3, 38}, {3, 39}, {3, 40}, {3, 41}, {3, 42}, {3, 43}, 
       {3, 44}, {3, 45}, {3, 46}, {3, 47}, {3, 48}, {3, 49}, {3, 77}, {3, 78}, 
       {3, 79}, {3, 80}, {3, 81}, {3, 82}, {1, 8}, {2, 11}, {3, 13}, {3, 51}, 
       {3, 52}, {3, 53}, {3, 54}, {3, 55}, {3, 56}, {3, 59}, {3, 60}, {3, 62}, 
       {3, 63}, {3, 64}, {3, 65}, {3, 66}, {3, 67}, {3, 68}, {3, 69}, {3, 70}, 
       {3, 71}, {3, 72}, {3, 73}, {3, 74}, {3, 75}, {3, 85}, {3, 88}, {3, 89}, 
       {3, 90}, {3, 84}, {3, 133}, {3, 87}, {3, 86}, {3, 132}, {3, 145}, {3, 137}, 
       {4, 183}, {4, 119}, {4, 124}, {4, 122}, {4, 123}, {4, 125}, {4, 666}, 
       {4, 120}, {4, 217}, {4, 224}, {4, 212}, {4, 256}, {4, 326}, {4, 331}, 
       {4, 203}, {4, 206}, {4, 229}, {4, 231}, {4, 232}, {4, 236}, {4, 238}, 
       {4, 241}, {4, 162}, {4, 164}, {4, 191}, {4, 192}, {4, 196}, {4, 201}, 
       {4, 202}, {4, 204}, {4, 207}, {4, 214}, {4, 216}, {4, 234}, {4, 235}, 
       {4, 239}, {4, 240}, {4, 194}, {4, 237}, {4, 230}, {4, 195}, {4, 205}, 
       {4, 255}, {4, 325}, {4, 15}, {4, 26}, {4, 27}, {4, 33}, {4, 39}, {4, 40}, 
       {4, 42}, {4, 209}, {4, 211}, {4, 213}, {4, 330}, {4, 6}, {2, 23}, {4, 5}, 
       {4, 8}, {4, 18}, {4, 19}, {4, 21}, {4, 34}, {4, 35}, {4, 37}, {4, 38}, 
       {4, 41}, {4, 43}, {4, 268}, {4, 32}, {4, 186}, {4, 187}, {4, 210}, {4, 225}, 
       {4, 226}, {4, 227}, {4, 233}, {4, 31}, {4, 184}, {4, 260}, {4, 263}, 
       {4, 266}, {4, 270}, {4, 328}, {4, 179}, {4, 200}, {4, 221}, {4, 222}, 
       {4, 333}, {2, 25}, {4, 7}, {4, 108}, {4, 142}, {4, 149}, {4, 153}, {4, 155}, 
       {4, 156}, {4, 158}, {4, 160}, {4, 161}, {4, 166}, {4, 167}, {4, 168}, 
       {4, 169}, {4, 170}, {4, 171}, {4, 173}, {4, 175}, {4, 176}, {4, 178}, 
       {4, 180}, {4, 181}, {4, 185}, {4, 189}, {4, 193}, {4, 197}, {4, 198}, 
       {4, 199}, {4, 219}, {4, 223}, {4, 246}, {4, 248}, {4, 249}, {4, 258}, 
       {4, 262}, {4, 264}, {4, 267}, {4, 269}, {4, 272}, {4, 274}, {4, 275}, 
       {4, 276}, {4, 279}, {4, 280}, {4, 281}, {4, 282}, {4, 284}, {4, 300}, 
       {4, 301}, {4, 304}, {4, 318}, {4, 319}, {4, 323}, {4, 327}, {4, 335}, 
       {4, 346}, {4, 371}, {4, 372}, {4, 247}, {4, 261}, {4, 332}, {4, 257}, 
       {4, 259}, {4, 265}, {4, 474}, {4, 218}, {4, 220}, {4, 228}, {4, 473}, 
       {3, 58}, {3, 131}, {3, 61}, {3, 130}, {3, 144}, {3, 140}, {4, 114}, 
       {4, 126}, {4, 117}, {4, 118}, {4, 127}, {4, 665}, {4, 115}, {4, 165}, 
       {4, 174}, {4, 159}, {4, 273}, {4, 321}, {4, 336}, {4, 188}, {4, 182}, 
       {4, 320}, {4, 283}, {4, 157}, {4, 177}, {4, 190}, {4, 277}, {4, 278}, 
       {4, 172}, {4, 322}, {4, 337}, {4, 475}, {4, 472}
    };

    std::vector<FunctionObjectType<T,KT>> function_evaluators;

    // construct evaluator objects
    for (auto f : needed_functions) {
        function_evaluators.push_back(f.get_evaluator<T>()); 
    }
    
    std::array<T, 6> sij = {s5aux, s15aux, s12aux, s23aux, s34aux, s45aux};    
    Kin<T,KT> k(sij);

    
    // evaluation is done by invoking the function objects
    //std::complex<double> Fsave[300]; //299 is enought but shift by one
    
    // std::cout << "Evaluation: " << std::endl;

    for (size_t i = 0; i < function_evaluators.size(); ++i) {
         Fsave[i+1] = function_evaluators.at(i)(k);
	 //	 std::cout << needed_functions.at(i) << " = " << Fsave[i] << "\n";
    }

    //std::complex<double> Fsavetr5[300];
    for (int i = 0; i < 300; ++i) {
       Fsavetr5[i] = Fsave[i];
       //       if(i==102 || i==108 || i==109 || i==110 || i==111 || i==112 || i==113 || i==114 || i==268 || i==272 || i==273 || i==274 || i==275 || i==276 || i==277 || i==278){
       // Pentagons with tr5 charge in the new order
       if(i==103 || i==109 || i==110 || i==111 || i==112 || i==113 || i==114 || i==115 || i==269 || i==273 || i==274 || i==275 || i==276 || i==277 || i==278 || i==279){
	 Fsavetr5[i]=-Fsavetr5[i];
       }
    }

    //(4Mar) Check of correctness for the Pentagons functions including the signs from tr5. Check performed against Mathematica.
    //   std::cout << "Pentagon functions: first configuration" << std::endl;
    //   for (int i = 0; i < 299; ++i) {
    //     std::cout << needed_functions[i] << " -> " <<  std::real(Fsave[i]) << " + " << std::imag(Fsave[i]) << " I" << ", \n";
    //   }
    //   std::cout << "Pentagon functions: second configuration" << std::endl;
    //   for (int i = 0; i < 299; ++i) {
    //     std::cout << needed_functions[i] << " -> " <<  std::real(Fsavetr5[i]) << " + " << std::imag(Fsavetr5[i]) << " I" << ", \n";
    //   }

};

#endif
