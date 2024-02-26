inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 4 }));
  set_short( "Corridor - x49y52z4" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y53z4.c",
  "south" : DIR+"/rooms/x49y51z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
