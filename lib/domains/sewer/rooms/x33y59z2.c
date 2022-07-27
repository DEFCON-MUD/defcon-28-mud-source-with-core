inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 59, 2 }));
  set_short( "Hallway - x33y59z2" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y60z2.c",
  "south" : DIR+"/rooms/x33y58z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
