// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// collision
NumericMatrix collision(NumericMatrix pos, NumericMatrix vel, NumericVector radii, double strength);
RcppExport SEXP particles_collision(SEXP posSEXP, SEXP velSEXP, SEXP radiiSEXP, SEXP strengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pos(posSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vel(velSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type radii(radiiSEXP);
    Rcpp::traits::input_parameter< double >::type strength(strengthSEXP);
    rcpp_result_gen = Rcpp::wrap(collision(pos, vel, radii, strength));
    return rcpp_result_gen;
END_RCPP
}
// nbody
NumericMatrix nbody(NumericMatrix pos, NumericVector strength, double theta, double min_dist, double max_dist, double alpha);
RcppExport SEXP particles_nbody(SEXP posSEXP, SEXP strengthSEXP, SEXP thetaSEXP, SEXP min_distSEXP, SEXP max_distSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pos(posSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type strength(strengthSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type min_dist(min_distSEXP);
    Rcpp::traits::input_parameter< double >::type max_dist(max_distSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(nbody(pos, strength, theta, min_dist, max_dist, alpha));
    return rcpp_result_gen;
END_RCPP
}
// points_to_path
List points_to_path(NumericMatrix pos, ListOf<NumericMatrix> path, bool close);
RcppExport SEXP particles_points_to_path(SEXP posSEXP, SEXP pathSEXP, SEXP closeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pos(posSEXP);
    Rcpp::traits::input_parameter< ListOf<NumericMatrix> >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type close(closeSEXP);
    rcpp_result_gen = Rcpp::wrap(points_to_path(pos, path, close));
    return rcpp_result_gen;
END_RCPP
}
// points_to_lines
List points_to_lines(NumericMatrix line1, NumericMatrix line2, NumericMatrix point);
RcppExport SEXP particles_points_to_lines(SEXP line1SEXP, SEXP line2SEXP, SEXP pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type line1(line1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type line2(line2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type point(pointSEXP);
    rcpp_result_gen = Rcpp::wrap(points_to_lines(line1, line2, point));
    return rcpp_result_gen;
END_RCPP
}
// angle_diff
NumericVector angle_diff(NumericMatrix a, NumericMatrix b);
RcppExport SEXP particles_angle_diff(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(angle_diff(a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"particles_collision", (DL_FUNC) &particles_collision, 4},
    {"particles_nbody", (DL_FUNC) &particles_nbody, 6},
    {"particles_points_to_path", (DL_FUNC) &particles_points_to_path, 3},
    {"particles_points_to_lines", (DL_FUNC) &particles_points_to_lines, 3},
    {"particles_angle_diff", (DL_FUNC) &particles_angle_diff, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_particles(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
