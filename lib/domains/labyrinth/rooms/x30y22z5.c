inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 22, 5 }));
  set_short( "Passage - x30y22z5" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y22z5.c",
  "east" : DIR+"/rooms/x31y22z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
