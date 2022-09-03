//여긴 내 놀이터다.
//난 자는게 좋아서 슬립도 좋아한다.

#include <iostream>
#include <Windows.h>
#include <iostream>
#include <memory>

#define lendl endl << endl;
#define sleep Sleep(1200);
#define msleep Sleep(2300);
#define lsleep Sleep(3000);
#define test cout << "TestEND" << endl;

using namespace std;

string name;
string opendoor;
string shouldIopendooragain;

void welcome() {
	msleep;
	cout << "주변은 어둠으로 뒤덮여있다." << lendl;
	msleep;
	cout << "눈 앞에 낯이 많이 익은 문이 있다." << lendl;
	sleep;
	cout << "열어야할까?" << lendl;
	msleep;


	cout << ">> 연다" << endl;
	cout << ">> 열지않는다" << endl;


	cin >> opendoor;
	if (opendoor == "연다") {
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
	else if (opendoor == "열지않는다") {
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


		cout << ">> 연다" << endl;
		cout << ">> 열지않는다" << endl;


		cin >> shouldIopendooragain;
		if (shouldIopendooragain == "연다") {
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
		else if (shouldIopendooragain == "열지않는다") {
			msleep;
			cout << "(음.. 역시)" << lendl;
			sleep;
			cout << "(실험 정신인진 모르겠으나, 이번에도 문을 열지 않기로 하고 기다리기로 했다.)" << lendl;
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

}


int main()
{
	welcome();
}
