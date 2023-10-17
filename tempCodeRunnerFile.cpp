#include<iostream>
#include<string>
using namespace std;

//ͨ��¼��󴢴�����
#define Max 1000 //�������


//����һ����ϵ�˽ṹ��
struct Contacts
{
	string cName;		//����
	int cGender = 1;	//�Ա�
	int cAge = 0;		//����
	string cPhone;		//�绰����
	string cAdd;		//סַ
};

//����һ��ͨ��¼�ṹ��
struct AddressBooks
{
	Contacts contactsArry[Max];	//ͨ��¼��ϵ����Ϣ����
	int aCount = 0;					//ͨ��¼����Ա�ĸ���
};

//��ʾ���˵�
void showMenu()
{
	cout << "********************************" << endl;
	cout << "***** ͨ �� ¼ �� �� ϵ ͳ *****" << endl;
	cout << "********************************" << endl;
	cout << "*****    1��������ϵ��     *****" << endl;
	cout << "*****    2����ʾ��ϵ��     *****" << endl;
	cout << "*****    3��ɾ����ϵ��     *****" << endl;
	cout << "*****    4��������ϵ��     *****" << endl;
	cout << "*****    5���޸���ϵ��     *****" << endl;
	cout << "*****    6�������ϵ��     *****" << endl;
	cout << "*****    0���˳�ͨ��¼     *****" << endl;
	cout << "********************************" << endl;
	cout << "***********Version1.0***********" << endl;
	cout << "********************************" << endl;
}

//������ϵ��
void AddContacts(AddressBooks* abs)
{
	//�ж��Ƿ���Ա
	if (abs->aCount == Max)
	{
		cout << "ͨ��¼�������޷����ӣ�" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->contactsArry[abs->aCount].cName = name;

		//�Ա�
		int gender;
		cout << "�������Ա� " << endl;
		cout << "1 ---- �� " << endl;
		cout << "2 ---- Ů " << endl;

		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->contactsArry[abs->aCount].cGender = gender;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		int age;
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->contactsArry[abs->aCount].cAge = age;

		//�绰
		string phone;
		cout << "������绰�� " << endl;
		cin >> phone;
		abs->contactsArry[abs->aCount].cPhone = phone;

		//��ַ
		string add;
		cout << "�������ַ�� " << endl;
		cin >> add;
		abs->contactsArry[abs->aCount].cAdd = add;

		//������һ
		abs->aCount += 1;
		cout << "���ӳɹ���" << endl;
		system("pause");
		//����
		system("cls");
	}

}

//��ʾ��ϵ��
void ShowContacts(AddressBooks* abs)
{
	if (abs->aCount == 0)
	{
		cout << "����ϵ�ˣ���������һ�°�!" << endl;
	}
	else
	{
		//��ʾ������ϵ��
		for (int i = 0; i < abs->aCount; i++)
		{
			cout << "������" << abs->contactsArry[i].cName << " �Ա�" << (abs->contactsArry[i].cGender != 2 ? "��" : "Ů") << " ���䣺" << abs->contactsArry[i].cAge << " �绰��" << abs->contactsArry[i].cPhone << " סַ��" << abs->contactsArry[i].cAdd << endl;
		}
	}
	system("pause");
	system("cls");
}

//���ĳ���Ƿ����
int IsExit(AddressBooks* abs, string name)
{
	for (int i = 0; i < abs->aCount; i++)
	{
		if (abs->contactsArry[i].cName == name)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void DeleteContacts(AddressBooks* abs)
{
	//��¼�û����������
	string name;
	cout << "��������Ҫɾ�����û�������" << endl;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int index = IsExit(abs, name);
	//����
	if (index > -1)
	{
		for (int i = index; i < abs->aCount - 1; i++)
		{
			//��ǰ��λ����
			Contacts temp = abs->contactsArry[i];
			abs->contactsArry[i] = abs->contactsArry[i + 1];
			abs->contactsArry[i + 1] = temp;
		}
		//����һ����¼
		abs->aCount--;
		cout << "ɾ���ɹ���" << endl;
	}
	else//������
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void GetContacts(AddressBooks* abs)
{
	//��¼�û����������
	string name;
	cout << "��������Ҫ���ҵ��û�����" << endl;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int index = IsExit(abs, name);
	if (index > -1)
	{
		//����
		cout << "������" << abs->contactsArry[index].cName << endl;
		cout << "�Ա�" << abs->contactsArry[index].cGender << endl;
		cout << "���䣺" << abs->contactsArry[index].cAge << endl;
		cout << "�绰��" << abs->contactsArry[index].cPhone << endl;
		cout << "סַ��" << abs->contactsArry[index].cAdd << endl;
	}
	else
	{
		//������
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");

}

//�޸���ϵ��
void ModefyContacts(AddressBooks* abs)
{
	//��¼�û����������
	string name;
	cout << "��������Ҫ�޸ĵ��û�����" << endl;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int index = IsExit(abs, name);
	if (index > -1)
	{
		//����
		//����
		string name;
		cout << "�������޸ĺ�������� " << endl;
		cin >> name;
		abs->contactsArry[index].cName = name;

		//�Ա�
		int gender;
		cout << "�������޸ĺ���Ա� " << endl;
		cout << "1 ---- �� " << endl;
		cout << "2 ---- Ů " << endl;

		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->contactsArry[index].cGender = gender;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		int age;
		cout << "�������޸ĺ�����䣺 " << endl;
		cin >> age;
		abs->contactsArry[index].cAge = age;

		//�绰
		string phone;
		cout << "�������޸ĺ�ĵ绰�� " << endl;
		cin >> phone;
		abs->contactsArry[index].cPhone = phone;

		//��ַ
		string add;
		cout << "�������޸ĺ�ĵ�ַ�� " << endl;
		cin >> add;
		abs->contactsArry[index].cAdd = add;
		cout << "�޸ĳɹ�!" << endl;
	}
	else
	{
		//������
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ��
void ClearContacts(AddressBooks* abs)
{
	string choose = "N";
	cout << "��ȷ��Ҫ���ͨ��¼��(Y ȷ��/N ȡ��)" << endl;

	while (true)
	{
		cin >> choose;
		if (choose == "Y" || choose == "N")
		{
			break;
		}
		else
		{
			cout << "������������������!!" << endl;
		}
	}

	if (choose == "Y")
	{
		abs->aCount = 0;
		cout << "��ճɹ�!!" << endl;
	}
	else
	{
		cout << "������ȡ��!!" << endl;
	}
	system("pause");
	system("cls");
}


int main()
{
	//��¼�û��������Ϣ
	int select = 0;
	//����һ��ͨ��¼�ṹ��
	AddressBooks abs;
	//���õ�ǰ����Ϊ��
	abs.aCount = 0;

	while (true)
	{
		//��ʾ���˵�
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1://1��������ϵ��
			AddContacts(&abs);	//��ַ����
			break;
		case 2://2����ʾ��ϵ��
			ShowContacts(&abs); //��ַ����
			break;
		case 3://3��ɾ����ϵ��
			DeleteContacts(&abs);
			break;
		case 4://4��������ϵ��
			GetContacts(&abs);
			break;
		case 5://5���޸���ϵ��
			ModefyContacts(&abs);
			break;
		case 6://6�������ϵ��
			ClearContacts(&abs);
			break;
		case 0://0���˳�ͨ��¼
			cout << "��ӭ�´�ʹ�ã��ټ���" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}


	system("pause");//�����������
	return 0;
}