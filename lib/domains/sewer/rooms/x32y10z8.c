inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 10, 8 }));
  set_short( "Hallway - x32y10z8" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y10z8.c",
  "east" : DIR+"/rooms/x33y10z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
