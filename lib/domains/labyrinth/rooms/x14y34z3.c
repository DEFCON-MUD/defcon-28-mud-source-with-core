inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 34, 3 }));
  set_short( "Corridor - x14y34z3" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y34z3.c",
  "east" : DIR+"/rooms/x15y34z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
