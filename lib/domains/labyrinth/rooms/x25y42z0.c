inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 0 }));
  set_short( "Passage - x25y42z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y42z0.c",
  "south" : DIR+"/rooms/x25y41z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
