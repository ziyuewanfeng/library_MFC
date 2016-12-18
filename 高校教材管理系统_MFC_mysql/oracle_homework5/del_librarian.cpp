// del_librarian.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_librarian.h"
#include "afxdialogex.h"


// del_librarian 对话框

IMPLEMENT_DYNAMIC(del_librarian, CDialogEx)

del_librarian::del_librarian(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_librarian::IDD, pParent)
	, infor_1(_T(""))
{

}

del_librarian::~del_librarian()
{
}

void del_librarian::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_librarian, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_librarian::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_librarian::OnBnClickedOk)
END_MESSAGE_MAP()


// del_librarian 消息处理程序


void del_librarian::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void del_librarian::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
