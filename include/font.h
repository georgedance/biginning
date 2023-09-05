#ifndef FONT_H
#define FONT_H

#include <stdbool.h>

#define FONT_SIZE 128

// ASCII FONT

char font_char[FONT_SIZE] = {
    ' ',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '.', '!', '?', '#', '&'
};

bool font[FONT_SIZE][8][8] = {
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // NUL
    {1, 0, 1, 0, 1, 0, 1, 0},   // Null
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // SOH
    {1, 0, 1, 0, 1, 0, 1, 0},   // Start of Heading
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // STX
    {1, 0, 1, 0, 1, 0, 1, 0},   // Start of Text
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // ETX
    {1, 0, 1, 0, 1, 0, 1, 0},   // End of Text
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // ENQ
    {1, 0, 1, 0, 1, 0, 1, 0},   // Enquiry
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // ACK
    {1, 0, 1, 0, 1, 0, 1, 0},   // Acknowledge
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // BEL
    {1, 0, 1, 0, 1, 0, 1, 0},   // Bell
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // BS
    {1, 0, 1, 0, 1, 0, 1, 0},   // Backspace
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // HT
    {1, 0, 1, 0, 1, 0, 1, 0},   // Horizontal Tabulation
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // LF
    {1, 0, 1, 0, 1, 0, 1, 0},   // Line Feed
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // VT
    {1, 0, 1, 0, 1, 0, 1, 0},   // Vertical Tabulation
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // FF
    {1, 0, 1, 0, 1, 0, 1, 0},   // Form Feed
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // CR
    {1, 0, 1, 0, 1, 0, 1, 0},   // Carriage Return
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // SO
    {1, 0, 1, 0, 1, 0, 1, 0},   // Shift Out
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // SI
    {1, 0, 1, 0, 1, 0, 1, 0},   // Shift In
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // DLE
    {1, 0, 1, 0, 1, 0, 1, 0},   // Data Link Escape
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // DC1
    {1, 0, 1, 0, 1, 0, 1, 0},   // Device Control 1
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // DC2
    {1, 0, 1, 0, 1, 0, 1, 0},   // Device Control 2
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // DC3
    {1, 0, 1, 0, 1, 0, 1, 0},   // Device Control 3
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // DC4
    {1, 0, 1, 0, 1, 0, 1, 0},   // Device Control 4
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // NAK
    {1, 0, 1, 0, 1, 0, 1, 0},   // Negative Acknowledge
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // SYN
    {1, 0, 1, 0, 1, 0, 1, 0},   // Synchronous Idle
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // ETB
    {1, 0, 1, 0, 1, 0, 1, 0},   // End of Transmission Block
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // CAN
    {1, 0, 1, 0, 1, 0, 1, 0},   // Cancel
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // EM
    {1, 0, 1, 0, 1, 0, 1, 0},   // End of Medium
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // SUB
    {1, 0, 1, 0, 1, 0, 1, 0},   // Substitute
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // ESC
    {1, 0, 1, 0, 1, 0, 1, 0},   // Escape
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // FS
    {1, 0, 1, 0, 1, 0, 1, 0},   // File Separator
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // GS
    {1, 0, 1, 0, 1, 0, 1, 0},   // Group Separator
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // RS
    {1, 0, 1, 0, 1, 0, 1, 0},   // Record Separator
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // US
    {1, 0, 1, 0, 1, 0, 1, 0},   // Unit Separator
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0}, // SPACE
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // EXCLAMATION MARK
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},   // "
    {0, 1, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 1, 0, 0, 1, 0, 0, 0}, // HASH SIGN
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0}
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0, 0, 0, 0},   // DOLLAR SIGN
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 1, 0, 0, 0, 0},
    },
    {
    {0, 1, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 0, 0, 1, 0, 0},   // %
    {0, 1, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // AMPERSAND 
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0},
    {1, 1, 0, 0, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 1, 0, 0}
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},   // '
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},   // (
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},   // )
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},   // *
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},   // +
    {0, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // ,
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // -
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0}, // FULLSTOP
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},   // /
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // 0
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 1, 1, 1, 0, 0},
    {1, 1, 1, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 1, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0}, // 2
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0}, // 3
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 0, 1, 1, 0, 0, 0}, // 4
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // 5
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0}, // 6
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0}, // 8
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0}, // 9
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // :
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // ;
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // <
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // =
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // >
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // QUESTION MARK
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 0, 0, 0, 0, 1, 0, 0},   // @
    {1, 0, 0, 0, 0, 1, 0, 0},
    {1, 0, 1, 1, 0, 1, 0, 0},
    {1, 0, 1, 1, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 1, 0, 0},
    {1, 0, 0, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // A
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 0, 0, 0, 0}, // B
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 0, 1, 1, 1, 1, 0, 0}, // C
    {0, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 0, 0, 0, 0}, // D
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // E
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // F
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0}
    },
    {
    {0, 0, 1, 1, 1, 1, 0, 0}, // G
    {0, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // H
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // I
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {0, 0, 0, 0, 1, 1, 0, 0}, // J
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // K
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 0, 0, 0, 0, 0, 0}, // L
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {1, 0, 0, 0, 0, 1, 0, 0}, // M
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 0, 0, 0, 1, 1, 0, 0}, // N
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // O
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 0, 0, 0, 0}, // P
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // Q
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 0, 0, 0, 0}, // R
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    },
    {
    {0, 1, 1, 1, 1, 1, 0, 0}, // S
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // T
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // U
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // V
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // W
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 0, 0, 0, 0, 1, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // X
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // Y
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // Z
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},   // [
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    },
    {
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},   /* \ */
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    },
    {
    {0, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},   // ]
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0, 0, 0},
    },
    {
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 1, 0, 1, 0, 0, 0},   // ^
    {0, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},   // _
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},   // `
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {                               // LOWER CASE APLHABET
    {0, 0, 0, 0, 0, 0, 0, 0}, // a
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0}
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0}, // b
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0}, // c
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0}, // d
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0}
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0}, // e
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // F
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0}
    },
    {
    {0, 0, 1, 1, 1, 1, 0, 0}, // G
    {0, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // H
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // I
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {0, 0, 0, 0, 1, 1, 0, 0}, // J
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // K
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 0, 0, 0, 0, 0, 0}, // L
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {1, 0, 0, 0, 0, 1, 0, 0}, // M
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 0, 0, 0, 1, 1, 0, 0}, // N
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // O
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 0, 0, 0, 0}, // P
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0}, // Q
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 1, 0, 0}
    },
    {
    {1, 1, 1, 1, 0, 0, 0, 0}, // R
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    },
    {
    {0, 1, 1, 1, 1, 1, 0, 0}, // S
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // T
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // U
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // V
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // W
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 0, 0, 0, 0, 1, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // X
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0}
    },
    {
    {1, 1, 0, 0, 1, 1, 0, 0}, // Y
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0}
    },
    {
    {1, 1, 1, 1, 1, 1, 0, 0}, // Z
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0}
    },
    {
    {0, 0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},   // {
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
    },
    {
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},   // |
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},   // }
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    },
    {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 1, 0, 0},   // ~
    {1, 0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
    {1, 0, 1, 0, 1, 0, 1, 0}, // DEL
    {1, 0, 1, 0, 1, 0, 1, 0},   // Delete
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {1, 0, 1, 0, 1, 0, 1, 0},
    }
};

#endif
