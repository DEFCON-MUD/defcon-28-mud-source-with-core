inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 21, 1 }));
  set_short( "Passage - x25y21z1" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y22z1.c",
  "south" : DIR+"/rooms/x25y20z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
