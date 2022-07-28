inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 3 }));
  set_short( "Hallway - x55y34z3" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y34z3.c",
  "south" : DIR+"/rooms/x55y33z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
