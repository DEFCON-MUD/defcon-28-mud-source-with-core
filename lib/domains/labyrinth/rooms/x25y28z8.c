inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 8 }));
  set_short( "Corridor - x25y28z8" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z8.c",
  "south" : DIR+"/rooms/x25y27z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
