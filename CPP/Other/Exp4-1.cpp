#include <iostream>
using namespace std;

void get_score(int &students, double stuscore[30][4]) //��ȡѧ���ɼ���Ϣ
{
    cout << "����ѧ��������(С�ڵ���30)->";
    cin >> students;
    double MT = 0.0, EN = 0.0, PH = 0.0;
    for (int i = 0; i < students; i++)
    {
        cout << "�����" << i + 1 << "��ѧ���ĸ��Ʒ���(��ѧ��Ӣ�����)->";
        cin >> MT >> EN >> PH;
        stuscore[i][0] = (double)(i + 1);
        stuscore[i][1] = MT;
        stuscore[i][2] = EN;
        stuscore[i][3] = PH;
    }
}

void sum_and_average(double sumAndaverage[30][3], double stuscore[30][4], int &students) //����ѧ���ֺܷ�ƽ����
{
    for (int i = 0; i < students; i++)
    {
        sumAndaverage[i][0] = stuscore[i][0];
        sumAndaverage[i][1] = stuscore[i][1] + stuscore[i][2] + stuscore[i][3];
        sumAndaverage[i][2] = sumAndaverage[i][1] / 3;
    }
}

void sum_rank(double sumAndaverage[30][3], double stuscore[30][4], int &students) //ð���������ܷ�����ѧ������
{
    for (int i = students; i >= 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            if (sumAndaverage[j][1] > sumAndaverage[j + 1][1])
            {
                double tempID = sumAndaverage[j][0];
                double tempSum = sumAndaverage[j][1];
                double tempAve = sumAndaverage[j][2];
                sumAndaverage[j][0] = sumAndaverage[j + 1][0];
                sumAndaverage[j][1] = sumAndaverage[j + 1][1];
                sumAndaverage[j][2] = sumAndaverage[j + 1][2];
                sumAndaverage[j + 1][0] = tempID;
                sumAndaverage[j + 1][1] = tempSum;
                sumAndaverage[j + 1][2] = tempAve;
            }
        }
    }
}

void print_rank(double sumAndaverage[30][3], double stuscore[30][4], int &students) //��ӡ�ɼ���Ϣ
{
    cout << "����"
         << "\t"
         << "ѧ��"
         << "\t"
         << "��ѧ"
         << "\t"
         << "Ӣ��"
         << "\t"
         << "����"
         << "\t"
         << "�ܷ�"
         << "\t"
         << "ƽ����" << endl;
    for (int i = 0; i < students; i++)
    {
        cout << i + 1 << "\t" << sumAndaverage[students - 1 - i][0] << "\t";
        for (int j = 0; j < students; j++)
        {
            if (stuscore[students - 1 - j][0] == sumAndaverage[students - 1 - i][0])
            {
                cout << stuscore[students - 1 - j][1]
                     << "\t"
                     << stuscore[students - 1 - j][2]
                     << "\t"
                     << stuscore[students - 1 - j][3]
                     << "\t";
            }
        }
        cout << sumAndaverage[students - 1 - i][1] << "\t" << sumAndaverage[students - 1 - i][2] << endl;
    }
}

void check_student(double sumAndaverage[30][3], double stuscore[30][4], int students) //�鿴ѧ���ɼ���Ϣ
{
    int ID = 0;
    cout << "����ѧ��ѧ��->";
    cin >> ID;
    if (ID > students)
    {
        cout << "��ѧ�������ڡ�" << endl;
    }
    else
    {
        for (int i = 0; i < students; i++)
        {
            if (ID == sumAndaverage[i][0])
            {
                cout << "ѧ��:" << ID << endl;
                cout << "����:" << students - i << endl;
                for (int j = 0; j < students; j++)
                {
                    if (stuscore[j][0] == sumAndaverage[i][0])
                    {
                        cout << "��ѧ:" << stuscore[j][1] << endl;
                        cout << "Ӣ��:" << stuscore[j][2] << endl;
                        cout << "����:" << stuscore[j][3] << endl;
                        cout << "�ܷ�:" << sumAndaverage[i][1] << endl;
                        cout << "ƽ����:" << sumAndaverage[i][2] << endl;
                        ;
                        break;
                    }
                }
                break;
            }
        }
    }
}
int main()
{
    int students = 0;
    double stuscore[30][4] = {0};      //ѧ�� ��ѧ Ӣ�� ����
    double sumAndaverage[30][3] = {0}; // ѧ�� �ܷ� ƽ����
    get_score(students, stuscore);
    sum_and_average(sumAndaverage, stuscore, students);
    sum_rank(sumAndaverage, stuscore, students);
    print_rank(sumAndaverage, stuscore, students);
    check_student(sumAndaverage, stuscore, students);
}