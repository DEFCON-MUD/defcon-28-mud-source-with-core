inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 34, 5 }));
  set_short( "Passage - x32y34z5" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y34z5.c",
  "east" : DIR+"/rooms/x33y34z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
