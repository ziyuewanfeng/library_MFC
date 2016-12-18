#pragma once


// change_pressadmin 对话框

class change_pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(change_pressadmin)

public:
	change_pressadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~change_pressadmin();

// 对话框数据
	enum { IDD = IDD_change_pressadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString infor_1,intfor_11;
	CString infor_2,infor_21;
	CString infor_3,infor_31;
	CString infor_4,infor_41;
	CString infor_5,infor_51;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
