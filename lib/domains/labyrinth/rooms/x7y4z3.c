inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 3 }));
  set_short( "Corridor - x7y4z3" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z3.c",
  "east" : DIR+"/rooms/x8y4z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
