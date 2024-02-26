inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 19, 2 }));
  set_short( "Passage - x13y19z2" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y20z2.c",
  "south" : DIR+"/rooms/x13y18z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
