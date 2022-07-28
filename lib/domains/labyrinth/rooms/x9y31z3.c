inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 31, 3 }));
  set_short( "Hallway - x9y31z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y32z3.c",
  "south" : DIR+"/rooms/x9y30z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
