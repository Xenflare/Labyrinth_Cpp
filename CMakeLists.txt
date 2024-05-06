cmake_minimum_required(VERSION 3.28)
project(Labyrinth)

set(CMAKE_CXX_STANDARD 17)

add_executable(Labyrinth main.cpp
        Enemies.cpp
        Loot/Items.cpp
        AbilityClasses.cpp
        Player.cpp
        UseEvents.cpp
        Enchantments.cpp
        Loot/TableReader.cpp
        Loot/LootTables/Shop.cpp
        Loot/LootTables/Skeleton_Enemy.cpp
        Loot/LootTables/SkeletonTheif_Enemy.cpp
        Loot/LootTables/Unwilling_Enemy.cpp
        Loot/LootTables/Wood_Chest.cpp
        "Random Function.cpp")
