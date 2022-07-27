inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 1 }));
  set_short( "Passage - x1y16z1" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y16z1.c",
  "north" : DIR+"/rooms/x1y17z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
