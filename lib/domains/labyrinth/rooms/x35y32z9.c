inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 32, 9 }));
  set_short( "Passage - x35y32z9" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y32z9.c",
  "north" : DIR+"/rooms/x35y33z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
