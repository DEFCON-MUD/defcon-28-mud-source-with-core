inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 9 }));
  set_short( "Corridor - x23y16z9" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y16z9.c",
  "north" : DIR+"/rooms/x23y17z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
