/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef ROOEXPGAUSSEXP
#define ROOEXPGAUSSEXP

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
//#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
//#include "RooAbsCategory.h"
#include "RooMath.h"
 
class RooExpGaussExp : public RooAbsPdf {
public:
  RooExpGaussExp() {} ; 
  RooExpGaussExp(const char *name, const char *title,
	      RooAbsReal& _x,
	      RooAbsReal& _mean,
	      RooAbsReal& _sigma,
	      RooAbsReal& _lambda,
	      RooAbsReal& _kappa);
  RooExpGaussExp(const RooExpGaussExp& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooExpGaussExp(*this,newname); }
  inline virtual ~RooExpGaussExp() { }

  //Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const ;
  //Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const ;

protected:

  RooRealProxy x ;
  RooRealProxy mean ;
  RooRealProxy sigma ;
  RooRealProxy lambda ;
  RooRealProxy kappa ;

  Double_t evaluate() const ;

private:

  ClassDef(RooExpGaussExp,1) // Your description goes here...
};
 
#endif
