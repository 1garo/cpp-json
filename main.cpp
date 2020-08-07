#include <sstream> // for ostringstream
#include <string>
#include <variant>
#include <map>
#include <iostream>
#include <cassert>
#include <typeinfo>
#include <type_traits>
using namespace std;

struct jsonData {
    string key;
    string value;
};

struct json {
    string root;
    jsonData data;
};

// Example
void hashMap(){
    map<string, string> m;
    m["hello"] = "23";
    // check if key is present
    if (m.find("world") != m.end())
      cout << "map contains key world!\n";
    // retrieve
    cout << m["hello"] << endl;
    map<string, string>::iterator i = m.find("hello");
    assert(i != m.end());
    cout << "Key: " << i->first << "\n" << "Value: " << i->second << '\n';
}

map<string, string> create()
{
    return map<string, string>;
}

void parse()
{
    // TODO: create json.dumps
}

int main()
{
    json *sumOfTwoNumbers;
    sumOfTwoNumbers = (json*) malloc(sizeof(json));
    ostringstream out[2];
    //int sizeOut = 0;
    parse(sumOfTwoNumbers, out);
    hashMap();
    //cout << out[1].tellp() << endl;
    for (int i = 0; i < 2; i++){
        cout << out[i].str();
    }
    free(sumOfTwoNumbers);
    return 0;
}
