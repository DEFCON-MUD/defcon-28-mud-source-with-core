inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 7 }));
  set_short( "Hallway - x3y50z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y51z7.c",
  "south" : DIR+"/rooms/x3y49z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
