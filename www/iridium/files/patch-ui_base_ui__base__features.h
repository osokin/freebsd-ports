--- ui/base/ui_base_features.h.orig	2023-10-21 11:51:27 UTC
+++ ui/base/ui_base_features.h
@@ -138,7 +138,7 @@ BASE_DECLARE_FEATURE(kSupportF11AndF12KeyShortcuts);
 COMPONENT_EXPORT(UI_BASE_FEATURES) bool AreF11AndF12ShortcutsEnabled();
 #endif  // BUILDFLAG(IS_CHROMEOS_ASH)
 
-#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE_FEATURES)
 BASE_DECLARE_FEATURE(kRedundantImeCompositionClearing);
 #endif  // BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
@@ -273,7 +273,7 @@ enum class ChromeRefresh2023Level {
 COMPONENT_EXPORT(UI_BASE_FEATURES)
 ChromeRefresh2023Level GetChromeRefresh2023Level();
 
-#if !BUILDFLAG(IS_LINUX)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_BSD)
 COMPONENT_EXPORT(UI_BASE_FEATURES) BASE_DECLARE_FEATURE(kWebUiSystemFont);
 #endif
 
