inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 5, 4 }));
  set_short( "Hallway - x29y5z4" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y6z4.c",
  "south" : DIR+"/rooms/x29y4z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
