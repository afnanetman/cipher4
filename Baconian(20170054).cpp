#include <iostream>
#include<bits/stdc++.h>
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Baconian(20170054).cpp
// Last Modification Date: 04/03/2018
// Author and ID and Group: 20170054 G6
// Teaching Assistant: Eng Khadega and Eng Mohamed Atta
// Purpose:Cipher problem



using namespace std;

int main()
{

    string arr1[27]= {"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab"," "};
    char arr2[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
    char arr3[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
    string sentence;
    while (true)
{
    char typ;
    cout << "Enter E for Encryption or D for Decryption :" ;
    cin >> typ;
    if (typ=='E'||typ=='e')
        {
            cout <<"Enter the sentence :";
            cin.ignore();
            getline(cin,sentence);
            for (int i=0; i<sentence.size(); i++)
            {
                for (int j=0; j<27; j++)
                {
                    if (sentence[i]==arr2[j]||sentence[i]==arr3[j])
                    {
                        cout<<arr1[j];

                    }
                }
            }
        }
        else if (typ=='D'||typ=='d')
        {
            cout <<"Enter the sentence :";
            cin.ignore();
            getline(cin,sentence);
            for (int i=0; i<=sentence.size(); i=i+5)
            {
                string y;
                if (sentence[i]==' ')
                {
                    cout <<" ";
                    i++;
                }
                y+=sentence[i];
                y+=sentence[i+1];
                y+=sentence[i+2];
                y+=sentence[i+3];
                y+=sentence[i+4];
                for (int j=0; j<27; j++)
                {
                    if (y==arr1[j])
                    {
                        cout<<arr2[j];
                        break;
                    }
                }

            }
        }
        else
        {
            cout <<"Try Again"<<endl;
            continue;

        }
        break;
    }



}
