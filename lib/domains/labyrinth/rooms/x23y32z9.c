inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 9 }));
  set_short( "Hallway - x23y32z9" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y32z9.c",
  "north" : DIR+"/rooms/x23y33z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
