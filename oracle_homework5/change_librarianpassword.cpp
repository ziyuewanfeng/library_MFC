// change_librarianpassword.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_librarianpassword.h"
#include "afxdialogex.h"


// change_librarianpassword 对话框

IMPLEMENT_DYNAMIC(change_librarianpassword, CDialogEx)

change_librarianpassword::change_librarianpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_librarianpassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_librarianpassword::~change_librarianpassword()
{
}

void change_librarianpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
	DDX_Text(pDX, IDC_EDIT2, infor_2);
}


BEGIN_MESSAGE_MAP(change_librarianpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_librarianpassword::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_librarianpassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT2, &change_librarianpassword::OnEnChangeEdit2)
END_MESSAGE_MAP()


// change_librarianpassword 消息处理程序


void change_librarianpassword::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_librarianpassword::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	if (infor_1 == infor_2)
	{
		//AfxMessageBox(_T("密码相同修改成功！"));
		this->isbnok = 1;
		CDialogEx::OnOK();

	}
	else
	{
		AfxMessageBox(_T("密码不一致修改失败！"));
		CDialogEx::OnCancel();
	}
}


void change_librarianpassword::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}
