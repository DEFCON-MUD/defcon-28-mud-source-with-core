inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 9 }));
  set_short( "Hallway - x25y54z9" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y54z9.c",
  "north" : DIR+"/rooms/x25y55z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
