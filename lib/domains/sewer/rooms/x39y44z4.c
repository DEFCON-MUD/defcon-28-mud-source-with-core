inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 4 }));
  set_short( "Corridor - x39y44z4" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y45z4.c",
  "south" : DIR+"/rooms/x39y43z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
