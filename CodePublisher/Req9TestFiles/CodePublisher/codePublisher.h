#pragma once
///////////////////////////////////////////////////////////////
// CodePublisher.h - Package to convert the Cpp files        //  
//to HTMl pages to publish                                     // 
//                                                           //
// Language:    Visual C++ 2015                              //
// Platform:    Windows 10 Macbook                           //
// Author:      Komal Gujarathi, Syracuse University         //
//              (315) 744 6116, krgujara@syr.edu             //
///////////////////////////////////////////////////////////////
#include<unordered_map>

/*
Package Operations:
===================
Package to convert Cpp and .h files to .Html files
Creates a repository to publish all files from a specifies folder
Maintanence Information:
========================

Required files:
---------------
Parser/ActionsAndRules.h"
AbstractSyntaxTree/AbstrSynTree.h"
Analyzer/Executive.h"
TypeTable.h , TypeTable.cpp
DependencyAnalysis.h and dependencyAnalysis.cpp
Build Process:
--------------
Using Visual Studio Command Prompt:

Revision History:
-----------------
ver 1. created on 5-mar-2017
ver 2. added a function to add repository
*/
#include<set>

class CodePublisher
{

public:
	void convertCppToHtml(std::string file, std::set < std::string > dependsOn);
	void processFiles(std::unordered_map < std::string, std::vector < std::string >> files, std::unordered_map < std::string, std::set < std::string>> dependencies);
	void createRepository(std::unordered_map < std::string, std::vector < std::string >> files, std::string path);
};

