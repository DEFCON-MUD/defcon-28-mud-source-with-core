inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 12, 3 }));
  set_short( "Corridor - x17y12z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y13z3.c",
  "south" : DIR+"/rooms/x17y11z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
