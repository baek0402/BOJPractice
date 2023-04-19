#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(string& s : babbling) {
        for(string p : {"aya", "ye", "woo", "ma"}) {
            int i = 0;
            while(i + p.size() <= s.size()) {
                if(s.substr(i, p.size()) == p) {
                    s.erase(i, p.size());
                    ++i;
                }
                ++i;
            }
        }
    }
    return count_if(begin(babbling), end(babbling), [] (string& s) {return s.empty();});
}
