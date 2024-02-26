inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 0, 7 }));
  set_short( "Hallway - x57y0z7" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y0z7.c",
  "east" : DIR+"/rooms/x58y0z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
