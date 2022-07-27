inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 0 }));
  set_short( "Hallway - x11y36z0" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z0.c",
  "south" : DIR+"/rooms/x11y35z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
