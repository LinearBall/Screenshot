// CDiaChild.cpp: 实现文件
//

#include "stdafx.h"
#include "Screenshot.h"
#include "afxdialogex.h"
#include "CDiaChild.h"


// CDiaChild 对话框

IMPLEMENT_DYNAMIC(CDiaChild, CDialogEx)

CDiaChild::CDiaChild(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CDiaChild::~CDiaChild()
{
}

void CDiaChild::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDiaChild, CDialogEx)
END_MESSAGE_MAP()


// CDiaChild 消息处理程序
