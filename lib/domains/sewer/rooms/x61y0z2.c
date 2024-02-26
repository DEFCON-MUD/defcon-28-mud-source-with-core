inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 0, 2 }));
  set_short( "Hallway - x61y0z2" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y0z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
