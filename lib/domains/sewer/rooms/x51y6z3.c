inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 3 }));
  set_short( "Corridor - x51y6z3" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y6z3.c",
  "north" : DIR+"/rooms/x51y7z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
