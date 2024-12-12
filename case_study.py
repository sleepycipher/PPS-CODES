import pandas as pd
import numpy as np

data = {'Product': ['A', 'B', 'C'],
        'Sales_Date': ['2023-01-01', '2023-01-02', '2023-01-03'],
        'Quantity_Sold': [10,20,30],
        'Region': ['North', 'South', 'East']}
df = pd.DataFrame(data)
df['Sales_Date'] = pd.to_datetime(df['Sales_Date'])

total_sales_product = df.groupby('Product')['Quantity_Sold'].sum()
total_sales_region = df.groupby('Region')['Quantity_Sold'].sum()

print(total_sales_product, total_sales_region)

mean_sales = np.mean(df['Quantity_Sold'])
std_sales = np.std(df['Quantity_Sold'])

print(f"Mean Sales: {mean_sales}, Std Dev of Sales: {std_sales}")