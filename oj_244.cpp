#include <iostream>
using namespace std;
int main(){
  int n, tmp, count = 0, max=-1, arr[31], idx=0;
  char fuhao;
  bool isBool = true;
  
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    isBool = true;
    count = 0;
    while(isBool) {
      scanf("%d", &tmp);
      scanf("%c", &fuhao);
      if (tmp == 10000) {
        break;
      }
      if (max < tmp) {
        max = tmp;
        idx=0;
        printf("%d ", max);
        arr[idx++] = i;
      }
      if (max == tmp) {
        if (arr[idx - 1] != i) {
					arr[idx++] = i;
				}
      }
      if (tmp >= 0 && tmp <= 9999) {
        count++;
      } else {
        isBool = false;
      }
      if (count >= 100 || fuhao != ',') {
        isBool = false;
      }
      tmp = 10000;
    }
  }
  printf("%d\n", max);
  for (int i = 0; i < idx; i++) {
  	printf("%d", arr[i]+1);
  	if (i < idx - 1) {
  		printf(",");
  	}
  }
  return 0;
}
