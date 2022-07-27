// 221
// 给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。 鞍点指的是矩阵中的一个元素，
// 它是所在行的最大值，并且是所在列的最小值。 例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
// 11 3 5 6 9
// 12 4 7 8 10
// 10 5 6 9 11
// 8 6 4 7 2
// 15 10 11 20 25

// 输入格式
// 输入包含一个5行5列的矩阵
// 输入样例
// 11 3 5 6 9
// 12 4 7 8 10
// 10 5 6 9 11
// 8  6 4 7 2
// 15 10 11 20 25

// 输出格式
// 如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"
// 输出样例
// 4 1 8

#include <iostream>
using namespace std;

int arr[5][5];
int isRowMax(int a, int row) {
  for (int j = 0; j < 5; j++) {
    if (a < arr[row][j]) {
      return 0;
    }
  }
  return 1;
}

int isColMin(int a, int col) {
  for (int i = 0; i < 5; i++) {
    if (a > arr[i][col]) {
      return 0;
    }
  }
  return 1;
}

int main1() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (isRowMax(arr[i][j], i) && isColMin(arr[i][j], j)) {
        cout << i+1 << " " << j+1 << " " << arr[i][j];
        return 0;
      }
    }
  }
  cout << "not found";
  return 0;
}

// 上面这种做法时间复杂度过高，有第二种想法

int main() {
  int arrMax[5][2] = {};  // 存储每行最大值
  for (int i = 0; i < 5; i++) {
    int max = 0, col = 0;
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
      if (j == 0) {
        max = arr[i][j];
      } else {
        if (max < arr[i][j]) {
          max = arr[i][j];
          col = j;
        }
      }
    }
    arrMax[i][0] = i;
    arrMax[i][1] = col;
  }

  for (int i = 0; i < 5; i++) {
    int rowMax = arr[arrMax[i][0]][arrMax[i][1]];
    if (isColMin(rowMax, arrMax[i][1])) {
      cout << arrMax[i][0]+1 << " " << arrMax[i][1]+1 << " " << rowMax;
      return 0;
    }
  }
  cout << "not found";
  return 0;
}