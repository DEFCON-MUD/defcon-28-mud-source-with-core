inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 2, 8 }));
  set_short( "Hallway - x5y2z8" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y2z8.c",
  "east" : DIR+"/rooms/x6y2z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
