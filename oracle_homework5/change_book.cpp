// change_book.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_book.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"

// change_book 对话框

IMPLEMENT_DYNAMIC(change_book, CDialogEx)

change_book::change_book(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_book::IDD, pParent)
	
	, infor_2(_T(""))
	, infor_3(_T(""))
	, infor_4(_T(""))
	, infor_5(_T(""))
	, infor_6(_T(""))
	, infor_7(_T(""))
	, infor_8(_T(""))
{

}

change_book::~change_book()
{
}

void change_book::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_EDIT10, infor_2);
	DDX_Text(pDX, IDC_EDIT11, infor_3);
	DDX_Text(pDX, IDC_EDIT12, infor_4);
	DDX_Text(pDX, IDC_EDIT4, infor_5);
	DDX_Text(pDX, IDC_EDIT6, infor_6);
	DDX_Text(pDX, IDC_EDIT7, infor_7);
	DDX_Text(pDX, IDC_EDIT8, infor_8);
}


BEGIN_MESSAGE_MAP(change_book, CDialogEx)
	
	ON_BN_CLICKED(IDOK, &change_book::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT10, &change_book::OnEnChangeEdit10)
	ON_EN_CHANGE(IDC_EDIT11, &change_book::OnEnChangeEdit11)
	ON_EN_CHANGE(IDC_EDIT12, &change_book::OnEnChangeEdit12)
	ON_EN_CHANGE(IDC_EDIT4, &change_book::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT6, &change_book::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &change_book::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &change_book::OnEnChangeEdit8)
END_MESSAGE_MAP()


// change_book 消息处理程序





void change_book::OnBnClickedOk()
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
	if (infor_2 != infor_21)//修改的是isbn
	{
		CString s;
		s += "update book set isbn='";
		s += infor_2;
		s += "' where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		infor_1 = infor_2;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_3 != infor_31)//修改的是教材名称
	{
		CString s;
		s += "update book set Bname='";
		s += infor_3;
		s += "' where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_4 != infor_41)//修改版次

	{
		CString s;
		s += "update book set B_edition='";
		s += infor_4;
		s += "' where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_5 != infor_51)//press
	{
		CString s;
		s += "update book set press='";
		s += infor_5;
		s += "' where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_6 != infor_61)//B_author
	{
		CString s;
		s += "update book set B_author='";
		s += infor_6;
		s += "' where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_7 != infor_71)//B_price
	{
		CString s;
		s += "update book set B_price=";
		s += infor_7;
		s += " where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s); 
		mysql_query(&mysql, s_turn.c_str());
	}
	if (infor_8 != infor_81)//B_number
	{
		CString s;
		s += "update book set B_number=";
		s += infor_8;
		s += " where isbn='";
		s += infor_1;
		s += "'";
		string s_turn;
		s_turn = T2A(s);
		mysql_query(&mysql, s_turn.c_str());
	}

	MessageBox(_T("修改成功"));
	CDialogEx::OnOK();
}



void change_book::OnEnChangeEdit10()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT10, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}


void change_book::OnEnChangeEdit11()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT11, infor_3);
	// TODO:  在此添加控件通知处理程序代码
}


void change_book::OnEnChangeEdit12()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT12, infor_4);
	// TODO:  在此添加控件通知处理程序代码
}


void change_book::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_5);
	// TODO:  在此添加控件通知处理程序代码
}


void change_book::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT6, infor_6);
	// TODO:  在此添加控件通知处理程序代码
}


void change_book::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT7, infor_7);
	// TODO:  在此添加控件通知处理程序代码
}


void change_book::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT8, infor_8);
	// TODO:  在此添加控件通知处理程序代码
}


BOOL change_book::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	change_book_start run;
		run.DoModal();
	if (run.isbnok)
	{

		infor_1 = run.GetInfor();
		if (infor_1 == "")
		{
			AfxMessageBox(_T("请输入要修改的ISBN"));
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
			str_run += "select * from book where ISBN='";
			str_run += infor_1;
			str_run += "'";
			USES_CONVERSION;
			string s_turn;
			s_turn = T2A(str_run);
			mysql_query(&mysql, s_turn.c_str());          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			if (result->row_count == 0)
			{
				AfxMessageBox(_T("请输入正确的ISBN"));
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
			infor_61 = row[4];
			infor_71 = row[5];
			infor_81 = row[6];
			SetDlgItemText(IDC_EDIT10, infor_21);
			SetDlgItemText(IDC_EDIT11, infor_31);
			SetDlgItemText(IDC_EDIT12, infor_41);
			SetDlgItemText(IDC_EDIT4, infor_51);
			SetDlgItemText(IDC_EDIT6, infor_61);
			SetDlgItemText(IDC_EDIT7, infor_71);
			SetDlgItemText(IDC_EDIT8, infor_81);
		}
	}
	else
	{
		CDialogEx::OnCancel();
		return false;
	}

	//return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}
