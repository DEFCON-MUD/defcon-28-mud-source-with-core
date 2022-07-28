inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 20, 2 }));
  set_short( "Hallway - x20y20z2" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y20z2.c",
  "east" : DIR+"/rooms/x21y20z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
