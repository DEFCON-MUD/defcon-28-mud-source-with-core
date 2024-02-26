inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 4, 6 }));
  set_short( "Corridor - x37y4z6" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y4z6.c",
  "north" : DIR+"/rooms/x37y5z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
