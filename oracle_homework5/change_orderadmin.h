#pragma once


// change_orderadmin 对话框

class change_orderadmin : public CDialogEx
{
	DECLARE_DYNAMIC(change_orderadmin)

public:
	change_orderadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_orderadmin();

// 对话框数据
	enum { IDD = IDD_change_orderadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	CString infor_2,infor_21;
	CString infor_3,infor_31;
	CString infor_4,infor_41;
	CString infor_5,infor_51;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
