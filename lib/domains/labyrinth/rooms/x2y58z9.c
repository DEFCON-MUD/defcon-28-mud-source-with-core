inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 58, 9 }));
  set_short( "Passage - x2y58z9" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y58z9.c",
  "east" : DIR+"/rooms/x3y58z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
