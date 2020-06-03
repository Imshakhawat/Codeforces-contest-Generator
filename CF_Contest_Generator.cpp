#include <windows.h>
#include <shellapi.h>
#include <bits/stdc++.h>
using namespace std;

main()

{
    char url[100];
    string str_url,temp,checker="https://codeforces.com",sub;
    cout<<"*******Welcome to Codeforces Contest Generator*******"<<endl<<endl;
    cout<<"Enter the contest Url:"<<endl;
    cin>>temp;
    sub=temp.substr(0,22);
    if(checker==sub){


    while(1){
        cout<<"Enter the desired Options:"<<endl;
        cout<<"1.Problem list"<<endl;
        cout<<"2.Submission tab"<<endl;
        cout<<"3.Friend Standings"<<endl;
        cout<<"4.Exit"<<endl;
        int p;
        cin>>p;

        if(p==1){
            string x="start ";
            str_url=x+temp;
            system("cls");
            for(int i=0;i<str_url.size();i++){
                    url[i]=str_url[i];
            }
            system(url);
            memset(url, 0, 255);
            str_url.clear();
            continue;
        }
        else if(p==2){
            string y="/submit";
            string x="start ";
            str_url=x+temp+y;
            system("cls");
            for(int i=0;i<str_url.size();i++){
                    url[i]=str_url[i];
            }
            system(url);
            memset(url, 0, 255);
            str_url.clear();
            continue;
        }
        else if(p==3){
            string x="start ";
            string y="/standings/friends/true";
            str_url=x+temp+y;
            system("cls");
            for(int i=0;i<str_url.size();i++){
                url[i]=str_url[i];
            }
            system(url);
            memset(url, 0, 255);
            str_url.clear();
            continue;
        }
         else if(p==4){

            return 0;
        }

        else{
            cout<<"Invalid input"<<endl;
            continue;
        }

    }
    }
    else{
        cout<<"Invalid Url"<<endl;
        return 0;
    }








}
