inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 2 }));
  set_short( "Passage - x57y54z2" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y55z2.c",
  "south" : DIR+"/rooms/x57y53z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
