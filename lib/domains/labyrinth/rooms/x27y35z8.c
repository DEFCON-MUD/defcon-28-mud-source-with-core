inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 8 }));
  set_short( "Passage - x27y35z8" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z8.c",
  "south" : DIR+"/rooms/x27y34z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
