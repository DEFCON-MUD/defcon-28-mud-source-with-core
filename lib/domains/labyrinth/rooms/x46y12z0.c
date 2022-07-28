inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 12, 0 }));
  set_short( "Hallway - x46y12z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y12z0.c",
  "east" : DIR+"/rooms/x47y12z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
