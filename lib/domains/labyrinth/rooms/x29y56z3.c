inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 3 }));
  set_short( "Corridor - x29y56z3" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y56z3.c",
  "north" : DIR+"/rooms/x29y57z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
