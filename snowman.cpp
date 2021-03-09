//
// Created by daniel on 07/03/2021.
//

#include <string>
#include <iostream>
#include "snowman.hpp"
using namespace std;
namespace ariel {
string snowman(int x){

    string result;
    string str=to_string(x);
    string snow[8][4]={{"     \n_===_"," ___  \n.....","  _  \n /_\\ " ," ___ \n(_*_)"}
    ,{",",".","_",""}
    ,{"\n(.","\n(o","\n(O","\n(-"}
    ,{".)\n","o)\n","O)\n","-)\n"}
    ,{" \n<","\\\n "," \n/",""}
    ,{" \n>","/\n "," \n\\",""}
    ,{":","] [","> <",""}
    ,{"\n(:)","\n(" ")","\n(___)","\n()"}};


    string num="";
    int number;
    for (int i = 0; i <str.size();i++)
    {
        num=str.at(i);
        number=stoi(num)-1;
        cout<<snow[i][number];

        if(i+1==1) {
            num = str.at(i + 2);
            number = stoi(num) - 1;
            cout << snow[i + 2][number];

            num = str.at(i + 1);
            number = stoi(num) - 1;
            cout << snow[i + 1][number];
            i = 3;


            num = str.at(i);
            number = stoi(num) - 1;
            cout << snow[i][number];
        }


   // cout<<"check"<<endl;
    }


    return "";
}
};
