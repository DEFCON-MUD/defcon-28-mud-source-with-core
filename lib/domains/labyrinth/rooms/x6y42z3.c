inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 42, 3 }));
  set_short( "Passage - x6y42z3" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y42z3.c",
  "east" : DIR+"/rooms/x7y42z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
