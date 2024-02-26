inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 0, 3 }));
  set_short( "Hallway - x61y0z3" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y0z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
