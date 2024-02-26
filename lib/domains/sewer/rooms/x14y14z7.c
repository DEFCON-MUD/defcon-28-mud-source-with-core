inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 14, 7 }));
  set_short( "Passage - x14y14z7" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y14z7.c",
  "east" : DIR+"/rooms/x15y14z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
