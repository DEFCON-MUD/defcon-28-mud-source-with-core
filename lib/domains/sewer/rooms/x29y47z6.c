inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 47, 6 }));
  set_short( "Corridor - x29y47z6" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y48z6.c",
  "south" : DIR+"/rooms/x29y46z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
