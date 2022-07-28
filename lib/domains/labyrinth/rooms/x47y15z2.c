inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 15, 2 }));
  set_short( "Passage - x47y15z2" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y16z2.c",
  "south" : DIR+"/rooms/x47y14z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
