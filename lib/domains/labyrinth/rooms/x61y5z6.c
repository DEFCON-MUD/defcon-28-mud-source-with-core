inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 5, 6 }));
  set_short( "Passage - x61y5z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y6z6.c",
  "south" : DIR+"/rooms/x61y4z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
