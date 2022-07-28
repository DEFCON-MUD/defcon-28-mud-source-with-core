inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 46, 2 }));
  set_short( "Corridor - x4y46z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y46z2.c",
  "east" : DIR+"/rooms/x5y46z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
