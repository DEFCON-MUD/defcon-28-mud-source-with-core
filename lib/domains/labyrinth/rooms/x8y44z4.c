inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 44, 4 }));
  set_short( "Corridor - x8y44z4" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y44z4.c",
  "east" : DIR+"/rooms/x9y44z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
