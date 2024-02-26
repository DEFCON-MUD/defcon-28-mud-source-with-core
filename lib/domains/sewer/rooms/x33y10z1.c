inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 1 }));
  set_short( "Hallway - x33y10z1" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y10z1.c",
  "east" : DIR+"/rooms/x34y10z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
