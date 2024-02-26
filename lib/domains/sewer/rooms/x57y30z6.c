inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 6 }));
  set_short( "Passage - x57y30z6" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y30z6.c",
  "east" : DIR+"/rooms/x58y30z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
