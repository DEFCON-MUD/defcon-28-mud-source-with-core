inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 49, 4 }));
  set_short( "Corridor - x41y49z4" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y50z4.c",
  "south" : DIR+"/rooms/x41y48z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
