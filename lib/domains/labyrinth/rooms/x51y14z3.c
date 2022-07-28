inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 14, 3 }));
  set_short( "Hallway - x51y14z3" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y15z3.c",
  "south" : DIR+"/rooms/x51y13z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
