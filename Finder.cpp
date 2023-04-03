#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        int find=0;
        for(int i = 1; i <= s2.size(); i++) {
            int found = s1.find(s2.substr(0, i),find);
            if (found != string::npos) {
                result.push_back(found);
                find = found;
            } else {
                for(i=i;i<=s2.size();i++)
                {
                    result.push_back(-1);
                }
            }
        }
        return result;
    }

   