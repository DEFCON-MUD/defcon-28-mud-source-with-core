inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 50, 7 }));
  set_short( "Hallway - x24y50z7" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y50z7.c",
  "east" : DIR+"/rooms/x25y50z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
