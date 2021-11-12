import pymysql

connection = pymysql.connect(host='gator3248.hostgator.com',
                             user='jayesh59_thirdpl',
                             password='villazeon',
                             database='jayesh59_thirdplacein',
                             charset='utf8mb4',
                             cursorclass=pymysql.cursors.DictCursor)

print(connection)

cursor = connection.cursor()

cursor.execute("show tables")
print(cursor.fetchall())
# cursor.execute("create table users(roll_no int primary key, fname varchar(200))")
# connection.commit()
cursor.execute("select * from users")
print(cursor.fetchall())

# while True:
# choice = int(input())
# if choice == 1:
#     fname = input()
#     rollno = input()
#     cursor.execute(f'insert into users values({int(rollno)}, "{str(fname)}")')
#     connection.commit()

# install pymysql
# install cryptography if error occurs

# logical

# physical view