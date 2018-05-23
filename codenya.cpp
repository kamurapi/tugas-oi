#include <regex>
#include <string>
#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
using std::regex;
using std::string;
using std::sregex_token_iterator;

int main()
{
    string s;
    int numberline;
    numberline=1;
    char reserveword[94][20] = {"alignas","alignof","and","and_eq","asm","atomic_cancel",
                                "atomic_commit","atomic_noexcept","auto","bitand","bitor",
                                "bool","break","case","catch","char","char16_t","char32_t","class",
                                "compl","concept","const","constexpr","const_cast","continue",
                                "co_Await","co_return","co_yield","decltype","default","delete",
                                "do","double","dynamic_cast","else","enum","explicit","export","extern",
                                "false","for","firend","goto","if","import","inline","int","long",
                                "module","mutable","namespace","new","noexcep","not","not_eq","nullptr","operator",
                                "or","or_eq","private","protected","public","register","reinterpret_Cast","requires",
                                "return","short","signed","sizeof","static","static_assert","static_cast","struct",
                                "switch","synchronized","template","this","thread_local","throw","true","try",
                                "typedef","typeid","typename","union","unsigned","using","virtual","void","volatile",
                                "wchar_t","while","xor","xor_eq"};

    //string str[4];
    vector<string> list;
    list.clear();

    string temp;

    ifstream myfile ("lexicalinput.txt");
    if (!myfile.is_open()){
        printf("Unable to open file");
        exit(0);
    }
    else {
        while (!myfile.eof()){
            getline(myfile,s);
            printf("[line : %d]  ",numberline);
            cout <<s << '\n';
            regex re("[\\s,.;:]+");
            sregex_token_iterator it(s.begin(), s.end(), re, -1);
            sregex_token_iterator reg_end;
            char a[200][20];
            int i=1;
            for ( ; it != reg_end; ++it) {

                cout << it->str() << endl;
                temp=*it;
                list.push_back(temp);
            }
            numberline++;
        }
    }
    return 0;
}
