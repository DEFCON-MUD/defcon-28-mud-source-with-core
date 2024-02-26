inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 5, 9 }));
  set_short( "Passage - x31y5z9" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y6z9.c",
  "south" : DIR+"/rooms/x31y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
