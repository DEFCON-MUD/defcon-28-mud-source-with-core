inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 5 }));
  set_short( "Hallway - x51y40z5" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y40z5.c",
  "south" : DIR+"/rooms/x51y39z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
