inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 52, 5 }));
  set_short( "Passage - x20y52z5" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y52z5.c",
  "east" : DIR+"/rooms/x21y52z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
