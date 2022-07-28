inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 42, 7 }));
  set_short( "Hallway - x12y42z7" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y42z7.c",
  "east" : DIR+"/rooms/x13y42z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
