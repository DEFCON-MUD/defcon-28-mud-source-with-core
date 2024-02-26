inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 52, 7 }));
  set_short( "Hallway - x30y52z7" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y52z7.c",
  "east" : DIR+"/rooms/x31y52z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
