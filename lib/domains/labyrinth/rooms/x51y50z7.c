inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 7 }));
  set_short( "Passage - x51y50z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y50z7.c",
  "east" : DIR+"/rooms/x52y50z7.c",
  "south" : DIR+"/rooms/x51y49z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
