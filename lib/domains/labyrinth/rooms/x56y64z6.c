inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 64, 6 }));
  set_short( "Corridor - x56y64z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y64z6.c",
  "east" : DIR+"/rooms/x57y64z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
