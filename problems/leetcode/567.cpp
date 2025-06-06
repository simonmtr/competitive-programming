class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> freqs;
        for(auto s : s1){
            freqs[s]++;
        }
        int freq_count = freqs.size(), i = 0, j = 0, k = s1.size();
        while(j < s2.size()) {
            if (freqs.find(s2[j]) != freqs.end()) {
                freqs[s2[j]]--;
                if(freqs[s2[j]] == 0) {
                    freq_count--;
                }
            }
            if (j-i+1 < k) {
                j++;
            } else if (j-i+1 == k) {
				if (freq_count == 0) {
					return true;  
				}
                if (freqs.find(s2[i]) != freqs.end()) {
                    freqs[s2[i]]++;
                    if (freqs[s2[i]] == 1){
                        freq_count++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;
    }
};