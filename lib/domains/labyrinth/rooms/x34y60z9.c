inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 60, 9 }));
  set_short( "Passage - x34y60z9" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y60z9.c",
  "east" : DIR+"/rooms/x35y60z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
