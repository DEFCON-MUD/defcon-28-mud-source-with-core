inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 1 }));
  set_short( "Corridor - x3y16z1" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y16z1.c",
  "north" : DIR+"/rooms/x3y17z1.c",
  "south" : DIR+"/rooms/x3y15z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
