inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 39, 3 }));
  set_short( "Corridor - x21y39z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y40z3.c",
  "south" : DIR+"/rooms/x21y38z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
