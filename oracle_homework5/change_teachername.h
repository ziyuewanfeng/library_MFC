#pragma once


// change_teachername 对话框

class change_teachername : public CDialogEx
{
	DECLARE_DYNAMIC(change_teachername)

public:
	change_teachername(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_teachername();

// 对话框数据
	enum { IDD = IDD_change_teachername };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
