inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 18, 3 }));
  set_short( "Passage - x58y18z3" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y18z3.c",
  "east" : DIR+"/rooms/x59y18z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
