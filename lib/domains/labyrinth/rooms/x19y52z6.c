inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 52, 6 }));
  set_short( "Hallway - x19y52z6" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y52z6.c",
  "south" : DIR+"/rooms/x19y51z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
