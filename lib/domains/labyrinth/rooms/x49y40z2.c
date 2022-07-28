inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 2 }));
  set_short( "Corridor - x49y40z2" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y41z2.c",
  "south" : DIR+"/rooms/x49y39z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
