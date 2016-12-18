#pragma once


// del_teacher 对话框

class del_teacher : public CDialogEx
{
	DECLARE_DYNAMIC(del_teacher)

public:
	del_teacher(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~del_teacher();

// 对话框数据
	enum { IDD = IDD_del_teacher };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_2;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedOk();
};
