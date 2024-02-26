inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 50, 5 }));
  set_short( "Hallway - x2y50z5" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y50z5.c",
  "east" : DIR+"/rooms/x3y50z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
