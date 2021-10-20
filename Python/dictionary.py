friends = {
    "Jack": "010-1234-5678",
    "Linda": "010-5678-1234"
}


# friends["Jack"] == "010-1234-5678"
# friends["Linda"] == "010-5678-1234"




name = input("친구 이름: ")
if name in friends:
    num = friends[name]
    print(f"{name}의 전화번호는 {num}")
else:
    print("그런 친구는 없습니다")