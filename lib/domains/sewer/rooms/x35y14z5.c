inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 5 }));
  set_short( "Corridor - x35y14z5" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y14z5.c",
  "south" : DIR+"/rooms/x35y13z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
