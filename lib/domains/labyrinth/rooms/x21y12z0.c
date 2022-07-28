inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 0 }));
  set_short( "Corridor - x21y12z0" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z0.c",
  "south" : DIR+"/rooms/x21y11z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
