inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 2 }));
  set_short( "Hallway - x31y52z2" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y52z2.c",
  "east" : DIR+"/rooms/x32y52z2.c",
  "north" : DIR+"/rooms/x31y53z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
