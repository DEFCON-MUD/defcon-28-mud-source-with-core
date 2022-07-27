inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 59, 1 }));
  set_short( "Passage - x21y59z1" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y60z1.c",
  "south" : DIR+"/rooms/x21y58z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
