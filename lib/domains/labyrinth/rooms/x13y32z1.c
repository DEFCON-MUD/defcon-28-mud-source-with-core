inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 1 }));
  set_short( "Hallway - x13y32z1" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y32z1.c",
  "north" : DIR+"/rooms/x13y33z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
