#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string temp = "";
    string temp2 = "";
    for(int i =0; i<babbling.size(); i++)
    {
        string s = babbling[i];
        temp = "";
        temp2 = "";
        for(int i=0; i<s.size(); i++)
        {
            temp += s[i];
            if(temp == "aya" || temp == "ye" || temp == "woo" || temp == "ma")
            {
                if(temp == temp2)
                    break;
                else
                    temp2 = temp;
                temp = "";
            }
        }
         if(temp == "")
                answer++;
    }
    return answer;
}
