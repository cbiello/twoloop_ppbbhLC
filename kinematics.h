#ifndef kinematics
#define kinematics


// Define a structure to represent four-momenta
struct FourMomentum {
    double E, px, py, pz;
};

// Function to calculate the dot product of two four-momenta
dd_real DotProduct(const FourMomentum& k1, const FourMomentum& k2) {
    return k1.E * k2.E - k1.px * k2.px - k1.py * k2.py - k1.pz * k2.pz;
}

// Function to calculate the squared magnitude of a four-momentum
dd_real MagnitudeSquared(const FourMomentum& k) {
    return DotProduct(k, k);
}

// Function to calculate Levi-Civita tensor
int LeviCivitaTensor(int a, int b, int c, int d) {
    if (a == b || a == c || a == d || b == c || b == d || c == d) {
        return 0;
    }

    int indices[4] = {a, b, c, d};
    int inversions = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (indices[i] > indices[j]) {
                ++inversions;
            }
        }
    }

    return (inversions % 2 == 0) ? 1 : -1;
}

// Function to contract the Levi-Civita tensor with four 4-vectors
std::complex<double> ContractLeviCivita(double p1_0, double p1_1, double p1_2, double p1_3,
                                        double p2_0, double p2_1, double p2_2, double p2_3,
                                        double p3_0, double p3_1, double p3_2, double p3_3,
                                        double p4_0, double p4_1, double p4_2, double p4_3) {
  double p1[4]={p1_0,p1_1,p1_2,p1_3};
  double p2[4]={p2_0,p2_1,p2_2,p2_3};
  double p3[4]={p3_0,p3_1,p3_2,p3_3};
  double p4[4]={p4_0,p4_1,p4_2,p4_3};

    std::complex<double> ContractedExpression = 0.0;
    for (int a = 0; a < 4; ++a) {
        for (int b = 0; b < 4; ++b) {
            for (int c = 0; c < 4; ++c) {
                for (int d = 0; d < 4; ++d) {
                    ContractedExpression += LeviCivitaTensor(a, b, c, d) * p1[a] * p2[b] * p3[c] * p4[d];
                }
            }
        }
    }

    return ContractedExpression;
}

ExVariables fromsijtoex(dd_real s12,dd_real s23,dd_real s34,dd_real s45,dd_real s15,dd_real s5, std::complex<dd_real> tr5){

  ExVariables exVars;
  
  // Compute ex variables based on the given expressions
    exVars.ex1 = s12;
    exVars.ex2 = (-tr5 - s12 * s15 - s5 * s23 + s12 * s23 + s23 * s34 + s15 * s45 - s34 * s45) / (2 * s12 * s34);
    exVars.ex3 = (-(tr5 * s5) + tr5 * s12 + tr5 * s15 + s5 * s12 * s15 - s12 * s12 * s15 - s12 * s15 * s15 +
                  s5 * s5 * s23 - 2 * s5 * s12 * s23 + s12 * s12 * s23 - s5 * s15 * s23 + s12 * s15 * s23 -
                  2 * s5 * s12 * s34 + 2 * s12 * s15 * s34 - s5 * s23 * s34 - s12 * s23 * s34 + s15 * s23 * s34 -
                  s5 * s15 * s45 + s12 * s15 * s45 + s15 * s15 * s45 + s5 * s34 * s45 + s12 * s23 * s45 - s15 * s34 * s45 - s12 * (s23 - s34) * s45) /
                 ((-s12 - s23 + s45) * (tr5 - 2 * s5 * s12 + s12 * s15 - s5 * s23 - s12 * s23 + s23 * s34 +
                                         2 * s12 * s45 + s15 * s45 - s34 * s45));

    exVars.ex4 = s23 / s12;

    exVars.ex5 = (tr5 * s23 + 2 * s5 * s12 * s23 + s12 * s15 * s23 + s5 * s23 * s23 + s12 * s23 * s23 +
                  2 * s15 * s23 * s23 - s23 * s23 * s34 - tr5 * s45 - s12 * s15 * s45 - s5 * s23 * s45 - s12 * s23 * s45 -
                  3 * s15 * s23 * s45 + 2 * s23 * s34 * s45 + s15 * s45 * s45 - s34 * s45 * s45) /
                 (s23 * (tr5 + s12 * s15 - s5 * s23 + s12 * s23 + 2 * s15 * s23 - s23 * s34 - s15 * s45 + s34 * s45));

    exVars.ex6 = s45 / s12;

    return exVars;
    
};


#endif
