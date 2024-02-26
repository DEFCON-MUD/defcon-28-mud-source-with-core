inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 42, 5 }));
  set_short( "Hallway - x3y42z5" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y42z5.c",
  "south" : DIR+"/rooms/x3y41z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
