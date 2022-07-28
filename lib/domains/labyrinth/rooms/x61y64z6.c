inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 6 }));
  set_short( "Passage - x61y64z6" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z6.c",
  "east" : DIR+"/rooms/x62y64z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
