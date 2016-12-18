// change_librarianname.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_librarianname.h"
#include "afxdialogex.h"


// change_librarianname 对话框

IMPLEMENT_DYNAMIC(change_librarianname, CDialogEx)

change_librarianname::change_librarianname(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_librarianname::IDD, pParent)
	, infor_1(_T(""))
{

}

change_librarianname::~change_librarianname()
{
}

void change_librarianname::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(change_librarianname, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &change_librarianname::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &change_librarianname::OnBnClickedOk)
END_MESSAGE_MAP()


// change_librarianname 消息处理程序


void change_librarianname::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_librarianname::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
