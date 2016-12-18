// del_teacher.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "del_teacher.h"
#include "afxdialogex.h"


// del_teacher 对话框

IMPLEMENT_DYNAMIC(del_teacher, CDialogEx)

del_teacher::del_teacher(CWnd* pParent /*=NULL*/)
	: CDialogEx(del_teacher::IDD, pParent)
	, infor_2(_T(""))
	
{

}

del_teacher::~del_teacher()
{
}

void del_teacher::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, infor_2);
}


BEGIN_MESSAGE_MAP(del_teacher, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT4, &del_teacher::OnEnChangeEdit4)
	ON_BN_CLICKED(IDOK, &del_teacher::OnBnClickedOk)
END_MESSAGE_MAP()


// del_teacher 消息处理程序


void del_teacher::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT4, infor_2);
	// TODO:  在此添加控件通知处理程序代码
}




void del_teacher::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	this->isbnok = 1;
	CDialogEx::OnOK();
}
