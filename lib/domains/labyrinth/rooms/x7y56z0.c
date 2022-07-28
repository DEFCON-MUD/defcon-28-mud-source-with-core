inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 0 }));
  set_short( "Hallway - x7y56z0" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y56z0.c",
  "south" : DIR+"/rooms/x7y55z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
