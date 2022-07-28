inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 42, 9 }));
  set_short( "Hallway - x2y42z9" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y42z9.c",
  "east" : DIR+"/rooms/x3y42z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
