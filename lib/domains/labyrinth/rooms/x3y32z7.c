inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 7 }));
  set_short( "Hallway - x3y32z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y32z7.c",
  "east" : DIR+"/rooms/x4y32z7.c",
  "north" : DIR+"/rooms/x3y33z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
