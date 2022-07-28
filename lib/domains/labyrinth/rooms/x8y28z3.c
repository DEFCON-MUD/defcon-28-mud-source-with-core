inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 28, 3 }));
  set_short( "Hallway - x8y28z3" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y28z3.c",
  "east" : DIR+"/rooms/x9y28z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
