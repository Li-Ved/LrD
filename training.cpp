#include "training.h"
#include <windows.h>

KEYS keyPressed(void)
{
        if(GetAsyncKeyState(a))
        {
            keybd_event(VK_LEFT, 0, KEYEVENTF_KEYUP, 0);
            return a;

        }
        if(GetAsyncKeyState(b))
        {
            keybd_event(VK_RIGHT, 0, KEYEVENTF_KEYUP, 0);
            return b;
        }
        if(GetAsyncKeyState(c))
        {
            keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);
            return c;
        }
        if(GetAsyncKeyState(d))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return d;
        }
        if(GetAsyncKeyState(e))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return e;
        }
        if(GetAsyncKeyState(f))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return f;
        }
        if(GetAsyncKeyState(g))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return g;
        }
        if(GetAsyncKeyState(h))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return h;
        }
        if(GetAsyncKeyState(i))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return i;
        }
        if(GetAsyncKeyState(j))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return j;
        }
        if(GetAsyncKeyState(k))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return k;
        }
        if(GetAsyncKeyState(l))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return l;
        }
        if(GetAsyncKeyState(m))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return m;
        }
        if(GetAsyncKeyState(n))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return n;
        }
        if(GetAsyncKeyState(o))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return o;
        }
        if(GetAsyncKeyState(p))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return p;
        }
        if(GetAsyncKeyState(q))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return q;
        }
        if(GetAsyncKeyState(r))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return r;
        }
        if(GetAsyncKeyState(s))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return s;
        }
        if(GetAsyncKeyState(t))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return t;
        }
        if(GetAsyncKeyState(u))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return u;
        }
        if(GetAsyncKeyState(v))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return v;
        }
        if(GetAsyncKeyState(w))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return w;
        }
        if(GetAsyncKeyState(x))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return x;
        }
        if(GetAsyncKeyState(y))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return y;
        }
        if(GetAsyncKeyState(z))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return z;
        }
        if(GetAsyncKeyState(VK_SPACE))
        {
            keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
            return space;
        }
        
}
