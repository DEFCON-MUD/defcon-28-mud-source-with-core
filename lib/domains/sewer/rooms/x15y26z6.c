inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 6 }));
  set_short( "Hallway - x15y26z6" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y26z6.c",
  "north" : DIR+"/rooms/x15y27z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
