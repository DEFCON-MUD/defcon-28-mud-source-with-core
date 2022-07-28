inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 34, 3 }));
  set_short( "Hallway - x58y34z3" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y34z3.c",
  "east" : DIR+"/rooms/x59y34z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
