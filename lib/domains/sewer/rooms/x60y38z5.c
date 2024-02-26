inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 38, 5 }));
  set_short( "Passage - x60y38z5" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y38z5.c",
  "east" : DIR+"/rooms/x61y38z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
