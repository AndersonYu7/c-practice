#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,ans=0;            //利用xor的方法使得偶數時歸零 奇數時保留 最後可輸出奇數的答案
	scanf("%d",&N);
	N--;
	while(N--){
		int S;
		scanf("%d",&S);
		ans^=S;
	}
	printf("%d\n",ans);

    system("pause");
	return 0;
}