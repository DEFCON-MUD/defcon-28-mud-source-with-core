inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 9 }));
  set_short( "Corridor - x59y8z9" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y8z9.c",
  "north" : DIR+"/rooms/x59y9z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
