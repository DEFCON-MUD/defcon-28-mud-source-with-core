inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 5 }));
  set_short( "Passage - x17y50z5" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y50z5.c",
  "south" : DIR+"/rooms/x17y49z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
