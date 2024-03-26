#include "Search.h"

template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
	mid = 0;
}

template <class T>
Array<T>::Array(int LB,int UB,T x[]){
 int i = LB;
 while(i<=UB){
	A[i]=x[i];
	i++;
 }
}

template <class T>
void Array<T>::insert_at_end(T key){
	UB=UB+1;
	A[UB]=key;
}

template <class T>
int Array<T>::partition( int LB,int UB){
	int j=LB-1;
	int pivot=A[UB];
	int i=LB;
	while(i<UB){
		if(A[i]>pivot){
			j=j+1;
			swap(A[i],A[j]);
		}
		i+=1;
	}
	swap(A[j+1],A[UB]);
	return j+1;
}

template <class T>
void Array<T>::quicksort(int LB,int UB){
	if (LB<=UB){
		int p=partition(LB, UB);
			quicksort(LB,p-1);
			quicksort(p+1,UB);

		}
}

template<class T>
void Array<T>::bubble_sort(){
	for( int i = LB; i<UB;i++){
		for(int j=LB;j<UB+LB-i-1;j++){
			if (A[j]>A[j+1]){
				swap(j,j+1);
			}
		}
	}
}

template<class T>
void Array<T>::insertion_sort(){
	int n = (UB-LB)+1;
	for (int i = 1; i<n;i++){
		T key = A[i];
	 int j = i-1;

	 while(j>= 0 && A[j]>key){
		A[j+1] = A[j];
		j = j-1;
	 }
	 A[j+1] = key;
	}
}

template <class T>
void Array<T>::merge(T A[], T B[], T C[], int A_LB, int A_UB, int B_LB, int B_UB) {
    int k = 0, i = A_LB, j = B_LB;
    while (i <= A_UB && j <= B_UB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    while (i <= A_UB) {
        C[k++] = A[i++];
    }
    while (j <= B_UB) {
        C[k++] = B[j++];
    }
}

template <class T>
void Array<T>::mergesort(T arr[], int LB, int UB) {
    if (LB < UB) {
        int mid = (LB + UB) / 2;
        mergesort(arr, LB, mid);
        mergesort(arr, mid + 1, UB);
        int tempSize = UB - LB + 1;
        T tempArray[tempSize];
        merge(arr, arr, tempArray, LB, mid, mid + 1, UB);
        for (int i = 0; i < tempSize; i++) {
            arr[LB + i] = tempArray[i];
        }
    }
}

template<class T>
void Array<T>::selection_sort(){
	int i,j;
	for(i=LB;i<UB;++i){
		int min = i;
		for(j=i+1;j<UB;j++){
			if (A[j]<A[min]){
				min = j;
			}
		}
		if (min!=i){
			swap(i,min);
		}
	}
}

template<class T>
int Array<T>::linearsearch(T target){
	for (int k = 0; k<UB;++k){
		if(A[k] ==target){
			return k;
		}
	}
	return -1;
}

template<class T>
int Array<T>::binarysearch(T key) {
	int p = LB;
	int q = UB;
	cout<<p<<" "<<q<<endl;

    while (p <= q) {
        mid = (p + q) / 2;
		cout<<"inital value for mid"<<mid;
        if (A[mid] > key) {
            q = mid - 1;
        } else if (A[mid] < key) {
            p = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

template<class T>
void Array<T>::swap(int p, int q){
	T temp = A[p];
	A[p] = A[q];
	A[q] = temp;
}

//ostream
template <class F>
ostream& operator << (ostream& os,Array<F> M){
	int i;
	os<<endl;
	for (i=M.LB;i<=M.UB;i++){
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}





