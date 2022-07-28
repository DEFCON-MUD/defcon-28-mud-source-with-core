inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 44, 3 }));
  set_short( "Hallway - x54y44z3" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y44z3.c",
  "east" : DIR+"/rooms/x55y44z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
