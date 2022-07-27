inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 38, 3 }));
  set_short( "Corridor - x57y38z3" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y38z3.c",
  "south" : DIR+"/rooms/x57y37z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
