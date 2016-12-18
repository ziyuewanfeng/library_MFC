#pragma once


// del_press 对话框

class del_press : public CDialogEx
{
	DECLARE_DYNAMIC(del_press)

public:
	del_press(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~del_press();

// 对话框数据
	enum { IDD = IDD_del_press };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	afx_msg void OnEnChangeEdit1();
	bool isbnok = 0;
	afx_msg void OnBnClickedOk();
};
