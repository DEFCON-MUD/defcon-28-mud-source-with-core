inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 3, 3 }));
  set_short( "Hallway - x9y3z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y4z3.c",
  "south" : DIR+"/rooms/x9y2z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
