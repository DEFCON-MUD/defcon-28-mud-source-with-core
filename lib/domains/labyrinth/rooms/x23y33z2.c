inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 2 }));
  set_short( "Hallway - x23y33z2" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z2.c",
  "south" : DIR+"/rooms/x23y32z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
