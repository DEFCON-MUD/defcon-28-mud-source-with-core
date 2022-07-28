inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 0 }));
  set_short( "Corridor - x3y56z0" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y56z0.c",
  "east" : DIR+"/rooms/x4y56z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
