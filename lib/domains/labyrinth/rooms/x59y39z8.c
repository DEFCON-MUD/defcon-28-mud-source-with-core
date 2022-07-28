inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 8 }));
  set_short( "Hallway - x59y39z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z8.c",
  "south" : DIR+"/rooms/x59y38z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
