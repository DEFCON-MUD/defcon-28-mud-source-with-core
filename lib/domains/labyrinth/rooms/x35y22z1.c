inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 1 }));
  set_short( "Hallway - x35y22z1" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y22z1.c",
  "south" : DIR+"/rooms/x35y21z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
