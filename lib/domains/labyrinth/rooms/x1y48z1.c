inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 1 }));
  set_short( "Passage - x1y48z1" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y48z1.c",
  "south" : DIR+"/rooms/x1y47z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
