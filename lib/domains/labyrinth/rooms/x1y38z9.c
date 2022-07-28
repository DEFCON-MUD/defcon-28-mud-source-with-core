inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 9 }));
  set_short( "Passage - x1y38z9" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z9.c",
  "north" : DIR+"/rooms/x1y39z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
