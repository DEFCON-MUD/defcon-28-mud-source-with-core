inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 11, 1 }));
  set_short( "Hallway - x5y11z1" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y12z1.c",
  "south" : DIR+"/rooms/x5y10z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
