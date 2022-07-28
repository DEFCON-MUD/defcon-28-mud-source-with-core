inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 0, 1 }));
  set_short( "Passage - x57y0z1" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y0z1.c",
  "east" : DIR+"/rooms/x58y0z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
