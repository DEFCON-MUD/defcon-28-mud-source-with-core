inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 28, 1 }));
  set_short( "Passage - x26y28z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y28z1.c",
  "east" : DIR+"/rooms/x27y28z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
