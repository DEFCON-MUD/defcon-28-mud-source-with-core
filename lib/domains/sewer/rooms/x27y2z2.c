inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 2 }));
  set_short( "Passage - x27y2z2" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y2z2.c",
  "north" : DIR+"/rooms/x27y3z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
