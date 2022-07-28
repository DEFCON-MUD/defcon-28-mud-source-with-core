inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 58, 6 }));
  set_short( "Passage - x46y58z6" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y58z6.c",
  "east" : DIR+"/rooms/x47y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
