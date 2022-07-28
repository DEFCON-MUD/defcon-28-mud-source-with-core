inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 3, 1 }));
  set_short( "Corridor - x19y3z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y4z1.c",
  "south" : DIR+"/rooms/x19y2z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
