inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 4, 1 }));
  set_short( "Corridor - x52y4z1" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y4z1.c",
  "east" : DIR+"/rooms/x53y4z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
