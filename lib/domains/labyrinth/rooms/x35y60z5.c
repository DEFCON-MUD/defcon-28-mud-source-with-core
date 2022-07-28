inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 5 }));
  set_short( "Corridor - x35y60z5" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y60z5.c",
  "south" : DIR+"/rooms/x35y59z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
