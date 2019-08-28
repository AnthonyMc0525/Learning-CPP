#include <iostream>
#include <string>

using namespace std;

class AnthonyClass{
  private:
    string name;

  public:
    AnthonyClass(string n){
      SetName(n);
    }

  public:
    string GetName(){
      return name;
    }
    
    void SetName(string x){
      name = x;
    }

};

int main(){
  AnthonyClass Anthony("Anthony");
  cout << Anthony.GetName() << endl;
  Anthony.SetName("Anthony");
  cout << Anthony.GetName();

  return 0;
}

