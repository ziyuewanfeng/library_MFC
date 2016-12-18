#pragma once


// add_press 对话框

class add_press : public CDialogEx
{
	DECLARE_DYNAMIC(add_press)

public:
	add_press(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~add_press();

// 对话框数据
	enum { IDD = IDD_add_press };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2;
	CString infor_3;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
