inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 6, 1 }));
  set_short( "Corridor - x59y6z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y6z1.c",
  "north" : DIR+"/rooms/x59y7z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
