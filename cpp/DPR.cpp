// Import Library
#include <iostream>
#include <string>

// Using standard namespace
using namespace std;

// Class declaration, for C++ the first letter doesn't have to be capital
// But it's better capital. So we can distinguish it with the other types

class DPR
{
    // Private Attribute
    private:
        string id;
        string name;
        string field;
        string party;
        
    // Public methods
    public:
        DPR(){
            this->id = "";
            this->name = "";
            this->field = "";
            this->party = "";
        }

        DPR(string id, string name, string field, string party){
            this->id = id;
            this->name = name;
        }

        string get_id(){
            return this->id;
        }

        void set_id(string id){
            this->id = id;
        }

        string get_name(){
            return this->name;
        }

        void set_name(string name){
            this->name = name;
        }

        string get_field(){
            return this->field;
        }

        void set_field(string field){
            this->field = field;
        }

        string get_party(){
            return this->party;
        }

        void set_party(string party){
            this->party = party;
        }

        void corrupt(){
            cout << this->name << "is doing corrupt!" << '\n';
        }
        
        void sleep(){
            cout << this->name << "is sleeping while meet!" << '\n';
        }

        ~DPR(){
        }
}; 