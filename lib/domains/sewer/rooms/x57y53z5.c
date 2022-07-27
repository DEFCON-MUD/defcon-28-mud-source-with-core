inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 53, 5 }));
  set_short( "Hallway - x57y53z5" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y54z5.c",
  "south" : DIR+"/rooms/x57y52z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
