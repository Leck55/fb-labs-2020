#include <iostream>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

int main (void)
{
    //��������� ����� � ��������� ��� � ���� ������
    setlocale(LC_ALL,"Russian"); //��� �� �� ��� ���� ������� ������ ���� (���� �������� ��� � �� ���� � ��������� ���� ��� ���������)
    string line;
    string fullstring;
    ifstream in2("C:\\Users\\User\\Desktop\\����� 5 �������\\������������\\��\\fb-labs-2020\\cp_1\\sereda_fb-81_cp1\\text.txt");
    while (getline(in2, line))
    {
        fullstring = fullstring + line;
    }
    in2.close();


    //����������� ����� ������� ����� ����������
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]=='1' || fullstring[i]=='2' || fullstring[i]=='3' || fullstring[i]=='4' || fullstring[i]=='5' || fullstring[i]=='6' || fullstring[i]=='7' || fullstring[i]=='8' || fullstring[i]=='9' || fullstring[i]=='0' || fullstring[i]=='.' || fullstring[i]==',' || fullstring[i]=='�' || fullstring[i]=='?' || fullstring[i]=='!' || fullstring[i]==')' || fullstring[i]=='(' || fullstring[i]=='-' || fullstring[i]=='"' || fullstring[i]==':')
        {
            fullstring[i]=' ';
        }
    }


    //����������� ����� ������� ������� �������
    //���� ��� ���� ��� �� ���� �� ����� �� ������ ������ ��� ��������� �������, �� � ������ ��������� ��� ������
    int flag = 1;
    while (flag == 1)
    {
        flag = 0;
        for (int i = 0; i <= fullstring.length(); i++)
        {
            if (fullstring[i]==' ' && fullstring[i+1]==' ')
            {
                fullstring.erase(i,1);
                flag = 1;
                break;
            }
        }
    }


    //����������� ����� ���������� ������� ����� � ���������
    for (int i = 0; i <= fullstring.length(); i++)
    {
        switch (fullstring[i])
        {
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        case '�':
            fullstring[i] = '�';
            break;
        default:
            break;
        }
    }
    /*cout << "�����" << endl;
    cout << fullstring << endl;*/


    //���� ������� �����
    int letters_with_space [33];
    int total1 = 0;
    for (int i = 0; i <= 32; i++)
    {
        letters_with_space[i] = 0;
    }
    for (int i = 0; i<= 31; i++)
    {
        for (int j = 0; j <= fullstring.length(); j++)
        {
            if ((int)fullstring[j]==(int)'�'+i)
            {
                letters_with_space[i]=letters_with_space[i]+1;
                total1 = total1 + 1;
            }
        }
    }
    //�������� ������� ������
    for (int j = 0; j <= fullstring.length(); j++)
        {
            if ((int)fullstring[j]==32)
            {
                letters_with_space[32]=letters_with_space[32]+1;
                total1 = total1 + 1;
            }
        }
    cout << endl;
    /*cout << "����������� ���� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        cout << (char)(-32+i) << " " << letters_with_space[i] << endl;
    }
    cout << endl << "Total symbols " << total1 << endl;*/


    //������ ������� �� �������
    double chastota_bukv_probel[33];
    for (int i = 0; i <= 32; i++)
    {
        chastota_bukv_probel[i] = (double)letters_with_space[i]/(double)fullstring.length();
    }
    cout << endl;
    cout << "������� ���� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        cout /*<< (char)(-32+i) << " "*/ << chastota_bukv_probel[i] << endl;
    }
    cout << endl;


    //������ ��� ��������
    //��� ��� ����� ��� � ���������, �� �� ������ ������� � ������� letters_with_space �� �� �������, � �� ������ ����������� ���� �������� ����������� ��������
    double chastota_bukv[32];
    int total2 = total1 - letters_with_space[32];
    for (int i = 0; i <= 31; i++)
    {
        chastota_bukv[i] = (double)letters_with_space[i]/(double)(fullstring.length()-letters_with_space[32]);
    }
    cout << endl;
    cout << "������� ���� ��� ��������" << endl;
    for (int i = 0; i <= 31; i++)
    {
        cout /*<< (char)(-32+i) << " "*/ << chastota_bukv[i] << endl;
    }
    cout << endl;


    //������ ������� ��� �� �������, �� � �������������� ����
    //��� ������� �� ��� � �������� ��� ����� �������� � � ���������� �������, ������� ����� ��� ���� �����������
    /*cout << "������� ���� � �������� �������������" << endl;
    double max1=0.0;
    int max1_index=0;
    cout << (char)(32) << " " << chastota_bukv_probel[32] << endl;
    for (int j = 0; j<=31; j++)
    {
        for (int i = 0; i <= 31; i++)
        {
            if (chastota_bukv_probel[i] >= max1)
            {
                max1 = chastota_bukv_probel[i];
                max1_index = i;
            }
        }
        cout << (char)(-32+max1_index) << " " << max1 << endl;
        chastota_bukv_probel[max1_index]=-1.0;
        max1 = 0.0;
        max1_index = 0;
    }
    cout << endl;

    cout << "������� ���� ��� �������� �������������" << endl;
    double max2=0.0;
    int max2_index=0;
    for (int j = 0; j<=31; j++)
    {
        for (int i = 0; i <= 31; i++)
        {
            if (chastota_bukv[i] >= max2)
            {
                max2 = chastota_bukv[i];
                max2_index = i;
            }
        }
        cout << (char)(-32+max2_index) << " " << max2 << endl;
        chastota_bukv[max2_index]=-1.0;
        max2 = 0.0;
        max2_index = 0;
    }
    cout << endl;*/


    //������� ����������� �������
    int bigrams1_with_space [33*33];
    int total3 = 0;
    for (int i = 0; i <= 33*33-1; i++)
    {
        bigrams1_with_space[i] = 0;
    }
    for (int i = 0; i <= 32; i++)
    {
        int a = -32;
        if (i==32)
        {
            a=0; //��� ������
        }
        for (int j = 0; j <= 32; j++)
        {
            int b = -32;
            if (j==32)
            {
                b=0; //��� ������
            }
            for (int l = 0; l <= fullstring.length(); l++)
            {
                if (fullstring[l]==(char)(a+i))
                {
                    if (fullstring[l+1]==(char)(b+j))
                    {
                        bigrams1_with_space[33*i+j]=bigrams1_with_space[33*i+j]+1;
                        total3 = total3 + 1;
                    }
                }
            }
        }
    }
    cout << endl;

    /*cout << "����������� ������� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        int a = -32;
        if (i == 32)
        {
            a=0;
        }
        for (int j = 0; j <= 32; j++)
        {
            int b = -32;
            if (j == 32)
            {
                b = 0;
            }
            cout << (char)(a+i) << (char)(b+j) << " " << bigrams1_with_space[33*i+j] << endl;
        }
    }*/
    /*cout << "����� ������� � �������� " << total3 << endl;*/


    double chastota_bigram1_probel[33*33];
    for (int i = 0; i <= 32; i++)
    {
        for (int j = 0; j <= 32; j++)
        {
            chastota_bigram1_probel[33*i+j] = (double)bigrams1_with_space[33*i+j]/(double)total3;
        }
    }

    cout << "������� ������� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        /*cout << endl << char(-32+i) << endl;*/
        int a = -32;
        if (i == 32)
        {
            a=0;
        }
        for (int j = 0; j <= 32; j++)
        {
            int b = -32;
            if (j == 32)
            {
                b = 0;
            }
            cout << (char)(a+i) << (char)(b+j) << " " << chastota_bigram1_probel[33*i+j] << endl;
        }
    }
    cout << endl;


    // ������ ������� �������� ��� �����������, ���� ���� � ��������
    int bigrams2_with_space [33*33];
    int total4 = 0;
    for (int i = 0; i <= 33*33-1; i++)
    {
        bigrams2_with_space[i] = 0;
    }
    for (int i = 0; i <= 32; i++)
    {
        int a = -32;
        if (i==32)
        {
            a=0; //��� ������
        }
        for (int j = 0; j <= 32; j++)
        {
            int b = -32;
            if (j==32)
            {
                b=0; //��� ������
            }
            for (int k = 0; k <= fullstring.length(); k=k+2)
            {
                if (fullstring[k]==(char)(a+i))
                {
                    if (fullstring[k+1]==(char)(b+j))
                    {
                        bigrams2_with_space[33*i+j]=bigrams2_with_space[33*i+j]+1;
                        total4 = total4 + 1;
                    }
                }
            }
        }
    }
    cout << endl;

    /*cout << "����������� ������� ��� ����������� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        int a = -32;
        if (i == 32)
        {
            a=0;
        }
        for (int j = 0; j <= 32; j++)
        {
            int b = -32;
            if (j == 32)
            {
                b = 0;
            }
            cout << (char)(a+i) << (char)(b+j) << " " << bigrams2_with_space[33*i+j] << endl;
        }
    }
    cout << "����� ������� ��� ����������� � �������� " << total4 << endl;*/


    double chastota_bigram2_probel[33*33];
    for (int i = 0; i <= 32; i++)
    {
        for (int j = 0; j <= 32; j++)
        {
            chastota_bigram2_probel[33*i+j] = (double)bigrams2_with_space[33*i+j]/(double)(total4);
        }
    }

    cout << "������� ������� ��� ����������� � ��������" << endl;
    for (int i = 0; i <= 32; i++)
    {
        /*cout << endl << char(-32+i) << endl;*/
        int a = -32;
        if (i == 32)
        {
            a=0;
        }
        for (int j = 0; j <= 32; j++)
        {
            int b = -32;
            if (j == 32)
            {
                b = 0;
            }
            cout << (char)(a+i) << (char)(b+j) << " " << chastota_bigram2_probel[33*i+j] << endl;
        }
    }
    cout << endl;


    // ������ ����� ������ �������
    for (int i = 0; i <= fullstring.length(); i++)
    {
        if (fullstring[i]== ' ')
        {
            fullstring.erase(i,1);
        }
    }
    /*cout << endl << fullstring << endl;*/


    //�����e� ��������
    int bigrams1_without_space [32*32];
    int total5 = 0;
    for (int i = 0; i <= 32*32-1; i++)
    {
        bigrams1_without_space[i] = 0;
    }
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {

            for (int l = 0; l <= fullstring.length(); l++)
            {
                if (fullstring[l]==(char)(-32+i))
                {
                    if (fullstring[l+1]==(char)(-32+j))
                    {
                        bigrams1_without_space[32*i+j]=bigrams1_without_space[32*i+j]+1;
                        total5 = total5 + 1;
                    }
                }
            }
        }
    }
    cout << endl;

    /*cout << "����������� ������� ��� �������" << endl;
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {
            cout << (char)(-32+i) << (char)(-32+j) << " " << bigrams1_without_space[32*i+j] << endl;
        }
    }
    cout << "����� ������� ��� ������� " << total5 << endl;*/


    double chastota_bigram1_bes_probel[32*32];
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {
            chastota_bigram1_bes_probel[32*i+j] = (double)bigrams1_without_space[32*i+j]/(double)(total5);
        }
    }
    cout << endl;

    cout << "������� ������� ��� �������" << endl;
    for (int i = 0; i <= 31; i++)
    {
        /*cout << endl << char(-32+i) << endl;*/
        for (int j = 0; j <= 31; j++)
        {
            cout << (char)(-32+i) << (char)(-32+j) << " " << chastota_bigram1_bes_probel[32*i+j] << endl;
        }
    }
    cout << endl;

    //������ ��� �����������
    int bigrams2_without_space [32*32];
    int total6 = 0;
    for (int i = 0; i <= 32*32-1; i++)
    {
        bigrams2_without_space[i] = 0;
    }
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {

            for (int l = 0; l <= fullstring.length(); l=l+2)
            {
                if (fullstring[l]==(char)(-32+i))
                {
                    if (fullstring[l+1]==(char)(-32+j))
                    {
                        bigrams2_without_space[32*i+j]=bigrams2_without_space[32*i+j]+1;
                        total6 = total6 + 1;
                    }
                }
            }
        }
    }
    cout << endl;

    /*cout << "����������� ������� ��� ����������� ��� �������" << endl;
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {
            cout << (char)(-32+i) << (char)(-32+j) << " " << bigrams2_without_space[32*i+j] << endl;
        }
    }
    cout << "����� ������� ��� ����������� ��� ������� " << total6 << endl;*/


    double chastota_bigram2_bes_probel[32*32];
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {
            chastota_bigram2_bes_probel[32*i+j] = (double)bigrams2_without_space[32*i+j]/(double)(total6);
        }
    }
    cout << endl;

    cout << "������� ������� ��� ����������� ��� �������" << endl;
    for (int i = 0; i <= 31; i++)
    {
        /*cout << endl << char(-32+i) << endl;*/
        for (int j = 0; j <= 31; j++)
        {
            cout << (char)(-32+i) << (char)(-32+j) << " " << chastota_bigram2_bes_probel[32*i+j] << endl;
        }
    }
    cout << endl;

    cout << endl;
    cout << "���� � ��������: " << total1 << endl;
    cout << "���� ��� �������: " << total2 << endl;
    cout << "������� � ��������: " << total3 << endl;
    cout << "������� ��� �������: " << total5 << endl;
    cout << "������� ����� ���� � ��������: " << total4 << endl;
    cout << "������� ����� ���� ��� �������: " << total6 << endl;
    cout << endl;


    //������ ����� ������� ��������
    double entropy1 = 0;
    for (int i = 0; i <= 32; i ++)
    {
        if (chastota_bukv_probel[i] != 0)
        {
            entropy1 = entropy1 + (chastota_bukv_probel[i]*(log(chastota_bukv_probel[i])/log(2)));
        }
    }
    cout << endl << "�������� �������� � ��������: "<< (-1)*entropy1 << endl << "������������ ��������: " << log(33)/log(2);

    double entropy2 = 0;
    for (int i = 0; i <= 31; i ++)
    {
        if (chastota_bukv[i] != 0)
        {
            entropy2 = entropy2 + (chastota_bukv[i]*(log(chastota_bukv[i])/log(2)));
        }
    }
    cout << endl << "�������� �������� ��� �������: "<< (-1)*entropy2 << endl << "������������ ��������: " << log(32)/log(2);



    double entropy3 = 0;
    for (int i = 0; i <= 32; i++)
    {
        for (int j = 0; j <= 32; j++)
        {
            if (chastota_bigram1_probel[33*i+j] != 0)
            {
                entropy3 = entropy3 + (chastota_bigram1_probel[33*i+j]*(log(chastota_bigram1_probel[33*i+j])/log(2)));
            }
        }
    }
    cout << endl << "�������� ������� � ��������: "<< (-0.5)*entropy3 << endl << "������������ ��������: " << log(33*33)/log(2);

    double entropy4 = 0;
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {
            if (chastota_bigram1_bes_probel[32*i+j] != 0)
            {
                entropy4 = entropy4 + (chastota_bigram1_bes_probel[32*i+j]*(log(chastota_bigram1_bes_probel[32*i+j])/log(2)));
            }
        }
    }
    cout << endl << "�������� ������� ��� �������: "<< (-0.5)*entropy4 << endl << "������������ ��������: " << log(32*32)/log(2);

    double entropy5 = 0;
    for (int i = 0; i <= 32; i++)
    {
        for (int j = 0; j <= 32; j++)
        {
            if (chastota_bigram2_probel[33*i+j] != 0)
            {
                entropy5 = entropy5 + (chastota_bigram2_probel[33*i+j]*(log(chastota_bigram2_probel[33*i+j])/log(2)));
            }
        }
    }
    cout << endl << "�������� ������� ����� ���� � ��������: "<< (-0.5)*entropy5 << endl << "������������ ��������: " << log(33*33)/log(2);

    double entropy6 = 0;
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j <= 31; j++)
        {
            if (chastota_bigram2_bes_probel[32*i+j] != 0)
            {
                entropy6 = entropy6 + (chastota_bigram2_bes_probel[32*i+j]*(log(chastota_bigram2_bes_probel[32*i+j])/log(2)));
            }
        }
    }
    cout << endl << "�������� ������� ����� ���� ��� �������: "<< (-0.5)*entropy6 << endl << "������������ ��������: " << log(32*32)/log(2);


    //������� �����������
    double R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0, R6 = 0;
    cout << endl << endl << "R1 = " << 1-(-1)*entropy1/(log(33)/log(2));
    cout << endl << "R2 = " << 1-(-1)*entropy2/(log(32)/log(2));
    cout << endl << "R3 = " << 1-(-0.5)*entropy3/(log(33)/log(2));
    cout << endl << "R4 = " << 1-(-0.5)*entropy4/(log(32)/log(2));
    cout << endl << "R5 = " << 1-(-0.5)*entropy5/(log(33)/log(2));
    cout << endl << "R6 = " << 1-(-0.5)*entropy6/(log(32)/log(2));

    /*cout << endl << endl << 1-(1.7547)/(log(32)/log(2)) << " " << 1-(2.4529)/(log(32)/log(2));
    cout << endl << 1-(2.5119)/(log(32)/log(2)) << " " << 1-(3.093)/(log(32)/log(2));
    cout << endl << 1-(1.2676)/(log(32)/log(2)) << " " << 1-(2.0552)/(log(32)/log(2));*/


    return 0;
}
// � ��� ���� 32 ����� (��� �) � 33� ������
