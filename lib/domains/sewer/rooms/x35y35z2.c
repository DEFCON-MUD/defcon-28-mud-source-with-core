inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 35, 2 }));
  set_short( "Passage - x35y35z2" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y36z2.c",
  "south" : DIR+"/rooms/x35y34z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
