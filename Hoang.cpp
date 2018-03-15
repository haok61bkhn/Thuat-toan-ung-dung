#include <iostream>
#include <list>

#define MAX 10000
using namespace std;

main()
{
    list<int>NList[MAX];         //Neigbor List : danh sach hang xom cua cac dinh
    int degree[MAX];             //danh sach bac cua dinh
    int n;
    int prufer[MAX];
    int d = 0;                       // bien dem cua prufer

    //Nhap danh sach canh
    int x1, x2;                 // 2 dinh
    cin >> n;                    // n canh => n+1 dinh => n-1 do dai prufer
    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> x2;
        NList[x1].push_back(x2);    //dua x2 vao list dinh hang xom cua x1
        NList[x2].push_back(x1);
        degree[x1]++;               // tang bac
        degree[x2]++;
    }

    bool check = true;                  //xem da duyet het mang degree chua
    do {
        for (int i = 1; i <= n ; i++)
        {
            if (degree[i] == 1)
            {
                prufer[d] = *NList[i].begin();        //dua hang xom cua i vao prufer
                d++;
                degree[i]--;                            // Giam bac cua i
                degree[*NList[i].begin()]--;            //giam bac hang xom dinh i
                NList[*NList[i].begin()].remove(i);      // xoa dinh i trong list neighbor
                break;

            }
            if (i == n)
                check = false;          //Neu chay het mang degree ma ko tim thay dinh bac 1
        }
    } while (check != false);
    for (int i = 0; i < n-1; i++)
    {
        cout << prufer[i] << " ";
    }
}

