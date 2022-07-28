inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 3 }));
  set_short( "Hallway - x19y12z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y13z3.c",
  "south" : DIR+"/rooms/x19y11z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
