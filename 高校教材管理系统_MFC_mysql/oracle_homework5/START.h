#pragma once


// START 对话框

class START : public CDialogEx
{
	DECLARE_DYNAMIC(START)

public:
	START(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~START();
	static int time;
// 对话框数据
	enum { IDD = IDD_START };
	BOOL isBnOk = false;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedstart();
	afx_msg void OnBnClickedlogin();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CString user_name;
	CString user_pwd;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	virtual BOOL OnInitDialog();
};
