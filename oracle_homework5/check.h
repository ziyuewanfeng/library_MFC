#pragma once


// check 对话框

class check : public CDialogEx
{
	DECLARE_DYNAMIC(check)

public:
	check(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~check();

	bool isbnok = 0;

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
