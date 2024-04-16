/*
Kattis - Hissing Microphone Problem

By: Burton Besecke FIXED
Date: 15 Apr

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char *argv[])
{
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line)
{
    // FIXME3 FIXED
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
    if (line.find("ss") != string::npos)
        return "Hiss";
    else
        return "No hiss";
}

// unit testing answer()
void testAnswer()
{
    // FIXME4 FIXED
    // write at least two test cases to test answer()
    // 1 test
    assert(answer("snake") == "no hiss");
    assert(answer("hiss") == "hiss");
    // 2 test
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve()
{
    string line;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5 FIXED
    // read string into line
    cin >> line;
    cout << answer(line) << endl;
}