#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int numberline;
    numberline=1;
    ifstream myfile ("lexicalinput.txt");
    if (!myfile.is_open()){
        printf("Unable to open file");
        exit(0);
    }
    else {
        while ( getline (myfile,line) ){
            printf("[line : %d]       ",numberline);
              cout <<line << '\n';
            numberline++;
        }
    }
    return 0;
}
