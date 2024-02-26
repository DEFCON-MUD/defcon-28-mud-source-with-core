inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 7 }));
  set_short( "Passage - x1y62z7" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z7.c",
  "south" : DIR+"/rooms/x1y61z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
