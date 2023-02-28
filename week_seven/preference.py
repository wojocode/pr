import csv

with open("preference.csv" , "r") as file:
    reader = csv.DictReader(file)
    counts = dict()
    for row in reader:
        favorits = row["language"]
        if favorits in counts:
            counts[favorits]+= 1
        else:
            counts[favorits] = 1

#def get_value(language):
       # return counts[language]


for row in sorted(counts, key= lambda language : counts[language],reverse = True):
    print(f"{row}: {counts[row]}")