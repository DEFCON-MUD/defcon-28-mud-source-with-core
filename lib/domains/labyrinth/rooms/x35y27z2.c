inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 2 }));
  set_short( "Passage - x35y27z2" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z2.c",
  "south" : DIR+"/rooms/x35y26z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
