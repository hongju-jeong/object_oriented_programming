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
		cout << "1. 추가" << endl;
		cout << "2. 제거(숫자로)" << endl;
		cout << "3. 제거(인덱스로)" << endl;
		cout << "4. 파일로 저장(언제든지가능)" << endl;
		cout << "5. 파일에서 불러오기(언제든지가능, 기존존재하면 기존껀 파일로 저장)" << endl;
		cout << "0. 종료" << endl;
		cout << "-----------------------------" << endl;
		cout << "입력 ::";
		cin >> put;
		if (put == 1) {
			int a ;

			cout << "추가할 숫자를 입력하세요 : ";
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
			cout << "제거할(숫자로) 숫자를 입력하세요 : ";
			cin >> b;
			if (del->info == b) {
				list = list->next;
			}
			else {
				while (del->info != b) {
					del2 = del;
					del = del->next;
					if (del == nullptr) {
						cout << "없는 숫자에오" << endl;
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
			cout << "제거할(인덱스로) 위치를 입력해주세요 : ";
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