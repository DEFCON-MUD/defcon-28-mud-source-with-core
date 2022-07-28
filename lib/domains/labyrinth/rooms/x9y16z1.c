inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 16, 1 }));
  set_short( "Hallway - x9y16z1" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y16z1.c",
  "south" : DIR+"/rooms/x9y15z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
