// START.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "afxdialogex.h"
#include "oracle_homework5Dlg.h"
#include "aspect_all_h.h"
#include "START.h"
#include <string>
using namespace std;
// START 对话框

IMPLEMENT_DYNAMIC(START, CDialogEx)
int START::time = 0;
START::START(CWnd* pParent /*=NULL*/)
	: CDialogEx(START::IDD, pParent)
	, user_name(_T(""))
	, user_pwd(_T(""))
{

	this->time++;
}

START::~START()
{
}

void START::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, user_name);
	DDX_Text(pDX, IDC_EDIT2, user_pwd);
}


BEGIN_MESSAGE_MAP(START, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &START::OnBnClickedstart)
	ON_BN_CLICKED(IDC_BUTTON2, &START::OnBnClickedlogin)
	ON_WM_CTLCOLOR()
	ON_EN_CHANGE(IDC_EDIT1, &START::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &START::OnEnChangeEdit2)
END_MESSAGE_MAP()


// START 消息处理程序


void START::OnBnClickedstart()
{
	CDialog::EndDialog(0);
	// TODO:  在此添加控件通知处理程序代码
	this->isBnOk = true;
	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
	{
		AfxMessageBox(_T("not to connect mysql"));
		return ;
	}

	USES_CONVERSION;
	string s_name;
	string s_pwd;
	s_name = T2A (user_name);
	s_pwd = T2A(user_pwd);
	strcpy_s(str_start_name, s_name.size() + 1, s_name.c_str());
	strcpy_s(str_start_pwd, s_pwd.size() + 1, s_pwd.c_str());
	CString str;
	str.Format(_T("select userflag from user where username='%s' and userpassword='%s'"),user_name,user_pwd);
	string s_copy = T2A(str);
	mysql_query(&mysql,s_copy.c_str() );
	MYSQL_RES * result = mysql_store_result(&mysql);
	int filedcount = mysql_num_fields(result);
	MYSQL_ROW row = NULL;
	MYSQL_FIELD *filed = NULL;
	bool judges = false;
	while (row = mysql_fetch_row(result))
	{
		judges = true;
		string s = row[0];
		
		judge = atol(row[0]);

	}

	if (!judges)
	{
		MessageBox(_T("Error username or password"));
		this->isBnOk = false;
	}
	else
	{
		if (time != 1)
		{
			if (judge == 1)//系统管理员 1
			{
				Coracle_homework5Dlg start;
				start.DoModal();
			}
			if (judge == 2)//教材管理员  2
			{
				librarian start;
				start.DoModal();
			}
			if (judge == 3) ///出版社管理员  3
			{
				pressadmin start;
				start.DoModal();
			}
			if (judge == 4)//教材征订管理员 4
			{
				orderadmin start;
				start.DoModal();
			}
			if (judge == 5)//教师  5
			{
				teacher start;
				start.DoModal();
			}
		}
	
	}
	///
	
	//CDialogEx::OnCancel();
}


void START::OnBnClickedlogin()
{
	// TODO:  在此添加控件通知处理程序代码
	//CDialog::EndDialog(0);
	//Login L;
	//L.DoModal();
	CDialogEx::OnCancel();
	
}


HBRUSH START::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  在此更改 DC 的任何特性

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	if (pWnd->GetDlgCtrlID() == IDC_STATIC)
	{
		pDC->SetTextColor(RGB(0, 0, 0));
	}
	return hbr;
}


void START::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT1, user_name);
}


void START::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT2, user_pwd);

}


BOOL START::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CFont m_font;
	m_font.CreatePointFont(180, _T("楷体"), NULL);
	GetDlgItem(IDC_STATIC)->SetFont(&m_font);
	GetDlgItem(IDC_STATIC2)->SetFont(&m_font);
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}
