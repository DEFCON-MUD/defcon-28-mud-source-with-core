inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 49, 4 }));
  set_short( "Corridor - x1y49z4" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y50z4.c",
  "south" : DIR+"/rooms/x1y48z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
