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

void setfont(int size) {//���塢��С����ϸ
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = size;//���������С
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_BOLD;//�����ϸ FW_BOLD,ԭʼΪFW_NORMAL
	wcscpy_s(cfi.FaceName, L"System");//�������壬�����ǿ���̨���е�
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFO consoleCurrentFont;
	GetCurrentConsoleFont(handle, FALSE, &consoleCurrentFont);
}

void poweron() {
	ShowWindow(hwnd, SW_MAXIMIZE);
	setfont(30);
	S(500);
	SetColorAndBackground(0, 4);
	for (long long i = 0; i < 4; i++) {
		for (long long j = 0; j < 150; j++) {
			cout << " ";
		}
		S(10);
		cout << "\n";
	}
	SetColorAndBackground(0, 6);
	for (long long i = 0; i < 150; i++) {
		cout << " ";
	}
	S(10);
	cout << "\n";
//��2��
	for (int i = 0; i < 3; i++) {//W-1
		SetColorAndBackground(0, 6);
		cout << "   ";
		SetColorAndBackground(0, 0);
		cout << "  ";
	}
	SetColorAndBackground(0, 6);
	cout << "   ";
	SetColorAndBackground(0, 0);//H-1a
	cout << "  ";
	SetColorAndBackground(0, 6);//H-1mid
	cout << "       ";
	SetColorAndBackground(0, 0);//H-1b
	cout << "  ";
	SetColorAndBackground(0, 6);
	cout << "      ";
	SetColorAndBackground(0, 0);//S-1
	cout << "         ";
	SetColorAndBackground(0, 6);
	cout << "    ";
	SetColorAndBackground(0, 0);//T-1
	cout << "            ";
	SetColorAndBackground(0, 6);
	cout << "    ";
	SetColorAndBackground(0, 0);//U-1a
	cout << "  ";
	SetColorAndBackground(0, 6);
	cout << "       ";
	SetColorAndBackground(0, 0);//U-1b
	cout << "  ";
	SetColorAndBackground(0, 6);
	cout << "                    ";
	S(10);
	cout << "\n";
//��3,4��
	for (int a = 0; a < 2; a++) {
		for (int i = 0; i < 3; i++) {//W-2
			SetColorAndBackground(0, 6);
			cout << "   ";
			SetColorAndBackground(0, 0);
			cout << "  ";
		}
		SetColorAndBackground(6, 6);
		cout << "   ";
		SetColorAndBackground(0, 0);//H-2a
		cout << "  ";
		SetColorAndBackground(6, 6);//H-2mid
		cout << "       ";
		SetColorAndBackground(0, 0);//H-2b
		cout << "  ";
		SetColorAndBackground(6, 6);
		cout << "    ";
		SetColorAndBackground(0, 0); //S-2
		cout << "  ";
		SetColorAndBackground(6, 6);
		cout << "                  ";
		SetColorAndBackground(0, 0); //T-2
		cout << "  ";
		SetColorAndBackground(6, 6);
		cout << "         ";
		SetColorAndBackground(0, 0); //U-2a
		cout << "  ";
		SetColorAndBackground(6, 6);
		cout << "       ";
		SetColorAndBackground(0, 0); //U-2b
		cout << "  ";
		SetColorAndBackground(6, 6);
		cout << "                    ";
		S(10);
		cout << "\n";
	}
//��5��
	for (int i = 0; i < 3; i++) {//W-4
		SetColorAndBackground(0, 6);
		cout << "   ";
		SetColorAndBackground(0, 0);
		cout << "  ";
	}
	SetColorAndBackground(0, 6);
	cout << "   ";
	SetColorAndBackground(0, 0); //H-4
	cout << "           ";
	SetColorAndBackground(0, 6);
	cout << "      ";
	SetColorAndBackground(0, 0); //S-4
	cout << "       ";
	SetColorAndBackground(0, 6);
	cout << "           ";
	SetColorAndBackground(0, 0); //T-4
	cout << "  ";
	SetColorAndBackground(0, 6);
	cout << "         ";
	SetColorAndBackground(0, 0); //U-4a
	cout << "  ";
	SetColorAndBackground(0, 6);
	cout << "       ";
	SetColorAndBackground(0, 0); //U-4b
	cout << "  ";
	SetColorAndBackground(0, 6);
	cout << "                    ";
	S(10);
	cout << "\n";
//��1��
	for (int i = 0; i < 3; i++) {//W-5
		SetColorAndBackground(0, 2);
		cout << "   ";
		SetColorAndBackground(0, 0);
		cout << "  ";
	}
	SetColorAndBackground(0, 2);
	cout << "   ";
	SetColorAndBackground(0, 0);//H-5a
	cout << "  ";
	SetColorAndBackground(0, 2);//H-5mid
	cout << "       ";
	SetColorAndBackground(0, 0);//H-5b
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "             ";
	SetColorAndBackground(0, 0); //S-5
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "         ";
	SetColorAndBackground(0, 0); //T-5
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "         ";
	SetColorAndBackground(0, 0); //U-5a
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "       ";
	SetColorAndBackground(0, 0); //U-5b
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "                    ";
	S(10);
	cout << "\n";
//��2��
	for (int i = 0; i < 3; i++) {//W-6
		SetColorAndBackground(0, 2);
		cout << "   ";
		SetColorAndBackground(0, 0);
		cout << "  ";
	}
	SetColorAndBackground(0, 2);
	cout << "   ";
	SetColorAndBackground(0, 0);//H-6a
	cout << "  ";
	SetColorAndBackground(0, 2);//H-6mid
	cout << "       ";
	SetColorAndBackground(0, 0);//H-6b
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "             ";
	SetColorAndBackground(0, 0); //S-6
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "         ";
	SetColorAndBackground(0, 0); //T-6
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "         ";
	SetColorAndBackground(0, 0); //U-6a
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "       ";
	SetColorAndBackground(0, 0); //U-6b
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "                    ";
	S(10);
	cout << "\n";
//��3��
	SetColorAndBackground(0, 2);
	cout << "     ";
	SetColorAndBackground(0, 0);
	cout << "   ";
	SetColorAndBackground(0, 2);
	cout << "  ";
	SetColorAndBackground(0, 0);
	cout << "   ";
	SetColorAndBackground(0, 2);
	cout << "     ";
	SetColorAndBackground(0, 0);//H-7a
	cout << "  ";
	SetColorAndBackground(0, 2);//H-7mid
	cout << "       ";
	SetColorAndBackground(0, 0);//H-7b
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "    ";
	SetColorAndBackground(0, 0); //S-7
	cout << "         ";
	SetColorAndBackground(0, 2);
	cout << "           ";
	SetColorAndBackground(0, 0); //T-7
	cout << "  ";
	SetColorAndBackground(0, 2);
	cout << "           ";
	SetColorAndBackground(0, 0); //U-7a
	cout << "       ";
	SetColorAndBackground(0, 2);
	cout << "                      ";
	S(10);
	cout << "\n";

	SetColorAndBackground(0, 2);
	for (long long i = 0; i < 2; i++) {
		for (long long j = 0; j < 150; j++) {
			cout << " ";
		}
		S(10);
		cout << "\n";
	}
	SetColorAndBackground(0, 1);
	for(long long i=0;i<31;i++){
		cout<<" ";
	}
	SetColorAndBackground(0,7);
	cout<<" SEEWO  KILLER ";
	SetColorAndBackground(0,1);
	for(long long i=0;i<100;i++){
		cout<<" ";
	}
	SetColorAndBackground(0, 1);
	for (long long i = 0; i < 4; i++) {
		for (long long j = 0; j < 150; j++) {
			cout << " ";
		}
		S(10);
		cout << "\n";
	}
	SetColorAndBackground(0, 5);
	for (long long i = 0; i < 5; i++) {
		for (long long j = 0; j < 150; j++) {
			cout << " ";
		}
		S(10);
		cout << "\n";
	}
	SetColorAndBackground(7,0);
	gotoxy(0,0);
	S(1000);
	setfont(30);
	return;
}

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
	cout << "\nSeewo Killer 1.2\n";
	cout << "\n�汾����  ����\n";
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
		setfont(300);
		cout << "��";
		S(100);
		cout << "��";
		S(100);
		cout << "ը";
		S(150);
		gotoxy(0, 0);
		cls
		S(100);
		setfont(500);
		SetColorAndBackground(6, 4);
		cout << "DAMN";
		SetColorAndBackground(7, 0);
		S(700);
		cls
		setfont(30);
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
		setfont(30);
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
	poweron();
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
		cout << "1:�˳�  2:ѭ��������  3:һ��ж�ز���Ҫ�����  4:����ⶳ\n5:����ϰ�Ʋ�ģʽ  6:��ȡ����ԱȨ��  7:һ��������(Beta)  8:С��Ϸ  9:����";
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
				bool back = false;
				string password = "seewofreeze";
				string input;
				for (;;) {
					cout << "\n����������(����0����)��";
					cin >> input;
					if (input == password) {
						break;
					} else {
						if (input == "0") {
							back = true;
							break;
						} else {
							cout << "�������";
						}
					}
				}
				if (back == true) {
					break;
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
					cout << "���ڽ������̣�Edge\n";
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
				SetColorAndBackground(4,6);
				cout<<"���棺�������������ϿΣ�\n";
				SetColorAndBackground(0,7);
				cout<<"ÿ100������Ļһ�Σ��뽫����ƶ�������λ��\n";
				system("pause");
				long long i=0;
				while (true) {
					S(100000);
					cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b"<<i;
					POINT cur_pos;
					GetCursorPos(&cur_pos);
					mouse_event(MOUSEEVENTF_LEFTDOWN, cur_pos.x, cur_pos.y, 0, 0);
					mouse_event(MOUSEEVENTF_LEFTUP, cur_pos.x, cur_pos.y, 0, 0);
					i++;
				}
			}
			case 8: {
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
			case 9: {
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
