///////////////////////////////////////////////////////////////
// Test.cpp - Test executive for complete code publisher     //                                 //
//                                                           //
// Language:    Visual C++ 2015                              //
// Platform:    Windows 10 Macbook                           //
// Author:      Komal Gujarathi, Syracuse University         //
//              (315) 744 6116, krgujara@syr.edu             //
///////////////////////////////////////////////////////////////

#include<iostream>
#include "Test.h"
#include "../CodePublisher/codePublisher.h"
#include "../Analyzer/Executive.h"
#include "../DepAnal/DepAnal.h"
#include "../TypeTable/TypeTable.h"
#include <windows.h>
//Main of Test Stub

#ifdef TEST_EXECUTIVE
int main(int argc, char *argv[]) {
	Test test;
	std::string line;
	CodePublisher publisher;
	using DepStore = std::unordered_map<std::string, std::set<std::string>>;
	CodeAnalysis::CodeAnalysisExecutive exec;
	using Files = std::unordered_map<std::string, std::vector<std::string>>;
	try {
		bool succeeded = exec.ProcessCommandLine(argc, argv);
		if (!succeeded) {
			return 1;
		}
		exec.getSourceFiles();
		exec.processSourceCode(true);
		Files fm = exec.getFileMap();

		std::cout << "Demonstrating Project #3: CODE PUBLISHER\n\n";
		test.DemonstrateRequirement1();
		test.DemonstrateRequirement2();
		test.DemonstrateRequirement3();
		//creating typetable
		TypeTable tt;
		tt.createTypeTable();
		Store typeTable = tt.getTypeTable();
		//dependency analysis
		DepAnal danal;
		danal.tokenizeForDependencies(fm, typeTable);
		DepStore dependencies = danal.getDependencies();
		publisher.processFiles(fm, dependencies);
		//to display the repository which has links to all the web pages
		publisher.createRepository(fm, "../HTMLFiles/requirement9.html");
		test.DemonstrateRequirement4();
		test.DemonstrateRequirement5();
		test.DemonstrateRequirement6();
		test.DemonstrateRequirement7();
		test.DemonstrateRequirement8();
		test.DemonstrateRequirement9();
		test.DemonstrateRequirement10();
		//Launching the browser using system call for index page
		//of requirement9
		//last argument in command line argument which is the
		//index page having links to all HTML Files in requirement9
		test.lauchBrowserForArgumentInCommandLine(exec.getHtmlPath());
	}
	catch (std::exception& except) {
		exec.flushLogger();
		std::cout << "\n\n  caught exception in Executive::main: " + std::string(except.what()) + "\n\n";
		exec.stopLogger();
		return 1;
	}
	return 0;
}

#endif

//last argument in command line argument is the index page for Requirement 
//to demonstarte the requirement to display any files specified in the 
//command line using the browser of your choice
void Test::lauchBrowserForArgumentInCommandLine(std::string path)
{
	//launching the browser for the file specifies by taking this path
	//from command line arguments 
	std::string command("start \"\" \"" + path + "\"");
	std::system(command.c_str());

}


void Test::DemonstrateRequirement1()
{
	std::cout << "\nRequirement 1 : Shall be implemented in C++ using STL in Visual Studio\n ";
	std::cout << "=================================";
	std::cout << "\n Implemented";
}

void Test::DemonstrateRequirement2()
{
	std::cout << "\nRequirement 2 : Shall use the C++ standard library's streams for all console I/o and new and delete for heap based operations";
	std::cout << "\n=================================";
	std::cout << "\n Implemented";
}

void Test::DemonstrateRequirement3()
{
	std::cout << "\nRequirement 3 : Shall provide a Publisher program that provides for creation of web pages for C++ and .h files.";
	std::cout << "\n =================================";
	std::cout << "\n Implemented";
}

void Test::DemonstrateRequirement4()
{
	std::cout << "\n  Requirement 4: Shall Optionally provide the facility to expand and collapse class bodies, methods, global functions using Javascript and CSS properties";
	std::cout << "\n =================================";
	std::cout << "\nImplemented";
}
void Test::DemonstrateRequirement5()
{
	std::cout << "\n Requirement 5: Shall provide CSS style sheet that the publisher uses to style its generated pages /Java scripts file that provides functionality to hide and unhide sections of code for outlining, using mouse clicks";
	std::cout << "\n =================================";
	std::cout << "You can refer ../StylesAndScripts folder to see styles and scripts";
	std::cout << "\n Implemented";
}
void Test::DemonstrateRequirement6()
{
	std::cout << "\n Requirement 6: Shall embed in each web page's <head> section links to the style sheet and Java Script file.";
	std::cout << "\n =================================";
	std::cout << "\n Implemented";
}
void Test::DemonstrateRequirement7()
{
	std::cout << "\n Requirement 7:Shall embed HTML5 links to dependent files with a label, at the top of the web page. Use project 2 to findout dependencies";
	std::cout << "\n =================================";
	std::cout << "\n Implememted";
}
void Test::DemonstrateRequirement8()
{
	std::cout << "\n Requirement 8: Shall develop command line processing to define the files to publish by specifyinh path and file names";
	std::cout << "\n =================================";
	std::cout << "\n Implemented";
}
void Test::DemonstrateRequirement9()
{

	std::cout << "\n Requirement 9: Shall demonstrate the codepublisher functionality by publishing all important packages in your project 3";
	std::cout << "\n =================================";
	std::cout << "\n Wait until the browser opens up\n";
	std::cout << "\n You can also check '.. / HTMLFiles/requirement9.html as a startup page for requirement9'";
}
void Test::DemonstrateRequirement10()
{
	std::cout << "\n Requirement 10: Shall include an automated unit test suite that demonstatre your all requirements of this project";
	std::cout << "\n =================================\n";
	std::cout << "\n Implemented";
}