
#include "Core.h"

/*
숙제 : ShapeManager에서 list에 추가를 해주고 있는데 추가를 하지 말고 떨어진 도형은
Stage에 해당 위치에 블럭으로 처리를 하자.

그 후에 MoveDown 함수에서 현재 블럭의 아래가 Block으로 Stage에 잡혀있을 경우
true를 리턴하게 만들어보자.
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