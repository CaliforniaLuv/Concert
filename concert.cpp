#include <iostream>
#include <string>

using namespace std;

void main() {

    cout << " 안녕하십니까                                                  #                       #" << endl;
    cout << " SMtown에서 주관하는                                           #                       #" << endl;
    cout << " 레드벨벳 콘서트에 팬 여러분들을 환영합니다~                   #         STAGE         #" << endl;
    cout << " 위 공연은 11월 23일부터 11월 25일까지                         #        |     |        #" << endl;
    cout << " 진행되어있으며 좌석은 옆 배치도를 참고하시면 됩니다.          #        |     |        #" << endl;
    cout << " A,B,C 스탠딩석 가격은 150,000원이며                           #        |     |        #" << endl;
    cout << " D1~D6 지정석의 가격은 100.000원입니다.                        #        |_____|        #" << endl;
    cout << "                                                               #          A B          #" << endl;
    cout << "                                                               #           C           #" << endl;
    cout << "                                                               #                       #" << endl;
    cout << "                                                               #   D1 D2 D3 D4 D5 D6   #" << endl;
    cout << "                                                               #                       #" << endl;
    cout << "                                                               #---------------------- #" << endl;
    cout << endl;
    cout << endl;

    const char* day[3] = { "day1","day2","day3" };
    const char* S[9] = { "A", "B", "C", "D1", "D2", "D3", "D4", "D5", "D6" };
    char D[5];
    char seat[4];
    int B = 0, ticket = 0, price = 0;
    char escape;




    while (1)
    {
        cout << "\t ┌────────────────────────────┐\n";
        cout << "\t ㅣ              원하시는 날짜를 입력하시오                ㅣ\n";
        cout << "\t ㅣ                 [day1, day2, day3]                     ㅣ\n";
        cout << "\t └────────────────────────────┘\n";
        cin >> D;
        cout << endl;
        while (strcmp(D, day[0]) != 0 && strcmp(D, day[1]) != 0 && strcmp(D, day[2]) != 0)
        {
            cout << "잘못 입력 하셨습니다. 다시 입력하십시오[day1 , day2 , day3]: ";
            cin >> D;
            cout << endl;
        }
        if (strcmp(D, day[2]) == 0)
        {
            while (strcmp(D, day[2]) == 0)
            {
                cout << "3일차는 모두 매진입니다 다시 입력해 주세요 " << endl;
                cin >> D;
                cout << endl;
            }
        }

        if (strcmp(D, day[1]) == 0)
        {
            while (1)
            {
                cout << "\t ┌────────────────────────────┐\n";
                cout << "\t ㅣ              어느 좌석에 배정되길 원하십니까?          ㅣ\n";
                cout << "\t ㅣ         <스탠딩 석 (A, B, C) 구역 , 지정석 D1~D6 구역> ㅣ\n";
                cout << "\t └────────────────────────────┘\n";
                cin >> seat;
                cout << endl;

                while (1)
                {
                    while (strcmp(seat, S[0]) != 0 && strcmp(seat, S[1]) != 0 && strcmp(seat, S[2]) != 0 && strcmp(seat, S[3]) != 0 && strcmp(seat, S[4]) != 0 &&
                        strcmp(seat, S[5]) != 0 && strcmp(seat, S[6]) != 0 &&
                        strcmp(seat, S[7]) != 0 && strcmp(seat, S[8]) != 0) {
                        cout << "잘못 입력 하셨습니다. 다시 입력하십시오 :<스탠딩 석 (A, B, C) 구역 , 지정석 D1~D6 구역>";
                        cin >> seat;
                        cout << endl;
                    }
                    while (strcmp(seat, S[0]) == 0 || strcmp(seat, S[2]) == 0)
                    {

                        cout << "해당좌석은 매진 되었습니다. 다른 좌석을 입력 하십시오 : ";
                        cin >> seat;
                        cout << endl;

                    }
                    if (strcmp(seat, S[3]) == 0 || strcmp(seat, S[4]) == 0 ||
                        strcmp(seat, S[5]) == 0 || strcmp(seat, S[6]) == 0 ||
                        strcmp(seat, S[7]) == 0 || strcmp(seat, S[8]) == 0 || strcmp(seat, S[1]) == 0) break;
                }



                if (strcmp(seat, S[3]) == 0 || strcmp(seat, S[4]) == 0 ||
                    strcmp(seat, S[5]) == 0 || strcmp(seat, S[6]) == 0 ||
                    strcmp(seat, S[7]) == 0 || strcmp(seat, S[8]) == 0 || strcmp(seat, S[1]) == 0)
                {

                    cout << "\t ┌────────────────────────────┐\n";
                    cout << "\t ㅣ              몇장을 구매 하시겠습니까?                 ㅣ\n";
                    cout << "\t ㅣ                   [1 or 2]                             ㅣ\n";
                    cout << "\t └────────────────────────────┘\n";
                    cin >> ticket;
                    cout << endl;
                    while (ticket >= 3 || ticket <= 0)
                    {
                        cout << "입력하신 티켓값이 0장 이하거나, 3장 이상입니다 다시 입력하시오 :";
                        cin >> ticket;
                        cout << endl;


                    }
                    cout << "\t ┌────────────────────────────┐\n";
                    cout << "\t ㅣ              결제하실 은행을 선택하십시오.             ㅣ\n";
                    cout << "\t ㅣ           [1:IBK은행 2:신한은행 3:KB국민은행]          ㅣ\n";
                    cout << "\t ㅣ              ※레드벨벳 스폰서 이벤트※                ㅣ\n";
                    cout << "\t ㅣ           ※KB국민은행으로 결제시 10% 할인※           ㅣ\n";
                    cout << "\t └────────────────────────────┘\n";
                    cin >> B;
                    cout << endl;

                    while (B != 1 && B != 2 && B != 3)
                    {
                        cout << "잘못 입력 하셨습니다. 다시 입력하시오 1: IBK 은행 , 2: 신한 은행 , 3: KB국민은행: ";
                        cin >> B;
                        cout << endl;
                    }

                    string T;
                    if (B == 3)
                    {
                        price = ticket * 100000 * 0.9;
                        T = "KB국민은행";
                    }
                    else if (B == 1)
                    {
                        price = ticket * 100000;
                        T = "IBK은행";
                    }
                    else if (B == 2)
                    {
                        price = ticket * 100000;
                        T = "신한은행";
                    }
                    if (strcmp(seat, S[1]) == 0 && B == 1 || B == 2)
                        price = ticket * 150000;
                    else if (strcmp(seat, S[1]) == 0 && B == 3)
                        price = ticket * 150000 * 0.9;


                    cout << "[구매하신 날짜는 : " << D << " 이며]" << endl;
                    cout << "[구매하신 좌석은 : " << seat << " 이며]" << endl;
                    cout << "[구매하신 표의 갯수는 : " << ticket << " 장이며]" << endl;
                    cout << "[입금할 은행은 : " << T << " 이며]" << endl;
                    cout << "[총 금액은 :" << price << " 원입니다]" << endl;
                    cout << endl;

                    cout << "\t ┌────────────────────────────┐\n";
                    cout << "\t ㅣ              선택하신 정보가 맞다면 [Y]                ㅣ\n";
                    cout << "\t ㅣ               다시 선택하고 싶다면 [N]을 입력하시오    ㅣ\n";
                    cout << "\t └────────────────────────────┘\n";
                    cin >> escape;
                    while (escape != 'Y' && escape != 'N')
                    {
                        cout << "다시 입력하시오 Y or N : ";
                        cin >> escape;
                        cout << endl;
                    }
                    if (escape == 'Y')
                        break;

                }


                break;
            }
            if (escape == 'Y')  /// 이거 두 개 안걸고 하나만 걸면 Y 탈출 못함 날짜로 무한반복
                break;

        }




        if (strcmp(D, day[0]) == 0)
        {
            while (1)
            {
                cout << "\t ┌────────────────────────────┐\n";
                cout << "\t ㅣ              어느 좌석에 배정되길 원하십니까?          ㅣ\n";
                cout << "\t ㅣ         <스탠딩 석 (A, B, C) 구역 , 지정석 D1~D6 구역> ㅣ\n";
                cout << "\t └────────────────────────────┘\n";
                cin >> seat;
                cout << endl;
                while (1)
                {
                    while (strcmp(seat, S[0]) != 0 && strcmp(seat, S[1]) != 0 && strcmp(seat, S[2]) != 0 && strcmp(seat, S[3]) != 0 && strcmp(seat, S[4]) != 0 &&
                        strcmp(seat, S[5]) != 0 && strcmp(seat, S[6]) != 0 &&
                        strcmp(seat, S[7]) != 0 && strcmp(seat, S[8]) != 0) {
                        cout << "잘못 입력 하셨습니다. 다시 입력하십시오 :<스탠딩 석 (A, B, C) 구역 , 지정석 D1~D6 구역>";
                        cin >> seat;
                        cout << endl;
                    }
                    while (strcmp(seat, S[0]) == 0 || strcmp(seat, S[1]) == 0 || strcmp(seat, S[2]) == 0)
                    {

                        cout << "해당좌석은 매진 되었습니다. 다른 좌석을 입력 하십시오 : ";
                        cin >> seat;
                        cout << endl;

                    }
                    if (strcmp(seat, S[3]) == 0 || strcmp(seat, S[4]) == 0 ||
                        strcmp(seat, S[5]) == 0 || strcmp(seat, S[6]) == 0 ||
                        strcmp(seat, S[7]) == 0 || strcmp(seat, S[8]) == 0) break;
                }



                if (strcmp(seat, S[3]) == 0 || strcmp(seat, S[4]) == 0 ||
                    strcmp(seat, S[5]) == 0 || strcmp(seat, S[6]) == 0 ||
                    strcmp(seat, S[7]) == 0 || strcmp(seat, S[8]) == 0)
                {

                    cout << "\t ┌────────────────────────────┐\n";
                    cout << "\t ㅣ              몇장을 구매 하시겠습니까?                 ㅣ\n";
                    cout << "\t ㅣ                   [1 or 2]                             ㅣ\n";
                    cout << "\t └────────────────────────────┘\n";
                    cin >> ticket;
                    cout << endl;
                    while (ticket >= 3 || ticket <= 0)
                    {
                        cout << "입력하신 티켓값이 0장 이하거나, 3장 이상입니다 다시 입력하시오 :";
                        cin >> ticket;
                        cout << endl;


                    }
                    cout << "\t ┌────────────────────────────┐\n";
                    cout << "\t ㅣ              결제하실 은행을 선택하십시오.             ㅣ\n";
                    cout << "\t ㅣ           [1:IBK은행 2:신한은행 3:KB국민은행]          ㅣ\n";
                    cout << "\t ㅣ              ※레드벨벳 스폰서 이벤트※                ㅣ\n";
                    cout << "\t ㅣ           ※KB국민은행으로 결제시 10% 할인※           ㅣ\n";
                    cout << "\t └────────────────────────────┘\n";
                    cin >> B;
                    cout << endl;
                    while (B != 1 && B != 2 && B != 3)
                    {
                        cout << "잘못 입력 하셨습니다. 다시 입력하시오 1: IBK 은행 , 2: 신한 은행 , 3: KB국민은행: ";
                        cin >> B;
                        cout << endl;
                    }
                    string T;
                    if (B == 3)
                    {
                        price = ticket * 100000 * 0.9;
                        T = "KB국민은행";
                    }
                    else if (B == 1)
                    {
                        price = ticket * 100000;
                        T = "IBK은행";
                    }
                    else if (B == 2)
                    {
                        price = ticket * 100000;
                        T = "신한은행";
                    }
                    cout << "[구매하신 날짜는 : " << D << " 이며]" << endl;
                    cout << "[구매하신 좌석은 : " << seat << " 이며]" << endl;
                    cout << "[구매하신 표의 갯수는 : " << ticket << " 장이며]" << endl;
                    cout << "[입금할 은행은 : " << T << " 이며]" << endl;
                    cout << "[총 금액은 :" << price << " 원입니다]" << endl;
                    cout << endl;

                    cout << "\t ┌────────────────────────────┐\n";
                    cout << "\t ㅣ              선택하신 정보가 맞다면 [Y]                ㅣ\n";
                    cout << "\t ㅣ               다시 선택하고 싶다면 [N]을 입력하시오    ㅣ\n";
                    cout << "\t └────────────────────────────┘\n";
                    cin >> escape;
                    while (escape != 'Y' && escape != 'N')
                    {
                        cout << "다시 입력하시오 Y or N : ";
                        cin >> escape;
                        cout << endl;
                    }
                    if (escape == 'Y')
                        break;

                    cout << endl;
                }

                break;

            }

            if (escape == 'Y')
                break;

        }


    }
















    system("pause");
}