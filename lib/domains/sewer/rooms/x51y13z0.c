inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 13, 0 }));
  set_short( "Passage - x51y13z0" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y14z0.c",
  "south" : DIR+"/rooms/x51y12z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
