inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 42, 6 }));
  set_short( "Hallway - x3y42z6" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y43z6.c",
  "south" : DIR+"/rooms/x3y41z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
