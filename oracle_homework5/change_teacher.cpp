// change_teacher.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_teacher.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"

// change_teacher 对话框

IMPLEMENT_DYNAMIC(change_teacher, CDialogEx)

change_teacher::change_teacher(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_teacher::IDD, pParent)
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
{

}

change_teacher::~change_teacher()
{
}

void change_teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
	DDX_Text(pDX, IDC_EDIT3, infor_3);
	DDX_Text(pDX, IDC_EDIT4, infor_4);
	DDX_Text(pDX, IDC_EDIT6, infor_5);
}


BEGIN_MESSAGE_MAP(change_teacher, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_teacher::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &change_teacher::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &change_teacher::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT6, &change_teacher::OnEnChangeEdit6)
	ON_BN_CLICKED(IDOK, &change_teacher::OnBnClickedOk)
END_MESSAGE_MAP()


// change_teacher 消息处理程序




void change_teacher::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void change_teacher::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void change_teacher::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void change_teacher::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT6, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void change_teacher::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;

	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}
	USES_CONVERSION;
	this->isbnok = 1;
	if (infor_3 != infor_31)//修改的是用户名
	{
		CString s;
		s += "update user set username='";
		s += infor_3;
		s += "' where username='";
		s += infor_1;
		s += "'";
		infor_1 = infor_3;//将用户名进行修改
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_2 != infor_21)//修改的是userturename
	{
		CString s;
		s += "update user set userturename='";
		s += infor_2;
		s += "' where username='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	
	if (infor_4 != infor_41)//修改密码

	{
		CString s;
		s += "update user set userpassword='";
		s += infor_4;
		s += "' where username='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_5 != infor_51)//userphone
	{
		CString s;
		s += "update user set userphone='";
		s += infor_5;
		s += "' where username='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	MessageBox(_T("修改成功"));
	CDialogEx::OnOK();
}


BOOL change_teacher::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	change_teacher_start run;
		run.DoModal();
	if (run.isbnok)
	{

		infor_1 = run.GetInfor();
		if (infor_1 == "")
		{
			AfxMessageBox(_T("请输入要修改的职工号"));
			CDialogEx::OnCancel();
			return false;
		}
		else
		{
			mysql_library_init(NULL, 0, 0);
			MYSQL mysql;
			mysql_init(&mysql);
			mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
			if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
			{
				AfxMessageBox(_T("not to connect mysql"));
				return false;
			}
			CString str_run;
			str_run += "select * from user where username='";
			str_run += infor_1;
			str_run += "' and userflag=5";
			USES_CONVERSION;
			string s_turn;
			s_turn = T2A(str_run);
			mysql_query(&mysql, s_turn.c_str());          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			if (result->row_count == 0)
			{
				AfxMessageBox(_T("请输入正确的职工号"));
				CDialogEx::OnCancel();
				return false;
			}
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;
			row = mysql_fetch_row(result);
			infor_21 = row[0];
			infor_31 = row[1];
			infor_41 = row[2];
			infor_51 = row[3];

			SetDlgItemText(IDC_EDIT2, infor_21);
			SetDlgItemText(IDC_EDIT3, infor_31);
			SetDlgItemText(IDC_EDIT4, infor_41);
			SetDlgItemText(IDC_EDIT6, infor_51);

		}
	}
	else
	{
		CDialogEx::OnCancel();
		return false;
	}

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}
