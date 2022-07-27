inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 1 }));
  set_short( "Corridor - x39y12z1" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y12z1.c",
  "east" : DIR+"/rooms/x40y12z1.c",
  "north" : DIR+"/rooms/x39y13z1.c",
  "south" : DIR+"/rooms/x39y11z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
