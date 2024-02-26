inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 42, 6 }));
  set_short( "Corridor - x21y42z6" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y42z6.c",
  "south" : DIR+"/rooms/x21y41z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
