#include <stdio.h>

void sort(int *heap, int len);
void makeHeap(int *heap, int len);
int left_i(int i);
int right_i(int i);
int compare(int *heap, int len, int root_i, int sub_i);

void swap(int *heap,int i, int j);
void displayArray(int a[],int len);

int count = 0;

int main()
{   
    const int len = 9;
	int a[len] = {7,8,2,15,14,3,4,17,16};
    displayArray(a,len);

	sort(a,len);

    return 0;
}

void sort(int *heap, int len)
{
    for (int i=len; i>0; i--){
		//构建大顶堆/或小顶堆
        makeHeap(heap,i);
        displayArray(heap,len);

		//头尾交换
        swap(heap,0,i-1);
        displayArray(heap,len);

        printf("\n");
    }
}

void makeHeap(int *heap,int len) 
{
    int i;
	int left;
	int right;
	int largest;

    for (i = len/2-1; i >= 0; i--){
		largest = i;

		//判断并交换左子节点
		left = 2*i+1;
		if(left < len && heap[i] < heap[left])
			largest = left;

		//判断并交换右子节点
		right = 2*i+2;
		if(right < len && heap[i] < heap[right])
			largest = right;

		if(largest != i){
			printf("count = %d\n",++count);
			swap(heap,i,largest);
 	        makeHeap(heap,largest);
		}
    }
}

void swap(int *heap,int i,int j)
{
	int temp;

	temp = heap[i];
	heap[i] = heap[j];
	heap[j] = temp;
}

void displayArray(int array[],int len)
{
    for(int i = 0; i < len; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

