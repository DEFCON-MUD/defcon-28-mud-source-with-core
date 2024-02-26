inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 23, 8 }));
  set_short( "Hallway - x21y23z8" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y24z8.c",
  "south" : DIR+"/rooms/x21y22z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
