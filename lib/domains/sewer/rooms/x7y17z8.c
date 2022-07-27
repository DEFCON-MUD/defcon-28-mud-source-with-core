inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 17, 8 }));
  set_short( "Passage - x7y17z8" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y18z8.c",
  "south" : DIR+"/rooms/x7y16z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
