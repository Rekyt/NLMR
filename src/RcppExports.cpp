// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_neigh
NumericMatrix rcpp_neigh(int nrow, int ncol, NumericMatrix mat, int cat, NumericVector no_cat, int neighbourhood, float p_neigh, float p_empty);
RcppExport SEXP _NLMR_rcpp_neigh(SEXP nrowSEXP, SEXP ncolSEXP, SEXP matSEXP, SEXP catSEXP, SEXP no_catSEXP, SEXP neighbourhoodSEXP, SEXP p_neighSEXP, SEXP p_emptySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type cat(catSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type no_cat(no_catSEXP);
    Rcpp::traits::input_parameter< int >::type neighbourhood(neighbourhoodSEXP);
    Rcpp::traits::input_parameter< float >::type p_neigh(p_neighSEXP);
    Rcpp::traits::input_parameter< float >::type p_empty(p_emptySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_neigh(nrow, ncol, mat, cat, no_cat, neighbourhood, p_neigh, p_empty));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_randomrectangularcluster
NumericMatrix rcpp_randomrectangularcluster(int ncol, int nrow, int minl, int maxl);
RcppExport SEXP _NLMR_rcpp_randomrectangularcluster(SEXP ncolSEXP, SEXP nrowSEXP, SEXP minlSEXP, SEXP maxlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type minl(minlSEXP);
    Rcpp::traits::input_parameter< int >::type maxl(maxlSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_randomrectangularcluster(ncol, nrow, minl, maxl));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NLMR_rcpp_neigh", (DL_FUNC) &_NLMR_rcpp_neigh, 8},
    {"_NLMR_rcpp_randomrectangularcluster", (DL_FUNC) &_NLMR_rcpp_randomrectangularcluster, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_NLMR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
