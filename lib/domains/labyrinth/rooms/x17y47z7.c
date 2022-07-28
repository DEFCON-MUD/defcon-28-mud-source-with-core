inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 47, 7 }));
  set_short( "Passage - x17y47z7" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y48z7.c",
  "south" : DIR+"/rooms/x17y46z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
