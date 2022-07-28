inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 7 }));
  set_short( "Hallway - x45y13z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z7.c",
  "south" : DIR+"/rooms/x45y12z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
