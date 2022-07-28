inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 46, 6 }));
  set_short( "Corridor - x50y46z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y46z6.c",
  "east" : DIR+"/rooms/x51y46z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
