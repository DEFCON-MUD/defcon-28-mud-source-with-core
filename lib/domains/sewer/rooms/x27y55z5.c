inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 55, 5 }));
  set_short( "Corridor - x27y55z5" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y56z5.c",
  "south" : DIR+"/rooms/x27y54z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
