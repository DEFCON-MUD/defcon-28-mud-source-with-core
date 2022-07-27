inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 19, 5 }));
  set_short( "Corridor - x59y19z5" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y20z5.c",
  "south" : DIR+"/rooms/x59y18z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
