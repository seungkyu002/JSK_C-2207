//#include <iostream>
//#include <string>
//using namespace std;
//
//class Coffee {
//private: // �ۿ��� ���� �ȵǼ�
//	string order; // �ֹ����� �޴� �̸� ex. �ƾ�
//	/**** �����ð��� ���� ���� shot ***/
//	int shot = 3; // �� ����
//public:
//	Coffee(string o); // ������ : setOrder�� ��� �ϴ� ���� ����
//	~Coffee(); // �Ҹ���
//	void setOrder(string o); // �ֹ� �޾Ƽ� �޴� �̸� ����
//	string getOrder(); // �޴� �̸� ��ȯ
//	int getShot(); // �� ���� ��ȯ
//};
//
//Coffee::Coffee(string o) { // ������
//	order = o;
//}
//
///**** C++ ���������� �е��� �Ʒ� ������ ���� �� ���ּ��� ****/
//Coffee::Coffee(string o, int s) // �̰��� �� �⺻ ������!
//				// https://ebebeb111.tistory.com/17
//	: order(o), shot(s)
//{
//
//}
//
///**** �Ҹ��� ****/
//Coffee::~Coffee() {
//	cout << order << " �ֹ� ó���� �Ϸ�Ǿ����ϴ�.";
//}
//
//string Coffee::getOrder() {
//	return order;
//}
//
//void Coffee::setOrder(string o) {
//	order = o;
//}
//
///**** �� ���� ��ȯ ****/
//int Coffee::getShot() {
//	return shot;
//}
//
//int main() {
//	string name;
//	cout << "� Ŀ�Ǹ� �ֹ��Ͻðھ��?";
//	getline(cin, name); // name ������ �Է°��� ��
//	// �Է� : ex. �Ƹ޸�ī��
//
//	string temp;
//	cout << "���̽��� �帱��� ������ �帱���?";
//	getline(cin, temp);
//	// �Է� : ex. ���̽�
//
//	/**** �� ���� �Է� ****/
//	int shotNum;
//	cout << "���� � �־�帱���?";
//	cin >> shotNum; // cin�� ���Ͱ� �� ����
//	cin.ignore(); // �� ���� �� ���Ͱ� �н��� ignore
//
//	Coffee orderedCoffee(temp + name); // ��ü ����
//	//orderedCoffee.setOrder(temp + name); // ���̽��Ƹ޸�ī��
//
//	cout << "�ֹ��Ͻ� " << orderedCoffee2.getShot() << "�� "
//		<< orderedCoffee2.getOrder() << "���Խ��ϴ�." << endl;
//	// ��� : �ֹ��Ͻ� 3�� ���̽��Ƹ޸�ī�� ���Խ��ϴ�.
//
//	//orderedCoffee.~Coffee(); // �Ҹ��� - �����Ϸ��� �˾Ƽ� ��ȯ�� �Լ�
//}