inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 58, 7 }));
  set_short( "Hallway - x51y58z7" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y58z7.c",
  "south" : DIR+"/rooms/x51y57z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
