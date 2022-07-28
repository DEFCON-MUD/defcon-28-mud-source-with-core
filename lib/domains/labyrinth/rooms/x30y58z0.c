inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 58, 0 }));
  set_short( "Corridor - x30y58z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y58z0.c",
  "east" : DIR+"/rooms/x31y58z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
