inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 2 }));
  set_short( "Passage - x25y38z2" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y38z2.c",
  "east" : DIR+"/rooms/x26y38z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
