#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::InteropServices;

#include "AssemblyInfo.h"

//
// ����� �������� �� ���� ������ ��������������� ��������� �������
// ���������. �������������� �������� ���� ���������, ����� ��������
// ����� �������� �� ���� ������.
//
[assembly:AssemblyTitleAttribute( Assembly_Title )];
[assembly:AssemblyDescriptionAttribute( Assembly_Description )];
[assembly:AssemblyConfigurationAttribute( L"" )];
[assembly:AssemblyCompanyAttribute( L"" )];
[assembly:AssemblyProductAttribute( Assembly_Product )];
[assembly:AssemblyCopyrightAttribute( Assembly_Copyright )];
[assembly:AssemblyTrademarkAttribute( L"" )];
[assembly:AssemblyCultureAttribute( L"" )]

//
// �������� � ������ ������ ������� �� ��������� ������� ��������:
//
//      �������� ����� ������
//      �������������� ����� ������
//   ����� ������
//      ��������
//
// ����� ������ ��� �������� ��� ������� ������ ������ � �������� �� ���������
// ��������� "*", ��� �������� ����:

[assembly:AssemblyVersionAttribute( Assembly_Version )];

[assembly:ComVisible( false )];

[assembly:CLSCompliantAttribute( true )];
