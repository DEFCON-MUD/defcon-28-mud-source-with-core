inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 23, 5 }));
  set_short( "Corridor - x23y23z5" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y24z5.c",
  "south" : DIR+"/rooms/x23y22z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
