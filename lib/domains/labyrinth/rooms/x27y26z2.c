inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 2 }));
  set_short( "Passage - x27y26z2" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y26z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
