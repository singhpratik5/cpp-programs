#include<bits/stdc++.h>
using namespace std;
//#include<list>
/*
void pairs()
{
    pair<int,int> p = {1,2};

    pair<int,int> arr[4] = { {1,1},{2,4},{3,9},{4,16}};

    pair<int,pair<int,int>> m = {1,{2,3}};
    pair<pair<int,int>,pair<int,int>>c = {{1,100},{2,200}};
    //cout<<c.first.first<< " " <<c.first.second<<" ";
    //cout<<c.second.first<<" "<<c.second.second<<" ";
    cout<<m.second.first<<" ,"<<m.second.second;

    //for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++)
      //  cout<<arr[i].first<<" -> sqr  "<< arr[i].second<<" ,";
}

void vectors()
{
    vector<pair<int,int>>v[5];
    
    v[0].emplace_back(0,1);

    vector<int>v1(10,100);
    vector <int> v2(v1);
   // cout<<v.begin()<<" ";

   vector<int> :: iterator it = v1.begin(); //access memory 
   it++;
   cout<<*(it)<<" "; // using * accesses data at that memory

   //print full vector 
   for(auto it = v1.begin();it!= v1.end(); it++)
   {
        cout<<*(it)<<" ";
   }
   // Erasing in vector deleting in between
    v1.erase(v1.begin()+1);

    v1.erase(v1.begin()+2,v1.begin()+4); // (start,end) from start to end be deleted

    // insert in between vectors (position ,count,number)
    v1.insert(v1.begin()+1,2,10);
    v1.insert(v1.end()-2,5);
    //copying a vector elements to another 
    vector<int>tocopied(3,50);
    v1.insert(v1.begin(),tocopied.begin(),tocopied.end());

    //swapping vectors
    //v1 -> (10,20) , v2 -> (30,40);
    v1.swap(v2); // v1 ->(30,40),(10,20);

    v1.clear(); // erases whole vector;
    v1.empty(); // to check is vector empty or not.
}
    void lists()
    {
        list<int> ls;
        ls.push_back(2);
        ls.emplace_back(4);

        ls.push_front(5);
        ls.emplace_front(2,4);
    }
    
    void dequeue()
    {
        deque<int> dq;

        dq.push_back(1);//1
        dq.emplace_back(2);//1,2 
        dq.push_front(4); // 4,1,2
        dq.emplace_back(5);//5,4,1,2
    }

// Not a linear data struture
    void priorityqueues()
    {
        priority_queue<int>pq;

        pq.push(5); //5
        pq.push(4);//5,4
        pq.push(7);//7,5,4
        pq.push(10);//10,7,5,4

        pq.top();//10

        // MIN HEAP
        priority_queue<int , vector<int>,greater<int>> pq2;

        pq2.push(4); //4
        pq2.push(2); //2,4
        pq2.push(10); // 2,4,10
        pq2.push(1); // 1,2,4,10

    }

// SETS -> SORTED ORDER + UNIQUE ELEMENTS ONLY. time complexity : log N.
    void sets()
    {
        set<int>st;
        st.insert(1);//1
        st.insert(2);//1,2
        st.insert(2);//1,2
        st.insert(3);//1,2,3

        //if element is not in set iterator will return last element it.end();
        //finds the number in set 
        auto it = st.find(5);// return last elemnt
        cout<<*(it)<<" ";
        int cnt = st.count(2);
        cout<<cnt<<" ";
    }
//SORTED BUT STORES REPEATIONS ALSO
void multisets()
{
    multiset<int>ms;
    ms.insert(1);//1
    ms.insert(2);//1,2
    ms.insert(1);//1,1,2

    ms.erase(1); // erases all the 1's

    ms.erase(ms.find(1)); // erase only one element
    auto it = ms.find(1)++;
    ms.erase(ms.find(1),it);
}

// UNORDERED SETS -> ONLY UNIQUE ELEMENTS AS IT IS.

unordered_set<int>st;

// MAPS : (KEY,DATA);
void maps()
{
    map<int,int> mpp;
    map<pair<int,int>,int> mpp;
    map<int,pair<int,int>>mpp;
    mpp.insert({1,2});
    mpp[2] = 4;
    mpp.emplace(1,2,3);

    auto it = mpp.begin();
    mpp.find(4);
}

//SAME AS SETS ALSO MULTIMAPS : many data @ 1 key,&& UNORDERED MAPS -> UNIQUE KEYS NOT SORTED.

// SORTING ALG's
int a[10];
int n;
vector<int> v;

void extra()
{
sort(a,a+n);
sort(v.begin(),v.end());
sort(a+2,a+5);

// in desending order
//sort(a,a+n,greater<int>);


}
*/
void Exstring()
{
    //To get all the permututations of the string first SORT THE STRING.

    string s = "4231";
    sort(s.begin(),s.end());

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    //cout<<s<<endl;
    //while(next_permutation(s.begin(),s.end()))
    //{
    //    cout<<s<<endl;
   // }
}

void maxmin()
{
    int a[10] = {1,3,6,9,454,545,34};

    int maxele = *max_element(a,a+4);
    int minele = *min_element(a,a+4);
    cout<<maxele<<" "<<minele;


    //int num = 7;
}

// NESTING  

// VECTOR -> PAIRS

void vec_pair()
{
    vector<pair<int,int>> v = {{1,3},{4,6},{0,2}};
    cout<<"vector elements are : "<<endl;
    //v.pop_back();
    v.push_back({1,2});
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i].first <<" "<<v[i].second<<endl;
    }
}

void vec_arr()
{
    int N;
    cout<<"Enter the Number of vec"<<endl;
    cin>>N;
    vector<int> arr[N];
    for(int i = 0;i<N;i++)
    {
        int n;
        cout<<"Enter size of array"<<endl;
        cin>>n;
        for(int j = 0;j<n;j++)
        {
            int x;
            cout<<"enter element : "<<endl;
            cin>>x;
            arr[i].push_back(x);
        }
    }
    for(int i = 0;i<N;i++)
    {
        for(int j = 0;j<arr[i].size();j++)
        {
            cout<<arr[i].at(j)<<" ";
        }
        cout<<endl;
    }
}

//LOWER BOUND AND UPPER BOUND [RETURNS addRESS  pointers for array and ITERATOR FOR Vectors].
// Lower -> if ele present -> element. NOT PRESENT -> NEXT ELEMENT.
//Upper -> if ele present -> greater , not present -> greater , greater not present -> next iterator.

void low_upr_bound()
{
    int arr[7] = {4,5,48,57,234,334,523};
    int *lower = lower_bound(arr,arr+7,545);
    int *upper = upper_bound(arr,arr+7,887);
    if(upper = arr+7)
    {
        cout<<"Not Found";
        return ;
    }
    //cout<<(*lower)<<" ";
    cout<<(*upper)<<" ";
}

int main()
{
    ///pairs();
    //sets();
    //Exstring();
    //maxmin();
    //vec_pair();
    //vec_arr();
    low_upr_bound();
    exit(0);
}
