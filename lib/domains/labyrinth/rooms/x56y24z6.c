inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 24, 6 }));
  set_short( "Corridor - x56y24z6" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y24z6.c",
  "east" : DIR+"/rooms/x57y24z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
