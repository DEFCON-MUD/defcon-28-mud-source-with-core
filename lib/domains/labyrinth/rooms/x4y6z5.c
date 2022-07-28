inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 6, 5 }));
  set_short( "Corridor - x4y6z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y6z5.c",
  "east" : DIR+"/rooms/x5y6z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
