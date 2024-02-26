inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 0 }));
  set_short( "Corridor - x19y48z0" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y48z0.c",
  "east" : DIR+"/rooms/x20y48z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
