inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 30, 7 }));
  set_short( "Corridor - x4y30z7" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y30z7.c",
  "east" : DIR+"/rooms/x5y30z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
