inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 3, 7 }));
  set_short( "Corridor - x51y3z7" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y4z7.c",
  "south" : DIR+"/rooms/x51y2z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
