inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 60, 1 }));
  set_short( "Hallway - x26y60z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y60z1.c",
  "east" : DIR+"/rooms/x27y60z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
