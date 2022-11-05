//여긴 내 놀이터다.
//난 자는게 좋아서 슬립도 좋아한다.

#include <iostream>
#include <Windows.h>
#include <memory>

#define lendl endl << endl;
#define sleep Sleep(1200);
#define msleep Sleep(2300);
#define lsleep Sleep(3000);
#define test cout << "TestEND" << endl;

using namespace std;

string name;



void welcome() {

	string opendoor;
	string shouldIopendooragain;

	msleep;
	cout << "주변은 어둠으로 뒤덮여있다." << lendl;
	msleep;
	cout << "눈 앞에 낯이 많이 익은 문이 있다." << lendl;
	sleep;
	cout << "열어야할까?" << lendl;
	msleep;


	cout << ">> 연다 == 1" << endl;
	cout << ">> 열지않는다 == 2" << endl;


	cin >> opendoor;
	if (opendoor == "1") {
		sleep;
		cout << "(문은 신기하게 부드럽게 열렸다.)" << lendl;
		msleep;
		cout << "(한 남성이 우두커니 서 있다.)" << lendl;
		msleep;
		cout << "(그는 나랑 눈이 마주치더니, 눈 깜짝할 새에 내 눈 앞에 서 있었다.)" << lendl;
		lsleep;
		cout << "(그는 나를 골똘히 쳐다보고 있었다. '나는 위압감이 이런 것이구나' 라 느꼈다.)" << lendl;
		lsleep;
		msleep;
		cout << "(침묵도 잠시, 그가 입을 열었다)" << lendl;
	}
	else if (opendoor == "2") {
		sleep;
		cout << "(문을 열지 않고 돌아가기로 결정했다.)" << lendl;
		msleep;
		cout << "(몸을 돌려 돌아가던 찰나, 멀리서 누군가 다급히 외치는 소리가 들렸다)" << lendl;
		msleep;
		cout << "(그러자 갑자기, 정신ㅇ-)" << lendl;
		for (int stun = 0; stun < 30; stun++) {
			Sleep(20);
			cout << "....." << endl;
		}
		lsleep;
		cout << lendl;
		cout << "(정신을 차려보니,)" << lendl;
		msleep;
		cout << "(다시 문 앞이다.)" << lendl;
		msleep;
		cout << "(이 문을 열지 않고 돌아가면 또 무슨 짓을 당하진 않을까 있지도 않은 머리를 굴려본다.)" << lendl;
		lsleep;
		cout << "(이 문을 열어야할까.)" << lendl;
		msleep;


		cout << ">> 연다 == 1" << endl;
		cout << ">> 열지않는다 == 2" << endl;


		cin >> shouldIopendooragain;
		if (shouldIopendooragain == "1") {
			sleep;
			cout << "(문은 신기하게 부드럽게 열렸다.)" << lendl;
			msleep;
			cout << "(한 남성이 우두커니 서 있다.)" << lendl;
			msleep;
			cout << "(그는 나랑 눈이 마주치더니, 눈 깜짝할 새에 내 눈 앞에 서 있었다.)" << lendl;
			lsleep;
			cout << "(그는 나를 골똘히 쳐다보고 있었다. '나는 위압감이 이런 것이구나' 라 느꼈다.)" << lendl;
			lsleep;
			msleep;
			cout << "(침묵도 잠시, 그가 입을 열었다)" << lendl;
		}
		else if (shouldIopendooragain == "2") {
			msleep;
			cout << "(음.. 역시)" << lendl;
			sleep;
			cout << "(역시 기분 나쁘다. 이번에도 문을 열지 않기로 하고 기다리기로 했다.)" << lendl;
			lsleep;
			cout << "(멀리서 누군가 짜증내는 소리가 들린다.)" << lendl;
			msleep;
			cout << "(어쩌라고, 난 여기서 기다릴거ㄷ-)" << lendl;
			Sleep(500);
			cout << "\"더는 못 기다려주겠네요.\"" << lendl;
			sleep;
			cout << "\"예?\"" << lendl;
			msleep;
			cout << "(문이 갑작스레 열리더니, 사람의 손이 날 거세게 잡아 끌었다.)" << lendl;
			lsleep;
			cout << "(갑자기 일어난 상황에 긴장감을 느낀다.)" << lendl;
			msleep;
			lsleep;
			cout << "(침묵도 잠시, 그가 입을 열었다)" << lendl;
		}
	}
}

