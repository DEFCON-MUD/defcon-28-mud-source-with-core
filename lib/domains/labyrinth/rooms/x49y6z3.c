inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 3 }));
  set_short( "Corridor - x49y6z3" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y6z3.c",
  "north" : DIR+"/rooms/x49y7z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
