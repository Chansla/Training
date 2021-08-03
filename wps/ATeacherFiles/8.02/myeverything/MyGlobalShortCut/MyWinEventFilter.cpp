#include <MyGlobalShortCut/MyWinEventFilter.h>
#include <MyGlobalShortCut/MyGlobalShortCut.h>


MyWinEventFilter::~MyWinEventFilter()
{

}

MyWinEventFilter::MyWinEventFilter(MyGlobalShortCut *shortcut)
    : m_shortcut(shortcut)
{

}


bool MyWinEventFilter::nativeEventFilter(const QByteArray &eventType, void *message, long *)
{
   if(eventType == "windows_generic_MSG")
    {
        MSG *msg = static_cast<MSG *>(message);
        if(msg->message == WM_HOTKEY)
        {
            //得到高16bit
            const quint32 keycode = HIWORD(msg->lParam);
            //得到低16bit
            const quint32 modifiers = LOWORD(msg->lParam);
            bool res = m_shortcut->shortcuts.value(qMakePair(keycode, modifiers));
            if(res)
            {
                m_shortcut ->activateShortcut();
                return true;
            }
        }

    }
    return false;
}
