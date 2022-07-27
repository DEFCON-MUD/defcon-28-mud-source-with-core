inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 21, 9 }));
  set_short( "Hallway - x25y21z9" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y22z9.c",
  "south" : DIR+"/rooms/x25y20z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
