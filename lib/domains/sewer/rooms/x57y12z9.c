inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 9 }));
  set_short( "Hallway - x57y12z9" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y12z9.c",
  "east" : DIR+"/rooms/x58y12z9.c",
  "north" : DIR+"/rooms/x57y13z9.c",
  "south" : DIR+"/rooms/x57y11z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
