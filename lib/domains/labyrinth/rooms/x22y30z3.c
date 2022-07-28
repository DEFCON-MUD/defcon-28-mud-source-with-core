inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 30, 3 }));
  set_short( "Corridor - x22y30z3" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y30z3.c",
  "east" : DIR+"/rooms/x23y30z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
