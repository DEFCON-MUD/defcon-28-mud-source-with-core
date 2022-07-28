inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 2, 8 }));
  set_short( "Passage - x42y2z8" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y2z8.c",
  "east" : DIR+"/rooms/x43y2z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
