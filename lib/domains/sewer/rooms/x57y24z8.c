inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 8 }));
  set_short( "Passage - x57y24z8" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y24z8.c",
  "east" : DIR+"/rooms/x58y24z8.c",
  "south" : DIR+"/rooms/x57y23z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
