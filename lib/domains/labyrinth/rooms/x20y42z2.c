inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 42, 2 }));
  set_short( "Corridor - x20y42z2" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y42z2.c",
  "east" : DIR+"/rooms/x21y42z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
