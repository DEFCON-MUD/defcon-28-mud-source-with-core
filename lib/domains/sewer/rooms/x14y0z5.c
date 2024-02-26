inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 0, 5 }));
  set_short( "Passage - x14y0z5" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y0z5.c",
  "east" : DIR+"/rooms/x15y0z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
