inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 55, 6 }));
  set_short( "Hallway - x29y55z6" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y56z6.c",
  "south" : DIR+"/rooms/x29y54z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
