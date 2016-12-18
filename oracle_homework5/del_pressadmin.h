#pragma once


// del_pressadmin 对话框

class del_pressadmin : public CDialogEx
{
	DECLARE_DYNAMIC(del_pressadmin)

public:
	del_pressadmin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~del_pressadmin();

// 对话框数据
	enum { IDD = IDD_del_pressadmin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString pressname;
	bool isbnok = 0;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedOk();
};
