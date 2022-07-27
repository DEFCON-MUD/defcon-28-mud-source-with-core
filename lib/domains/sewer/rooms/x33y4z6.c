inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 6 }));
  set_short( "Hallway - x33y4z6" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y5z6.c",
  "south" : DIR+"/rooms/x33y3z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
