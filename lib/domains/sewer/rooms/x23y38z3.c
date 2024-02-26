inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 3 }));
  set_short( "Passage - x23y38z3" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y39z3.c",
  "south" : DIR+"/rooms/x23y37z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
