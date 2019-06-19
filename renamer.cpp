#include <bits/stdc++.h>
#include <fstream>
#include <string>
#include <cstdio>
#include <vector>
#include <sstream>

using namespace std;

string changeString (int a)
{
	// declaring output string stream 
    ostringstream str1; 
  
    // Sending a number as a stream into output 
    // string 
    str1 << a; 
  
    // the str() coverts number into string 
    string geek = str1.str(); 
  
    // Displaying the string 
    return geek;
}

int main ()
{
	
	ifstream file("names.txt");
	if (file.fail()) cout << "Failed to open input file" << endl;

	vector<string> names;
	string line;
	while(file >> line) names.push_back(line);

	for (size_t i=1; i <= names.size(); ++i)
	{
		int success = rename(string(changeString(i)).c_str(), names[i-1].c_str());
	}

	// I used this to change folder names, to change specific file names append the extension to the string in the end

	return 0;
}