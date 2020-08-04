#include <iostream>
#include <iostream>
#include <sstream> // for ostringstream
#include <string>
using namespace std;

struct jsonData {
    string key;
    string value;
};

struct json {
    string root;
    jsonData data;
};

void parse(json *data, ostringstream *out)
{
//    sizeOut = out->str().size();

    data->root = "data";
    data->data.key = "teste";
    data->data.value = "valor";
    //cout << "{ " << data->data.key << ": " << data->data.value << " }" << endl;
    out[0] << "{ " << data->data.key << ": " << data->data.value << " }" << endl;
    out[1] << "{ " << data->data.key << ": " << data->data.value << " }" << endl;
}

int main()
{
    json *sumOfTwoNumbers;
    sumOfTwoNumbers = (json*) malloc(sizeof(json));
    ostringstream out[2];
    //int sizeOut = 0;
    parse(sumOfTwoNumbers, out);
    //cout << out[1].tellp() << endl;
    for (int i = 0; i < 2; i++){
        cout << out[i].str();
    }
    free(sumOfTwoNumbers);
    return 0;
}
