inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 0 }));
  set_short( "Corridor - x43y24z0" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y24z0.c",
  "north" : DIR+"/rooms/x43y25z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
