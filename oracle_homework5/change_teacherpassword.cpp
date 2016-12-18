// change_teacherpassword.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "change_teacherpassword.h"
#include "afxdialogex.h"


// change_teacherpassword 对话框

IMPLEMENT_DYNAMIC(change_teacherpassword, CDialogEx)

change_teacherpassword::change_teacherpassword(CWnd* pParent /*=NULL*/)
	: CDialogEx(change_teacherpassword::IDD, pParent)
	, infor_1(_T(""))
	, infor_2(_T(""))
{

}

change_teacherpassword::~change_teacherpassword()
{
}

void change_teacherpassword::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, infor_1);
	DDX_Text(pDX, IDC_EDIT3, infor_2);
}


BEGIN_MESSAGE_MAP(change_teacherpassword, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2, &change_teacherpassword::OnEnChangeEdit2)
	ON_BN_CLICKED(IDOK, &change_teacherpassword::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT3, &change_teacherpassword::OnEnChangeEdit3)
END_MESSAGE_MAP()


// change_teacherpassword 消息处理程序


void change_teacherpassword::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT2, infor_1);
	// TODO:  在此添加控件通知处理程序代码
}


void change_teacherpassword::OnBnClickedOk()
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


void change_teacherpassword::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	GetDlgItemText(IDC_EDIT3,infor_2);
	// TODO:  在此添加控件通知处理程序代码
}
