/*
Author: Hanan Mohamed Abdelrahim
ID:20170375
This program gets a string using a vector function and split the target with the given delimiter.
For example: the input split("10,20,30,40" , ",") should output "10" , "20" , "30" , "40". */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string target, string delimeter); /// vector function takes two strings and split the target

int main()
{
    vector<string> temp; ///vector to print the splitted target
    string target;
    string delim;

    cout << "Enter string    : ";
    getline(cin, target);
    cout << "Enter delimiter : ";
    getline(cin, delim);

    temp = split(target, delim);
///----------------------------------------------------------
    cout << "\nThe string after Splitting : \n\n[ ";
    for (int i = 0; i < temp.size(); i++)
    {
        cout << "\""<<temp[i]<<"\"";

        if( i != temp.size()-1)
            cout << " , ";

    }
    cout << " ]\n\n";
///----------------------------------------------------
}

vector<string> split(string target, string delimeter)
{
    string temp; ///a temporary string to hold each letter from the vector
    vector<string> splitTarget; ///an empty vector to hold the splitted target

    for (int i = 0; i<target.size(); i++)
    {
        if (target[i] != delimeter[0])
        {
            temp+=target[i]; ///temp string will contain each letter from target before the delimiter
        }

        else if(target[i] == delimeter[0])
        {
            splitTarget.push_back(temp); /// when the delimiter is found, the word will be saved in the empty vector splitTarget
            temp=""; ///empty the string to hold the new word
        }
    }
    splitTarget.push_back(temp);


    return splitTarget ;

}


