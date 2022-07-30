// ordered set
// duplicate elements


#include <iostream>
#include <set>
using namespace std;

printSet(multiset<int> set){
	for(multiset<int>::iterator i = set.begin(); i!=set.end(); i++){
		cout<< *i <<" ";
	}
	cout<<endl;
}

int main() {
	
	multiset<int> m_set = {10, 20, 30, 10, 20, 40, 50};
	printSet(m_set);
	
	// insert
	m_set.insert(60);
	printSet(m_set);
	
	// erase
	multiset<int>::iterator del = m_set.begin();
	m_set.erase(del);	// 10 20 20 30 40 50 60
	m_set.erase(50);	// 10 20 20 30 40 60
	printSet(m_set);
	
	m_set.erase(m_set.begin(), m_set.find(30));
	printSet(m_set);	// 30 40 60
	
	// swap() : use to swap to sets.
	// set1.swap(set2);
	
	// size
	cout<<"Size of Multiset : "<<m_set.size()<<endl;
	
	
	return 0;
}