#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include <boost/spirit.hpp>
#include <boost/iterator/file_iterator.hpp>

using namespace boost::spirit;

int** parser(string filepath);

#endif
