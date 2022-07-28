inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 4 }));
  set_short( "Corridor - x31y62z4" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y62z4.c",
  "south" : DIR+"/rooms/x31y61z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
