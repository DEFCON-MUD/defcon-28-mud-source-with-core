inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 46, 2 }));
  set_short( "Passage - x34y46z2" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y46z2.c",
  "east" : DIR+"/rooms/x35y46z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
