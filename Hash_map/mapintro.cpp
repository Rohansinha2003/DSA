#include<iostream>
#include<map>
#include<unordered_map>


using namespace std;

int main()
{
    //creation
    unordered_map<string,int> m;

    //insertion
     pair<string,int> p=make_pair("Rohan",22);
     m.insert(p);


     //search
     cout<<m.at("Rohan")<<endl;




    return 0;
}