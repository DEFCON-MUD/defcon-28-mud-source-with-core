inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 1 }));
  set_short( "Passage - x61y37z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z1.c",
  "south" : DIR+"/rooms/x61y36z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
