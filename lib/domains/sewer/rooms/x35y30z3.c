inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 30, 3 }));
  set_short( "Passage - x35y30z3" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y31z3.c",
  "south" : DIR+"/rooms/x35y29z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
