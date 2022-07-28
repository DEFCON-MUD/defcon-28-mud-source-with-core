inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 62, 3 }));
  set_short( "Hallway - x51y62z3" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y62z3.c",
  "south" : DIR+"/rooms/x51y61z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
