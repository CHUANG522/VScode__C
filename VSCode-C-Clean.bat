@echo off
chcp 65001 >nul
echo 🧹 正在清理 VSCode C语言项目文件...

:: --------------------------
:: 1. 核心清理：删除所有 .exe 可执行文件（递归遍历子目录）
:: --------------------------
del /q /s *.exe 2>nul

:: --------------------------
:: 2. 清理 GCC/MinGW 编译产物
:: --------------------------
del /q /s *.o 2>nul       # 目标文件
del /q /s *.obj 2>nul     # 目标文件（Windows 平台）
del /q /s *.d 2>nul       # 依赖文件
del /q /s *.i 2>nul       # 预处理文件
del /q /s *.s 2>nul       # 汇编文件
del /q /s *.map 2>nul     # 链接映射文件
del /q /s *.lst 2>nul     # 列表文件

:: --------------------------
:: 3. 清理 VSCode 相关临时文件
:: --------------------------
rd /s /q .vscode\build 2>nul  # 常见编译输出目录（如 tasks.json 配置的 build 文件夹）
rd /s /q .vscode\out 2>nul    # 通用输出目录
del /q /s .vscode\*.log 2>nul # 编译日志文件
del /q /s .vscode\*.tmp 2>nul # 临时文件

:: --------------------------
:: 4. 清理其他冗余文件
:: --------------------------
del /q /s *.bak 2>nul     # 备份文件
del /q /s *.swp 2>nul     # Vim 临时文件
del /q /s *~ 2>nul        # Linux/Mac 临时备份文件
del /q /s Thumbs.db 2>nul # Windows 缩略图文件
del /q /s .DS_Store 2>nul # Mac 系统文件

echo ✅ 清理完成！已删除所有 .exe、编译产物及临时文件。
pause