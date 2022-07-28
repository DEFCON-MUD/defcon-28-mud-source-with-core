inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 9 }));
  set_short( "Passage - x23y33z9" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z9.c",
  "south" : DIR+"/rooms/x23y32z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
