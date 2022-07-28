inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 34, 3 }));
  set_short( "Hallway - x40y34z3" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y34z3.c",
  "east" : DIR+"/rooms/x41y34z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
