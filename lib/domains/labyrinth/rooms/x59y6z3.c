inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 3 }));
  set_short( "Hallway - x59y6z3" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y7z3.c",
  "south" : DIR+"/rooms/x59y5z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
