inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 27, 6 }));
  set_short( "Hallway - x51y27z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y28z6.c",
  "south" : DIR+"/rooms/x51y26z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
