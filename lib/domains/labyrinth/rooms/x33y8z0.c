inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 0 }));
  set_short( "Passage - x33y8z0" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y9z0.c",
  "south" : DIR+"/rooms/x33y7z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
