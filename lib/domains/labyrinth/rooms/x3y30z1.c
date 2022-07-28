inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 30, 1 }));
  set_short( "Corridor - x3y30z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y30z1.c",
  "north" : DIR+"/rooms/x3y31z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
