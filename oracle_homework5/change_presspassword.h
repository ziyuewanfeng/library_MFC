#pragma once


// change_presspassword 对话框

class change_presspassword : public CDialogEx
{
	DECLARE_DYNAMIC(change_presspassword)

public:
	change_presspassword(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_presspassword();

// 对话框数据
	enum { IDD = IDD_change_presspassword };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedOk();
	CString infor_2;
	afx_msg void OnEnChangeEdit3();
};
