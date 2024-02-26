inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 32, 6 }));
  set_short( "Passage - x60y32z6" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y32z6.c",
  "east" : DIR+"/rooms/x61y32z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
