inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 62, 4 }));
  set_short( "Corridor - x52y62z4" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y62z4.c",
  "east" : DIR+"/rooms/x53y62z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
