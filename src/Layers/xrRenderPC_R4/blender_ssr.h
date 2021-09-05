#pragma once


class CBlender_ssr : public IBlender
{
public:
	virtual LPCSTR getComment() { return "SSR"; }
	virtual BOOL canBeDetailed() { return FALSE; }
	virtual BOOL canBeLMAPped() { return FALSE; }

	virtual void Compile(CBlender_Compile& C);

	CBlender_ssr();
	virtual ~CBlender_ssr();
};
