#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
#include <ctime>

//��ȡ����ԱȨ������
#include <tchar.h>
#include <shellapi.h>

//�����֣�cin����ȥ��
#include <limits>

#define S(i) Sleep(i)
#define cls system("cls");
#define ei else if
using namespace std;
HWND hwnd = GetConsoleWindow();
void SetColorAndBackground(int ForgC, int BackC) {//�����ֵ���ɫ
//1������2���̣�3���࣬4��죬5���ϣ�6��ƣ�7�Ұף�Ĭ�ϣ���8���
//9ǳ����10ǳ�̣�11ǳ�࣬12ǳ�죬13ǳ�ϣ�14ǳ�ƣ�15��ɫ��0��ɫ
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void gotoxy(long long x, long long y) {
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
struct CMDset {
	void setfont(int size) {//���塢��С����ϸ
		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof cfi;
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;
		cfi.dwFontSize.Y = size;//���������С
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_BOLD;//�����ϸ FW_BOLD,ԭʼΪFW_NORMAL
		wcscpy_s(cfi.FaceName, L"Consolas");//�������壬�����ǿ���̨���е�
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_FONT_INFO consoleCurrentFont;
		GetCurrentConsoleFont(handle, FALSE, &consoleCurrentFont);
	}
} cmdset;

struct Start {
	void powerOn() {
		ShowWindow(hwnd, SW_MAXIMIZE);
		cmdset.setfont(30);
		cout << "\n  ";
		SetColorAndBackground(4, 12);
		cout << "W";
		SetColorAndBackground(6, 14);
		cout << "H";
		SetColorAndBackground(2, 10);
		cout << "S";
		SetColorAndBackground(1, 9);
		cout << "T";
		SetColorAndBackground(13, 5);
		cout << "U";
		SetColorAndBackground(0, 0);
		cout << " ";
		SetColorAndBackground(15, 8);
		cout << "Studio";
		SetColorAndBackground(7, 0);
		S(5000);
		cls
		gotoxy(13, 10);
		cout << "S";
		Sleep(1000);
		cout << "\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS  ";
		S(100);
		cout << "\b\b\b\bS \b";
		S(100);
		cout << "e";
		S(100);
		cout << "e";
		S(100);
		cout << "w";
		S(100);
		cout << "o";
		S(100);
		cout << " ";
		S(100);
		cout << " ";
		S(100);
		cout << "K";
		S(100);
		cout << "i";
		S(100);
		cout << "l";
		S(100);
		cout << "l";
		S(100);
		cout << "e";
		S(100);
		cout << "r";
		S(4000);
		system("cls");
		cmdset.setfont(16);
		return;
	}
} start;

void about() {
	//��ʼ��
	gotoxy(0, 3);
	SetColorAndBackground(7, 0);
	for (int i = 0; i < 15; i++) {
		cout << "                              \n";
	}
	gotoxy(0, 3);
	//--------
	cout << "\nPowered by\n\n ";
	S(500);
	SetColorAndBackground(4, 12);
	cout << " W ";
	SetColorAndBackground(6, 14);
	cout << " H ";
	SetColorAndBackground(2, 10);
	cout << " S ";
	SetColorAndBackground(1, 9);
	cout << " T ";
	SetColorAndBackground(13, 5);
	cout << " U ";
	SetColorAndBackground(0, 0);
	cout << "   ";
	SetColorAndBackground(15, 8);
	cout << " S t u d i o ";
	SetColorAndBackground(7, 0);
	S(500);
	cout << "\n";
	//д��汾��
	/*CreateDirectory("./info", NULL );
	ofstream info("./info/info.txt");
	info << "Seewo Killer 0.3.0.2" << endl;
	info << "�汾����000300002" << endl;
	info << "ע�⣺�벻Ҫ�ڴ˴�������Ҫ��Ϣ����Ϊ���ļ��ᱻSlytherinOS���ǣ�";
	info.close();*/
	cout << "\nSeewo Killer 1.1\n";
	cout << "\n�汾����OPO 1\n";
	cout << "\nϣ�ֿ���\n";
	cout << "\n׿Ȼ�����۹���������\n";
	cout << "��b+�س�����\n";
	string ans;
	while (true) {
		cin >> ans;
		if (ans == "b") {
			return;
		}
		if (ans == "zhuoran") {
			cout << "   =====       =====       =====        //\n";
			S(10);
			cout << " //     \\\\    ||    \\\\   //     \\\\    / ||\n";
			S(10);
			cout << " ||     ||    ||    ||   ||     ||      ||\n";
			S(10);
			cout << " ||     ||    ||    //   ||     ||      ||\n";
			S(10);
			cout << " ||     ||    ||====     ||     ||      ||\n";
			S(10);
			cout << " ||     ||    ||         ||     ||      ||\n";
			S(10);
			cout << " ||     ||    ||         ||     ||      ||\n";
			S(10);
			cout << " \\\\     //    ||         \\\\     //      ||\n";
			S(10);
			cout << "   =====      ||           =====     ========\n";
			S(10);
			system("pause");
		}
	}
}

BOOL IsUserAnAdmin() {
	BOOL bResult = FALSE;
	SID_IDENTIFIER_AUTHORITY sia = SECURITY_NT_AUTHORITY;
	PSID pSid = NULL;
	if (AllocateAndInitializeSid(&sia, 2,
	                             SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS,
	                             0, 0, 0, 0, 0, 0, &pSid)) {
		// ��鵱ǰ�̻߳���̵ķ��������Ƿ������SID
		if (!CheckTokenMembership(NULL, pSid, &bResult)) {
			// ���CheckTokenMembershipʧ�ܣ�����ܲ��ǹ���Ա����Ҳ������Ϊ����ԭ��
			bResult = FALSE;
		}
		// �ͷ�SID
		FreeSid(pSid);
	} else {
		// ���SID����ʧ�ܣ���Ĭ�ϲ��ǹ���Ա
		bResult = FALSE;
	}
	return bResult;
}
bool getadmin() {
	// ��ȡ��ǰ���������·��
	TCHAR szPath[MAX_PATH];
	GetModuleFileName(NULL, szPath, MAX_PATH);

	// ��鵱ǰ�û��Ƿ��ǹ���Ա
	if (!IsUserAnAdmin()) {
		// ������ǹ���Ա�����Թ���ԱȨ�����е�ǰ����
		SHELLEXECUTEINFO sei = {0};
		sei.cbSize = sizeof(SHELLEXECUTEINFO);
		sei.lpFile = szPath;
		sei.nShow = SW_SHOWNORMAL;
		sei.lpVerb = _T("runas"); // ָ������Ϊ�Թ���Ա�������

		ShellExecuteEx(&sei);
		return false;
	} else {
		// ����Ѿ��ǹ���Ա������������
		cout << "�ѻ�ù���ԱȨ��\n";
		return true;
	}
}

void taskkill(bool KillSeewoService) {
	cout << "���ڽ������̣���¼��\n";
	cout << "TASKKILL /F /IM EasiRecorder.exe\n";
	system("TASKKILL /F /IM EasiRecorder.exe");
	if (KillSeewoService == true) {
		cout << "���ڽ������̣�ϣ�ֹܼ�\n";
		cout << "TASKKILL /F /IM SeewoServiceAssistant.exe\n";
		system("TASKKILL /F /IM SeewoServiceAssistant.exe");
		cout << "TASKKILL /F /IM SeewoAbility.exe\n";
		system("TASKKILL /F /IM SeewoAbility.exe");
		cout << "TASKKILL /F /IM SeewoCore.exe\n";
		system("TASKKILL /F /IM SeewoCore.exe");
	}
	return;
}

void uninstall() {
	cls
	cout << "����ж��EasiRecorder\n";
	system("\"C:\\Program Files (x86)\\Seewo\\EasiRecorder\\Uninstall.exe\"");
	cout << "����ж��Easicare\n";
	system("\"C:\\Program Files (x86)\\Seewo\\Easicare\\Uninstall.exe\"");
	cout << "����ж��EasiAgent\n";
	system("\"C:\\Program Files (x86)\\Seewo\\EasiAgent\\Uninstall.exe\"");
	return;
}

struct GAME {
	void numberdamn() {
		cls
		cmdset.setfont(300);
		cout << "��";
		S(100);
		cout << "��";
		S(100);
		cout << "ը";
		S(150);
		gotoxy(0, 0);
		cls
		S(100);
		cmdset.setfont(500);
		SetColorAndBackground(6, 4);
		cout << "DAMN";
		SetColorAndBackground(7, 0);
		S(700);
		cls
		cmdset.setfont(30);
		system("title ����ըdamn");
		long long min = 0, max = 100, ans = 0, input = 0;
		cout << "�����뷶Χ\n";
		while (true) {
			cout << "���:";
			cin >> max;
			if (max < 2 or cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "���ֵ������ڻ����2,���������\n";
			} else {
				break;
			}
		}
		while (true) {
			cout << "��С:";
			cin >> min;
			if (min < 0 or min >= max - 1 or cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "��Сֵ������ڻ����0,����Сֵ����С�����ֵ-1,���������\n";
			} else {
				break;
			}
		}
		cout << "������ɣ�����ȡ��...\n";
		for (ans = rand() % (max - min); ans == 0; ans = rand() % (max - min)) {
		}
		ans = ans + min;
		S(500);
		cout << "ȡ����ɣ���ʼ��Ϸ��\n";
		S(500);
		cls
		while (true) {
			if (max - min == 1) {
				cout << "�������������\n";
				cout << min << "~" << max << "\n";
				break;
			}
			if (max - min == 2) {
				SetColorAndBackground(6, 4);
				cout << "DAMN!!!!!";
				SetColorAndBackground(0, 7);
				cout << "\n��һ�������ˣ�\nը����:" << ans << "\n";
				break;
			}
			cout << min << "~" << max << "\n";
			if (max - min == 3) {
				SetColorAndBackground(6, 4);
				cout << "��ѡһ!!!!!";
				SetColorAndBackground(7, 0);
			}
			cin >> input;
			while (input <= min or input >= max or cin.fail()/*cin���ִ���*/) {
				cout << "�������\n";
				cin.clear();//�����������
				cin.ignore(numeric_limits<streamsize>::max(), '\n');//������������
				cout << min << "~" << max << "\n";
				cin >> input;
			}
			if (input == ans) {
				SetColorAndBackground(6, 4);
				cout << "DAMN!!!!!";
				SetColorAndBackground(0, 7);
				cout << "\n�����ˣ�\nը����:" << ans << "\n";
				if (max - ans == ans - min) {
					cout << "��λ��С��";
				}
				break;
			} else {
				if (input < ans) {
					min = input;
				} else {
					max = input;
				}
			}
		}
		system("pause");
		SetColorAndBackground(7, 0);
		cmdset.setfont(16);
	}
} game;

int main() {
	system("title ���ڳ�ʼ��");
	srand((unsigned)time(NULL));
	system("title ���ڼ�����Ա");
	if (IsUserAnAdmin() == false) {
		if (getadmin() == false) {
			return 0;
		}
	}
	system("title Seewo Killer Starting");
	start.powerOn();
	cls
	//S(10);
	//if (MessageBox(NULL, _T("����ﰥ��"), _T("����"), MB_OKCANCEL) == 2) {
	//	return 0;
	//}//����1ȷ����2ȡ��
	//��ȡ����·��
	char path[MAX_PATH];
	GetModuleFileNameA(NULL, path, MAX_PATH);
	string executable_path = path;
	size_t position = executable_path.find_last_of('\\');
	executable_path = executable_path.substr(0, position);
	string xwbbpath = executable_path;
	//ѡ�����
	while (true) {
		cls
		system("title ϣ�ֿ���");
		int choose;
		SetColorAndBackground(7, 0);
		cout << "1:�˳�  2:ѭ��������  3:һ��ж�ز���Ҫ�����  4:����ⶳ";
		SetColorAndBackground(6, 5);
		cout << "Beta";
		SetColorAndBackground(7, 0);
		cout << "  5:����ϰ�Ʋ�ģʽ  6:��ȡ����ԱȨ��  7:С��Ϸ  8:����";
		cout << "\n��ѡ��";
		cin >> choose;
		switch (choose) {
			case 1:
				return 0;
			case 2: {
				system("title ѭ��������");
				while (true) {
					taskkill(true);
					cls
				}
			}
			case 3: {
				system("title ж��");
				uninstall();
				break;
			}
			case 4: {
				system("title ���㻹ԭ");
				string password = "seewofreeze";
				string input;
				for (;;) {
					cout << "\n���������룺";
					cin >> input;
					if (input == password) {
						break;
					} else {
						cout << "�������";
						continue;
					}
				}
				string unfreezepath = executable_path + "\\!SeewoFreezeUI.bat";
				STARTUPINFO si = { sizeof(si) };//0
				PROCESS_INFORMATION pi;
				LPTSTR szCommandLine = _tcsdup(TEXT(unfreezepath.c_str()));//��Ȩ�޵Ķ����Դ�
				BOOL fSuccess = CreateProcess(NULL, szCommandLine, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi);//��������
				DWORD dwExitCode;
				if (fSuccess) { //����������ͣ���ȴ��ӽ�����ֹ
					CloseHandle(pi.hThread);
					//��ͣ�����̵�ִ�У�ֱ��child��ֹ���ô���ſ��Լ�������
					WaitForSingleObject(pi.hProcess, INFINITE);
					CloseHandle(pi.hProcess);
				}
				system("pause");
				break;
			}
			/*case 5: {
				string xwbbsetpath = xwbbpath + "\\set.bat";
				STARTUPINFO si = { sizeof(si) };//0
				PROCESS_INFORMATION pi;
				LPTSTR szCommandLine = _tcsdup(TEXT(xwbbsetpath.c_str()));//��Ȩ�޵Ķ����Դ�
				BOOL fSuccess = CreateProcess(NULL, szCommandLine, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi);//��������
				DWORD dwExitCode;
				if (fSuccess) { //����������ͣ���ȴ��ӽ�����ֹ
					CloseHandle(pi.hThread);
					//��ͣ�����̵�ִ�У�ֱ��child��ֹ���ô���ſ��Լ�������
					WaitForSingleObject(pi.hProcess, INFINITE);
					CloseHandle(pi.hProcess);
				}
				break;
			}
			case 6: {
				string xwbbsetpath = xwbbpath + "\\restore.bat";
				STARTUPINFO si = { sizeof(si) };//0
				PROCESS_INFORMATION pi;
				LPTSTR szCommandLine = _tcsdup(TEXT(xwbbsetpath.c_str()));//��Ȩ�޵Ķ����Դ�
				BOOL fSuccess = CreateProcess(NULL, szCommandLine, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi);//��������
				DWORD dwExitCode;
				if (fSuccess) { //����������ͣ���ȴ��ӽ�����ֹ
					CloseHandle(pi.hThread);
					//��ͣ�����̵�ִ�У�ֱ��child��ֹ���ô���ſ��Լ�������
					WaitForSingleObject(pi.hProcess, INFINITE);
					CloseHandle(pi.hProcess);
				}
				break;
			}*/
			case 5: {
				system("title �Ʋ�����ϰ");
				while (true) {
					taskkill(true);
					cout << "���ڽ������̣�����\n";
					cout << "TASKKILL /F /IM SystemSettings.exe\n";
					system("TASKKILL /F /IM SystemSettings.exe");
					cout << "���ڽ������̣��������\n";
					cout << "TASKKILL /F /FI \"WINDOWTITLE eq ��������\"\n";
					system("taskkill /f /fi \"WINDOWTITLE eq ��������\"");
					cout<<"���ڽ������̣�Edge\n";
					cout << "TASKKILL /F /IM msedge.exe\n";
					system("TASKKILL /F /IM msedge.exe");
					cls
				}
			}
			case 6: {
				if (IsUserAnAdmin() == false) {
					if (getadmin() == false) {
						return 0;
					}
				} else {
					cout << "�Ѿ���ù���ԱȨ�ޣ�\n";
				}
				system("pause");
				break;
			}
			case 7: {
				system("title ����Ϸ");
				int ans;
				cout << "1:����ը��  2:����\n";
				cout << "��ѡ����Ϸ:";
				cin >> ans;
				switch (ans) {
					case 1: {
						game.numberdamn();
						break;
					}
					case 2:
						break;
					default: {
						if (cin.fail()) {
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "\n������������Ƿ���������ĸ";
						}
					}
				}
				break;
			}
			case 8: {
				system("title ����");
				about();
				break;
			}
			default: {
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "\n������������Ƿ���������ĸ";
				}
				break;
			}
		}
	}
	return 0;
}
