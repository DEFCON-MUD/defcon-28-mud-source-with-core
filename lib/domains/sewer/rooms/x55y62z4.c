inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 4 }));
  set_short( "Corridor - x55y62z4" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y62z4.c",
  "south" : DIR+"/rooms/x55y61z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
