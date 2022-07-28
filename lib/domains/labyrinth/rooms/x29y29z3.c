inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 29, 3 }));
  set_short( "Corridor - x29y29z3" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y30z3.c",
  "south" : DIR+"/rooms/x29y28z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
