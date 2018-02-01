#pragma once
///////////////////////////////////////////////////////////////
// Test.h - Creates Test executive for the code publisher    //                                 //
//                                                           //
// Language:    Visual C++ 2015                              //
// Platform:    Windows 10 Macbook                           //
// Author:      Komal Gujarathi, Syracuse University         //
//              (315) 744 6116, krgujara@syr.edu             //
///////////////////////////////////////////////////////////////


/*
Package Operations:
===================
Test Executive is the package responsible for publishing the code
in the form of web pages. Along wth the publishing of the code,
It also allows the collapsing and expansion of the code blocks and
displaying the index page in the browser using system calls.

Public Interfaces
=================


Maintanence Information:
========================


Required files:
---------------
CodePublidher.h
DepAnal.h
Execitive.h
TypeTable.h


Build Process:
--------------
Using Visual Studio Command Prompt:

Revision History:
-----------------
ver 1. created on 21-march-2017
created a test file

ver 2. added a collapse/ expand feature in the project
created on 28-mar -2017

ver 3. Added the funtionality to open the html file
specified on the command prompt


*/


class Test
{
	//demonstration of requirements 
public:
	void DemonstrateRequirement1();
	void DemonstrateRequirement2();
	void DemonstrateRequirement3();
	void DemonstrateRequirement4();
	void DemonstrateRequirement5();
	void DemonstrateRequirement6();
	void DemonstrateRequirement7();
	void DemonstrateRequirement8();
	void DemonstrateRequirement9();
	void DemonstrateRequirement10();
	void lauchBrowserForArgumentInCommandLine(std::string arg);
};