#pragma once


// change_order 对话框

class change_order : public CDialogEx
{
	DECLARE_DYNAMIC(change_order)

public:
	change_order(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_order();

// 对话框数据
	enum { IDD = IDD_change_order };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CString infor_1;
	CString infor_2,infor_21;
	CString infor_3,infor_31;
	CString infor_4,infor_41;
	CString infor_5,infor_51;
	CString infor_6,infor_61;
	CString infor_7,infor_71;
	CString infor_8,infor_81;
	CString infor_9,infor_91;

	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit10();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit11();
	virtual BOOL OnInitDialog();
};
