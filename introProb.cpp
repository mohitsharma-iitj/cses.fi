#include <iostream>
#include <vector>
using namespace std;

void WierdAlgo() {
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
}

void MissingNumber() {
    long long n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        sum += x;
    }
    cout << n * (n + 1) / 2 - sum;
}

void Repetitions() {
    string s;
    cin >> s;
    int max = 1;
    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            max = count > max ? count : max;
        } else {
            count = 1;
        }
    }
    cout << max;
}

void IncreasingArray() {
    long long n;
    cin >> n;
    long long prev;
    cin >> prev;
    long long moves = 0;
    for (int i = 1; i < n; i++) {
        long long x;
        cin >> x;
        if (x < prev) {
            moves += prev - x;
        } else {
            prev = x;
        }
    }
    cout << moves;
}

void Permutations() {
    long long n;
    cin >> n;
    if (n == 1) {
        cout << 1;
    } else if (n < 4) {
        cout << "NO SOLUTION";
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
}

void NumberSpiral() {
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long y, x;
        cin >> y >> x;
        long long n = y > x ? y : x;
        long long base = n * n - 2*n + 1;
        if (n % 2 == 0) {
            if (x == n) {
                cout << base + y;
            } else {
                cout << base + n + y-x;
            }
        } else {
            if (y == n) {
                cout << base + x;
            } else {
                cout << base + n + x - y;
            }
        }
        cout << endl;
    }
}

void TwoKnights() {
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // total = no of block C 2 or nc2 where n = i * i
        long long total = 1LL * i * i * (1LL * i * i - 1) / 2;

        // attack = no of blocks where knight can attack each other
        // can be find by given answer for 1 to 8 - total and intution for formula
        long long attack = 1LL * 4 * (i - 1) * (i - 2);
        cout << total - attack << endl;
    }
}

void TwoSets(){
    int n;
    cin >> n;
    if(n==1 || n==2){
        cout << "NO" << endl;
        return;
    }
    vector<int> a, b;  
    if ((n-3)%4 == 0) {
        cout << "YES" << endl;
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        for(int i=4; i<=n; i++){
            if(i%4 == 0 || i%4 == 3){
                a.push_back(i);
            } else {
                b.push_back(i);
            }
        }
    } else if((n-4)%4 == 0) {
        cout << "YES" << endl;
        for(int i=1; i<=n; i++){
            if(i%4 == 0 || i%4 == 1){
                a.push_back(i);
            } else {
                b.push_back(i);
            }
        }
    } else {
        cout << "NO" << endl;
        return;
    }
    cout << a.size() << endl;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << b.size() << endl;
    for(int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
}

void BitStrings() {
    long long n;
    cin >> n;
    long long mod = 1e9 + 7;
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % mod;
    }
    cout << ans;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // WierdAlgo();
    // MissingNumber();
    // Repetitions();
    // IncreasingArray();
    // Permutations();
    // NumberSpiral();
    // TwoKnights();
    // TwoSets();
    BitStrings();
    // TrailingZeros();
    // CoinPiles();
    // PalindromeReorder();
    // GrayCode();
    // TowerOfHanoi();
    // CreatingStrings();
    // AppleDivision();
    // ChessboardAndQueens();
    // DigitQueries();
    // GridPaths();

    return 0;
}