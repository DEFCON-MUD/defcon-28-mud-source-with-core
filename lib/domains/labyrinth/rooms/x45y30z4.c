inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 4 }));
  set_short( "Passage - x45y30z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y30z4.c",
  "east" : DIR+"/rooms/x46y30z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
