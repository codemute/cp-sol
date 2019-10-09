class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int si = 0, ans = 0, cnt = 0;
        map<char, int> mp;

        for(int i = 0; i < s.length(); i++) {
            if(mp[s[i]]) {
                if(mp[s[i]] - 1 < si) {
                    cnt++;
                } else {
                    ans = max(ans, cnt);
                    cnt = i - mp[s[i]] + 1;
                    si = mp[s[i]];
                }
            } else {
                cnt++;
            }
            mp[s[i]] = i + 1;
        }
        ans = max(ans, cnt);
        return ans;
    }
};