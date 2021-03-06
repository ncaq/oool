//parsePly.hpp - Plyの分析
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:16:56 2013
#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <boost/regex.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include "Format.hpp"
namespace oool
{
	namespace ply
	{
		Format parseFormat(const std::vector<std::string>& input);//文字コードとリトルビッグエンディアン判断.といっても大体ASCIIだと思うけどなあ…
		int parseNum(const std::vector<std::string>& input);//"vertex 24"::string -> 24::int
		std::string toEnd(const std::string& from,const boost::regex& r);//マッチしたところの次から最後までを返す
		std::string parseElementName(const std::string& input);//"vertex 24"::std::string -> "vertex"::std::string
		std::string parsePropertyName(const std::string& input);//"property float x"::std::string -> "x"::std::string
		std::string parsePropertyType(const std::string& input);//"property float x"::std::string -> "float"::std::string
		std::vector<double> parseGLNumber(const std::string& input);//"0 0 0"::std::string -> (0,0,0)::std::vector<double>
	}
} // oool

