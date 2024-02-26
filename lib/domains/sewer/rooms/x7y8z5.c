inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 5 }));
  set_short( "Passage - x7y8z5" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z5.c",
  "north" : DIR+"/rooms/x7y9z5.c",
  "south" : DIR+"/rooms/x7y7z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
