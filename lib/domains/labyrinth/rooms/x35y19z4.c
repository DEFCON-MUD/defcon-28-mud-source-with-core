inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 19, 4 }));
  set_short( "Hallway - x35y19z4" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y20z4.c",
  "south" : DIR+"/rooms/x35y18z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
