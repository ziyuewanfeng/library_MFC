#pragma once


// change_press 对话框

class change_press : public CDialogEx
{
	DECLARE_DYNAMIC(change_press)

public:
	change_press(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_press();

// 对话框数据
	enum { IDD = IDD_change_press };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2,infor_21;
	CString infor_3,infor_31;
	CString infor_4,infor_41;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
