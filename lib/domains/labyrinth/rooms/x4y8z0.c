inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 8, 0 }));
  set_short( "Hallway - x4y8z0" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y8z0.c",
  "east" : DIR+"/rooms/x5y8z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
