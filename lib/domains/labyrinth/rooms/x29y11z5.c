inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 11, 5 }));
  set_short( "Corridor - x29y11z5" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y12z5.c",
  "south" : DIR+"/rooms/x29y10z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
