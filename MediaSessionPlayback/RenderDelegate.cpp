#include "stdafx.h"
#include "RenderDelegate.h"

RenderDelegate::RenderDelegate(CPlayer* pOwner)
{
	m_pOwner = pOwner;
}

RenderDelegate::~RenderDelegate()
{

}

HRESULT	RenderDelegate::ScheduledFrameCompleted(IDeckLinkVideoFrame* completedFrame, BMDOutputFrameCompletionResult result)
{
	// m_pOwner->RenderToDevice();
	return S_OK;
}

HRESULT	RenderDelegate::ScheduledPlaybackHasStopped()
{
	return S_OK;
}
