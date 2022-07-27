inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 1 }));
  set_short( "Hallway - x44y20z1" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z1.c",
  "east" : DIR+"/rooms/x45y20z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
