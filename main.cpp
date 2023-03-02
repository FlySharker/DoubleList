#include "Assistance.h"			// ��������������
#include "DblLinkList.h"		// ˫��ѭ��������
using namespace std;

int main()
{
	char c = '1';
	DblLinkList<Student> la, lb;
	Student e;
	int i;
	int w;
	while (c != '0') {
		cout << endl << "1. ����˫������.";
		cout << endl << "2. ��ʾ˫������.";
		cout << endl << "3. ȡָ��Ԫ��ֵ.";
		cout << endl << "4. ����Ԫ��ֵ.";
		cout << endl << "5. ɾ��Ԫ��.";
		cout << endl << "6. ����Ԫ��.";
		cout << endl << "7. Ԫ�ض�λ.";
		cout << endl << "8. ������ֵ���.";
		cout << endl << "0. �˳�";
		cout << endl << "ѡ����(0~7):";
		cin >> c;
		switch (c)
		{
		case '1':
			la.Clear();
			cout << endl << "Ҫ���뼸��ѧ����Ϣ:";
			cin >> w;
			cout << "ע�⣺��ѧ�� ���� �Ա� �༶ �绰 ����" << endl;
			while (w--) {
				cout << "ѧ����Ϣ��";
				cin >> e;
				la.InsertElem(e);
			}
			break;
		case '2':
			la.Traverse(Write<Student>);
			break;
		case '3':
			cout << endl << "����ѧ��λ��:";
			cin >> i;
			if (la.GetElem(i, e) == RANGE_ERROR)
				cout << "ѧ��������." << endl;
			else
				cout << "ѧ��:" << e << endl;
			break;
		case '4':
			cout << endl << "����λ��:";
			cin >> i;
			cout << endl << "ע�⣺��ѧ�� ���� �Ա� �༶ �绰 ����" << endl;
			cin >> e;
			if (la.SetElem(i, e) == RANGE_ERROR)
				cout << "λ�÷�Χ��." << endl;
			else
				cout << "���óɹ�." << endl;
			break;
		case '5':
			cout << endl << "����λ��:";
			cin >> i;
			if (la.DeleteElem(i, e) == RANGE_ERROR)
				cout << "λ�÷�Χ��." << endl;
			else
				cout << "��ɾ��ѧ��ֵ:" << e << endl;
			break;
		case '6':
			cout << endl << "����λ��:";
			cin >> i;
			cout << endl << "ע�⣺��ѧ�� ���� �Ա� �༶ �绰 ����" << endl;
			cin >> e;
			if (la.InsertElem(e) == RANGE_ERROR)
				cout << "λ�÷�Χ��." << endl;
			else
				cout << "�ɹ�:" << e << endl;
			break;
		case '7':
			cout << endl << "ע�⣺��ѧ�� ���� �Ա� �༶ �绰 ����" << endl;
			cin >> e;
			i = la.LocateElem(e);
			if (i == 0)
				cout << "ѧ��������." << endl;
			else
				cout << "ѧ��" << e.name << "�����Ϊ��" << i << endl;
			break;
		case '8':
			la.SWAP();
			la.Traverse(Write<Student>);
			break;
		
		}
	}

	system("PAUSE");
	return 0;
}