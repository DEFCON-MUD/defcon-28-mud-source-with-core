inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 55, 1 }));
  set_short( "Hallway - x1y55z1" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y56z1.c",
  "south" : DIR+"/rooms/x1y54z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
