git command
----------------------------------------------------------
1. git cofig --list (git config -l) 檢視所有設定內容
2. git config user.name 檢視使用者設定名稱
3. git config user.email檢視使用者設定信箱
4. git init 初始化 (建立.git隱藏資料夾並相關設定檔案)
5. git remote add origin [Repository URL] 設定好Repository URL 以便同步遠端的程式碼
6. git clone [Repository URL] 將遠端Repository複製到本地端
7. git add [檔案名稱]   將檔案加入追蹤
8. git add . 將所有檔案加入追蹤
9. git commit -m "描述的內容"
10. git push -u origin [分支名稱] -u代表建立一個upstream tracking connection，用於第一次推送
11. git log 檢視變更紀錄
12. git pull 從遠端repository同步至本地端資料夾
----------------------------------------------------------
13. git branch [分支名稱]  建立分支 => 用於在隔離的環境進行開發
14. git branch 查詢分支
15. git checkout [分支名稱] 切換分支進行工作
16. git checkout master(main)  切換到主分支
16. git merge [分支名稱]        合併分支到主分支

