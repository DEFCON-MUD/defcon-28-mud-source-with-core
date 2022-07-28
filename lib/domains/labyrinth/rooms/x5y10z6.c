inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 6 }));
  set_short( "Hallway - x5y10z6" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y10z6.c",
  "east" : DIR+"/rooms/x6y10z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
