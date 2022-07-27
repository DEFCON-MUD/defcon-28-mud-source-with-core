inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 39, 3 }));
  set_short( "Passage - x11y39z3" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y40z3.c",
  "south" : DIR+"/rooms/x11y38z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
