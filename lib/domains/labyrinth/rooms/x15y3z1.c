inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 3, 1 }));
  set_short( "Hallway - x15y3z1" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y4z1.c",
  "south" : DIR+"/rooms/x15y2z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
