class Solution {
    public:
        long long countOfSubstrings(string word, int k) {
            vector<int> isVowel(128, 0), freq(128, 0);
            string vowels = "aeiou";
    
            // Mark vowels in the isVowel array
            for (char v : vowels) {
                isVowel[v] = 1;
            }
    
            long long response = 0;
            int currentK = 0, vowelCount = 0, extraLeft = 0, left = 0;
    
            for (int right = 0; right < word.size(); right++) {
                char rightChar = word[right];
    
                if (isVowel[rightChar]) {
                    if (++freq[rightChar] == 1) vowelCount++;
                } else {
                    currentK++;
                }
    
                // Shrink window if consonant count exceeds k
                while (currentK > k) {
                    char leftChar = word[left];
                    if (isVowel[leftChar]) {
                        if (--freq[leftChar] == 0) vowelCount--;
                    } else {
                        currentK--;
                    }
                    left++;
                    extraLeft = 0;
                }
    
                // Adjust left pointer to remove extra vowels
                while (vowelCount == 5 && currentK == k && left < right && isVowel[word[left]] && freq[word[left]] > 1) {
                    extraLeft++;
                    freq[word[left]]--;
                    left++;
                }
    
                // Count valid substrings
                if (currentK == k && vowelCount == 5) {
                    response += (1 + extraLeft);
                }
            }
    
            return response;
        }
    };