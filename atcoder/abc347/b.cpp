#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;

  unordered_set<string> tracker;

  string curr = "";

  for(int i = 0; i < s.size(); i++){
      curr = s[i];

      //cout << "Before: " << curr << endl;
      tracker.insert(curr);
      for(int j = i+1; j < s.size(); j++){
          curr += s[j];
         // cout << "After: "<<  curr << endl;
          tracker.insert(curr);
      }
  }

  cout << tracker.size() << endl;

  return 0;
}
