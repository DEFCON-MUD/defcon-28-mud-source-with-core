inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 5 }));
  set_short( "Hallway - x3y48z5" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y48z5.c",
  "north" : DIR+"/rooms/x3y49z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
