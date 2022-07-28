inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 17, 0 }));
  set_short( "Corridor - x59y17z0" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y18z0.c",
  "south" : DIR+"/rooms/x59y16z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
