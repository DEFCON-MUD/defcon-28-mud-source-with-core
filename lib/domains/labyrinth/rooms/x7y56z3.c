inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 3 }));
  set_short( "Passage - x7y56z3" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y56z3.c",
  "south" : DIR+"/rooms/x7y55z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