void introduce() {
	msleep;
	cout << "\"댁, 이름은?\"" << lendl;
	lsleep;
	cout << "(중후한 목소리에 잠깐 눌렸다 정신을 차린 나는 그에 응답했다.)" << lendl;
	lsleep;
	cout << "\"제 이름은..\"" << lendl;
	sleep;
	cin >> name;
	cout << endl;
	cout << "\" \'"+ name + "\' " + "... 이미 알고 있었습니다.\"" << lendl;
	lsleep;
	cout << "\"여긴 무한한 공간." + name + " 님은 쉽게 상상속 이라 생각하시면 되겠습니다..\"" << lendl;
	lsleep;
	cout << "\"" + name + " 님은 이 문 너머의 세계에서 예상외의 일을 많이 접하실겁니다..\"" << lendl;
	lsleep;
	cout << "\"혹시.. 궁금한 것이나 모르는게 있으면 말해주시지요..\"" << lendl;
	msleep;
	cout << "(그는 눈 앞에 놓인 거대한 문을 열 준비를 하고 있다.)" << lendl;
	msleep;
	cout << lendl;
}

void startingAsking() {
	string startAsking;
	int askedone = 1;
	int askedtwo = 1;
	int askedthree = 1;
	int askedfour = 1;
	int asked = 4;
	
	for (int i = 1; i < asked; i++) {


		cout << ">> 여긴 어디죠? == 1" << endl;
		cout << ">> 당신은 누구시죠? == 2" << endl;
		cout << ">> 문 너머엔 무엇이 있죠? == 3" << endl;
		cout << ">> (아무 것도 묻지 않는다.) == 4" << endl;
		msleep;
		cout << endl;

		cin >> startAsking;

		if (startAsking == "1") {
			if (askedone == 2) {
				msleep;
				cout << "\"그 질문은 이미 답해드렸습니다..\"" << lendl;
			}
			else if (askedone != 2) {
				msleep;
				cout << "\"여긴 어디죠?\"" << lendl;
				msleep;
				cout << "\"......\"" << lendl;
				lsleep;
				cout << "\"아까 말씀드렸듯이.. 여긴 앞으로 이동할 세계의 다리 역할을 하는 곳일뿐..\"" << lendl;
				lsleep;
				cout << "\"그 이상.. 그 이하도 없습니다..\"" << lendl;
				askedone++;
				msleep;
			}
			
		}
		if (startAsking == "2") {
			if (askedtwo == 2) {
				msleep;
				cout << "\"그 질문은 이미 답해드렸습니다..\"" << lendl;
			}
			else if (askedtwo != 2) {
				msleep;
				cout << "\"당신은 누구시죠?\"" << lendl;
				lsleep;
				cout << "\"저는 이쪽으로 놀러온 사람들을 배웅해주는 사람 입니다..\"" << lendl;
				msleep;
				cout << "\"저는 편하게 '가이드' 라 불러주시지요.\"" << lendl;
				askedtwo++;
				msleep;
			}
		}
		if (startAsking == "3") {
			if (askedthree == 2) {
				msleep;
				cout << "\"그 질문은 이미 답해드렸습니다..\"" << lendl;
			}
			else if (askedthree != 2) {
				msleep;
				cout << "\"문 너머엔 무엇이 있죠?\"" << lendl;
				msleep;
				cout << "\"저도 모릅니다.\"" << lendl;
				lsleep;
				cout << "(?)" << lendl;
				msleep;
				cout << "\"모든것은 당신의 생각에 달렸습니다..\"" << lendl;
				askedthree++;
				msleep;
			}
		}
		if (startAsking == "4") {
			msleep;
			cout << "(아무것도 묻지 않고 문이 열리는 것을 기다린다.)" << lendl;
			lsleep;
			break;
		}
	}
	msleep;
	cout << "(거대한 문이 톱니가 굴러가는 소리를 내며 열린다,)" << lendl;
	lsleep;
	cout << "(쿠구구구구구..)" << lendl;
	msleep;
	cout << "\"대화는 여기까지.\"" << lendl;
	msleep;
	cout << "\"나중에 뵙죠, " + name + " 님.\"" << lendl;
	lsleep;
}


int main()
{
	welcome();
	introduce();
	startingAsking();
	test;
}
