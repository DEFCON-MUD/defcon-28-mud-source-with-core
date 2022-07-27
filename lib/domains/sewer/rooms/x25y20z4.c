inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 4 }));
  set_short( "Corridor - x25y20z4" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y20z4.c",
  "north" : DIR+"/rooms/x25y21z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
