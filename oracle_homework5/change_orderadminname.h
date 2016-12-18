#pragma once


// change_orderadminname 对话框

class change_orderadminname : public CDialogEx
{
	DECLARE_DYNAMIC(change_orderadminname)

public:
	change_orderadminname(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_orderadminname();

// 对话框数据
	enum { IDD = IDD_change_orderadminname };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString infor_1;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
};
