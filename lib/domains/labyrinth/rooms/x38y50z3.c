inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 50, 3 }));
  set_short( "Hallway - x38y50z3" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y50z3.c",
  "east" : DIR+"/rooms/x39y50z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
