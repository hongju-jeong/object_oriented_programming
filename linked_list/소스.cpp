#include <iostream>
#include <fstream>
using namespace std;

struct Node
{
	int info;
	Node* next = nullptr;
};
int main() {
	int put = 9;
	Node* list = nullptr;
	Node* step;

	/*step = list;
	cout << step->info << endl;
	step = step->next;
	cout << step->info << endl;
	step = step->next;
	cout << step->info << endl;
	step = step->next;
	if (step == nullptr)
	end;*/
	while (put != 0) {
		
		step = list;
		if (step != nullptr) {
			while (step->next != nullptr) {
				cout << step->info << " -> ";
				step = step->next;
			}
			cout << step->info << endl;
		}
		

		cout << "-----------------------------" << endl;
		cout << "1. �߰�" << endl;
		cout << "2. ����(���ڷ�)" << endl;
		cout << "3. ����(�ε�����)" << endl;
		cout << "4. ���Ϸ� ����(������������)" << endl;
		cout << "5. ���Ͽ��� �ҷ�����(������������, ���������ϸ� ������ ���Ϸ� ����)" << endl;
		cout << "0. ����" << endl;
		cout << "-----------------------------" << endl;
		cout << "�Է� ::";
		cin >> put;
		if (put == 1) {
			int a ;

			cout << "�߰��� ���ڸ� �Է��ϼ��� : ";
			cin >> a;

			if (list == nullptr) {
				list = new Node;
				list->info = a;
				step = list;
			}
			else
			{
				step->next = new Node;
				step->next->info = a;
				step = step->next;
			}

		}
		else if (put == 2) {
			Node* del = list;
			Node* del2 = nullptr;
			int b;
			cout << "������(���ڷ�) ���ڸ� �Է��ϼ��� : ";
			cin >> b;
			if (del->info == b) {
				list = list->next;
			}
			else {
				while (del->info != b) {
					del2 = del;
					del = del->next;
					if (del == nullptr) {
						cout << "���� ���ڿ���" << endl;
						continue;
					}
				}
				del2->next = del->next;
				delete del;
			}
		}
		else if (put == 3) {
			Node* del3;
			Node* del4 = nullptr;
			del3 = list;
			int c;
			cout << "������(�ε�����) ��ġ�� �Է����ּ��� : ";
			cin >> c;
			if(c == 0){
				list = list->next;
			}
			else {
				for (int i = 0; i < c; i++) {
					del4 = del3;
					del3 = del3->next;
				}
				del4->next = del3->next;
				delete del3;
			}
		}
		else if (put == 4) {
			ofstream outFile("output.txt");
			Node* temp;
			temp = list;
			if (temp != nullptr) {
				while (temp != nullptr) {
					outFile << temp->info;
					if(temp->next != nullptr)
						outFile << endl;
					temp = temp->next;
				}
			}
			outFile.close();
		}
		else if (put == 5) {
			int val;
			Node* temp1;
			temp1 = list;
			ifstream inFile("output.txt");
			while (list != nullptr){
				list = list->next;
				delete temp1;
				temp1 = list;
			}

	
			while (!inFile.eof()) {
				inFile >> val;
				if (list == nullptr) {
					list = new Node;
					list->info = val;
					temp1 = list;
				}
				else {
					temp1->next = new Node;
					temp1->next->info = val;
					temp1 = temp1->next;
				}

			}
			inFile.close();
		}
		else if (put == 0) {
			break;
		}
	}



	return 0;
}