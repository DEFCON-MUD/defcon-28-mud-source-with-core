inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 0 }));
  set_short( "Corridor - x35y54z0" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z0.c",
  "south" : DIR+"/rooms/x35y53z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
