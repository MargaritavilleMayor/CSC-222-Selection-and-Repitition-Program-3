// CSC-222 Selection and Repition Program 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <istream>

using namespace std;

int main()
{
    //Declaring variables
    ifstream ifile1, ifile2;
    ofstream ofile1;
    string file1_str, file2_str;
    ifile1.open("File 1.txt");
    ifile2.open("File 2.txt");
    ofile1.open("OutputFile.txt");

    getline(ifile1, file1_str);
    getline(ifile2, file2_str);
    while (!ifile1.eof() || !ifile2.eof())
    {
        //selects for if the name from file 1 comes before the name in file 2 and writes it to the next file
        if (file1_str <= file2_str)
        {
            ofile1 << file1_str << endl;
            if (!ifile1.eof())
            {
                getline(ifile1, file1_str);
            }
        }
        //selects for if the name from file 2 comes before the name in file 1 and writes it to the next file
        else if (file2_str <= file1_str);
        {
            //if File 2 has reached the end then this if structure will just write file 1 names
            if (ifile2.eof())
            {
                ofile1 << file1_str << endl;
                getline(ifile1, file1_str);
                continue;
            }
            ofile1 << file2_str << endl;
            if (!ifile2.eof())
            {
                getline(ifile2, file2_str);
            }
        }
    }
}