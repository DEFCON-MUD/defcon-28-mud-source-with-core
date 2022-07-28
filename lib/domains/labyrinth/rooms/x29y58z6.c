inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 6 }));
  set_short( "Hallway - x29y58z6" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y58z6.c",
  "north" : DIR+"/rooms/x29y59z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
