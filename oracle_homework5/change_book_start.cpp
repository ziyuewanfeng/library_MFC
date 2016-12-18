// change_book_start.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_book_start.h"
#include "afxdialogex.h"


// change_book_start 对话框

IMPLEMENT_DYNAMIC(change_book_start, CDialogEx)

change_book_start::change_book_start(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_book_start::IDD, pParent)
	, infor_1(_T(""))
{

}

change_book_start::~change_book_start()
{
}

void change_book_start::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT9, infor_1);
}


BEGIN_MESSAGE_MAP(change_book_start, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT9, &change_book_start::OnEnChangeEdit9)
	ON_BN_CLICKED(IDOK, &change_book_start::OnBnClickedOk)
END_MESSAGE_MAP()


// change_book_start 消息处理程序


void change_book_start::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT9, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}

CString change_book_start::GetInfor()
{
	if (this->isbnok)
	{
		return infor_1;
	}
}
void change_book_start::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok=1;
	CDialogEx::OnOK();
}
