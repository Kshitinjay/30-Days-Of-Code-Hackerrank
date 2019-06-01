#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr;
  int s, num;
  cin >> s;
  for (int i = 0; i < s; i++) {
    cin >> num;
    arr.push_back(num);
  }
  for (int i = arr.size() - 1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
}