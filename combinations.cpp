#include <iostream>
using namespace std;

int combinations(string word, string output[]) {
    int length = word.length();
    if (length == 0) {
        output[0] = ""; // Empty combination
        return 1;
    }

    int smallersize = combinations(word.substr(1), output);

    for (int i = 0; i < smallersize; i++) {
        output[i + smallersize] = word[0] + output[i];
    }
   // cout<<smallersize<<endl;

    return 2 * smallersize;
}

int main() {
    string word;
    cout << "Enter word" << endl;
    cin >> word;

    string output[100];
    int number = combinations(word, output);
    // cout<<number<<endl;
    for (int i = 0; i < number; i++) {
        cout << output[i] << endl;
    }

    return 0;
}
