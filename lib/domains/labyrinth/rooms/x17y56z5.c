inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 5 }));
  set_short( "Passage - x17y56z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y56z5.c",
  "north" : DIR+"/rooms/x17y57z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
