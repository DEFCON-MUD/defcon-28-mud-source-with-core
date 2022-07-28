inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 59, 1 }));
  set_short( "Hallway - x29y59z1" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y60z1.c",
  "south" : DIR+"/rooms/x29y58z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
