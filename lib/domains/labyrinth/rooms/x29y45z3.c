inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 3 }));
  set_short( "Hallway - x29y45z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z3.c",
  "south" : DIR+"/rooms/x29y44z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
