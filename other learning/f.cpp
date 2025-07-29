#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

struct Fighter {
    string name;
    int hp;
    int maxHp;
    int atk;
    int def;
    string visual[5];  // ASCII figure
};

void drawHealthBar(int hp, int maxHp) {
    int width = 20;
    int filled = (hp * width) / maxHp;
    for (int i = 0; i < width; ++i)
        cout << (i < filled ? '#' : '-');
    cout << " " << hp << "/" << maxHp;
}

void drawArena(Fighter &hero, Fighter &enemy, int spacing = 15) {
    cout << "════════════ ⚔️ BATTLE ARENA ⚔️ ════════════\n";
    cout << hero.name << "\t\t\t\t" << enemy.name << "\n";

    // Draw visuals line by line
    for (int i = 0; i < 5; ++i) {
        cout << hero.visual[i];
        for (int s = 0; s < spacing; ++s) cout << " ";
        cout << enemy.visual[i] << "\n";
    }

    drawHealthBar(hero.hp, hero.maxHp);
    cout << "\t\t";
    drawHealthBar(enemy.hp, enemy.maxHp);
    cout << "\n═══════════════════════════════════════════\n";
}

void animateHit(Fighter &attacker, Fighter &defender, int &defHp, int spacing) {
    for (int step = 0; step <= 4; ++step) {
        system("clear"); // use "cls" if on Windows
        drawArena(attacker, defender, spacing - step);
        sleep_for(milliseconds(100));
    }
    int damage = rand() % attacker.atk + 5;
    defHp -= damage;
    if (defHp < 0) defHp = 0;
    cout << attacker.name << " hits " << defender.name << " for " << damage << " damage!\n";
    sleep_for(milliseconds(1000));
}

int main() {
    srand(time(0));
    Fighter hero = {
        "Emmy", 100, 100, 20, 10,
        {
            " O ",   // Head
            "/|\\",  // Arms
            " | ",   // Body
            "/ \\",  // Legs
            "/ \\ "  // Ground
        }
    };

    Fighter enemy = {
        "Goblin", 80, 80, 15, 5,
        {
            " @ ",   // Head
            "/M\\",  // Arms
            " | ",   // Body
            "/^\\",  // Legs
            "/ \\ "  // Ground
        }
    };

    while (hero.hp > 0 && enemy.hp > 0) {
        system("clear"); // "cls" if on Windows
        drawArena(hero, enemy);

        cout << "Choose: (a) Attack, (d) Defend, (h) Heal > ";
        char move;
        cin >> move;

        if (move == 'a') {
            animateHit(hero, enemy, enemy.hp, 15);
        } else if (move == 'h') {
            int heal = 15;
            hero.hp += heal;
            if (hero.hp > hero.maxHp) hero.hp = hero.maxHp;
            cout << hero.name << " heals +" << heal << " HP.\n";
            sleep_for(milliseconds(800));
        } else if (move == 'd') {
            cout << hero.name << " prepares to defend.\n";
            sleep_for(milliseconds(800));
        } else {
            cout << "Invalid move.\n";
            sleep_for(milliseconds(500));
        }

        // Enemy turn
        if (enemy.hp > 0) {
            animateHit(enemy, hero, hero.hp, 15);
        }
    }

    // Result
    system("clear");
    drawArena(hero, enemy);
    if (hero.hp > 0)
        cout << "🏆 " << hero.name << " wins the battle!\n";
    else
        cout << "💀 " << enemy.name << " was victorious!\n";

    return 0;
}
