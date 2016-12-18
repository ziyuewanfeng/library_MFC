#pragma once


// change_press_start 对话框

class change_press_start : public CDialogEx
{
	DECLARE_DYNAMIC(change_press_start)

public:
	change_press_start(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_press_start();

// 对话框数据
	enum { IDD = IDD_DIALOG9 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	CString GetInfor();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
