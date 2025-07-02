#ifndef HardfuncSCET
#define HardfuncSCET


void qqSCET(ExVariables exVars, ExVariables extrafo, std::complex<dd_real> H[70], std::complex<dd_real> Fr[29], std::complex<dd_real> sqrtA[3], dd_real sijA[6], dd_real mu, dd_real nlight, dd_real Ncol, dd_real &H0qq, dd_real &H1qqSCET, dd_real &H2qqSCET){
 
    //Let us choose the channel qq and the subchannel qqx
    //helicities= {"+++-","++-+"}
    //permutation={{1,2,3,4,5}}
    std::complex<dd_real> qqtreepppn=treepppn(exVars);
    std::complex<dd_real> qqtreeppnp=treeppnp(exVars);
    std::complex<dd_real> qqtreennnp=treepppn(extrafo)*newphasepppn(exVars)/phasepppn(extrafo);
    std::complex<dd_real> qqtreennpn=treeppnp(extrafo)*newphaseppnp(exVars)/phaseppnp(extrafo);
    //one-loop
    std::complex<dd_real> olnf0pppn=qqoneLnf0pppn(H,exVars);
    std::complex<dd_real> olnf0pppnconj=qqoneLnf0pppn(H,extrafo)*newphasepppn(exVars)/phasepppn(extrafo);
    std::complex<dd_real> olnf0ppnp=qqoneLnf0ppnp(H,exVars);
    std::complex<dd_real> olnf0ppnpconj=qqoneLnf0ppnp(H,extrafo)*newphaseppnp(exVars)/phaseppnp(extrafo);
    std::complex<dd_real> olnf1pppn=qqoneLnf1pppn(H,exVars);
    std::complex<dd_real> olnf1pppnconj=qqoneLnf1pppn(H,extrafo)*newphasepppn(exVars)/phasepppn(extrafo);
    std::complex<dd_real> olnf1ppnp=qqoneLnf1ppnp(H,exVars);
    std::complex<dd_real> olnf1ppnpconj=qqoneLnf1ppnp(H,extrafo)*newphaseppnp(exVars)/phaseppnp(extrafo);
    //two-loop
    std::complex<dd_real> tlnf2pppn=qqtwoLnf2pppn(H,exVars);
    std::complex<dd_real> tlnf2pppnconj=qqtwoLnf2pppn(H,extrafo)*newphasepppn(exVars)/phasepppn(extrafo);
    std::complex<dd_real> tlnf2ppnp=qqtwoLnf2ppnp(H,exVars);
    std::complex<dd_real> tlnf2ppnpconj=qqtwoLnf2ppnp(H,extrafo)*newphaseppnp(exVars)/phaseppnp(extrafo);
    std::complex<dd_real> tlnf1pppn=qqtwoLnf1pppn(H,sqrtA,exVars);
    std::complex<dd_real> tlnf1pppnconj=qqtwoLnf1pppn(H,sqrtA,extrafo)*newphasepppn(exVars)/phasepppn(extrafo);
    std::complex<dd_real> tlnf1ppnp=qqtwoLnf1ppnp(H,sqrtA,exVars);
    std::complex<dd_real> tlnf1ppnpconj=qqtwoLnf1ppnp(H,sqrtA,extrafo)*newphaseppnp(exVars)/phaseppnp(extrafo);
    std::complex<dd_real> tlnf0pppn=qqtwoLnf0pppnsum(H,sqrtA,exVars);
    std::complex<dd_real> tlnf0pppnconj=qqtwoLnf0pppnsum(H,sqrtA,extrafo)*newphasepppn(exVars)/phasepppn(extrafo);
    std::complex<dd_real> tlnf0ppnp=qqtwoLnf0ppnpsum(H,sqrtA,exVars);
    std::complex<dd_real> tlnf0ppnpconj=qqtwoLnf0ppnpsum(H,sqrtA,extrafo)*newphaseppnp(exVars)/phaseppnp(extrafo);
    //qq sqamps
    std::complex<dd_real> sqqqtreepppn = qqtreepppn*qqtreennnp;
    std::complex<dd_real> sqqqtreeppnp = qqtreeppnp*qqtreennpn;
    std::complex<dd_real> sqqqolnf0pppn = qqtreennnp*olnf0pppn;
    std::complex<dd_real> sqqqolnf0ppnp = qqtreennpn*olnf0ppnp;
    std::complex<dd_real> sqqqolnf0nnnp = qqtreepppn*olnf0pppnconj;
    std::complex<dd_real> sqqqolnf0nnpn = qqtreeppnp*olnf0ppnpconj;
    std::complex<dd_real> sqqqolnf1pppn = qqtreennnp*olnf1pppn;
    std::complex<dd_real> sqqqolnf1ppnp = qqtreennpn*olnf1ppnp;
    std::complex<dd_real> sqqqolnf1nnnp = qqtreepppn*olnf1pppnconj;
    std::complex<dd_real> sqqqolnf1nnpn = qqtreeppnp*olnf1ppnpconj;
    std::complex<dd_real> sqqqtlnf0pppn = qqtreennnp*tlnf0pppn;
    std::complex<dd_real> sqqqtlnf0ppnp = qqtreennpn*tlnf0ppnp;
    std::complex<dd_real> sqqqtlnf0nnnp = qqtreepppn*tlnf0pppnconj;
    std::complex<dd_real> sqqqtlnf0nnpn = qqtreeppnp*tlnf0ppnpconj;
    std::complex<dd_real> sqqqtlnf1pppn = qqtreennnp*tlnf1pppn;
    std::complex<dd_real> sqqqtlnf1ppnp = qqtreennpn*tlnf1ppnp;
    std::complex<dd_real> sqqqtlnf1nnnp = qqtreepppn*tlnf1pppnconj;
    std::complex<dd_real> sqqqtlnf1nnpn = qqtreeppnp*tlnf1ppnpconj;
    std::complex<dd_real> sqqqtlnf2pppn = qqtreennnp*tlnf2pppn;
    std::complex<dd_real> sqqqtlnf2ppnp = qqtreennpn*tlnf2ppnp;
    std::complex<dd_real> sqqqtlnf2nnnp = qqtreepppn*tlnf2pppnconj;
    std::complex<dd_real> sqqqtlnf2nnpn = qqtreeppnp*tlnf2ppnpconj;
    //sum over helicities
    std::complex<dd_real> sqqqtree =sqqqtreepppn+sqqqtreeppnp+sqqqtreepppn+sqqqtreeppnp;
    std::complex<dd_real> sqqqolnf0=sqqqolnf0pppn+sqqqolnf0ppnp+sqqqolnf0nnnp+sqqqolnf0nnpn;
    std::complex<dd_real> sqqqolnf1=sqqqolnf1pppn+sqqqolnf1ppnp+sqqqolnf1nnnp+sqqqolnf1nnpn;
    std::complex<dd_real> sqqqtlnf0=sqqqtlnf0pppn+sqqqtlnf0ppnp+sqqqtlnf0nnnp+sqqqtlnf0nnpn;
    std::complex<dd_real> sqqqtlnf1=sqqqtlnf1pppn+sqqqtlnf1ppnp+sqqqtlnf1nnnp+sqqqtlnf1nnpn;
    std::complex<dd_real> sqqqtlnf2=sqqqtlnf2pppn+sqqqtlnf2ppnp+sqqqtlnf2nnnp+sqqqtlnf2nnpn;
    //Hfunctions in Catani
    H0qq=2*sqqqtree.real(); //remove small immaginary part which is due to numerical effects

    //TOFIX
    //H0 is not H0 but two*H0
    dd_real zeta3=dd_real(1.2020569031595942853997381615114499);
    dd_real pi=dd_real(3.1415926535897932384626433832795);
    dd_real qqH1nf0mu=2*sqqqolnf0.real() + dd_real(31.0)/dd_real(6.0) * H0qq * log(mu*mu);
    dd_real qqH1nf1mu=2*sqqqolnf1.real() - dd_real(2.)/dd_real(3.) * H0qq * log(mu*mu);
    dd_real qqH2nf0mu=2*sqqqtlnf0.real() + log(mu*mu)*( (dd_real(5093.)/dd_real(216.)-dd_real(11.)/dd_real(12.)*pi*pi+dd_real(14.0)*zeta3)*H0qq + dd_real(53.)/dd_real(6.)* 2*sqqqolnf0.real() )
      + dd_real(1643.)/dd_real(72.) * H0qq * log(mu*mu) * log(mu*mu);
    dd_real qqH2nf1mu=2*sqqqtlnf1.real() + log(mu*mu)*( (-dd_real(329.)/dd_real(54.)+pi*pi/dd_real(6.))*H0qq -dd_real(4.)/dd_real(3.)* 2*sqqqolnf0.real() + dd_real(53.)/dd_real(6.) * 2*sqqqolnf1.real() )
      - dd_real(115.)/dd_real(18.) * H0qq * log(mu*mu) * log(mu*mu);
    dd_real qqH2nf2mu=2*sqqqtlnf2.real() + log(mu*mu)*( - dd_real(4.)/dd_real(3.) * 2*sqqqolnf1.real() )
      + dd_real(4.)/dd_real(9.)  * H0qq * log(mu*mu) * log(mu*mu);
    
    dd_real H1qqmu=Ncol*qqH1nf0mu+nlight*qqH1nf1mu;
    dd_real H2qqmu=Ncol*Ncol*qqH2nf0mu+nlight*Ncol*qqH2nf1mu+nlight*nlight*qqH2nf2mu;

    //normalisation
    dd_real qnorm=Ncol*Ncol*(dd_real(4.0)*dd_real(3.1415926535897932384626433832795))*(dd_real(4.0)*dd_real(3.1415926535897932384626433832795));
    qnorm=qnorm/dd_real(3.0)/dd_real(3.0)/dd_real(4.0);

    H0qq=qnorm*H0qq;
    H1qqmu=qnorm*H1qqmu;
    H2qqmu=qnorm*H2qqmu;
    //std::cout << "SCET for mu= " << mu << std::endl;
    //Let me compute the needed terms of the expansion of Catani operator
    dd_real I1epsm2qq=qqI1epsm2(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    dd_real I1epsm1qq=qqI1epsm1(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    dd_real I1eps00qq=qqI1eps0(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    dd_real I1epsp1qq=qqI1epsp1(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    dd_real I1epsp2qq=qqI1epsp2(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    dd_real I2eps00qq=qqI2eps0(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
      
    H1qqSCET=H1qqmu + 2*I1eps00qq*H0qq;
    H2qqSCET=H2qqmu + 2*I1eps00qq*H1qqSCET + 4*(I2eps00qq+I1epsm1qq*I1epsp1qq+I1epsm2qq*I1epsp2qq)*H0qq;
    H0qq=H0qq/dd_real(2.0);
    //until now H0 was 2Re<M0|M0>
    //now we pass the true tree-level matrix element <M0|M0>
    
};


void qxqSCET(ExVariables extest, ExVariables extrafoperm, ExVariables extrafopermconj, std::complex<dd_real> Hperm[70], std::complex<dd_real> Frperm[29],  std::complex<dd_real> sqrtB[3], dd_real sijB[6], dd_real mu, dd_real nlight, dd_real Ncol, dd_real &H0qxq, dd_real &H1qxqSCET, dd_real &H2qxqSCET){
    
    //helicities= {"+++-","++-+"}
    //permutation={{1,2,4,3,5}}
    std::complex<dd_real> qxqtreepppn=treepppn(extrafoperm)*permnewphasepppn(extest)/phasepppn(extrafoperm);
    std::complex<dd_real> qxqtreeppnp=treeppnp(extrafoperm)*permnewphaseppnp(extest)/phaseppnp(extrafoperm);
    std::complex<dd_real> qxqtreennnp=treepppn(extrafopermconj)*permconjnewphasepppn(extest)/phasepppn(extrafopermconj);
    std::complex<dd_real> qxqtreennpn=treeppnp(extrafopermconj)*permconjnewphaseppnp(extest)/phaseppnp(extrafopermconj);
    //One-loop QQ
    std::complex<dd_real> olnf0pppnperm=qqoneLnf0pppn(Hperm,extrafoperm)*permnewphasepppn(extest)/phasepppn(extrafoperm);
    std::complex<dd_real> olnf0pppnpermconj=qqoneLnf0pppn(Hperm,extrafopermconj)*permconjnewphasepppn(extest)/phasepppn(extrafopermconj);      
    std::complex<dd_real> olnf0ppnpperm=qqoneLnf0ppnp(Hperm,extrafoperm)*permnewphaseppnp(extest)/phaseppnp(extrafoperm);
    std::complex<dd_real> olnf0ppnppermconj=qqoneLnf0ppnp(Hperm,extrafopermconj)*permconjnewphaseppnp(extest)/phaseppnp(extrafopermconj);      
    std::complex<dd_real> olnf1pppnperm=qqoneLnf1pppn(Hperm,extrafoperm)*permnewphasepppn(extest)/phasepppn(extrafoperm);
    std::complex<dd_real> olnf1pppnpermconj=qqoneLnf1pppn(Hperm,extrafopermconj)*permconjnewphasepppn(extest)/phasepppn(extrafopermconj);      
    std::complex<dd_real> olnf1ppnpperm=qqoneLnf1ppnp(Hperm,extrafoperm)*permnewphaseppnp(extest)/phaseppnp(extrafoperm);
    std::complex<dd_real> olnf1ppnppermconj=qqoneLnf1ppnp(Hperm,extrafopermconj)*permconjnewphaseppnp(extest)/phaseppnp(extrafopermconj);      

    //Two-loop qq
    //nf2
    std::complex<dd_real> tlnf2pppnperm=qqtwoLnf2pppn(Hperm,extrafoperm)*permnewphasepppn(extest)/phasepppn(extrafoperm);
    std::complex<dd_real> tlnf2pppnpermconj=qqtwoLnf2pppn(Hperm,extrafopermconj)*permconjnewphasepppn(extest)/phasepppn(extrafopermconj);      
    std::complex<dd_real> tlnf2ppnpperm=qqtwoLnf2ppnp(Hperm,extrafoperm)*permnewphaseppnp(extest)/phaseppnp(extrafoperm);
    std::complex<dd_real> tlnf2ppnppermconj=qqtwoLnf2ppnp(Hperm,extrafopermconj)*permconjnewphaseppnp(extest)/phaseppnp(extrafopermconj);      
    //nf1
    std::complex<dd_real> tlnf1pppnperm=qqtwoLnf1pppn(Hperm,sqrtB,extrafoperm)*permnewphasepppn(extest)/phasepppn(extrafoperm);
    std::complex<dd_real> tlnf1pppnpermconj=qqtwoLnf1pppn(Hperm,sqrtB,extrafopermconj)*permconjnewphasepppn(extest)/phasepppn(extrafopermconj);
    std::complex<dd_real> tlnf1ppnpperm=qqtwoLnf1ppnp(Hperm,sqrtB,extrafoperm)*permnewphaseppnp(extest)/phaseppnp(extrafoperm);
    std::complex<dd_real> tlnf1ppnppermconj=qqtwoLnf1ppnp(Hperm,sqrtB,extrafopermconj)*permconjnewphaseppnp(extest)/phaseppnp(extrafopermconj); 
    //nf0
    std::complex<dd_real> tlnf0pppnperm=qqtwoLnf0pppnsum(Hperm,sqrtB,extrafoperm)*permnewphasepppn(extest)/phasepppn(extrafoperm);
    std::complex<dd_real> tlnf0pppnpermconj=qqtwoLnf0pppnsum(Hperm,sqrtB,extrafopermconj)*permconjnewphasepppn(extest)/phasepppn(extrafopermconj);  
    std::complex<dd_real> tlnf0ppnpperm=qqtwoLnf0ppnpsum(Hperm,sqrtB,extrafoperm)*permnewphaseppnp(extest)/phaseppnp(extrafoperm);
    std::complex<dd_real> tlnf0ppnppermconj=qqtwoLnf0ppnpsum(Hperm,sqrtB,extrafopermconj)*permconjnewphaseppnp(extest)/phaseppnp(extrafopermconj);
    //CB: at this point we have all the helicity amplitudes computed!
    //Let us manipulate them to obtain the hard function.
    //Step1: Compute the squared helicity amplitudes
    //During the checks I notice that in the Mathematica implementation there is a different
    //convention for the helicities which are swopped if we perform a permutation.
    //Here I prefered to indicate the helicities of (1,2,3,4) as (+++-) instead
    //of focusing on the helicities of (1,2,4,3) with (++-+).
    std::complex<dd_real> sqqxqtreepppn = qxqtreepppn*qxqtreennnp;
    std::complex<dd_real> sqqxqtreeppnp = qxqtreeppnp*qxqtreennpn;
    //one-loop
    std::complex<dd_real> sqqxqolnf0pppn = qxqtreennnp*olnf0pppnperm;
    std::complex<dd_real> sqqxqolnf0ppnp = qxqtreennpn*olnf0ppnpperm;
    std::complex<dd_real> sqqxqolnf0nnnp = qxqtreepppn*olnf0pppnpermconj;
    std::complex<dd_real> sqqxqolnf0nnpn = qxqtreeppnp*olnf0ppnppermconj;
    std::complex<dd_real> sqqxqolnf1pppn = qxqtreennnp*olnf1pppnperm;
    std::complex<dd_real> sqqxqolnf1ppnp = qxqtreennpn*olnf1ppnpperm;
    std::complex<dd_real> sqqxqolnf1nnnp = qxqtreepppn*olnf1pppnpermconj;
    std::complex<dd_real> sqqxqolnf1nnpn = qxqtreeppnp*olnf1ppnppermconj;
    //two-loop
    //qq squared amps
    std::complex<dd_real> sqqxqtlnf0pppn = qxqtreennnp*tlnf0pppnperm;
    std::complex<dd_real> sqqxqtlnf0ppnp = qxqtreennpn*tlnf0ppnpperm;
    std::complex<dd_real> sqqxqtlnf0nnnp = qxqtreepppn*tlnf0pppnpermconj;
    std::complex<dd_real> sqqxqtlnf0nnpn = qxqtreeppnp*tlnf0ppnppermconj;
    std::complex<dd_real> sqqxqtlnf1pppn = qxqtreennnp*tlnf1pppnperm;
    std::complex<dd_real> sqqxqtlnf1ppnp = qxqtreennpn*tlnf1ppnpperm;
    std::complex<dd_real> sqqxqtlnf1nnnp = qxqtreepppn*tlnf1pppnpermconj;
    std::complex<dd_real> sqqxqtlnf1nnpn = qxqtreeppnp*tlnf1ppnppermconj;
    std::complex<dd_real> sqqxqtlnf2pppn = qxqtreennnp*tlnf2pppnperm;
    std::complex<dd_real> sqqxqtlnf2ppnp = qxqtreennpn*tlnf2ppnpperm;
    std::complex<dd_real> sqqxqtlnf2nnnp = qxqtreepppn*tlnf2pppnpermconj;
    std::complex<dd_real> sqqxqtlnf2nnpn = qxqtreeppnp*tlnf2ppnppermconj;    
    //Step2: sum over the helicities (and permutations for gg)
    //trees
    //In the sum we have to consider all the helicities, for example +++- but also ---+.
    //Since we didn't computed the second one because it is the same of the first one,
    //we have to add twice the +++- contribution. Same for the other independent helicities.
    std::complex<dd_real> sqqxqtree=sqqxqtreepppn+sqqxqtreeppnp+sqqxqtreepppn+sqqxqtreeppnp;    
    //oneloop
    std::complex<dd_real> sqqxqolnf0=sqqxqolnf0pppn+sqqxqolnf0ppnp+sqqxqolnf0nnnp+sqqxqolnf0nnpn;
    std::complex<dd_real> sqqxqolnf1=sqqxqolnf1pppn+sqqxqolnf1ppnp+sqqxqolnf1nnnp+sqqxqolnf1nnpn;
    //two-loop
    std::complex<dd_real> sqqxqtlnf0=sqqxqtlnf0pppn+sqqxqtlnf0ppnp+sqqxqtlnf0nnnp+sqqxqtlnf0nnpn;
    std::complex<dd_real> sqqxqtlnf1=sqqxqtlnf1pppn+sqqxqtlnf1ppnp+sqqxqtlnf1nnnp+sqqxqtlnf1nnpn;
    std::complex<dd_real> sqqxqtlnf2=sqqxqtlnf2pppn+sqqxqtlnf2ppnp+sqqxqtlnf2nnnp+sqqxqtlnf2nnpn;

    dd_real zeta3=dd_real(1.2020569031595942853997381615114499);
    dd_real pi=dd_real(3.1415926535897932384626433832795);

    H0qxq=2*sqqxqtree.real();
    dd_real qxqH1nf0mu=2*sqqxqolnf0.real() + dd_real(31.0)/dd_real(6.0) * H0qxq * log(mu*mu);
    dd_real qxqH1nf1mu=2*sqqxqolnf1.real() - dd_real(2.)/dd_real(3.) * H0qxq * log(mu*mu);
    dd_real qxqH2nf0mu=2*sqqxqtlnf0.real() + log(mu*mu)*( (dd_real(5093.)/dd_real(216.)-dd_real(11.)/dd_real(12.)*pi*pi+dd_real(14.0)*zeta3)*H0qxq + dd_real(53.)/dd_real(6.)* 2*sqqxqolnf0.real() )
      + dd_real(1643.)/dd_real(72.) * H0qxq * log(mu*mu) * log(mu*mu);
    dd_real qxqH2nf1mu=2*sqqxqtlnf1.real() + log(mu*mu)*( (-dd_real(329.)/dd_real(54.)+pi*pi/dd_real(6.))*H0qxq -dd_real(4.)/dd_real(3.)* 2*sqqxqolnf0.real() + dd_real(53.)/dd_real(6.) * 2*sqqxqolnf1.real() )
      - dd_real(115.)/dd_real(18.) * H0qxq * log(mu*mu) * log(mu*mu);
    dd_real qxqH2nf2mu=2*sqqxqtlnf2.real() + log(mu*mu)*( - dd_real(4.)/dd_real(3.) * 2*sqqxqolnf1.real() )
      + dd_real(4.)/dd_real(9.)  * H0qxq * log(mu*mu) * log(mu*mu);
    dd_real H1qxqmu=Ncol*qxqH1nf0mu+nlight*qxqH1nf1mu;
    dd_real H2qxqmu=Ncol*Ncol*qxqH2nf0mu+nlight*Ncol*qxqH2nf1mu+nlight*nlight*qxqH2nf2mu;

    //normalisation
    dd_real qnorm=Ncol*Ncol*(dd_real(4.0)*dd_real(3.1415926535897932384626433832795))*(dd_real(4.0)*dd_real(3.1415926535897932384626433832795));
    qnorm=qnorm/dd_real(3.0)/dd_real(3.0)/dd_real(4.0);
    
    H0qxq=qnorm*H0qxq;
    H1qxqmu=qnorm*H1qxqmu;
    H2qxqmu=qnorm*H2qxqmu;

    dd_real I1epsm2qxq=qqI1epsm2(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    dd_real I1epsm1qxq=qqI1epsm1(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    dd_real I1eps00qxq=qqI1eps0(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    dd_real I1epsp1qxq=qqI1epsp1(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    dd_real I1epsp2qxq=qqI1epsp2(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    dd_real I2eps00qxq=qqI2eps0(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);

    H1qxqSCET=H1qxqmu + 2*I1eps00qxq*H0qxq;
    H2qxqSCET=H2qxqmu + 2*I1eps00qxq*H1qxqSCET + 4*(I2eps00qxq+I1epsm1qxq*I1epsp1qxq+I1epsm2qxq*I1epsp2qxq)*H0qxq;
    H0qxq=H0qxq/dd_real(2.0);
  

}

void ggSCET(ExVariables exVars, ExVariables extrafo, ExVariables extrafoperm, ExVariables extrafopermconj, std::complex<dd_real> H[70], std::complex<dd_real> Hperm[70], std::complex<dd_real> Fr[29], std::complex<dd_real> Frperm[29], std::complex<dd_real> sqrtA[3], std::complex<dd_real> sqrtB[3], dd_real sijA[6], dd_real sijB[6], dd_real mu, dd_real nlight, dd_real Ncol, dd_real &H0gg, dd_real &H1ggSCET, dd_real &H2ggSCET){

    ExVariables extest=exVars;
    //Firstperm
    std::complex<dd_real> ggtreepppp=treegpppp(extest);
    std::complex<dd_real> ggtreepppn=treegpppn(extest);
    std::complex<dd_real> ggtreeppnp=treegppnp(extest);
    std::complex<dd_real> ggtreeppnn=treegppnn(extest);
    std::complex<dd_real> ggtreennnn=treegpppp(extrafo)*newphasegpppp(extest)/phasegpppp(extrafo);
    std::complex<dd_real> ggtreennnp=treegpppn(extrafo)*newphasegpppn(extest)/phasegpppn(extrafo);
    std::complex<dd_real> ggtreennpn=treegppnp(extrafo)*newphasegppnp(extest)/phasegppnp(extrafo);
    std::complex<dd_real> ggtreennpp=treegppnn(extrafo)*newphasegppnn(extest)/phasegppnn(extrafo);

    //Secondperm
    std::complex<dd_real> gxgtreepppp=treegpppp(extrafoperm)*permnewphasegpppp(extest)/phasegpppp(extrafoperm);
    std::complex<dd_real> gxgtreepppn=treegpppn(extrafoperm)*permnewphasegpppn(extest)/phasegpppn(extrafoperm);
    std::complex<dd_real> gxgtreeppnp=treegppnp(extrafoperm)*permnewphasegppnp(extest)/phasegppnp(extrafoperm);
    std::complex<dd_real> gxgtreeppnn=treegppnn(extrafoperm)*permnewphasegppnn(extest)/phasegppnn(extrafoperm);
    std::complex<dd_real> gxgtreennnn=treegpppp(extrafopermconj)*permconjnewphasegpppp(extest)/phasegpppp(extrafopermconj);
    std::complex<dd_real> gxgtreennnp=treegpppn(extrafopermconj)*permconjnewphasegpppn(extest)/phasegpppn(extrafopermconj);
    std::complex<dd_real> gxgtreennpn=treegppnp(extrafopermconj)*permconjnewphasegppnp(extest)/phasegppnp(extrafopermconj);
    std::complex<dd_real> gxgtreennpp=treegppnn(extrafopermconj)*permconjnewphasegppnn(extest)/phasegppnn(extrafopermconj);
            
    //One-loop  gg
    std::complex<dd_real> olnf0gpppp=ggoneLnf0pppp(H,exVars);
    std::complex<dd_real> olnf0gppppconj=ggoneLnf0pppp(H,extrafo)*newphasegpppp(extest)/phasegpppp(extrafo);
    std::complex<dd_real> olnf0gppppperm=ggoneLnf0pppp(Hperm,extrafoperm)*permnewphasegpppp(extest)/phasegpppp(extrafoperm);
    std::complex<dd_real> olnf0gpppppermconj=ggoneLnf0pppp(Hperm,extrafopermconj)*permconjnewphasegpppp(extest)/phasegpppp(extrafopermconj);      
    
    std::complex<dd_real> olnf0gpppn=ggoneLnf0pppn(H,sqrtA,exVars);
    std::complex<dd_real> olnf0gpppnconj=ggoneLnf0pppn(H,sqrtA,extrafo)*newphasegpppn(extest)/phasegpppn(extrafo);
    std::complex<dd_real> olnf0gpppnperm=ggoneLnf0pppn(Hperm,sqrtB,extrafoperm)*permnewphasegpppn(extest)/phasegpppn(extrafoperm);
    std::complex<dd_real> olnf0gpppnpermconj=ggoneLnf0pppn(Hperm,sqrtB,extrafopermconj)*permconjnewphasegpppn(extest)/phasegpppn(extrafopermconj);      
    
    std::complex<dd_real> olnf0gppnp=ggoneLnf0ppnp(H,sqrtA,exVars);
    std::complex<dd_real> olnf0gppnpconj=ggoneLnf0ppnp(H,sqrtA,extrafo)*newphasegppnp(extest)/phasegppnp(extrafo);
    std::complex<dd_real> olnf0gppnpperm=ggoneLnf0ppnp(Hperm,sqrtB,extrafoperm)*permnewphasegppnp(extest)/phasegppnp(extrafoperm);
    std::complex<dd_real> olnf0gppnppermconj=ggoneLnf0ppnp(Hperm,sqrtB,extrafopermconj)*permconjnewphasegppnp(extest)/phasegppnp(extrafopermconj);      
    
    std::complex<dd_real> olnf0gppnn=ggoneLnf0ppnn(H,exVars);
    std::complex<dd_real> olnf0gppnnconj=ggoneLnf0ppnn(H,extrafo)*newphasegppnn(extest)/phasegppnn(extrafo);
    std::complex<dd_real> olnf0gppnnperm=ggoneLnf0ppnn(Hperm,extrafoperm)*permnewphasegppnn(extest)/phasegppnn(extrafoperm);
    std::complex<dd_real> olnf0gppnnpermconj=ggoneLnf0ppnn(Hperm,extrafopermconj)*permconjnewphasegppnn(extest)/phasegppnn(extrafopermconj);      
    
    std::complex<dd_real> olnf1gpppp=ggoneLnf1pppp(H,exVars);
    std::complex<dd_real> olnf1gppppconj=ggoneLnf1pppp(H,extrafo)*newphasegpppp(extest)/phasegpppp(extrafo);
    std::complex<dd_real> olnf1gppppperm=ggoneLnf1pppp(Hperm,extrafoperm)*permnewphasegpppp(extest)/phasegpppp(extrafoperm);
    std::complex<dd_real> olnf1gpppppermconj=ggoneLnf1pppp(Hperm,extrafopermconj)*permconjnewphasegpppp(extest)/phasegpppp(extrafopermconj);      
    
    std::complex<dd_real> olnf1gpppn=ggoneLnf1pppn(H,exVars);
    std::complex<dd_real> olnf1gpppnconj=ggoneLnf1pppn(H,extrafo)*newphasegpppn(extest)/phasegpppn(extrafo);
    std::complex<dd_real> olnf1gpppnperm=ggoneLnf1pppn(Hperm,extrafoperm)*permnewphasegpppn(extest)/phasegpppn(extrafoperm);
    std::complex<dd_real> olnf1gpppnpermconj=ggoneLnf1pppn(Hperm,extrafopermconj)*permconjnewphasegpppn(extest)/phasegpppn(extrafopermconj);      
    
    std::complex<dd_real> olnf1gppnp=ggoneLnf1ppnp(H,exVars);
    std::complex<dd_real> olnf1gppnpconj=ggoneLnf1ppnp(H,extrafo)*newphasegppnp(extest)/phasegppnp(extrafo);
    std::complex<dd_real> olnf1gppnpperm=ggoneLnf1ppnp(Hperm,extrafoperm)*permnewphasegppnp(extest)/phasegppnp(extrafoperm);
    std::complex<dd_real> olnf1gppnppermconj=ggoneLnf1ppnp(Hperm,extrafopermconj)*permconjnewphasegppnp(extest)/phasegppnp(extrafopermconj);      
    
    std::complex<dd_real> olnf1gppnn=ggoneLnf1ppnn(H,exVars);
    std::complex<dd_real> olnf1gppnnconj=ggoneLnf1ppnn(H,extrafo)*newphasegppnn(extest)/phasegppnn(extrafo);
    std::complex<dd_real> olnf1gppnnperm=ggoneLnf1ppnn(Hperm,extrafoperm)*permnewphasegppnn(extest)/phasegppnn(extrafoperm);
    std::complex<dd_real> olnf1gppnnpermconj=ggoneLnf1ppnn(Hperm,extrafopermconj)*permconjnewphasegppnn(extest)/phasegppnn(extrafopermconj);      
       
    
    //Two-loop gg

    //nf2
    std::complex<dd_real> tlnf2gpppp=ggtwoLnf2pppp(H,exVars);
    std::complex<dd_real> tlnf2gppppconj=ggtwoLnf2pppp(H,extrafo)*newphasegpppp(extest)/phasegpppp(extrafo);
    std::complex<dd_real> tlnf2gppppperm=ggtwoLnf2pppp(Hperm,extrafoperm)*permnewphasegpppp(extest)/phasegpppp(extrafoperm);
    std::complex<dd_real> tlnf2gpppppermconj=ggtwoLnf2pppp(Hperm,extrafopermconj)*permconjnewphasegpppp(extest)/phasegpppp(extrafopermconj);      
    
    std::complex<dd_real> tlnf2gpppn=ggtwoLnf2pppn(H,exVars);
    std::complex<dd_real> tlnf2gpppnconj=ggtwoLnf2pppn(H,extrafo)*newphasegpppn(extest)/phasegpppn(extrafo);
    std::complex<dd_real> tlnf2gpppnperm=ggtwoLnf2pppn(Hperm,extrafoperm)*permnewphasegpppn(extest)/phasegpppn(extrafoperm);
    std::complex<dd_real> tlnf2gpppnpermconj=ggtwoLnf2pppn(Hperm,extrafopermconj)*permconjnewphasegpppn(extest)/phasegpppn(extrafopermconj);      
    
    std::complex<dd_real> tlnf2gppnp=ggtwoLnf2ppnp(H,exVars);
    std::complex<dd_real> tlnf2gppnpconj=ggtwoLnf2ppnp(H,extrafo)*newphasegppnp(extest)/phasegppnp(extrafo);
    std::complex<dd_real> tlnf2gppnpperm=ggtwoLnf2ppnp(Hperm,extrafoperm)*permnewphasegppnp(extest)/phasegppnp(extrafoperm);
    std::complex<dd_real> tlnf2gppnppermconj=ggtwoLnf2ppnp(Hperm,extrafopermconj)*permconjnewphasegppnp(extest)/phasegppnp(extrafopermconj);      
    
    std::complex<dd_real> tlnf2gppnn=ggtwoLnf2ppnn(H,exVars);
    std::complex<dd_real> tlnf2gppnnconj=ggtwoLnf2ppnn(H,extrafo)*newphasegppnn(extest)/phasegppnn(extrafo);
    std::complex<dd_real> tlnf2gppnnperm=ggtwoLnf2ppnn(Hperm,extrafoperm)*permnewphasegppnn(extest)/phasegppnn(extrafoperm);
    std::complex<dd_real> tlnf2gppnnpermconj=ggtwoLnf2ppnn(Hperm,extrafopermconj)*permconjnewphasegppnn(extest)/phasegppnn(extrafopermconj);      
    
    //nf1
    std::complex<dd_real> tlnf1gpppp=ggtwoLnf1pppp(H,sqrtA,exVars);
    std::complex<dd_real> tlnf1gppppconj=ggtwoLnf1pppp(H,sqrtA,extrafo)*newphasegpppp(extest)/phasegpppp(extrafo);
    std::complex<dd_real> tlnf1gppppperm=ggtwoLnf1pppp(Hperm,sqrtB,extrafoperm)*permnewphasegpppp(extest)/phasegpppp(extrafoperm);
    std::complex<dd_real> tlnf1gpppppermconj=ggtwoLnf1pppp(Hperm,sqrtB,extrafopermconj)*permconjnewphasegpppp(extest)/phasegpppp(extrafopermconj);      
    
    std::complex<dd_real> tlnf1gpppn=ggtwoLnf1pppn(H,sqrtA,exVars);
    std::complex<dd_real> tlnf1gpppnconj=ggtwoLnf1pppn(H,sqrtA,extrafo)*newphasegpppn(extest)/phasegpppn(extrafo);
    std::complex<dd_real> tlnf1gpppnperm=ggtwoLnf1pppn(Hperm,sqrtB,extrafoperm)*permnewphasegpppn(extest)/phasegpppn(extrafoperm);
    std::complex<dd_real> tlnf1gpppnpermconj=ggtwoLnf1pppn(Hperm,sqrtB,extrafopermconj)*permconjnewphasegpppn(extest)/phasegpppn(extrafopermconj);      
    
    std::complex<dd_real> tlnf1gppnp=ggtwoLnf1ppnp(H,sqrtA,exVars);
    std::complex<dd_real> tlnf1gppnpconj=ggtwoLnf1ppnp(H,sqrtA,extrafo)*newphasegppnp(extest)/phasegppnp(extrafo);
    std::complex<dd_real> tlnf1gppnpperm=ggtwoLnf1ppnp(Hperm,sqrtB,extrafoperm)*permnewphasegppnp(extest)/phasegppnp(extrafoperm);
    std::complex<dd_real> tlnf1gppnppermconj=ggtwoLnf1ppnp(Hperm,sqrtB,extrafopermconj)*permconjnewphasegppnp(extest)/phasegppnp(extrafopermconj);      
    
    std::complex<dd_real> tlnf1gppnn=ggtwoLnf1ppnn(H,sqrtA,exVars);
    std::complex<dd_real> tlnf1gppnnconj=ggtwoLnf1ppnn(H,sqrtA,extrafo)*newphasegppnn(extest)/phasegppnn(extrafo);
    std::complex<dd_real> tlnf1gppnnperm=ggtwoLnf1ppnn(Hperm,sqrtB,extrafoperm)*permnewphasegppnn(extest)/phasegppnn(extrafoperm);
    std::complex<dd_real> tlnf1gppnnpermconj=ggtwoLnf1ppnn(Hperm,sqrtB,extrafopermconj)*permconjnewphasegppnn(extest)/phasegppnn(extrafopermconj);      
    

    //nf0
    std::complex<dd_real> tlnf0gpppp=ggtwoLnf0ppppsum(H,sqrtA,exVars);
    std::complex<dd_real> tlnf0gppppconj=ggtwoLnf0ppppsum(H,sqrtA,extrafo)*newphasegpppp(extest)/phasegpppp(extrafo);
    std::complex<dd_real> tlnf0gppppperm=ggtwoLnf0ppppsum(Hperm,sqrtB,extrafoperm)*permnewphasegpppp(extest)/phasegpppp(extrafoperm);
    std::complex<dd_real> tlnf0gpppppermconj=ggtwoLnf0ppppsum(Hperm,sqrtB,extrafopermconj)*permconjnewphasegpppp(extest)/phasegpppp(extrafopermconj);      
    
    std::complex<dd_real> tlnf0gpppn=ggtwoLnf0pppnsum(H,sqrtA,exVars);
    std::complex<dd_real> tlnf0gpppnconj=ggtwoLnf0pppnsum(H,sqrtA,extrafo)*newphasegpppn(extest)/phasegpppn(extrafo);
    std::complex<dd_real> tlnf0gpppnperm=ggtwoLnf0pppnsum(Hperm,sqrtB,extrafoperm)*permnewphasegpppn(extest)/phasegpppn(extrafoperm);
    std::complex<dd_real> tlnf0gpppnpermconj=ggtwoLnf0pppnsum(Hperm,sqrtB,extrafopermconj)*permconjnewphasegpppn(extest)/phasegpppn(extrafopermconj);      
    
    std::complex<dd_real> tlnf0gppnp=ggtwoLnf0ppnpsum(H,sqrtA,exVars);
    std::complex<dd_real> tlnf0gppnpconj=ggtwoLnf0ppnpsum(H,sqrtA,extrafo)*newphasegppnp(extest)/phasegppnp(extrafo);
    std::complex<dd_real> tlnf0gppnpperm=ggtwoLnf0ppnpsum(Hperm,sqrtB,extrafoperm)*permnewphasegppnp(extest)/phasegppnp(extrafoperm);
    std::complex<dd_real> tlnf0gppnppermconj=ggtwoLnf0ppnpsum(Hperm,sqrtB,extrafopermconj)*permconjnewphasegppnp(extest)/phasegppnp(extrafopermconj);      
    
    std::complex<dd_real> tlnf0gppnn=ggtwoLnf0ppnnsum(H,sqrtA,exVars);
    std::complex<dd_real> tlnf0gppnnconj=ggtwoLnf0ppnnsum(H,sqrtA,extrafo)*newphasegppnn(extest)/phasegppnn(extrafo);
    std::complex<dd_real> tlnf0gppnnperm=ggtwoLnf0ppnnsum(Hperm,sqrtB,extrafoperm)*permnewphasegppnn(extest)/phasegppnn(extrafoperm);
    std::complex<dd_real> tlnf0gppnnpermconj=ggtwoLnf0ppnnsum(Hperm,sqrtB,extrafopermconj)*permconjnewphasegppnn(extest)/phasegppnn(extrafopermconj);      
    
    //gg Trees
    std::complex<dd_real> sqggtreepppp = ggtreepppp*ggtreennnn;
    std::complex<dd_real> sqggtreepppn = ggtreepppn*ggtreennnp;
    std::complex<dd_real> sqggtreeppnp = ggtreeppnp*ggtreennpn;
    std::complex<dd_real> sqggtreeppnn = ggtreeppnn*ggtreennpp;
    std::complex<dd_real> sqgxgtreepppp = gxgtreepppp*gxgtreennnn;
    std::complex<dd_real> sqgxgtreepppn = gxgtreepppn*gxgtreennnp;
    std::complex<dd_real> sqgxgtreeppnp = gxgtreeppnp*gxgtreennpn;
    std::complex<dd_real> sqgxgtreeppnn = gxgtreeppnn*gxgtreennpp;
    
    std::complex<dd_real> sqggolnf0pppp = ggtreennnn*olnf0gpppp;
    std::complex<dd_real> sqggolnf0pppn = ggtreennnp*olnf0gpppn;
    std::complex<dd_real> sqggolnf0ppnp = ggtreennpn*olnf0gppnp;
    std::complex<dd_real> sqggolnf0ppnn = ggtreennpp*olnf0gppnn;
    std::complex<dd_real> sqgxgolnf0pppp = gxgtreennnn*olnf0gppppperm;
    std::complex<dd_real> sqgxgolnf0pppn = gxgtreennnp*olnf0gpppnperm;
    std::complex<dd_real> sqgxgolnf0ppnp = gxgtreennpn*olnf0gppnpperm;
    std::complex<dd_real> sqgxgolnf0ppnn = gxgtreennpp*olnf0gppnnperm;
    std::complex<dd_real> sqggolnf0nnnn = ggtreepppp*olnf0gppppconj;
    std::complex<dd_real> sqggolnf0nnnp = ggtreepppn*olnf0gpppnconj;
    std::complex<dd_real> sqggolnf0nnpn = ggtreeppnp*olnf0gppnpconj;
    std::complex<dd_real> sqggolnf0nnpp = ggtreeppnn*olnf0gppnnconj;
    std::complex<dd_real> sqgxgolnf0nnnn = gxgtreepppp*olnf0gpppppermconj;
    std::complex<dd_real> sqgxgolnf0nnnp = gxgtreepppn*olnf0gpppnpermconj;
    std::complex<dd_real> sqgxgolnf0nnpn = gxgtreeppnp*olnf0gppnppermconj;
    std::complex<dd_real> sqgxgolnf0nnpp = gxgtreeppnn*olnf0gppnnpermconj;
    std::complex<dd_real> sqggolnf1pppp = ggtreennnn*olnf1gpppp;
    std::complex<dd_real> sqggolnf1pppn = ggtreennnp*olnf1gpppn;
    std::complex<dd_real> sqggolnf1ppnp = ggtreennpn*olnf1gppnp;
    std::complex<dd_real> sqggolnf1ppnn = ggtreennpp*olnf1gppnn;
    std::complex<dd_real> sqgxgolnf1pppp = gxgtreennnn*olnf1gppppperm;
    std::complex<dd_real> sqgxgolnf1pppn = gxgtreennnp*olnf1gpppnperm;
    std::complex<dd_real> sqgxgolnf1ppnp = gxgtreennpn*olnf1gppnpperm;
    std::complex<dd_real> sqgxgolnf1ppnn = gxgtreennpp*olnf1gppnnperm;
    std::complex<dd_real> sqggolnf1nnnn = ggtreepppp*olnf1gppppconj;
    std::complex<dd_real> sqggolnf1nnnp = ggtreepppn*olnf1gpppnconj;
    std::complex<dd_real> sqggolnf1nnpn = ggtreeppnp*olnf1gppnpconj;
    std::complex<dd_real> sqggolnf1nnpp = ggtreeppnn*olnf1gppnnconj;
    std::complex<dd_real> sqgxgolnf1nnnn = gxgtreepppp*olnf1gpppppermconj;
    std::complex<dd_real> sqgxgolnf1nnnp = gxgtreepppn*olnf1gpppnpermconj;
    std::complex<dd_real> sqgxgolnf1nnpn = gxgtreeppnp*olnf1gppnppermconj;
    std::complex<dd_real> sqgxgolnf1nnpp = gxgtreeppnn*olnf1gppnnpermconj;
    
    std::complex<dd_real> sqggtlnf0pppp = ggtreennnn*tlnf0gpppp;
    std::complex<dd_real> sqggtlnf0pppn = ggtreennnp*tlnf0gpppn;
    std::complex<dd_real> sqggtlnf0ppnp = ggtreennpn*tlnf0gppnp;
    std::complex<dd_real> sqggtlnf0ppnn = ggtreennpp*tlnf0gppnn;
    std::complex<dd_real> sqgxgtlnf0pppp = gxgtreennnn*tlnf0gppppperm;
    std::complex<dd_real> sqgxgtlnf0pppn = gxgtreennnp*tlnf0gpppnperm;
    std::complex<dd_real> sqgxgtlnf0ppnp = gxgtreennpn*tlnf0gppnpperm;
    std::complex<dd_real> sqgxgtlnf0ppnn = gxgtreennpp*tlnf0gppnnperm;
    std::complex<dd_real> sqggtlnf0nnnn = ggtreepppp*tlnf0gppppconj;
    std::complex<dd_real> sqggtlnf0nnnp = ggtreepppn*tlnf0gpppnconj;
    std::complex<dd_real> sqggtlnf0nnpn = ggtreeppnp*tlnf0gppnpconj;
    std::complex<dd_real> sqggtlnf0nnpp = ggtreeppnn*tlnf0gppnnconj;
    std::complex<dd_real> sqgxgtlnf0nnnn = gxgtreepppp*tlnf0gpppppermconj;
    std::complex<dd_real> sqgxgtlnf0nnnp = gxgtreepppn*tlnf0gpppnpermconj;
    std::complex<dd_real> sqgxgtlnf0nnpn = gxgtreeppnp*tlnf0gppnppermconj;
    std::complex<dd_real> sqgxgtlnf0nnpp = gxgtreeppnn*tlnf0gppnnpermconj;
    
    std::complex<dd_real> sqggtlnf1pppp = ggtreennnn*tlnf1gpppp;
    std::complex<dd_real> sqggtlnf1pppn = ggtreennnp*tlnf1gpppn;
    std::complex<dd_real> sqggtlnf1ppnp = ggtreennpn*tlnf1gppnp;
    std::complex<dd_real> sqggtlnf1ppnn = ggtreennpp*tlnf1gppnn;
    std::complex<dd_real> sqgxgtlnf1pppp = gxgtreennnn*tlnf1gppppperm;
    std::complex<dd_real> sqgxgtlnf1pppn = gxgtreennnp*tlnf1gpppnperm;
    std::complex<dd_real> sqgxgtlnf1ppnp = gxgtreennpn*tlnf1gppnpperm;
    std::complex<dd_real> sqgxgtlnf1ppnn = gxgtreennpp*tlnf1gppnnperm;
    std::complex<dd_real> sqggtlnf1nnnn = ggtreepppp*tlnf1gppppconj;
    std::complex<dd_real> sqggtlnf1nnnp = ggtreepppn*tlnf1gpppnconj;
    std::complex<dd_real> sqggtlnf1nnpn = ggtreeppnp*tlnf1gppnpconj;
    std::complex<dd_real> sqggtlnf1nnpp = ggtreeppnn*tlnf1gppnnconj;
    std::complex<dd_real> sqgxgtlnf1nnnn = gxgtreepppp*tlnf1gpppppermconj;
    std::complex<dd_real> sqgxgtlnf1nnnp = gxgtreepppn*tlnf1gpppnpermconj;
    std::complex<dd_real> sqgxgtlnf1nnpn = gxgtreeppnp*tlnf1gppnppermconj;
    std::complex<dd_real> sqgxgtlnf1nnpp = gxgtreeppnn*tlnf1gppnnpermconj;

    std::complex<dd_real> sqggtlnf2pppp = ggtreennnn*tlnf2gpppp;
    std::complex<dd_real> sqggtlnf2pppn = ggtreennnp*tlnf2gpppn;
    std::complex<dd_real> sqggtlnf2ppnp = ggtreennpn*tlnf2gppnp;
    std::complex<dd_real> sqggtlnf2ppnn = ggtreennpp*tlnf2gppnn;
    std::complex<dd_real> sqgxgtlnf2pppp = gxgtreennnn*tlnf2gppppperm;
    std::complex<dd_real> sqgxgtlnf2pppn = gxgtreennnp*tlnf2gpppnperm;
    std::complex<dd_real> sqgxgtlnf2ppnp = gxgtreennpn*tlnf2gppnpperm;
    std::complex<dd_real> sqgxgtlnf2ppnn = gxgtreennpp*tlnf2gppnnperm;
    std::complex<dd_real> sqggtlnf2nnnn = ggtreepppp*tlnf2gppppconj;
    std::complex<dd_real> sqggtlnf2nnnp = ggtreepppn*tlnf2gpppnconj;
    std::complex<dd_real> sqggtlnf2nnpn = ggtreeppnp*tlnf2gppnpconj;
    std::complex<dd_real> sqggtlnf2nnpp = ggtreeppnn*tlnf2gppnnconj;
    std::complex<dd_real> sqgxgtlnf2nnnn = gxgtreepppp*tlnf2gpppppermconj;
    std::complex<dd_real> sqgxgtlnf2nnnp = gxgtreepppn*tlnf2gpppnpermconj;
    std::complex<dd_real> sqgxgtlnf2nnpn = gxgtreeppnp*tlnf2gppnppermconj;
    std::complex<dd_real> sqgxgtlnf2nnpp = gxgtreeppnn*tlnf2gppnnpermconj;

    //sum over the helicities
    std::complex<dd_real> sqggxtree =sqggtreepppp+sqggtreepppn+sqggtreeppnp+sqggtreeppnn+
      sqggtreepppp+sqggtreepppn+sqggtreeppnp+sqggtreeppnn;
    std::complex<dd_real> sqgxgtree=sqgxgtreepppp+sqgxgtreepppn+sqgxgtreeppnp+sqgxgtreeppnn+
      sqgxgtreepppp+sqgxgtreepppn+sqgxgtreeppnp+sqgxgtreeppnn;
    std::complex<dd_real> sqggtree=sqggxtree+sqgxgtree;
    //oneloop
    std::complex<dd_real> sqggxolnf0=sqggolnf0pppp+sqggolnf0pppn+sqggolnf0ppnp+sqggolnf0ppnn+
      sqggolnf0nnnn+sqggolnf0nnnp+sqggolnf0nnpn+sqggolnf0nnpp;
    std::complex<dd_real> sqgxgolnf0=sqgxgolnf0pppp+sqgxgolnf0pppn+sqgxgolnf0ppnp+sqgxgolnf0ppnn+
      sqgxgolnf0nnnn+sqgxgolnf0nnnp+sqgxgolnf0nnpn+sqgxgolnf0nnpp;
    std::complex<dd_real> sqggolnf0=sqggxolnf0+sqgxgolnf0;
    std::complex<dd_real> sqggxolnf1=sqggolnf1pppp+sqggolnf1pppn+sqggolnf1ppnp+sqggolnf1ppnn+
      sqggolnf1nnnn+sqggolnf1nnnp+sqggolnf1nnpn+sqggolnf1nnpp;
    std::complex<dd_real> sqgxgolnf1=sqgxgolnf1pppp+sqgxgolnf1pppn+sqgxgolnf1ppnp+sqgxgolnf1ppnn+
      sqgxgolnf1nnnn+sqgxgolnf1nnnp+sqgxgolnf1nnpn+sqgxgolnf1nnpp;
    std::complex<dd_real> sqggolnf1=sqggxolnf1+sqgxgolnf1;
    //twoloop
    std::complex<dd_real> sqggxtlnf0=sqggtlnf0pppp+sqggtlnf0pppn+sqggtlnf0ppnp+sqggtlnf0ppnn+
      sqggtlnf0nnnn+sqggtlnf0nnnp+sqggtlnf0nnpn+sqggtlnf0nnpp;
    std::complex<dd_real> sqgxgtlnf0=sqgxgtlnf0pppp+sqgxgtlnf0pppn+sqgxgtlnf0ppnp+sqgxgtlnf0ppnn+
      sqgxgtlnf0nnnn+sqgxgtlnf0nnnp+sqgxgtlnf0nnpn+sqgxgtlnf0nnpp;
    std::complex<dd_real> sqggtlnf0=sqggxtlnf0+sqgxgtlnf0;
    std::complex<dd_real> sqggxtlnf1=sqggtlnf1pppp+sqggtlnf1pppn+sqggtlnf1ppnp+sqggtlnf1ppnn+
      sqggtlnf1nnnn+sqggtlnf1nnnp+sqggtlnf1nnpn+sqggtlnf1nnpp;
    std::complex<dd_real> sqgxgtlnf1=sqgxgtlnf1pppp+sqgxgtlnf1pppn+sqgxgtlnf1ppnp+sqgxgtlnf1ppnn+
      sqgxgtlnf1nnnn+sqgxgtlnf1nnnp+sqgxgtlnf1nnpn+sqgxgtlnf1nnpp;
    std::complex<dd_real> sqggtlnf1=sqggxtlnf1+sqgxgtlnf1;
    std::complex<dd_real> sqggxtlnf2=sqggtlnf2pppp+sqggtlnf2pppn+sqggtlnf2ppnp+sqggtlnf2ppnn+
      sqggtlnf2nnnn+sqggtlnf2nnnp+sqggtlnf2nnpn+sqggtlnf2nnpp;
    std::complex<dd_real> sqgxgtlnf2=sqgxgtlnf2pppp+sqgxgtlnf2pppn+sqgxgtlnf2ppnp+sqgxgtlnf2ppnn+
      sqgxgtlnf2nnnn+sqgxgtlnf2nnnp+sqgxgtlnf2nnpn+sqgxgtlnf2nnpp;
    std::complex<dd_real> sqggtlnf2=sqggxtlnf2+sqgxgtlnf2;

    //H0gg=2*sqggtree.real();
    dd_real H0ggx=2*sqggxtree.real(); //we need the 2*H0 for the different permutations
    dd_real H0gxg=2*sqgxgtree.real(); //they contributes in a different way in the change of IR scheme
    H0gg=H0ggx+H0gxg;
    
    dd_real zeta3=dd_real(1.2020569031595942853997381615114499);
    dd_real pi=dd_real(3.1415926535897932384626433832795);

    //CB 9 Apr 2024
    //We need the complex H1 in order to perform the change of IR scheme.
    //This is the second difference with the Catani implementation.
    //I1 will have an immaginary dependence, thus in the real part of H2 in SCET
    //we will have the contribution I1eps0*H1 which have a non-trivial effect from the
    //product of the two immaginary parts.
    std::complex<dd_real> ggxH1nf0mu=dd_real(2.0)*sqggxolnf0 + dd_real(31.0)/dd_real(6.0) * H0ggx * log(mu*mu);
    std::complex<dd_real> ggxH1nf1mu=dd_real(2.0)*sqggxolnf1 - dd_real(2.)/dd_real(3.) * H0ggx * log(mu*mu);
    
    std::complex<dd_real> gxgH1nf0mu=dd_real(2.0)*sqgxgolnf0 + dd_real(31.0)/dd_real(6.0) * H0gxg * log(mu*mu);
    std::complex<dd_real> gxgH1nf1mu=dd_real(2.0)*sqgxgolnf1 - dd_real(2.)/dd_real(3.) * H0gxg * log(mu*mu);

    std::complex<dd_real> ggH1nf0mu=ggxH1nf0mu+gxgH1nf0mu;
    std::complex<dd_real> ggH1nf1mu=ggxH1nf1mu+gxgH1nf1mu;
    
    //std::cout << "ggH1nf0mu=" << ggH1nf0mu << std::endl;
    //std::cout << "ggH1nf1mu=" << ggH1nf1mu << std::endl;
    //std::cout << "H0ggx= " << H0ggx << " , H0gxg= " << H0gxg << std::endl;
    
    dd_real ggH2nf0mu=2*sqggtlnf0.real() + log(mu*mu)*( (dd_real(1261.)/dd_real(54.)-dd_real(11.)/dd_real(72.)*pi*pi+dd_real(9.0)*zeta3)*H0gg + dd_real(53.)/dd_real(6.)* 2*sqggolnf0.real() )
      + dd_real(1643.)/dd_real(72.) * H0gg * log(mu*mu) * log(mu*mu);
    dd_real ggH2nf1mu=2*sqggtlnf1.real() + log(mu*mu)*( (-dd_real(241.)/dd_real(27.)+pi*pi/dd_real(36.))*H0gg -dd_real(4.)/dd_real(3.)* 2*sqggolnf0.real() + dd_real(53.)/dd_real(6.) * 2*sqggolnf1.real() )
      - dd_real(115.)/dd_real(18.) * H0gg * log(mu*mu) * log(mu*mu);
    dd_real ggH2nf2mu=2*sqggtlnf2.real() + log(mu*mu)*( dd_real(20.)/dd_real(27.)* H0gg - dd_real(4.)/dd_real(3.) * 2*sqggolnf1.real() )
      + dd_real(4.)/dd_real(9.)  * H0gg * log(mu*mu) * log(mu*mu);
    
    std::complex<dd_real> H1ggxmu=Ncol*ggxH1nf0mu+nlight*ggxH1nf1mu;
    std::complex<dd_real> H1gxgmu=Ncol*gxgH1nf0mu+nlight*gxgH1nf1mu;
    
    dd_real H2ggmu=Ncol*Ncol*ggH2nf0mu+nlight*Ncol*ggH2nf1mu+nlight*nlight*ggH2nf2mu;

    //normalisation
    dd_real gnorm=Ncol*Ncol*Ncol*(dd_real(4.0)*dd_real(3.1415926535897932384626433832795))*(dd_real(4.0)*dd_real(3.1415926535897932384626433832795));
    gnorm =gnorm/dd_real(8.0)/dd_real(8.0)/dd_real(4.0);

    H0ggx=gnorm*H0ggx;
    H0gxg=gnorm*H0gxg;
    H1ggxmu=gnorm*H1ggxmu;
    H1gxgmu=gnorm*H1gxgmu;
    
    H0gg=H0ggx+H0gxg;
    std::complex<dd_real> H1ggmu=H1ggxmu+H1gxgmu;
    H2ggmu=gnorm*H2ggmu;

    //The amplitudes were computed in Catani Scheme
    //We have to move to SCET
    //Needed terms from Catani operators
    //std::cout << "SCET for mu= " << mu << std::endl;
    
    std::complex<dd_real> I1epsm2ggx=ggI1epsm2(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    std::complex<dd_real> I1epsm1ggx=ggI1epsm1(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    std::complex<dd_real> I1eps00ggx=ggI1eps0(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    std::complex<dd_real> I1epsp1ggx=ggI1epsp1(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    std::complex<dd_real> I1epsp2ggx=ggI1epsp2(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    std::complex<dd_real> I2eps00ggx=ggI2eps0(sijA[0],sijA[1],sijA[2],sijA[3],sijA[4],sijA[5],mu,nlight);
    std::complex<dd_real> H1ggxSCET=H1ggxmu + dd_real(2.0)*I1eps00ggx*H0ggx;
    dd_real ReH1ggxSCET = H1ggxSCET.real();
    std::complex<dd_real> ggxCompI1eps0H1 = I1eps00ggx*H1ggxSCET;
    std::complex<dd_real> ggxCompI1epsm1I1epsp1 = I1epsm1ggx*I1epsp1ggx;
    std::complex<dd_real> ggxCompI1epsm2I1epsp2 = I1epsm2ggx*I1epsp2ggx;
    dd_real H2ggxSCETplus =dd_real(2.0)*ggxCompI1eps0H1.real() + dd_real(4.0)*(I2eps00ggx.real()+ggxCompI1epsm1I1epsp1.real()+ggxCompI1epsm2I1epsp2.real())*H0ggx;

        
    std::complex<dd_real> I1epsm2gxg=ggI1epsm2(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    std::complex<dd_real> I1epsm1gxg=ggI1epsm1(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    std::complex<dd_real> I1eps00gxg=ggI1eps0(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    std::complex<dd_real> I1epsp1gxg=ggI1epsp1(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    std::complex<dd_real> I1epsp2gxg=ggI1epsp2(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    std::complex<dd_real> I2eps00gxg=ggI2eps0(sijB[0],sijB[1],sijB[2],sijB[3],sijB[4],sijB[5],mu,nlight);
    std::complex<dd_real> H1gxgSCET = H1gxgmu + dd_real(2.0)*I1eps00gxg*H0gxg;
    dd_real ReH1gxgSCET = H1gxgSCET.real();
    std::complex<dd_real> gxgCompI1eps0H1 = I1eps00gxg*H1gxgSCET;
    std::complex<dd_real> gxgCompI1epsm1I1epsp1 = I1epsm1gxg*I1epsp1gxg;
    std::complex<dd_real> gxgCompI1epsm2I1epsp2 = I1epsm2gxg*I1epsp2gxg;
    dd_real H2gxgSCETplus = dd_real(2.0)*gxgCompI1eps0H1.real() + dd_real(4.0)*(I2eps00gxg.real()+gxgCompI1epsm1I1epsp1.real()+gxgCompI1epsm2I1epsp2.real())*H0gxg;

    H1ggSCET=ReH1ggxSCET+ReH1gxgSCET;
    H2ggSCET=H2ggmu+H2ggxSCETplus+H2gxgSCETplus;
    H0gg=H0gg/dd_real(2.0);
    
  
};


#endif
