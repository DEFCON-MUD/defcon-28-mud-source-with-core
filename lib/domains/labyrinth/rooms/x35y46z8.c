inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 8 }));
  set_short( "Hallway - x35y46z8" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y46z8.c",
  "east" : DIR+"/rooms/x36y46z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
