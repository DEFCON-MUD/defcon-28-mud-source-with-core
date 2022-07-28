inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 9 }));
  set_short( "Passage - x61y20z9" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y20z9.c",
  "south" : DIR+"/rooms/x61y19z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
