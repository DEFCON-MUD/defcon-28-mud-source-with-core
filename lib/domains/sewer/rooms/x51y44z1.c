inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 1 }));
  set_short( "Corridor - x51y44z1" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y44z1.c",
  "east" : DIR+"/rooms/x52y44z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
