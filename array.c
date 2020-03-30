// array a 中原有 n 個元素，插入 x 到第 i 個位置
// time complexity = O(n) : forloop 執行 n-i+1 次，其中 1<=i<=n
void array_insertion(int a[], int &n, int i, int x){
	int k;
	for(k=n; k>=i; k--){
		a[k+1] = a[k];
	}
	a[i] = x;
	n++;
}

// array a 中原有 n 個元素，刪除第 i 個元素，由 x 傳回
// time complexity = O(n) : forloop 執行 n-i 次，其中 1<=i<=n
void array_deletion(int a[], int &n, int i, int &x){
	int k;
	x = a[i];
	for(k=i+1; k<=n; k++){
		a[k-1] = a[k];
	}
	n--;
}