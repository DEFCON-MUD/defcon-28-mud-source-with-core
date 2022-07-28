inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 0, 4 }));
  set_short( "Hallway - x42y0z4" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y0z4.c",
  "east" : DIR+"/rooms/x43y0z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
