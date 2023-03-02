#ifndef __DBL_NODE_H__
#define __DBL_NODE_H__
#include<cstddef>

// 双向链表结点类
template <class ElemType>
struct DblNode
{
	// 数据成员:
	ElemType data;				// 数据域
	DblNode<ElemType>* prior;	// 指向前驱结点的指针域
	DblNode<ElemType>* next;	// 指向后继结点的指针域

// 构造函数:
	DblNode();						// 无数据的构造函数
	DblNode(ElemType item,
		DblNode<ElemType>* priorlink = NULL,
		DblNode<ElemType>* nextlink = NULL);// 已知数据域和指针域建立结构
};


// 双向链表结点类的实现部分

template<class ElemType>
DblNode<ElemType>::DblNode()
// 操作结果：构造指针域为空的结点
{
	prior = NULL;
	next = NULL;
}

template<class ElemType>
DblNode<ElemType>::DblNode(ElemType item,
	DblNode<ElemType>* priorlink,
	DblNode<ElemType>* nextlink)
	// 操作结果：构造一个数据域为item、prior指针域为priorlink和next指针域为nextlink的结点
{
	data = item;
	prior = priorlink;
	next = nextlink;
}

struct Student
{
	string id;
	string name;
	char gender;
	int sclass;
	long telephone;
	Student(string Id = "21122867", string Name = "human", char Gender = 'M', int Sclass = 10, long Telephone = 12345678912);
	friend ostream& operator<<(ostream& out, const Student& a);
	friend istream& operator>>(istream& in, Student& a);
	bool operator>(const Student& b);
	bool operator!=(const Student& b);
};

Student::Student(string Id, string Name, char Gender, int Sclass, long Telephone) :id(Id), name(Name), gender(Gender), sclass(Sclass), telephone(Telephone)
{

}

ostream& operator<<(ostream& out, const Student& a)
{
	out << " 学号：" << setw(8) << a.id << " 姓名：" << setw(4) << a.name << " 性别：" << setw(2) << a.gender << " 班级：" << setw(2) << a.sclass << " 电话：" << setw(11) << a.telephone << endl;
	return out;
}

istream& operator>>(istream& in, Student& a)
{
	in >> a.id >> a.name >> a.gender >> a.sclass >> a.telephone;
	return in;
}

bool Student::operator>(const Student& b)
{
	return id > b.id;
}

bool Student::operator!=(const Student& b)
{
	return id != b.id;
}

#endif

