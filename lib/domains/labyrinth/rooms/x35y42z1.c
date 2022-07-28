inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 1 }));
  set_short( "Corridor - x35y42z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y42z1.c",
  "south" : DIR+"/rooms/x35y41z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
