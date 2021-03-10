//
// Created by daniel on 07/03/2021.
//

#include <string>
#include <iostream>
#include "snowman.hpp"
using namespace std;
namespace ariel {
string snowman(int x){

    string face="";
    string result="";
    string str=to_string(x);
    string snow[8][4]={{"     \n_===_"," ___  \n.....","  _  \n /_\\ " ," ___ \n(_*_)"}
    ,{",",".","_",""}
    ,{"\n(.","\n(o","\n(O","\n(-"}
    ,{".)\n","o)\n","O)\n","-)\n"}
    ,{"<","\\","/",""}
    ,{">","/","\\",""}
    ,{"(:)","(] [)","(> <)","   "}
    ,{"\n(:)","\n(" ")","\n(___)","\n()"}};

 string body="";
    string num="";
    int number;
      string armLeft="";
        string armRight="";
    for (int i = 0; i <str.size();i++)
    {
       num=str.at(i);
        if(i==6)
        {
        num=str.at(i);
        number=stoi(num)-1;
        face+=snow[i][number];

            num = str.at(i + 1);
            number = stoi(num) - 1;
            body+=snow[i + 1][number];
            i=9;
            break;
        }
   
   
        if(i==5)
        {
            number=stoi(num)-1;
            if(number==0||number==2)
            {
            armLeft=snow[i][number];
            armLeft+=body;
          
            }
            else
             armLeft=snow[i][number];
            armLeft+=face;

        }
          if(i==4)
        {
            number=stoi(num)-1;
            if(number==0||number==2)
            {
            armRight=snow[i][number];
            body+=armRight;
            
            }
            else
            armRight=snow[i][number];
            face+=armRight;

        }
        if(i==0){
        num=str.at(i);
        number=stoi(num)-1;
        result+=snow[i][number];
        }
        if(i+1==1)
         {
            num = str.at(i + 2);
            number = stoi(num) - 1;
            face+=snow[i + 2][number];

            num = str.at(i + 1);
            number = stoi(num) - 1;
            face+= snow[i + 1][number];



            i = 3;
              num=str.at(i);
        number=stoi(num)-1;
        face+=snow[i][number];

            
            // num = str.at(i);
            // number = stoi(num) - 1;
            // cout << snow[i][number];
         }


 //  cout<<"check"<<endl;
    }
    result+=face;
    result+=body;


    return (result);
}
};
