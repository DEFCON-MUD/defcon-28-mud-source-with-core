inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 58, 8 }));
  set_short( "Passage - x38y58z8" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y58z8.c",
  "east" : DIR+"/rooms/x39y58z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
