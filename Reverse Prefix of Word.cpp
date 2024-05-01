class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        int idx=-1;
        for(int i=0; i<word.size(); i++){
              s += word[i];
             if(word[i]==ch){
                idx=i+1;
                  break;
             }

        }
        if(idx==-1){
            return s;
        }
        reverse(s.begin(),s.end());
        for(int i=idx; i<word.size(); i++){
            s +=word[i];
        }
        return s;
    }
};