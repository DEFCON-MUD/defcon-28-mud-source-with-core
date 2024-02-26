inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 2 }));
  set_short( "Hallway - x19y36z2" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y37z2.c",
  "south" : DIR+"/rooms/x19y35z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
