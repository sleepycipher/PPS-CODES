import pandas as pd
import numpy as np

data = { 'A': [1,2,np.nan],
        'B': [4,np.nan,6],
        'C': [7,8,9]}
df = pd.DataFrame(data)
df.fillna(0, inplace=True)
print(df)