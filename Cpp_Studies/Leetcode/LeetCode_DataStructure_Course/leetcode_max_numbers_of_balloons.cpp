#include <iostream>
#include <unordered_map>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Solution {
    public:
    int chckMaxNumBal(string s){
        int len=s.size();
        unordered_map<char,int> hmap;
        string tst="balon";
        int tst_len=tst.size();
        for (int i=0;i<tst_len;i++){
            hmap[tst[i]]=0;
        }
        for (int i=0;i<len;i++){
            if (hmap.find(s[i])!=hmap.end()){
                hmap[s[i]]++;
            }
       }
       cout<<hmap['b']<<endl;
       cout<<hmap['a']<<endl;
       cout<<hmap['l']<<endl;
       cout<<hmap['o']<<endl;
       cout<<hmap['n']<<endl;
    
       return min({hmap['b'],hmap['a'],hmap['l']/2,hmap['o']/2,hmap['n']});
    }
    
    };

int main(){
    //string s="nlaebolko";
    string s="krhizmmgmcrecekgyljqkldocicziihtgpqwbticmvuyznragqoyrukzopfmjhjjxemsxmrsxuqmnkrzhgvtgdgtykhcglurvppvcwhrhrjoislonvvglhdciilduvuiebmffaagxerjeewmtcwmhmtwlxtvlbocczlrppmpjbpnifqtlninyzjtmazxdbzwxthpvrfulvrspycqcghuopjirzoeuqhetnbrcdakilzmklxwudxxhwilasbjjhhfgghogqoofsufysmcqeilaivtmfziumjloewbkjvaahsaaggteppqyuoylgpbdwqubaalfwcqrjeycjbbpifjbpigjdnnswocusuprydgrtxuaojeriigwumlovafxnpibjopjfqzrwemoinmptxddgcszmfprdrichjeqcvikynzigleaajcysusqasqadjemgnyvmzmbcfrttrzonwafrnedglhpudovigwvpimttiketopkvqw";
    Solution sol;
    cout<<sol.chckMaxNumBal(s)<<endl;
}