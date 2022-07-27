inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 7 }));
  set_short( "Hallway - x17y10z7" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y11z7.c",
  "south" : DIR+"/rooms/x17y9z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
