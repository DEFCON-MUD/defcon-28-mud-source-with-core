inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 57, 8 }));
  set_short( "Hallway - x33y57z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y58z8.c",
  "south" : DIR+"/rooms/x33y56z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
