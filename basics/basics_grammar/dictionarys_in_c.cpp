// C++ map funtion
// https://www.tutorialspoint.com/cpp_standard_library/map.htm
#include <iostream>
#include <map>

using namespace std;

int main(void) {
    map<char, int> m;
    cout << "Size of map = " << m.size() << endl;

    map<char, int> m1 = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5}
            };
    map<char, int> m2(m1.begin(), m1.end());

    cout << "Map contains following elements" << endl;
    for (auto it = m2.begin(); it != m2.end(); ++it){
        cout << it->first << " = " << it->second << endl;}
   
    cout << "Value of key m1['a'] = " << m1.at('a') << endl;
    
    m2.insert(pair<char, int>('f', 4));
    m2.erase(m2.begin());
    m2.erase('e');

    for (auto it = m2.begin(); it != m2.end(); ++it){
        cout << it->first << " = " << it->second << endl;}
    
    return 0;
}