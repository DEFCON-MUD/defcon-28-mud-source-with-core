inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 22, 3 }));
  set_short( "Corridor - x7y22z3" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y23z3.c",
  "south" : DIR+"/rooms/x7y21z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
