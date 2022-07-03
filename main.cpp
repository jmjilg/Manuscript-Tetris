
#include "Core.h"

/*
���� : ShapeManager���� list�� �߰��� ���ְ� �ִµ� �߰��� ���� ���� ������ ������
Stage�� �ش� ��ġ�� ������ ó���� ����.

�� �Ŀ� MoveDown �Լ����� ���� ���� �Ʒ��� Block���� Stage�� �������� ���
true�� �����ϰ� ������.
*/

int main()
{
	if (!CCore::GetInst()->Init())
	{
		CCore::DestroyInst();
		return 0;
	}

	CCore::GetInst()->Run();

	CCore::DestroyInst();

	return 0;
}