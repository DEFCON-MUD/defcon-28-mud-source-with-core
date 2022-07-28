inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 21, 4 }));
  set_short( "Hallway - x35y21z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y22z4.c",
  "south" : DIR+"/rooms/x35y20z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
