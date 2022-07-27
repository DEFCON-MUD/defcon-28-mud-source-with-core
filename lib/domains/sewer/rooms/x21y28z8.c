inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 8 }));
  set_short( "Hallway - x21y28z8" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y28z8.c",
  "south" : DIR+"/rooms/x21y27z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
