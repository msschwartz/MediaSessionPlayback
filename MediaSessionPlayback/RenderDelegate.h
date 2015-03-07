#ifndef RENDER_DELEGATE
#define RENDER_DELEGATE

#include "resource.h"
#include "Player.h"

class RenderDelegate : public IDeckLinkVideoOutputCallback
{
	CPlayer* m_pOwner;

public:
	RenderDelegate(CPlayer* pOwner);
	~RenderDelegate();

	// IUnknown needs only a dummy implementation
	virtual HRESULT	STDMETHODCALLTYPE	QueryInterface(REFIID iid, LPVOID *ppv)	{ return E_NOINTERFACE; }
	virtual ULONG	STDMETHODCALLTYPE	AddRef()									{ return 1; }
	virtual ULONG	STDMETHODCALLTYPE	Release()									{ return 1; }

	virtual HRESULT	STDMETHODCALLTYPE	ScheduledFrameCompleted(IDeckLinkVideoFrame* completedFrame, BMDOutputFrameCompletionResult result);
	virtual HRESULT	STDMETHODCALLTYPE	ScheduledPlaybackHasStopped();
};

#endif RENDER_DELEGATE
