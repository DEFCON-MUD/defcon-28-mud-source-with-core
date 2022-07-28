inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 3 }));
  set_short( "Passage - x59y12z3" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y12z3.c",
  "east" : DIR+"/rooms/x60y12z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
