#include <iostream>

using namespace std;

int main()
{

    string item;
    string item_sblm="tidak ada";
    string item_besar;
    string item_kecil;
    char pil='y';
    int stat ;
    int stat_besar = 0 ;
    int stat_kecil = 0 ;
    int i = 0;
        //input
        while (pil=='y'){
        cout << "masukkan nama item : " ;
        cin >> item ;
        cout << "masukkan stat : " ;
        cin >> stat ;

        //output

        cout << "nama item : " << item << endl;
        cout << "stat : " << stat << endl ;

        cout << "item sebelumnya " << item_sblm << endl;

            if(stat>stat_besar){
                cout << "item terbesar " << item << endl;
                item_besar = item;
                stat_besar = stat;
            }else {
                cout << "item terbesar " <<item_besar << endl;

                }
            if((i!=0)&&(stat<stat_kecil)){
                cout << "item terkecil" ;
                item_kecil = item;
                stat_kecil = stat;
            }else if(i!=0) {
                cout <<"item terkecil " << item_kecil << endl;
                }else {
                cout << "item terkecil "<<item <<endl;
                item_kecil = item;
                stat_kecil = stat;
                }

        //cout << "item terhebat " << item_besar << endl;
       // cout << "item terlemah " << item_kecil <<endl;

              item_sblm=item;
              i++;
        cout << "ingin memasukkan lagi ? (y/n)" ;
        cin >> pil;
        }

}
