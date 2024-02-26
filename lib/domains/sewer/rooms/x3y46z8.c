inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 8 }));
  set_short( "Corridor - x3y46z8" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y46z8.c",
  "east" : DIR+"/rooms/x4y46z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
