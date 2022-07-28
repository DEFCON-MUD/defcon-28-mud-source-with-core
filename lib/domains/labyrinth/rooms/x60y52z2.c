inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 52, 2 }));
  set_short( "Hallway - x60y52z2" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y52z2.c",
  "east" : DIR+"/rooms/x61y52z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
