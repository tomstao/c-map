#include <iostream>
#include <map>
#include <string>

// In some other languages, like JAVA, map is called dictionary.

int main()
{
    using namespace std;
    map<string,string> myDictionary;
    myDictionary.insert(pair<string,string>("apple","der Apfel"));
    myDictionary.insert(pair<string,string>("banana","die Banane"));
    myDictionary.insert(pair<string,string>("orange","die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
    // Map is automatically ordered, depends on the key, it could be alphabetically or numerically.
    // But, we also have unordered map, that you can use it when you include the unordered_map library.

    // How to access the element in a map?
    cout << myDictionary ["strawberry"] << endl;
    // use the name of the map plus ["key"] to access or modify the desired value.

    cout << "the map size is:" << myDictionary.size() << '.'<< endl;

    for(auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
        // first means "key". second means "value".
    }


    // use clear to delete all the elements in your map
    myDictionary.clear();
    cout << "the map size is:" << myDictionary.size() << '.'<< endl;




    return 0;
}
