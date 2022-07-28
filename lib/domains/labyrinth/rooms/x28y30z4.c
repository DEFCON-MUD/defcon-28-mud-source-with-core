inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 30, 4 }));
  set_short( "Corridor - x28y30z4" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y30z4.c",
  "east" : DIR+"/rooms/x29y30z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
