inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 17, 2 }));
  set_short( "Hallway - x45y17z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y18z2.c",
  "south" : DIR+"/rooms/x45y16z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
