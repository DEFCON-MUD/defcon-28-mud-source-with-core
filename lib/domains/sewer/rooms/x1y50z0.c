inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 0 }));
  set_short( "Corridor - x1y50z0" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y50z0.c",
  "south" : DIR+"/rooms/x1y49z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
