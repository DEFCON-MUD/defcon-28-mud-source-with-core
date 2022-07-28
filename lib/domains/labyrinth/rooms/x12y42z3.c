inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 42, 3 }));
  set_short( "Hallway - x12y42z3" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y42z3.c",
  "east" : DIR+"/rooms/x13y42z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
