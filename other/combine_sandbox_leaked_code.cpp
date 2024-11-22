#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <string>
#include <random>

namespace CombineSandbox2023 {

    const std::string FOUNDER = "GuestSneeze";

    // Combine Sandbox Settings
    struct SandboxSettings {
        bool enable_combine_overlords = true;
        bool infinite_ammo = true;
        bool friendly_fire = false;
        int number_of_npcs = 50;  // Random, excessive number of NPCs
        int number_of_metrocops = 25;
    };

    class NPC {
    public:
        NPC(std::string type, int id)
            : npcType(type), npcID(id) {
            std::cout << "Combine NPC Created: " << npcType << " #" << npcID << std::endl;
        }

        void shoutCombinePhrase() {
            std::string phrases[] = {
                "Citizen! Get down!",
                "Anti-citizen detected!",
                "Prepare for doing it!",
                "You have been warned!",
                "Prepare for mandatory compliance!"
            };
            std::cout << "[Combine NPC #" << npcID << "] " << phrases[rand() % 5] << std::endl;
        }

    private:
        std::string npcType;
        int npcID;
    };

    // Spawns an army of NPCs and shouts phrases in Combine style
    void spawnNPCArmy(SandboxSettings settings) {
        std::vector<NPC> npcs;
        for (int i = 0; i < settings.number_of_npcs; ++i) {
            NPC npc("Combine Soldier", i);
            npc.shoutCombinePhrase();
            npcs.push_back(npc);
            std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Adds suspense!
        }
    }

    // Simulates an "Overlord" process that does nothing productive
    void activateCombineOverlords(SandboxSettings settings) {
        if (settings.enable_combine_overlords) {
            std::cout << "Activating Combine Overlords..." << std::endl;
            for (int i = 0; i < 10; ++i) {
                std::cout << "[Overlord] Monitoring anti-citizens..." << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(500));
            }
            std::cout << "Combine Overlords have gone back to rest." << std::endl;
        }
    }

    // Main sandbox function that combines all the nonsense into one place
    void runSandbox() {
        SandboxSettings settings;
        std::cout << "Initializing Combine Sandbox for Source 2013 SDK by " << FOUNDER << "..." << std::endl;

        // Spawning NPC army
        spawnNPCArmy(settings);

        // Activate Combine Overlords in the background
        std::thread overlordThread(activateCombineOverlords, settings);
        overlordThread.detach();

        std::cout << "Welcome to the Combine Sandbox, citizen!" << std::endl;
    }

} // namespace CombineSandbox2024

int main() {
    std::cout << "Starting Combine Sandbox Mod...\n";
    CombineSandbox2023::runSandbox();
    std::cout << "Combine Sandbox Mod Complete. You are not free to go, citizen." << std::endl;

    return 0;
}
