inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 64, 8 }));
  set_short( "Corridor - x5y64z8" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y64z8.c",
  "east" : DIR+"/rooms/x6y64z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
