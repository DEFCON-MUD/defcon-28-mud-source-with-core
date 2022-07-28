inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 0 }));
  set_short( "Hallway - x25y30z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y30z0.c",
  "south" : DIR+"/rooms/x25y29z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
