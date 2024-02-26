inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 46, 2 }));
  set_short( "Hallway - x60y46z2" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y46z2.c",
  "east" : DIR+"/rooms/x61y46z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
