inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 16, 2 }));
  set_short( "Corridor - x41y16z2" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y16z2.c",
  "south" : DIR+"/rooms/x41y15z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
