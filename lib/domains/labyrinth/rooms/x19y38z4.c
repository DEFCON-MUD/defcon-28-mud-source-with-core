inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 4 }));
  set_short( "Hallway - x19y38z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y39z4.c",
  "south" : DIR+"/rooms/x19y37z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
