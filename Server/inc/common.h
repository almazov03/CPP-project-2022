#pragma once

enum GameMessage {
    // Test (remove later)
    Send,

    // Client sending
    ON_KEY_PRESSED,
    CLIENT_DISCONNECT,

    // Server sending
    NEW_GAME_STATE,
    SERVER_STOP,
    CLIENT_ACCEPTED
};