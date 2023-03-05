CREATE TABLE students (
    id INTEGER NOT NULL,
    student_name TEXT NOT NULL,
    PRIMARY KEY(id)
);
CREATE TABLE houses (
    id INTEGER NOT NULL,
    house TEXT ,
    head TEXT ,
    PRIMARY KEY(id)
);
CREATE TABLE house_assignment (
    student_id  INT NOT NULL,
    house_id  INT NOT NULL,
    FOREIGN KEY(student_id) REFERENCES students(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);
