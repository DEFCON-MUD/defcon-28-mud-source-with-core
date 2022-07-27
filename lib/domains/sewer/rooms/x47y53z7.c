inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 53, 7 }));
  set_short( "Corridor - x47y53z7" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y54z7.c",
  "south" : DIR+"/rooms/x47y52z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
