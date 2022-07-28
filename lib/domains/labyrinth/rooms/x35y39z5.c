inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 39, 5 }));
  set_short( "Passage - x35y39z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y40z5.c",
  "south" : DIR+"/rooms/x35y38z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
