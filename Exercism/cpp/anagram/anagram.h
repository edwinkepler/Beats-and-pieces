#include <string>
#include <vector>
#include <algorithm>
using namespace std;

namespace anagram
{
    class anagram {
    private:
        string base;
    
    public:
        anagram(string s) {
            base = s;
        };

        vector<string> matches( vector<string> candidates ) {
            vector<string> solution;
            
            transform(base.begin(), base.end(), base.begin(), ::tolower);
            string tmp_base = base; // needed to check if passed candidates are not equal to base
            sort(base.begin(), base.end());

            for(int i = 0; i < candidates.size(); i++) {
                string tmp_cand;
                tmp_cand.clear();
                tmp_cand = candidates[i];
                transform(candidates[i].begin(), candidates[i].end(), candidates[i].begin(), ::tolower);

                if(tmp_base != candidates[i]) { // to satisfy 'does_not_detect_a_word_as_its_own_anagram' test case                    
                    sort(candidates[i].begin(), candidates[i].end());

                    if(base == candidates[i]) {
                        solution.push_back(tmp_cand);
                    }
                }
            }
            return solution;
        };
    };
}
