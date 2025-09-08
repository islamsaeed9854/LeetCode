-- Step 1: Find the last price for each product on or before the target date
WITH LastPrices AS (
    SELECT
        product_id,
        new_price,
        -- Rank the changes for each product, with the most recent date getting rank 1
        ROW_NUMBER() OVER(PARTITION BY product_id ORDER BY change_date DESC) as rn
    FROM
        Products
    WHERE
        change_date <= '2019-08-16'
),
-- Step 2: Get a unique list of all products
AllProducts AS (
    SELECT DISTINCT product_id FROM Products
)
-- Step 3: Join all products with their calculated last price
SELECT
    p.product_id,
    -- If a product has no price on that date (lp.new_price is NULL), default to 10
    ISNULL(lp.new_price, 10) AS price
FROM
    AllProducts p
LEFT JOIN
    LastPrices lp ON p.product_id = lp.product_id AND lp.rn = 1;