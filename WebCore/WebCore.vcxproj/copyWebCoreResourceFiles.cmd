mkdir 2>NUL "%CONFIGURATIONBUILDDIR%\bin%PlatformArchitecture%\WebKit.resources\inspector"
xcopy /y /d /s /exclude:xcopy.excludes "%ProjectDir%..\inspector\front-end\*" "%CONFIGURATIONBUILDDIR%\bin%PlatformArchitecture%\WebKit.resources\inspector"
xcopy /y /d /s /exclude:xcopy.excludes "%CONFIGURATIONBUILDDIR%\obj%PlatformArchitecture%\WebCore\DerivedSources\InspectorBackendCommands.js" "%CONFIGURATIONBUILDDIR%\bin%PlatformArchitecture%\WebKit.resources\inspector"
mkdir 2>NUL "%CONFIGURATIONBUILDDIR%\bin%PlatformArchitecture%\WebKit.resources\en.lproj"
xcopy /y /d /s /exclude:xcopy.excludes "%ProjectDir%..\English.lproj\localizedStrings.js" "%CONFIGURATIONBUILDDIR%\bin%PlatformArchitecture%\WebKit.resources\en.lproj"
xcopy /y /d /s /exclude:xcopy.excludes "%ProjectDir%..\English.lproj\Localizable.strings" "%CONFIGURATIONBUILDDIR%\bin%PlatformArchitecture%\WebKit.resources\en.lproj"
