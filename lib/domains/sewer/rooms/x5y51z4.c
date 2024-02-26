inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 51, 4 }));
  set_short( "Corridor - x5y51z4" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y52z4.c",
  "south" : DIR+"/rooms/x5y50z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
