inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 8 }));
  set_short( "Hallway - x1y24z8" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y25z8.c",
  "south" : DIR+"/rooms/x1y23z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
