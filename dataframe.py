import pandas as pd

data = {'Name': ['Alice', 'Bob', 'Charlie'],
        'Age': [25,30,28],
        'City': ['NY', 'LA', 'Chicago']}

df = pd.DataFrame(data)
print(df)