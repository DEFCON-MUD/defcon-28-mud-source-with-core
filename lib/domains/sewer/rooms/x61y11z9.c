inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 9 }));
  set_short( "Hallway - x61y11z9" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z9.c",
  "south" : DIR+"/rooms/x61y10z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
