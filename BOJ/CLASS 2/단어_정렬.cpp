#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int Compare(string a, string b){
   if(a.length() == b.length()){
        return a<b;
   }
   else{
    return a.length() < b.length();
   }
}

int main(){
    int N;
    vector<string> words;

    cin>>N;
    for(int i=0; i<N; i++){
        string word;
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), Compare);

    words.erase(unique(words.begin(),words.end()),words.end());

    for(int i=0; i<words.size(); i++){
        cout<<words.at(i) << "\n";
    }




}