#pragma once
#include "afxwin.h"


// add_book 对话框

class add_book : public CDialogEx
{
	DECLARE_DYNAMIC(add_book)

public:
	add_book(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~add_book();

// 对话框数据
	enum { IDD = IDD_add_book };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CString infor_1;
	CString infor_2;
	CString infor_3;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
	CString infor_4;
	CString infor_5;
	CString infor_6;
	CString infor_7;
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnEnChangeEdit9();
	//CStatic m_static;
	//CFont newfont;
	virtual BOOL OnInitDialog();
};
