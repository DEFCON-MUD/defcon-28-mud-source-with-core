inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 6 }));
  set_short( "Corridor - x3y64z6" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z6.c",
  "east" : DIR+"/rooms/x4y64z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
