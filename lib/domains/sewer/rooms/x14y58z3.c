inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 3 }));
  set_short( "Hallway - x14y58z3" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z3.c",
  "east" : DIR+"/rooms/x15y58z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
