// User function template for C++
class Solution {
  public:
    int search(string &p, string &s) {
        // code here
          int n = s.size();
        int m = p.size();
        if (n < m) return 0;

        vector<int> phash(26, 0);
        vector<int> shash(26, 0);
        int c=0;
        for (int i = 0; i < m; i++) {
            phash[p[i] - 'a']++;
            shash[s[i] - 'a']++;
        }

        if (phash == shash) c++;
        for (int i = m; i < n; i++) {
            shash[s[i] - 'a']++;       
            shash[s[i - m] - 'a']--;   

            if (phash == shash) c++;
        }
        return c;
    }
};
