inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 34, 3 }));
  set_short( "Hallway - x5y34z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y34z3.c",
  "north" : DIR+"/rooms/x5y35z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
