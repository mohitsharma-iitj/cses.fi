#include <iostream>
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

int main() {
      
    // WierdAlgo();
    // MissingNumber();
    // Repetitions();
    IncreasingArray();
    // Permutations();
    // NumberSpiral();
    // TwoKnights();
    // TwoSets();
    // BitStrings();
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