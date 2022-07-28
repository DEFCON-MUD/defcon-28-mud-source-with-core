inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 55, 1 }));
  set_short( "Hallway - x41y55z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y56z1.c",
  "south" : DIR+"/rooms/x41y54z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
