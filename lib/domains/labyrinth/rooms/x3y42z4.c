inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 42, 4 }));
  set_short( "Hallway - x3y42z4" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y42z4.c",
  "south" : DIR+"/rooms/x3y41z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
