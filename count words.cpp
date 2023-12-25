#include <iostream>
using namespace std;

int countWords(string var, int length);

int main()
{
    string var = "Once there was a    crow you   ";
    int length = var.length();
    int count = countWords(var, length);
    
    cout<<count<<endl;

    return 0;
}

int countWords(string var, int length){
    int word = 0;
    bool flag = false;
    
    for(int i=0; i<var.length(); i++){
        if(var[i] != ' '){
            flag = true;
        }else{
            if(flag){
                word++;
                flag = false;
            }
        }
    }
    
    return word;
}