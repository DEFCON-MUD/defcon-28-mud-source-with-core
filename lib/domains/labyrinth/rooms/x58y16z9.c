inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 16, 9 }));
  set_short( "Passage - x58y16z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y16z9.c",
  "east" : DIR+"/rooms/x59y16z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
