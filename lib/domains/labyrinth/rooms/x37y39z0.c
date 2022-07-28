inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 39, 0 }));
  set_short( "Corridor - x37y39z0" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y40z0.c",
  "south" : DIR+"/rooms/x37y38z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
