#include <iostream>
#include <string>
#include <map>
#include <stdexcept>
using namespace std;

namespace dna
{
    class counter {
    private:
        string dna_string;

    public:
        counter(string chain) {
            dna_string = chain;
        };

        int count(char type) const {
            if(type != 'A' && type != 'C' && type != 'G' && type != 'T') {
                throw invalid_argument("This is not a valid nucleotide.");
            } else {
                int result = 0;
                for(char c : dna_string){
                    if(c == type)
                        result++;
                }
                return result;
            }       
        };

        map<char, int> nucleotide_counts() const {
            map<char, int> result;
            result['A'] = count('A');
            result['C'] = count('C');
            result['G'] = count('G');
            result['T'] = count('T');
            return result;
        }
    };
}
