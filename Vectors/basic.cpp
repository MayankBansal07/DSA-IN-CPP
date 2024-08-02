#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //create vector, declare
    vector<int>v;
    vector<int>v1(5,1); 

    //size and capacity
    cout << "Size v: " << v.size() << endl;
    cout << "capacity v: " << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    //update
    v[1]=5;
    cout << "Size v1: " << v1.size() << endl;
    cout << "capacity v1: " << v1.capacity() << endl;
    v1.push_back(8);
    cout << "Size v1: " << v1.size() << endl;
    cout << "capacity v1: " << v1.capacity() << endl;
    vector<int>v3 = {1,2,3,4,5};
    cout << "Size v3: " << v3.size() << endl;
    cout << "capacity v3: " << v3.capacity() << endl;

    //delete value from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(45);
    vnew.push_back(9);
    vnew.push_back(78);
    vnew.push_back(3);
    vnew.pop_back();
    cout << "Size vnew: " << vnew.size() << endl;
    cout << "capacity vnew: " << vnew.capacity() << endl;

    //remove a element
    vnew.erase(vnew.begin()+1);
    cout << "Size vnew: " << vnew.size() << endl;
    cout << "capacity vnew: " << vnew.capacity() << endl;

    //print the values of vector
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";

    // insert the 50 value at +1 index from begin 
    vnew.insert(vnew.begin()+1,50);
    cout<<endl;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";
    cout<<endl;

    //remove all elements
    vnew.clear();
    cout << "Size vnew: " << vnew.size() << endl;
    cout << "capacity vnew: " << vnew.capacity() << endl;


    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int>a;
    //copy value of 1 vector in to another vector
    a = arr;
    cout<<a.size();
    cout<<endl;
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i: arr){
        cout<<i<<" ";
    }


    vector<int>ans;
    ans.push_back(1);
    ans.push_back(4565);
    ans.push_back(12);
    ans.push_back(9);
    ans.push_back(56);

    //sorting value in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    //sort in decreasing array
    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    sort(ans.begin(),ans.end());
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    //another method of sorting in reverse order
    sort(ans.rbegin(),ans.rend());
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    //search in binary search
    cout<<binary_search(ans.begin(),ans.end(),58)<<endl;
    cout<<find(ans.begin(),ans.end(),56)-ans.begin()<<endl;
}







