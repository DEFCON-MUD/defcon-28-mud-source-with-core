inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 7 }));
  set_short( "Hallway - x13y46z7" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y46z7.c",
  "north" : DIR+"/rooms/x13y47z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
