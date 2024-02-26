inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 20, 2 }));
  set_short( "Corridor - x33y20z2" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y21z2.c",
  "south" : DIR+"/rooms/x33y19z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
