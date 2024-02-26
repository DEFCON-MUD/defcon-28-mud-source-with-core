inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 9 }));
  set_short( "Hallway - x11y14z9" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y14z9.c",
  "south" : DIR+"/rooms/x11y13z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
