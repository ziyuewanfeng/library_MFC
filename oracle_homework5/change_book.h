#pragma once


// change_book 对话框

class change_book : public CDialogEx
{
	DECLARE_DYNAMIC(change_book)

public:
	change_book(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_book();

// 对话框数据
	enum { IDD = IDD_change_book };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:

	bool isbnok = 0;
	
	afx_msg void OnBnClickedOk();
	CString infor_1;
	CString infor_2,infor_21;
	CString infor_3,infor_31;
	CString infor_4,infor_41;
	CString infor_5,infor_51;
	CString infor_6,infor_61;
	CString infor_7,infor_71;
	CString infor_8,infor_81;
	afx_msg void OnEnChangeEdit10();
	afx_msg void OnEnChangeEdit11();
	afx_msg void OnEnChangeEdit12();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
	virtual BOOL OnInitDialog();
};
