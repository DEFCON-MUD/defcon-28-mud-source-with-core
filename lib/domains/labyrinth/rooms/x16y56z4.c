inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 56, 4 }));
  set_short( "Hallway - x16y56z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y56z4.c",
  "east" : DIR+"/rooms/x17y56z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
