inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 9, 4 }));
  set_short( "Corridor - x13y9z4" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y10z4.c",
  "south" : DIR+"/rooms/x13y8z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
