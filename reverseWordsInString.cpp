#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string reverseString(string &str){
    int start = 0, end = str.length() - 1;
    while(start <= end && str[start] == ' ') start++;
    while(end >= start && str[end] == ' ') end--;

    vector<string> words;
    string word;
    for(int i = start; i <= end; ++i){
        if(str[i] != ' ') word += str[i];
        else if(!word.empty()){
            words.push_back(word);
            word = "";
        }
    }

    if(!word.empty()){
        words.push_back(word);
        word = "";
    }

    reverse(words.begin(), words.end());
    
    string result;
    for(int i = 0; i < words.size(); ++i){
        result += words[i];
        if(i != words.size() - 1){
            result += " ";
        }
    }

    return result;
}

// Test cases
int main() {
    string str = "   Welcome    to    Coding Ninjas   ";
    cout << "\"" << reverseString(str) << "\"" << endl;  // Output: "Ninjas Coding to Welcome"
    
    str = "I am a star";
    cout << "\"" << reverseString(str) << "\"" << endl;  // Output: "star a am I"

    str = "  Hello  ";
    cout << "\"" << reverseString(str) << "\"" << endl;  // Output: "Hello"

    return 0;
}

//Java Code for the same logic 
// import java.util.*;

// public class Solution {
//     public static String reverseString(String str) {
//         // Step 1: Trim leading and trailing spaces
//         str = str.trim();

//         // Step 2: Split words based on spaces using regex
//         String[] words = str.split("\\s+");

//         // Step 3: Reverse the array of words
//         Collections.reverse(Arrays.asList(words));

//         // Step 4: Join the words back into a single string with one space between them
//         return String.join(" ", words);
//     }

//     public static void main(String[] args) {
//         // Test cases
//         System.out.println("\"" + reverseString("   Welcome    to    Coding Ninjas   ") + "\"");  // "Ninjas Coding to Welcome"
//         System.out.println("\"" + reverseString("I am a star") + "\"");  // "star a am I"
//         System.out.println("\"" + reverseString("  Hello  ") + "\"");    // "Hello"
//         System.out.println("\"" + reverseString("a") + "\"");            // "a"
//         System.out.println("\"" + reverseString("") + "\"");             // ""
//     }
// }
