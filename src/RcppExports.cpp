// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// logDensityBestWorst
double logDensityBestWorst(NumericMatrix e_u, NumericVector weights);
RcppExport SEXP flipMaxDiff_logDensityBestWorst(SEXP e_uSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type e_u(e_uSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(logDensityBestWorst(e_u, weights));
    return rcpp_result_gen;
END_RCPP
}
