// User function Template for C++
class Solution {
  public:
    void gfSeries(int N)  {
        long long int a = 0, b = 1, c;
        cout << a << " " << b << " ";
        for(int i=2; i<N; i++) {
            c = a*a - b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
};