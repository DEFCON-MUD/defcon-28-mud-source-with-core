inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 3 }));
  set_short( "Corridor - x19y58z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z3.c",
  "north" : DIR+"/rooms/x19y59z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
