## Xstuff

FROZEN!
На данный момент реализовать не получается, потому как при открытии pupup меню Recent Files главный поток перестает
обрабатывать события, а именно там идет перехват событий keyDown/keyUp, которыми и пердполагается переключаться.

Xcode 5 plugin with some usefull stuff:
- Recent files navigation by `Ctrl` + `Tab`

#### Install
- Clone repo
- Open Xcode project
- Build & Run (Xcode will be relaunched automatically)

#### Uninstall
- Remove directory `~/Library/Application\ Support/Developer/Shared/Xcode/Plug-ins/Xstuff.xcplugin`
