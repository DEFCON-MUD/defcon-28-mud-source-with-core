inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 8 }));
  set_short( "Passage - x47y18z8" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z8.c",
  "north" : DIR+"/rooms/x47y19z8.c",
  "south" : DIR+"/rooms/x47y17z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
