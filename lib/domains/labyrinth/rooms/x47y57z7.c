inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 57, 7 }));
  set_short( "Corridor - x47y57z7" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y58z7.c",
  "south" : DIR+"/rooms/x47y56z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
