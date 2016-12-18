// del_book.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_book.h"
#include "afxdialogex.h"


// del_book 对话框

IMPLEMENT_DYNAMIC(del_book, CDialogEx)

del_book::del_book(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_book::IDD, pParent)
	, infor_1(_T(""))
{

}

del_book::~del_book()
{
}

void del_book::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, infor_1);
}


BEGIN_MESSAGE_MAP(del_book, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &del_book::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &del_book::OnBnClickedOk)
END_MESSAGE_MAP()


// del_book 消息处理程序


void del_book::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT1, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void del_book::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
