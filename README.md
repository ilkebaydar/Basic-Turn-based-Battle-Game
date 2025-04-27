# Turn-Based Battle Game
>This project is based on Exercise 4 from the **Object Oriented Programming** course at **Istanbul Technical University**.  
>The exercise aims to reinforce object-oriented design patterns **inheritance**, **polymorphism**, and **basic game logic** through a simple game.
>Special thanks to  Res. Assist. Yusuf Kızılkaya at ITU for designing the exercise.

## About
In this project, the player faces off against an enemy in a turn-based battle.  
- The player can choose between two classes:
  - **ArmoredPlayer** (blocks first attack and takes reduced damage afterward)
  - **HealerPlayer** (has a small chance to heal during defense)
- The player can also select a weapon:
  - **Sword** ( Deals 60 damage by default. Each attack reduces damage by 5 until it reaches 30)
  - **Dagger** (Deals 30 damage with a 50% chance to hit twice.)

- The goal is to defeat the enemy before being defeated.
  
## Relationships between classes
- Player is an abstract class (has pure virtual defend()).
- ArmoredPlayer and HealerPlayer inherit from Player.
- Weapon is an abstract class.
- Sword and Dagger inherit from Weapon.
- Enemy is a simple class.
  
Game holds:
an ArmoredPlayer,
a HealerPlayer,
and an Enemy.

**Key Points**
- Weapon and Player are abstract base classes.
- Sword, Dagger, ArmoredPlayer, and HealerPlayer are concrete classes.
- Game owns players and enemy.

Dependency between classes:
- Player uses Weapon.
- Weapon attacks Enemy.
- Game manages the flow.

---

## How to Play
 Follow the prompts:
   - Select a weapon (Sword or Dagger)
   - Select a player class (Armored or Healer)
   - Take turns attacking the enemy and defending from attacks.
   - 
---

## Improvement Ideas
- Add difficulty levels (Easy, Hard)
- Add critical hits and evasion mechanics
- Display health bars after each turn

---

