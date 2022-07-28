inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 2 }));
  set_short( "Hallway - x1y21z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z2.c",
  "south" : DIR+"/rooms/x1y20z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
