# Contributing Guide

이 문서는 **AeroCrab (BitCrab Alumni Code Study)** 레포지토리의 기여 규칙을 정리한 것입니다.  
참여자: **sumin-world**, **th6perp**

---

## 🔀 브랜치 전략

`main` 브랜치는 항상 안정 상태를 유지합니다.  
모든 작업은 **새로운 브랜치**에서 진행하고 Pull Request(PR)를 통해 병합합니다.

### 브랜치 네이밍 규칙

- **BOJ**: `feat/boj-문제번호` (예: `feat/boj-1000`)
- **SWEA**: `feat/swea-문제번호` (예: `feat/swea-1234`)
- **Codeforces**: `feat/cf-round번호-문제` (예: `feat/cf-round959-A`)

---

## 📝 커밋 메시지 규칙

플랫폼명 + 문제번호 + 간단 설명

### 예시

```bash
boj: 1000 A+B 풀이
swea: D4 1234 암호 풀이
cf: round959 A
```

---

## 📂 폴더 구조

개인별 풀이 코드는 각자 폴더에 업로드합니다.

```
boj/Sum/
boj/Jun/
swea/Sum/
swea/Jun/
codeforces/Sum/
codeforces/Jun/
```

---

## 🚀 Pull Request

### PR 생성 시 포함할 내용

1. 문제 링크
2. 접근 방법 간단 설명
3. 시간/메모리 (가능하다면)
4. 개선할 점 체크리스트

### Review

- **리뷰 및 토론은 전용 디스코드 방에서 진행합니다.**
  - PR 올린 후, 디스코드에 링크 공유
  - 상대방은 디스코드 스터디 채널에서 코드 리뷰 & 피드백
  - 피드백 반영 후 merge

---

## 💻 Workflow 예시

```bash
# 최신 main 가져오기
git checkout main
git pull origin main

# 새 브랜치 생성
git checkout -b feat/boj-1000

# 코드 작성 후 커밋
git add boj/Sum/1000_A+B.c
git commit -m "boj: 1000 A+B 풀이"

# 원격 푸시
git push origin feat/boj-1000

# GitHub에서 Pull Request 생성 → 리뷰 후 merge
```

---

<div align="center">

**Made with 💻 by sumin-world & th6perp**

</div>