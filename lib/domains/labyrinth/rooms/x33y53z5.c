inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 53, 5 }));
  set_short( "Corridor - x33y53z5" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y54z5.c",
  "south" : DIR+"/rooms/x33y52z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
