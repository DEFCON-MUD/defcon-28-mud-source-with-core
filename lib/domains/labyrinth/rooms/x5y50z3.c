inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 3 }));
  set_short( "Corridor - x5y50z3" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y50z3.c",
  "east" : DIR+"/rooms/x6y50z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
