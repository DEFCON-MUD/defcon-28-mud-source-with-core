inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 21, 2 }));
  set_short( "Hallway - x35y21z2" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y22z2.c",
  "south" : DIR+"/rooms/x35y20z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
