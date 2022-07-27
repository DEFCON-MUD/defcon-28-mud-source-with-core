inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 10, 2 }));
  set_short( "Corridor - x30y10z2" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y10z2.c",
  "east" : DIR+"/rooms/x31y10z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
