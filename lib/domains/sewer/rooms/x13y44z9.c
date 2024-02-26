inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 9 }));
  set_short( "Passage - x13y44z9" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y45z9.c",
  "south" : DIR+"/rooms/x13y43z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
