inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 6 }));
  set_short( "Passage - x35y20z6" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y20z6.c",
  "north" : DIR+"/rooms/x35y21z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
