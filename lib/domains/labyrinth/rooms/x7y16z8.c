inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 16, 8 }));
  set_short( "Corridor - x7y16z8" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y17z8.c",
  "south" : DIR+"/rooms/x7y15z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
