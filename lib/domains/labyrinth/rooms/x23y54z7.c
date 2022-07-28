inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 7 }));
  set_short( "Corridor - x23y54z7" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y55z7.c",
  "south" : DIR+"/rooms/x23y53z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
