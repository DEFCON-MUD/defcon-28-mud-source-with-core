inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 4 }));
  set_short( "Hallway - x39y16z4" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y16z4.c",
  "east" : DIR+"/rooms/x40y16z4.c",
  "north" : DIR+"/rooms/x39y17z4.c",
  "south" : DIR+"/rooms/x39y15z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
