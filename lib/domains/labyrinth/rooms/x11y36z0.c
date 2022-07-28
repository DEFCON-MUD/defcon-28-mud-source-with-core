inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 0 }));
  set_short( "Passage - x11y36z0" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z0.c",
  "south" : DIR+"/rooms/x11y35z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
