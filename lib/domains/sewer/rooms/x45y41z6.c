inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 41, 6 }));
  set_short( "Hallway - x45y41z6" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y42z6.c",
  "south" : DIR+"/rooms/x45y40z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
