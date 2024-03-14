
#include "Header1.h"
#include <iostream>
#include <string>
#include <utility>
#include <vector>

double calculate(double ibags, int iboxes, double fBagWeight, int fBoxWeight) {
    int weight1 = iboxes * fBoxWeight;
    double weight2 = ibags * fBagWeight;
    double weight3 = weight1 + weight2;
    return weight3;
}

int calculateDough(int iDisks, int iBoxes, int iBoxcount) {
    int count1 = iBoxes * iBoxcount;
    int count2 = count1 + iDisks;
    return count2;
}

int main()
{
    int itemType = 0;
    std::vector<std::pair<std::string, double>> items;

    while (itemType != 9) {
        std::cout << "------------------------------------------------\n";
        std::cout << "What kind of item would you like to add to inventory?\n";
        std::cout << "1. Dough\n" << "2. Meat/Mushrooms\n" << "3. Starry\n";
        std::cout << "4. I would like to view the total inventory.\n";
        std::cout << "5. Exit\n";
        std::cin >> itemType;
        std::cout << "------------------------------------------------\n";
        if (itemType == 1) {


            int doughType = 0;
            int doughBoxes;
            int doughDisks;
            bool confirmed = false;
            std::string confirmation;
            std::cout << "------------------------------------------------\n";
            std::cout << "Which type of dough would you like to add?\n";
            std::cout << "1. 12 inch Hand Tossed\n2. 14 inch Hand Tossed\n3. 12 inch Pan\n4. 14 inch Pan\n5. Rectangle\n";
            std::cin >> doughType;
            std::cout << "------------------------------------------------\n";
            switch (doughType) {
            case 1:
                while (!confirmed) {
                    std::cout << "How many disks?\n";
                    std::cin >> doughDisks;
                    std::cout << "How many boxes?\n";
                    std::cin >> doughBoxes;
                    std::cout << "You would like to add " << doughDisks << " disks and " << doughBoxes << " boxes of 12 inch Hand Tossed. Is that correct?\n";
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        mht newMht(doughDisks, doughBoxes);
                        double result = calculateDough(doughDisks, doughBoxes, newMht.boxCount);
                        std::cout << "The total count for 12 inch Hand Tossed is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("12 inch Hand Tossed", result));
                    }
                }
                break;
            case 2:
                while (!confirmed) {
                    std::cout << "How many disks?\n";
                    std::cin >> doughDisks;
                    std::cout << "How many boxes?\n";
                    std::cin >> doughBoxes;
                    std::cout << "You would like to add " << doughDisks << " disks and " << doughBoxes << " boxes of 14 inch Hand Tossed. Is that correct?\n";
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        lht newLht(doughDisks, doughBoxes);
                        double result = calculateDough(doughDisks, doughBoxes, newLht.boxCount);
                        std::cout << "The total count for 14 inch Hand Tossed is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("14 inch Hand Tossed", result));
                    }
                }
                break;
            case 3:
                while (!confirmed) {
                    std::cout << "How many disks?\n";
                    std::cin >> doughDisks;
                    std::cout << "How many boxes?\n";
                    std::cin >> doughBoxes;
                    std::cout << "You would like to add " << doughDisks << " disks and " << doughBoxes << " boxes of 12 inch Pan. Is that correct?\n";
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        mp newMp(doughDisks, doughBoxes);
                        double result = calculateDough(doughDisks, doughBoxes, newMp.boxCount);
                        std::cout << "The total count for 12 inch Pan is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("12 inch Pan", result));
                    }
                }
                break;
            case 4:
                while (!confirmed) {
                    std::cout << "How many disks?\n";
                    std::cin >> doughDisks;
                    std::cout << "How many boxes?\n";
                    std::cin >> doughBoxes;
                    std::cout << "You would like to add " << doughDisks << " disks and " << doughBoxes << " boxes of 14 inch Pan. Is that correct?\n";
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        lp newLp(doughDisks, doughBoxes);
                        double result = calculateDough(doughDisks, doughBoxes, newLp.boxCount);
                        std::cout << "The total count for  14 inch Pan is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("14 inch Pan", result));
                    }
                }
                break;
            case 5:
                while (!confirmed) {
                    std::cout << "How many disks?\n";
                    std::cin >> doughDisks;
                    std::cout << "How many boxes?\n";
                    std::cin >> doughBoxes;
                    std::cout << "You would like to add " << doughDisks << " disks and " << doughBoxes << " boxes of Rectangle. Is that correct?\n";
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        rct newRct(doughDisks, doughBoxes);
                        double result = calculateDough(doughDisks, doughBoxes, newRct.boxCount);
                        std::cout << "The total count for Rectangle is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Rectangle", result));
                    }
                }
                break;
            }
        }

        else if (itemType == 2) {



            int meatType = 0;
            int meatBoxes;
            double meatBags;
            bool confirmed = false;
            std::string confirmation;
            std::cout << "------------------------------------------------\n";
            std::cout << "Which item would you like to add?\n";
            std::cout << "1. Chicken\n2. Bacon\n3. Pepperoni\n4. Ham\n5. Sausage\n6. Mushrooms\n";
            std::cin >> meatType;
            std::cout << "------------------------------------------------\n";

            switch (meatType) {
            case 1:
                while (!confirmed) {
                    std::cout << "How many boxes?\n";
                    std::cin >> meatBoxes;
                    std::cout << "How many bags?\n";
                    std::cin >> meatBags;
                    std::cout << "You would like to add " << meatBoxes << " boxes of Chicken and " << meatBags << " bags of Chicken. Is that correct? Y/N\n"; //Chicken Case
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        chicken newChicken(meatBoxes, meatBags);
                        double result = calculate(meatBags, meatBoxes, newChicken.bagWeight, newChicken.intWeight);
                        std::cout << "The total weight in pounds for Chicken is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Chicken", result));
                    }

                }
                break;

            case 2:
                while (!confirmed) {
                    std::cout << "How many boxes?\n";
                    std::cin >> meatBoxes;
                    std::cout << "How many bags?\n";
                    std::cin >> meatBags;
                    std::cout << "You would like to add " << meatBoxes << " boxes of Bacon and " << meatBags << " bags of Bacon. Is that correct? Y/N\n";//Bacon Case
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        bacon newBacon(meatBoxes, meatBags);
                        double result = calculate(meatBags, meatBoxes, newBacon.bagWeight, newBacon.intWeight);
                        std::cout << "The total weight in pounds for Bacon is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Bacon", result));
                    }
                }
                break;
            case 3:
                while (!confirmed) {
                    std::cout << "How many boxes?\n";
                    std::cin >> meatBoxes;
                    std::cout << "How many bags?\n";
                    std::cin >> meatBags;
                    std::cout << "You would like to add " << meatBoxes << " boxes of Peperroni and " << meatBags << " bags of Peperroni. Is that correct? Y/N\n";//Peperroni Case
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        bacon newPeperroni(meatBoxes, meatBags);
                        double result = calculate(meatBags, meatBoxes, newPeperroni.bagWeight, newPeperroni.intWeight);
                        std::cout << "The total weight in pounds for Peperroni is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Peperroni", result));
                    }
                }
                break;
            case 4:
                while (!confirmed) {
                    std::cout << "How many boxes?\n";
                    std::cin >> meatBoxes;
                    std::cout << "How many bags?\n";
                    std::cin >> meatBags;
                    std::cout << "You would like to add " << meatBoxes << " boxes of Ham and " << meatBags << " bags of Ham. Is that correct? Y/N\n"; //Ham Case
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        peperroni newHam(meatBoxes, meatBags);
                        double result = calculate(meatBags, meatBoxes, newHam.bagWeight, newHam.intWeight);
                        std::cout << "The total weight in pounds for Ham is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Ham", result));
                    }
                }
                break;
            case 5:
                while (!confirmed) {
                    std::cout << "How many boxes?\n";
                    std::cin >> meatBoxes;
                    std::cout << "How many bags?\n";
                    std::cin >> meatBags;
                    std::cout << "You would like to add " << meatBoxes << " boxes of Sausage and " << meatBags << " bags of Sausage. Is that correct? Y/N\n"; //Sausage Case
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        ham newSausage(meatBoxes, meatBags);
                        double result = calculate(meatBags, meatBoxes, newSausage.bagWeight, newSausage.intWeight);
                        std::cout << "The total weight in pounds for Sausage is " << result << " and has been added to the list.\n";
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Sausage", result));
                    }
                }
                break;
            case 6:
                while (!confirmed) {
                    std::cout << "How many boxes?\n";
                    std::cin >> meatBoxes;
                    std::cout << "You would like to add " << meatBoxes << " boxes of Mushrooms. Is that correct? Y/N\n";
                    std::cin >> confirmation;
                    if (confirmation == "Y" || confirmation == "y") {
                        confirmed = true;
                        mushrooms newMushroom(meatBoxes);
                        double result = calculate(0, meatBoxes, 0, newMushroom.intWeight);
                        std::cout << "The total weight in pounds for Mushrooms is " << result << " and has been added to the list.\n"; //Mushroom case
                        std::cout << "------------------------------------------------\n";
                        items.push_back(std::make_pair("Mushrooms", result));
                    }
                }
                break;
            }
        }
        else if (itemType == 3) {
            int starryCount;
            std::cout << "------------------------------------------------\n";
            std::cout << "How many bottles of Starry?\n";
            std::cin >> starryCount;
            std::cout << "------------------------------------------------\n";
            items.push_back(std::make_pair("Starry", starryCount));
        }
        else if (itemType == 4) {
            std::cout << "------------------------------------------------\n";
            for (const auto& item : items) {
                std::cout << item.first << ": " << item.second << "\n";
            }
            std::cout << "------------------------------------------------\n";
        }
        else {
            return 0;
        } // Ending area to add, calculate, and push_back meats to vector.
    }
}

