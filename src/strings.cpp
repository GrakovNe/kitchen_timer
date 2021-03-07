#include "strings.h"

char* get_string_by_position(int position) {
    switch (position) {
        case 0:
            return BLACK_TEA_STRING;
        case 1:
            return GREEN_TEA_STRING;
        case 2:
            return WHITE_TEA_STRING;
        case 3:
            return HERBAL_TEA_STRING;
        case 4:
            return ONE_MINUTE_STRING;
        case 5:
            return FIVE_MINUTES_STRING;
        case 6:
            return TEN_MINUTES_STRING;
        case 7:
            return FIFTEEN_MINUTES_STRING;
        case 8:
            return THIRTY_MINUTES_STRING;
        case 9:
            return SIXTY_MINUTES_STRING;
        default:
            return "";

    }
}