inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 31, 3 }));
  set_short( "Corridor - x15y31z3" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y32z3.c",
  "south" : DIR+"/rooms/x15y30z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
