inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 5 }));
  set_short( "Hallway - x36y64z5" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z5.c",
  "east" : DIR+"/rooms/x37y64z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
