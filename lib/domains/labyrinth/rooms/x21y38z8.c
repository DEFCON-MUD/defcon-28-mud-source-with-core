inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 8 }));
  set_short( "Corridor - x21y38z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y38z8.c",
  "south" : DIR+"/rooms/x21y37z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
