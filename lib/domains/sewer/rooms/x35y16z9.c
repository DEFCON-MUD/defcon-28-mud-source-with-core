inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 9 }));
  set_short( "Corridor - x35y16z9" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y16z9.c",
  "north" : DIR+"/rooms/x35y17z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
