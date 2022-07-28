inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 2, 7 }));
  set_short( "Passage - x11y2z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y2z7.c",
  "east" : DIR+"/rooms/x12y2z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
