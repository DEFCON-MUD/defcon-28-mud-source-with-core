inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 23, 4 }));
  set_short( "Corridor - x13y23z4" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y24z4.c",
  "south" : DIR+"/rooms/x13y22z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
