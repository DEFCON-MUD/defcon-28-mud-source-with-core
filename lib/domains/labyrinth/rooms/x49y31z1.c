inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 31, 1 }));
  set_short( "Hallway - x49y31z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y32z1.c",
  "south" : DIR+"/rooms/x49y30z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
