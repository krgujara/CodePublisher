@echo off

echo "Starting Code Publisher"
cd /D CodePublisher
call "../x64/debug/TestExecutive.exe" "../Req9TestFiles" *.cpp *.h "../HTMLFiles/requirement9.html"

pause