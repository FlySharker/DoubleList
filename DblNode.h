#ifndef __DBL_NODE_H__
#define __DBL_NODE_H__
#include<cstddef>

// ˫����������
template <class ElemType>
struct DblNode
{
	// ���ݳ�Ա:
	ElemType data;				// ������
	DblNode<ElemType>* prior;	// ָ��ǰ������ָ����
	DblNode<ElemType>* next;	// ָ���̽���ָ����

// ���캯��:
	DblNode();						// �����ݵĹ��캯��
	DblNode(ElemType item,
		DblNode<ElemType>* priorlink = NULL,
		DblNode<ElemType>* nextlink = NULL);// ��֪�������ָ�������ṹ
};


// ˫�����������ʵ�ֲ���

template<class ElemType>
DblNode<ElemType>::DblNode()
// �������������ָ����Ϊ�յĽ��
{
	prior = NULL;
	next = NULL;
}

template<class ElemType>
DblNode<ElemType>::DblNode(ElemType item,
	DblNode<ElemType>* priorlink,
	DblNode<ElemType>* nextlink)
	// �������������һ��������Ϊitem��priorָ����Ϊpriorlink��nextָ����Ϊnextlink�Ľ��
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
	out << " ѧ�ţ�" << setw(8) << a.id << " ������" << setw(4) << a.name << " �Ա�" << setw(2) << a.gender << " �༶��" << setw(2) << a.sclass << " �绰��" << setw(11) << a.telephone << endl;
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

