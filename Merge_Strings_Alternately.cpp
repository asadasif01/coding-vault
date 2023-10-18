// You are given two strings word1 and word2. Merge the strings by adding letters
// in alternating order, starting with word1. If a string is longer than the other,
// append the additional letters onto the end of the merged string.

#include<iostream>
using namespace std;

string merge(string word1, string word2){
    int size1 = word1.size();
    int size2 = word2.size();
    string result;
    int i = 0, j=0;

    while(i<size1 || j< size2){
        if(i < size1){
            result += word1[i];
            i++;
        }
        
        if(j < size2){
            result += word2[j];
            j++;
        }
    }
    

    return result;
}   

int main(){
    string word1 = "abc";
    string word2 = "pqrdf";
    
    string result = merge(word1, word2);
    cout<<result<<endl;
    return 0;
}