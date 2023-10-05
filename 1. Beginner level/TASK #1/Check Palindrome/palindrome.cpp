#include<iostream>
using namespace std;

// this function is used to convert all the upper case letters to lower case if present inside a string or char array
char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if(toLowercase(a[s]) != toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "Your name is : " << name << endl;

    int len = getlength(name);

    cout << "The string is Palindrome or not : " << checkPalindrome(name, len) << endl;

    return 0;
}
