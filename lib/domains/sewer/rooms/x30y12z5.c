inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 12, 5 }));
  set_short( "Corridor - x30y12z5" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y12z5.c",
  "east" : DIR+"/rooms/x31y12z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
