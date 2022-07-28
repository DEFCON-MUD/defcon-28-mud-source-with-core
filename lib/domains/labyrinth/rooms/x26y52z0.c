inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 52, 0 }));
  set_short( "Passage - x26y52z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y52z0.c",
  "east" : DIR+"/rooms/x27y52z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
