inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 13, 8 }));
  set_short( "Corridor - x59y13z8" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y14z8.c",
  "south" : DIR+"/rooms/x59y12z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
