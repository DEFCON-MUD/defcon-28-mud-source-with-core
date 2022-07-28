inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 35, 9 }));
  set_short( "Hallway - x7y35z9" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y36z9.c",
  "south" : DIR+"/rooms/x7y34z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
