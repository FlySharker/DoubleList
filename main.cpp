#include "Assistance.h"			// 辅助程序软件包
#include "DblLinkList.h"		// 双向循环链表类
using namespace std;

int main()
{
	char c = '1';
	DblLinkList<Student> la, lb;
	Student e;
	int i;
	int w;
	while (c != '0') {
		cout << endl << "1. 生成双向链表.";
		cout << endl << "2. 显示双向链表.";
		cout << endl << "3. 取指定元素值.";
		cout << endl << "4. 设置元素值.";
		cout << endl << "5. 删除元素.";
		cout << endl << "6. 插入元素.";
		cout << endl << "7. 元素定位.";
		cout << endl << "8. 交换最值结点.";
		cout << endl << "0. 退出";
		cout << endl << "选择功能(0~7):";
		cin >> c;
		switch (c)
		{
		case '1':
			la.Clear();
			cout << endl << "要输入几个学生信息:";
			cin >> w;
			cout << "注意：按学号 姓名 性别 班级 电话 输入" << endl;
			while (w--) {
				cout << "学生信息：";
				cin >> e;
				la.InsertElem(e);
			}
			break;
		case '2':
			la.Traverse(Write<Student>);
			break;
		case '3':
			cout << endl << "输入学生位置:";
			cin >> i;
			if (la.GetElem(i, e) == RANGE_ERROR)
				cout << "学生不存在." << endl;
			else
				cout << "学生:" << e << endl;
			break;
		case '4':
			cout << endl << "输入位置:";
			cin >> i;
			cout << endl << "注意：按学号 姓名 性别 班级 电话 输入" << endl;
			cin >> e;
			if (la.SetElem(i, e) == RANGE_ERROR)
				cout << "位置范围错." << endl;
			else
				cout << "设置成功." << endl;
			break;
		case '5':
			cout << endl << "输入位置:";
			cin >> i;
			if (la.DeleteElem(i, e) == RANGE_ERROR)
				cout << "位置范围错." << endl;
			else
				cout << "被删除学生值:" << e << endl;
			break;
		case '6':
			cout << endl << "输入位置:";
			cin >> i;
			cout << endl << "注意：按学号 姓名 性别 班级 电话 输入" << endl;
			cin >> e;
			if (la.InsertElem(e) == RANGE_ERROR)
				cout << "位置范围错." << endl;
			else
				cout << "成功:" << e << endl;
			break;
		case '7':
			cout << endl << "注意：按学号 姓名 性别 班级 电话 输入" << endl;
			cin >> e;
			i = la.LocateElem(e);
			if (i == 0)
				cout << "学生不存在." << endl;
			else
				cout << "学生" << e.name << "的序号为：" << i << endl;
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
