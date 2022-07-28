inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 44, 3 }));
  set_short( "Hallway - x50y44z3" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y44z3.c",
  "east" : DIR+"/rooms/x51y44z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
