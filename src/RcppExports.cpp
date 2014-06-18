// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/fastread.h"
#include <Rcpp.h>

using namespace Rcpp;

// read_lines
CharacterVector read_lines(SEXP input, int n = 0);
RcppExport SEXP fastread_read_lines(SEXP inputSEXP, SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        CharacterVector __result = read_lines(input, n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// count_lines
int count_lines(SEXP input, bool header = false);
RcppExport SEXP fastread_count_lines(SEXP inputSEXP, SEXP headerSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP );
        Rcpp::traits::input_parameter< bool >::type header(headerSEXP );
        int __result = count_lines(input, header);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parse_text
SEXP parse_text(CharacterVector x, std::string what);
RcppExport SEXP fastread_parse_text(SEXP xSEXP, SEXP whatSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type what(whatSEXP );
        SEXP __result = parse_text(x, what);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// flip
List flip(ListOf<CharacterVector> x);
RcppExport SEXP fastread_flip(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< ListOf<CharacterVector> >::type x(xSEXP );
        List __result = flip(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parse_delimited_fields
std::vector<std::string> parse_delimited_fields(std::string x, std::string delim_ = ",", std::string quote_ = "\"", bool collapse = false, bool backslash_escape = false, bool double_escape = false, bool strict = false);
RcppExport SEXP fastread_parse_delimited_fields(SEXP xSEXP, SEXP delim_SEXP, SEXP quote_SEXP, SEXP collapseSEXP, SEXP backslash_escapeSEXP, SEXP double_escapeSEXP, SEXP strictSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type delim_(delim_SEXP );
        Rcpp::traits::input_parameter< std::string >::type quote_(quote_SEXP );
        Rcpp::traits::input_parameter< bool >::type collapse(collapseSEXP );
        Rcpp::traits::input_parameter< bool >::type backslash_escape(backslash_escapeSEXP );
        Rcpp::traits::input_parameter< bool >::type double_escape(double_escapeSEXP );
        Rcpp::traits::input_parameter< bool >::type strict(strictSEXP );
        std::vector<std::string> __result = parse_delimited_fields(x, delim_, quote_, collapse, backslash_escape, double_escape, strict);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parse_lines
std::vector<std::string> parse_lines(std::string x, int skip = 0, std::string delim_ = "\n", std::string comment_ = "");
RcppExport SEXP fastread_parse_lines(SEXP xSEXP, SEXP skipSEXP, SEXP delim_SEXP, SEXP comment_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type skip(skipSEXP );
        Rcpp::traits::input_parameter< std::string >::type delim_(delim_SEXP );
        Rcpp::traits::input_parameter< std::string >::type comment_(comment_SEXP );
        std::vector<std::string> __result = parse_lines(x, skip, delim_, comment_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_csv_impl
List read_csv_impl(SEXP input, CharacterVector classes, int n, bool header);
RcppExport SEXP fastread_read_csv_impl(SEXP inputSEXP, SEXP classesSEXP, SEXP nSEXP, SEXP headerSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< bool >::type header(headerSEXP );
        List __result = read_csv_impl(input, classes, n, header);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_csv_impl_filter_pattern
List read_csv_impl_filter_pattern(SEXP input, CharacterVector classes, int n, bool header, LogicalVector filter_pattern);
RcppExport SEXP fastread_read_csv_impl_filter_pattern(SEXP inputSEXP, SEXP classesSEXP, SEXP nSEXP, SEXP headerSEXP, SEXP filter_patternSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP );
        Rcpp::traits::input_parameter< CharacterVector >::type classes(classesSEXP );
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< bool >::type header(headerSEXP );
        Rcpp::traits::input_parameter< LogicalVector >::type filter_pattern(filter_patternSEXP );
        List __result = read_csv_impl_filter_pattern(input, classes, n, header, filter_pattern);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_file
String read_file(const std::string& path);
RcppExport SEXP fastread_read_file(SEXP pathSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type path(pathSEXP );
        String __result = read_file(path);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
