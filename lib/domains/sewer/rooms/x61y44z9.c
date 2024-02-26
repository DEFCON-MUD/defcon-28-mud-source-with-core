inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 44, 9 }));
  set_short( "Passage - x61y44z9" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y44z9.c",
  "north" : DIR+"/rooms/x61y45z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
