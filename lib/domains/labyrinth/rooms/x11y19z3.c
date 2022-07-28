inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 3 }));
  set_short( "Corridor - x11y19z3" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z3.c",
  "south" : DIR+"/rooms/x11y18z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
