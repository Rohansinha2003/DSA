#include <iostream>
#include<string>
#include<cstring>
void toLowerCAase(char word[], int n){
    for(int i =0; i<n; i++){
        char ch = word[i];
        if(ch >='a' && ch<='z'){
            continue;
        }             
        else{
           word[i]=  ch -'A'+'a';
        }
    }
}

using namespace std;
int main(){

char word[] ="AMMA";
toLowerCAase(word, strlen(word));
cout<<word;
return 0;
}