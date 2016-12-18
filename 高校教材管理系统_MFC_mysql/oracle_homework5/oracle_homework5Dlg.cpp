
// oracle_homework5Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "oracle_homework5.h"
#include "oracle_homework5Dlg.h"
#include "afxdialogex.h"
#include "aspect_all_h.h"
#include <string>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Coracle_homework5Dlg 对话框



Coracle_homework5Dlg::Coracle_homework5Dlg(CWnd* pParent /*=NULL*/)
: CDialogEx(Coracle_homework5Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

}

void Coracle_homework5Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
	DDX_Control(pDX, IDC_TREE1, m_tree);
}

BEGIN_MESSAGE_MAP(Coracle_homework5Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_LBUTTONDBLCLK()
	ON_NOTIFY(TVN_SELCHANGED, IDC_TREE1, &Coracle_homework5Dlg::OnSelchangedTree1)
END_MESSAGE_MAP()


// Coracle_homework5Dlg 消息处理程序

void Coracle_homework5Dlg::system_admin()
{
	HTREEITEM hRoot = m_tree.InsertItem(_T("功能列表"), 0, 0);
	m_tree.SetItemState(hRoot, TVIS_BOLD, TVIS_BOLD);

	HTREEITEM hSrc_1 = m_tree.InsertItem(_T("出版社管理员"), 0, 0, hRoot);


	m_tree.InsertItem(_T("增加出版社管理员"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("删除出版社管理员"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("修改出版社管理员"), 3, 3, hSrc_1);
	m_tree.InsertItem(_T("查看出版社管理员"), 3, 3, hSrc_1);


	HTREEITEM hSrc_2 = m_tree.InsertItem(_T("教材征订管理员"), 0, 0, hRoot);


	m_tree.InsertItem(_T("增加教材征订管理员"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("删除教材征订管理员"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("修改教材征订管理员"), 3, 3, hSrc_2);
	m_tree.InsertItem(_T("查看教材征订管理员"), 3, 3, hSrc_2);

	HTREEITEM hSrc_3 = m_tree.InsertItem(_T("教材管理员"), 0, 0, hRoot);


	m_tree.InsertItem(_T("增加教材管理员"), 3, 3, hSrc_3);
	m_tree.InsertItem(_T("删除教材管理员"), 3, 3, hSrc_3);
	m_tree.InsertItem(_T("修改教材管理员"), 3, 3, hSrc_3);
	m_tree.InsertItem(_T("查看教材管理员"), 3, 3, hSrc_3);

	HTREEITEM hSrc_4 = m_tree.InsertItem(_T("教师"), 0, 0, hRoot);


	m_tree.InsertItem(_T("增加教师"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("删除教师"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("修改教师"), 3, 3, hSrc_4);
	m_tree.InsertItem(_T("查看教师"), 3, 3, hSrc_4);


	HTREEITEM hSrc_5 = m_tree.InsertItem(_T("修改信息"), 0, 0, hRoot);


	m_tree.InsertItem(_T("修改密码"), 3, 3, hSrc_5);
	m_tree.InsertItem(_T("修改用户名"), 3, 3, hSrc_5);

}

BOOL Coracle_homework5Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);


	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	
	//m_list.InsertItem(3, _T("C++"));
	//m_list.SetItemText(3, 1, _T("4"));
	//m_list.SetItemText(3, 2, _T("3"));
	//	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE

	
		this->system_admin();
	
	/*
	HICON hIcon[3];      // 图标句柄数组
	HTREEITEM hRoot;     // 树的根节点的句柄
	HTREEITEM hCataItem; // 可表示任一分类节点的句柄
	HTREEITEM hArtItem;  // 可表示任一文章节点的句柄

	// 加载三个图标，并将它们的句柄保存到数组
	//hIcon[0] = theApp.LoadIcon(IDI_WEB_ICON);
	// hIcon[1] = theApp.LoadIcon(IDI_CATALOG_ICON);
	// hIcon[2] = theApp.LoadIcon(IDI_ARTICLE_ICON);

	// 创建图像序列 CImageList 对象
	// m_imageList.Create(32, 32, ILC_COLOR32, 3, 3);
	// 将三个图标添加到图像序列
	for (int i = 0; i<3; i++)
	{
	// m_imageList.Add(hIcon[i]);
	}

	// 为树形控件设置图像序列
	m_tree.SetImageList(NULL, TVSIL_NORMAL);

	// 插入根节点
	hRoot = m_tree.InsertItem(_T("鸡啄米"), 0, 0);
	// 在根节点下插入子节点
	hCataItem = m_tree.InsertItem(_T("IT 互联网"), 1, 1, hRoot, TVI_LAST);
	// 为“IT 互联网”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hCataItem, 1);
	// 在“IT 互联网”节点下插入子节点
	hArtItem = m_tree.InsertItem(_T("百度文章 1"), 2, 2, hCataItem, TVI_LAST);
	// 为“百度文章 1”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hArtItem, 2);
	// 在“IT 互联网”节点下插入另一子节点
	hArtItem = m_tree.InsertItem(_T("谷歌文章 2"), 2, 2, hCataItem, TVI_LAST);
	// 为“谷歌文章 2”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hArtItem, 3);
	// 在根节点下插入第二个子节点
	hCataItem = m_tree.InsertItem(_T("数码生活"), 1, 1, hRoot, TVI_LAST);
	// 为“数码生活”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hCataItem, 4);
	// 在“数码生活”节点下插入子节点
	hArtItem = m_tree.InsertItem(_T("智能手机文章 1"), 2, 2, hCataItem, TVI_LAST);
	// 为“智能手机文章 1”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hArtItem, 5);
	// 在“数码生活”节点下插入另一子节点
	hArtItem = m_tree.InsertItem(_T("平板电脑文章 2"), 2, 2, hCataItem, TVI_LAST);
	// 为“平板电脑文章 2”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hArtItem, 6);
	// 在根节点下插入第三个子节点
	hCataItem = m_tree.InsertItem(_T("软件开发"), 1, 1, hRoot, TVI_LAST);
	// 为“软件开发”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hCataItem, 7);
	// 在“软件开发”节点下插入子节点
	hArtItem = m_tree.InsertItem(_T("C++编程入门系列 1 "), 2, 2, hCataItem, TVI_LAST);
	// 为“C++编程入门系列 1”节点添加附加的编号数据，在鼠标划过该节点时显 示
	m_tree.SetItemData(hArtItem, 8);
	// 在“软件开发”节点下插入另一子节点
	hArtItem = m_tree.InsertItem(_T("VS2010/MFC 编程入门 2 "), 2, 2, hCataItem, TVI_LAST);
	// 为“VS2010/MFC 编程入门 2”节点添加附加的编号数据，在鼠标划过该节点 时显示
	m_tree.SetItemData(hArtItem, 9);
	// 在根节点下插入第四个子节点
	hCataItem = m_tree.InsertItem(_T("娱乐休闲"), 1, 1, hRoot, TVI_LAST);
	// 为“娱乐休闲”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hCataItem, 10);
	// 在“娱乐休闲”节点下插入子节点
	hArtItem = m_tree.InsertItem(_T("玛雅文明文章 1"), 2, 2, hCataItem, TVI_LAST);
	// 为“玛雅文明文章 1”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hArtItem, 11);
	// 在“娱乐休闲”节点下插入另一子节点
	hArtItem = m_tree.InsertItem(_T("IT 笑话 2"), 2, 2, hCataItem, TVI_LAST);
	// 为“IT 笑话 2”节点添加附加的编号数据，在鼠标划过该节点时显示
	m_tree.SetItemData(hArtItem, 12);
	*/
	return TRUE;
}

void Coracle_homework5Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Coracle_homework5Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Coracle_homework5Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void Coracle_homework5Dlg::OnSelchangedTree1(NMHDR *pNMHDR, LRESULT *pResult)//系统管理员界面的树形控件的选择
{
	LPNMTREEVIEW pNMTreeView = reinterpret_cast<LPNMTREEVIEW>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	*pResult = 0;
	HTREEITEM selItem;
	//获得选择项
	selItem = m_tree.GetSelectedItem();
	//将选择项的值转化为DWORD值，也就是我们在m_tree.SetItemData函数中设定的项的值
	/*DWORD data = m_tree.GetItemData(selItem);
	CString inputData;
	inputData.Format("选择的项目为:%d", data);
	AfxMessageBox(inputData);*/

	mysql_library_init(NULL, 0, 0);
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gb2312");
	if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "lovewho?1314", "test", 0, NULL, CLIENT_MULTI_STATEMENTS))//连接数据库
	{
		AfxMessageBox(_T("not to connect mysql"));
		return;
	}

	CString str;
	USES_CONVERSION;
	str = m_tree.GetItemText(selItem);
	if (judge == 1)///为系统管理员
	{
		if (str == "增加出版社管理员")
		{
			str = "";
			add_pressadmin run;
			run.DoModal();
			
			

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.pressadmin_turename, run.pressadmin_name, run.pressadmin_pwd, run.pressadmin_phone,3));
			str += "insert into user values ('" ;
			str += run.pressadmin_turename;
			str += "','";
			str += run.pressadmin_name;
			str += "','";
			str += run.pressadmin_pwd;
			str += "','";
			str += run.pressadmin_phone;
			str += "',";
			str += "3)";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			//UpdateData(false);
			//Invalidate();
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "删除出版社管理员")
		{
			
			del_pressadmin run;
			run.DoModal();
			str = "";

			CString str_1;
			str_1 += "delete from user where username='";
			str_1 += run.pressname;
			str_1 += "'";
			
			string s_copy = T2A(str_1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());

			}
			
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "修改出版社管理员")
		{
			change_pressadmin run;
			run.DoModal();
			str = "";
			/*

			CString str,str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.wanttochange_name,run.wanttochangepwd));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1,run.infor_2,run.infor_3,run.infor_4));
			str1 += "insert into user values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "',";
			str1 += "3)";
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}
			*/
			
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
			str = "";


		}
		if (str == "查看出版社管理员")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";
			
			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from view3");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;

			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "增加教材征订管理员")
		{
			add_orderadmin run;
			run.DoModal();
			str = "";
			
			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4,4));
			str += "insert into user values ('";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "',";
			str += "4)";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "删除教材征订管理员")
		{

			del_orderadmin run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_2, run.infor_3));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "修改教材征订管理员")
		{

			change_orderadmin run;
			run.DoModal();
			str = "";
			
			/*

			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_1, run.infor_2));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";

			str1 += "insert into user values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "',";
			str1 += "4)";
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}
			/*/
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
			
		}
		if (str == "查看教材征订管理员")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";
			
			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from view4");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;

			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "增加教材管理员")
		{
			add_librarian run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4,2));
			str += "insert into user values ('";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "',";
			str += "2)";

			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "删除教材管理员")
		{

			del_librarian run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_2, run.infor_3));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "修改教材管理员")
		{

			change_librarian run;
			run.DoModal();
			str = "";
			/*
			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_1, run.infor_2));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";
			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_3, run.infor_4, run.infor_5, run.infor_6, 2));
			str1 += "insert into user values ('";
			str1 += run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1 += run.infor_5;
			str1 += "',";
			str1 += "2)";
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}
			*/
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "查看教材管理员")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();
			str = "";
			
			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from view2");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;

			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}

		if (str == "增加教师")
		{
			add_teacher run;
			run.DoModal();
			str = "";
			


			CString str;
			//str.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_1, run.infor_2, run.infor_3, run.infor_4, 5));
			str += "insert into user values ('";
			str += run.infor_1;
			str += "','";
			str += run.infor_2;
			str += "','";
			str += run.infor_3;
			str += "','";
			str += run.infor_4;
			str += "',";
			str += "5)";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "删除教师")
		{

			del_teacher run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_2, run.infor_3));
			str += "delete  from user where username='";
			str += run.infor_2;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
				mysql_query(&mysql, s_copy.c_str());
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		///修改至此///系统管理员修改教师无法打开。
		if (str == "修改教师")
		{

			change_teacher run;
			run.DoModal();
			str = "";
			/*
			CString str, str1;
			//str.Format(_T("delete values from user where username='%s' and userpassword='%s'", run.infor_1, run.infor_2));
			str += "delete  from user where username='";
			str += run.infor_1;
			str += "'";

			//str1.Format(_T("insert into user values ('%s','%s','%s','%s',%d)", run.infor_3, run.infor_4, run.infor_5, run.infor_6, 5));
			str1 += "insert into user values ('";
			str1+= run.infor_2;
			str1 += "','";
			str1 += run.infor_3;
			str1 += "','";
			str1 += run.infor_4;
			str1 += "','";
			str1+= run.infor_5;
			str1 += "',";
			str1 += "5)";
			string s_copy = T2A(str);
			string s1_copy = T2A(str1);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				mysql_query(&mysql, s1_copy.c_str());
			}

			*/
			selItem = m_tree.GetParentItem(selItem);//选择回退父节点
			m_tree.SelectItem(selItem);

		}
		if (str == "查看教师")
		{
			int nCols = m_list.GetHeaderCtrl()->GetItemCount();
			for (int j = 0; j < nCols; j++)
			{
				m_list.DeleteColumn(0);
			}
			m_list.DeleteAllItems();//删除表

			str = "";
			
			CRect rect;
			// 获取编程语言列表视图控件的位置和大小    
			m_list.GetClientRect(&rect);

			// 为列表视图控件添加全行选中和栅格风格    
			m_list.SetExtendedStyle(m_list.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
			mysql_query(&mysql, "select * from view5");          //执行SQL语句
			//mysql_query(&mysql, "insert into press values('西安电子科技大学出版社', '789987', '西安') ");
			MYSQL_RES *result = mysql_store_result(&mysql);
			int filedcount = mysql_num_fields(result);//获取字段数
			MYSQL_ROW row = NULL;//记录
			MYSQL_FIELD * filed = NULL;//字段
			int row_judge = 0;

			while (row = mysql_fetch_row(result))
			{
				if (row_judge == 0)
				{
					for (int i = 0; i < filedcount; i++)
					{
						filed = mysql_fetch_field_direct(result, i);
						CString str_1, str_2;
						str_1 = filed->name;
						str_2 = row[i];
						m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
						//m_list.InsertItem(i, str_2);
					}
				}

				for (int i = 0, j = 0; j < filedcount; i++, j++)
				{
					filed = mysql_fetch_field_direct(result, i);
					CString str_1, str_2;
					str_1 = filed->name;
					str_2 = row[i];
					//m_list.InsertColumn(i, str_1, LVCFMT_CENTER, rect.Width() / filedcount, i);
					if (j == 0)
						m_list.InsertItem(row_judge, str_2);
					else
						m_list.SetItemText(row_judge, j, str_2);

				}
				row_judge++;
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);
		}
		if (str == "修改用户名")
		{

			change_sysname run;
			run.DoModal();
			str = "";
		

			CString str;
			//str.Format(_T("update user set username='%s' where username='%s' and userpassword='%s'"),run.infor_1,str_start_name,str_start_pwd);
			str += "update user set username = '";
			str += run.infor_1;
			str += "' where username='";
			str += str_start_name;
			str += "' and userpassword='";
			str += str_start_pwd;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				AfxMessageBox(_T("修改成功"));
				string s_1;
				s_1=T2A( run.infor_1);
				strcpy_s(str_start_name, s_1.size() + 1, s_1.c_str());
				
			}
			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
		if (str == "修改密码")
		{

			change_syspassword run;
			run.DoModal();
			str = "";
			

			CString str;
			//str.Format(_T("update user set userpassword='%s' where username='%s'and userpassword='%s'"),run.infor_1, str_start_name, str_start_pwd);
			str += "update user set userpassword = '";
			str += run.infor_1;
			str += "' where username='";
			str += str_start_name;
			str += "' and userpassword='";
			str += str_start_pwd;
			str += "'";
			string s_copy = T2A(str);
			if (run.isbnok)
			{
				mysql_query(&mysql, s_copy.c_str());
				AfxMessageBox(_T("修改成功"));
				string s_1;
				s_1 = T2A(run.infor_1);
				strcpy_s(str_start_pwd, s_1.size() + 1, s_1.c_str());

			}

			selItem = m_tree.GetParentItem(selItem);
			m_tree.SelectItem(selItem);

		}
	}

	return;
}
