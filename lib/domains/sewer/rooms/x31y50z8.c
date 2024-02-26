inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 50, 8 }));
  set_short( "Passage - x31y50z8" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y50z8.c",
  "north" : DIR+"/rooms/x31y51z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
