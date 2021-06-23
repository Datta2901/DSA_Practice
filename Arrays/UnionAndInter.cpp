/*
    problem : merge two sorted arrays and find intersection and uni
*/

#include<bits/stdc++.h>
using namespace std;


void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        if(a[i] != -1)
        cout << a[i] << " ";
    }
    cout << endl;
}

void IntersectionAnduni(int a[], int b[], int *inter, int asize, int bsize,int *uni){
    int i = 0,j = 0,pos = 0,ind = 0;
    while(i < asize && j < bsize){
        if(a[i] < b[j]){
            if(pos == 0){
                inter[pos++] = a[i++];  
            }else if(pos > 0 && inter[pos - 1] != a[i]){
               inter[pos++] = a[i++]; 
            }else{
                i++;
            }
        }else if(a[i] > b[j]){
            if(pos == 0){
                inter[pos++] = b[j++];  
            }else if(pos > 0 && inter[pos - 1] != b[j]){
               inter[pos++] = b[j++]; 
            }else{
                j++;
            }
        }else{
            if(inter[pos - 1] == a[i]){
                i++;
                j++;
                continue;
            }
            uni[ind++] = a[i];
            inter[pos++] = a[i++];
            j++;
        }
    }

    while(j < bsize){
        if(inter[pos-1] == b[j]){
            j++;
            continue;
        }
        inter[pos++] = b[j++];
    }

    while(i < asize){
        if(inter[pos-1] == a[i]){
            i++;
            continue;
        }
        inter[pos++] = a[i++];
    }

}

int main(){
    int m,n;
    cin >> m >> n;

    int arr1[m],arr2[n];

    for(int i = 0; i < m; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    int *inter = (int*)malloc((m+n) * sizeof(int));
    int *uni = (int*)malloc((max(m,n)) * sizeof(int));
    memset(inter,-1,(m+n) * sizeof(int));
    memset(uni,-1,(max(m,n)) * sizeof(int));
    printArray(uni,max(m,n));
    IntersectionAnduni(arr1,arr2,inter,m,n,uni);
    cout << "Intersection is : ";
    printArray(inter,m+n);
    cout << "Union is : ";
    printArray(uni,max(m,n));
    return 0;
}


// GFG submission
// union of two unsorted arrays
// Algo just we can use a set which contains only union

//problem actually at gfg : https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

// class Solution{
//     public:
 //Function to return the count of number of elements in union of two arrays.
//     int doUnion(int a[], int asize, int b[], int bsize)  {
//         int inter[asize + bsize],answer = 0;
//         sort(a,a+asize);
//         sort(b,b+bsize);
//         memset(inter,-1,(asize+bsize) * sizeof(int));
//         int i = 0,j = 0,pos = 0,ind = 0;
//         while(i < asize && j < bsize){
//             if(a[i] < b[j]){
//                 if(pos == 0){
//                     inter[pos++] = a[i++];  
//                 }else if(pos > 0 && inter[pos - 1] != a[i]){
//                    inter[pos++] = a[i++]; 
//                 }else{
//                     i++;
//                 }
//             }else if(a[i] > b[j]){
//                 if(pos == 0){
//                     inter[pos++] = b[j++];  
//                 }else if(pos > 0 && inter[pos - 1] != b[j]){
//                    inter[pos++] = b[j++]; 
//                 }else{
//                     j++;
//                 }
//             }else{
//                 if(inter[pos - 1] == a[i]){
//                     i++;
//                     j++;
//                     continue;
//                 }
//                 inter[pos++] = a[i++];
//                 j++;
//             }
//         }
    
//         while(j < bsize){
//             if(inter[pos-1] == b[j]){
//                 j++;
//                 continue;
//             }
//             inter[pos++] = b[j++];
//         }
    
//         while(i < asize){
//             if(inter[pos-1] == a[i]){
//                 i++;
//                 continue;
//             }
//             inter[pos++] = a[i++];
//         }
//         for(int i = 0; i < asize + bsize; i++){
//             if(inter[i] != -1){
//                 answer++;
//             }else{
//                 break;
//             }
//         }
//         return answer;
//     }
// };
