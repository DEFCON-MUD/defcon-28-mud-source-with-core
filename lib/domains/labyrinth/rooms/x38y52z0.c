inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 0 }));
  set_short( "Corridor - x38y52z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z0.c",
  "east" : DIR+"/rooms/x39y52z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
