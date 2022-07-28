inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 2 }));
  set_short( "Corridor - x9y8z2" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y8z2.c",
  "south" : DIR+"/rooms/x9y7z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
