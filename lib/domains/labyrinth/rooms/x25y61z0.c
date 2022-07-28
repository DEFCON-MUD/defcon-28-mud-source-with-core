inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 61, 0 }));
  set_short( "Hallway - x25y61z0" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y62z0.c",
  "south" : DIR+"/rooms/x25y60z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
