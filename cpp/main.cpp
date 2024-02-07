#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main(){
    int i, n = 0;
    string id;
    string name;
    string field;
    string party;

    vector<DPR> anggota;
    string command;


    cout << "-------" << "Ketik TAMBAH, UBAH, atau HAPUS untuk melakukan operasi dan STOP untuk berhenti" << "-------\n";
    do
    {   
        DPR temp;
        cin >> command ;
        if(command == "TAMBAH"){
            cout << "Input data : " ;
            cin >> id >> name >> field >> party;

            temp.set_id(id);
            temp.set_name(name);
            temp.set_field(field);
            temp.set_party(party);

            anggota.push_back(temp);

        }else if(command == "UBAH"){
            string idMatch = "";
            cout << "Masukan ID data yang ingin diubah : ";
            cin >> idMatch;
            bool found = false;

            for (int i = 0; i < anggota.size(); i++) {
                if (anggota[i].get_id() == idMatch) {
                    found = true;
                    cout << "Ubah data : ";
                    cin >> id >> name >> field >> party;
                    
                    // Lakukan perubahan pada elemen yang sesuai
                    anggota[i].set_id(id);
                    anggota[i].set_name(name);
                    anggota[i].set_field(field);
                    anggota[i].set_party(party);

                    cout << "Data berhasil diubah.\n";
                    break; // Keluar dari loop setelah melakukan perubahan
                }
            }

            if (!found) {
                cout << "Data dengan ID " << idMatch << " tidak ditemukan.\n";
            }

        }else if(command == "HAPUS"){
            string idMatch = "";
            cout << "Masukan ID data yang ingin dihapus : ";
            cin >> idMatch;
            bool found = false;

            for (int i = 0; i < anggota.size(); i++) {
                if (anggota[i].get_id() == idMatch) {
                    found = true;
                    // Hapus elemen yang sesuai dari vektor
                    anggota.erase(anggota.begin() + i);
                    cout << "Data berhasil dihapus.\n";
                    break; // Keluar dari loop setelah melakukan penghapusan
                }
            }

            if (!found) {
                cout << "Data dengan ID " << idMatch << " tidak ditemukan.\n";
            }
        }


    } while (command != "STOP");   

    cout << "Iteration Output : " << '\n';
    for (int i = 0; i < anggota.size(); i++) {
        cout << i + 1<< ". " << anggota[i].get_id() << " " << anggota[i].get_name() << " " << anggota[i].get_field() << " " <<  anggota[i].get_party() << '\n';
    }
    
    return 0;
}