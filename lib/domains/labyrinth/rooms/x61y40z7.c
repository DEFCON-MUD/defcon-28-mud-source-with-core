inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 7 }));
  set_short( "Corridor - x61y40z7" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y41z7.c",
  "south" : DIR+"/rooms/x61y39z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
