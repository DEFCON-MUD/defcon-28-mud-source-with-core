inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 4 }));
  set_short( "Passage - x38y52z4" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z4.c",
  "east" : DIR+"/rooms/x39y52z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
