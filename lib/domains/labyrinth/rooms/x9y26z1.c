inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 26, 1 }));
  set_short( "Passage - x9y26z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y26z1.c",
  "north" : DIR+"/rooms/x9y27z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
