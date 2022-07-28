inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 3 }));
  set_short( "Hallway - x1y30z3" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y30z3.c",
  "south" : DIR+"/rooms/x1y29z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
