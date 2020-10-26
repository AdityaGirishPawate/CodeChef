//const int N=1e5;
#define INF 1e9
#include <bits/stdc++.h>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define f(i,a,b) for(int i=a;i< b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1e9+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define int long long
//This is the solution to the second problem in class test 02
#include <limits>
#include <iostream>
using namespace std;

struct HeapElement {
    double value;
    HeapElement* parent;
    HeapElement* child1;
    HeapElement* child2;
};
class Heap{
    HeapElement* head;
public:
    Heap();
    ~Heap();
    void insert(double d); // inserts value d into the heap
    double top(); // returns the smallest element
    void pop_top(); // removes the smallest element

};

Heap::Heap(){
    head = nullptr;
}

Heap::~Heap(){
    while (head != nullptr){
        pop_top();
    }
}
double Heap::top(){ // returns the smallest element
    if (head != nullptr){
        return head->value;
    }
    else{
        cout << "empty heap" << endl;
        return std::numeric_limits<double>::max();
    }

}

void Heap::insert(double d){// inserts value d into the heap
    if (head == nullptr){
        head = new HeapElement;
        head->value = d;
        head->parent = nullptr;
        head->child1 = nullptr;
        head->child2 = nullptr;
    }
    else{
        HeapElement* freepos_parent = head;
        auto* freepos = new HeapElement;
        double temp;

        while (freepos_parent->child1 != nullptr && freepos_parent->child2 != nullptr){
            if (rand() % 2 == 0){
                freepos_parent = freepos_parent->child1;
            }
            else{
                freepos_parent = freepos_parent->child2;
            }
        }

        //if left child is NULL then insert to left child, else insert to right child.
        if (freepos_parent->child1 == nullptr){
            freepos_parent->child1 = freepos;
        }
        else{
            freepos_parent->child2 = freepos;
        }
        //insert the new value to the position freepos.
        freepos->parent = freepos_parent;
        freepos->value = d;
        freepos->child1 = nullptr;
        freepos->child2 = nullptr;

        while (freepos_parent!=nullptr && freepos_parent->value > freepos->value){
            //swap the value
            temp = freepos_parent->value;
            freepos_parent->value = freepos->value;
            freepos->value = temp;
            //set to one level higher
            freepos = freepos_parent;
            freepos_parent = freepos->parent;
        }
    }
}

void Heap::pop_top(){ // removes the smallest element
    if (head == nullptr){
        cout << "The heap is already empty." << endl;
    }
    else if (head->child1 == nullptr && head->child2 ==nullptr){
        delete head;
        head = nullptr;
    }
    else{
        HeapElement* leaf =  head;
        //find a leaf node
        while (leaf->child1 != nullptr || leaf->child2 != nullptr){ //if it has child
            if (leaf->child1 != nullptr && leaf->child2 != nullptr){ //if has two children
                if (rand() % 2 == 0){
                    leaf = leaf->child1;
                }
                else{
                    leaf = leaf->child2;
                }
            }
            else if (leaf->child1 != nullptr){
                leaf = leaf->child1;
            }
            else{ leaf = leaf->child2; }
        }

        //cut the leaf
        if (leaf == leaf->parent->child1){
            leaf->parent->child1 = nullptr;
        }
        else{
            leaf->parent->child2 = nullptr;
        }

        //change head to the leaf
        leaf->parent = nullptr;
        leaf->child1 = head->child1;
        leaf->child2 = head->child2;

        // change the parents of childs of previous head
        if (head->child1 != nullptr){
            head->child1->parent = leaf;
        }
        if (head->child2 != nullptr){
            head->child2->parent = leaf;
        }

        delete head;
        head = leaf;
        //swap
        auto* small_child = new HeapElement;
        double temp;
        while (leaf->child1 != nullptr || leaf->child2 != nullptr){
            if (leaf->child1 != nullptr){
                small_child = leaf->child1;
                if (leaf->child2 != nullptr && leaf->child2->value < leaf->child1->value){
                    small_child = leaf->child2;
                }
            }
            else{ small_child = leaf->child2; }
            if (leaf->value > small_child->value){
                temp = small_child->value;
                small_child->value = leaf->value;
                leaf->value = temp;
            }
            leaf = small_child;
        }

    }

}
int main(){
    Heap heap;
    // Input
    double input[8] = { 29, 2, 5,7, 8,91, 1287, 18 };
    for (double i : input){
        heap.insert(i);//data is inserted into an heap
    }

    double sorted_array[8];
    for (double & j : sorted_array){
        j = heap.top();
        heap.pop_top();//the smallest element is removed
    }

    for (double j : sorted_array){
        cout<<j<<" ";
    }

}



























