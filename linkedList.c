// 單鏈節點宣告
typedof struct ListNode* NodePtr;
struct ListNode{
	int data;
	struct ListNode *link;
};

// 雙鏈節點宣告
typedof struct ListNode* NodePtr;
struct ListNode{
	int data;
	struct ListNode *llink, *rlink;
};

// 建立 Linked List
head = tail = (NodePtr)malloc(sizeof(struct listnode));
for(i=1; i<=n; i++){
	tail -> link = (NodePtr)malloc(sizeof(struct listnode));
	tail = tail -> link;
	scanf("%d", &(tail -> data));
}
tail -> link = NULL;
p = head;
head = head -> link;
free(p);

// 將新資料 y 建立節點，插入在資料節點 x 之後
if (head == NULL){
	printf("node not found\n");
}
else{
	q = head;
	while(q -> link != NULL && q -> data != x){
		q = q -> link;
	}
	if (q -> data == x){
		p = (NodePtr)malloc(sizeof(struct listnode));
		p -> data = y;
		p -> link = q -> link;
		q -> link = p;
	}
	else{
		printf("node not found\n");
	}
}

// 在 Linked List 中找尋特定資料 x 的節點，並將新資料 y 插入在前面
r = NULL;
q = head;
while(q != NULL && q -> data != x){
	r = q;
	q = q -> link;
}
if (q == NULL){
	printf("node not foun\n");
}
else{
	p = (NodePtr)malloc(sizeof(struct listnode));
	p -> data = y;
	if(r == NULL){
		head = p;
	}
	else{
		r -> link = p;
	}
	p -> link = q;
}

// 在由小到大的排序中加入一筆資料 x 後仍維持排序
p = (NodePtr)malloc(sizeof(strcut listnode));
p -> data = x;
q = head;
r = NULL;
while(q != NULL && x >= q -> data){
	r = q;
	q = q -> link;
}
if(r == NULL){
	head = p;
}
else{
	r -> link = p;
}
p -> link = q;