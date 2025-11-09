# Git 워크플로우 가이드

## 최신 main 가져오기
항상 작업 전 최신 main을 동기화하세요:
```bash
git fetch origin && git switch main && git pull --ff-only
```

## 새 브랜치 만들어서 작업하기
main 위에서 작업하지 말고 항상 브랜치 따기
```bash
git switch -c feat/작업내용
```

예시:
```bash
git switch -c feat/add-traffic-sign-model
```

## 작업 완료 후 푸시하기
```bash
git add .
git commit -m "작업 내용 요약"
git push -u origin feat/작업내용
```

## GitHub에서 Pull Request(PR) 생성
main에 바로 push 금지. PR 올리고 리뷰/머지 후 main 반영

## main이 업데이트되었을 때 내 브랜치 최신화
```bash
git fetch origin
git rebase origin/main   # (또는 git merge origin/main)
```
