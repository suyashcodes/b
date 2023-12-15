# In second year computer engineering class, group A student’s play cricket, group B students play badminton and group C students play football.
num_cricket = int(input("Enter number of cricket players : "))
num_football = int(input("Enter number of football players : "))
num_badminton = int(input("Enter number of badminton players : "))

def get_players(size):
    players_li = []
    for i in range(size):
        name = input(f"Enter player's name : ")
        players_li.append(name)
    return players_li

def intersection(l1,l2):
    players = []
    for element in l1:
        if element in l2:
            players.append(element)
    return players

def symmetric_difference(l1,l2):
    players = []
    for element in l1:
        if element not in l2:
            players.append(element)
    for element in l2:
        if element not in l1:
            players.append(element)
    return players

def neither_cricket_nor_badminton(all,cricket,badminto):
    players = []
    for player in all:
        if player not in cricket and player not in badminto:
            players.append(player)
    return players

def cricket_and_football_but_not_badminton(cricket,badminton,football):
    common = intersection(cricket,football)
    players = []
    for element in common:
        if element not in badminton:
            players.append(element)
    return players

print("Enter cricket players : ")
cricket = get_players(num_cricket)
print("Enter badminton players : ")
badminton = get_players(num_badminton)
print("Enter football players : ")
football = get_players(num_football)
all = cricket+badminton+football

c_and_b = intersection(cricket,badminton)
print("List of students who play both cricket and badminton : ",c_and_b)
c_and_b = symmetric_difference(cricket,badminton)
print("List of students who play either cricket or badminton but not both : ",c_and_b)
c_and_b = neither_cricket_nor_badminton(all,cricket,badminton)
print("Number of students who play neither cricket nor badminton : ",len(c_and_b))
c_and_b = cricket_and_football_but_not_badminton(cricket,badminton,football)
print("Number of students who play cricket and football but not badminton. : ",len(c_and_b))