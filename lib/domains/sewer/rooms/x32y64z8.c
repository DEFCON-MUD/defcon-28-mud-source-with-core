inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 64, 8 }));
  set_short( "Passage - x32y64z8" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y64z8.c",
  "east" : DIR+"/rooms/x33y64z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
