inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 52, 1 }));
  set_short( "Hallway - x17y52z1" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y53z1.c",
  "south" : DIR+"/rooms/x17y51z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
