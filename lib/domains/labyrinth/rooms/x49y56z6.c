inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 56, 6 }));
  set_short( "Passage - x49y56z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y56z6.c",
  "north" : DIR+"/rooms/x49y57z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
