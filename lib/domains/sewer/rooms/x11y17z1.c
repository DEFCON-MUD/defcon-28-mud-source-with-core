inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 1 }));
  set_short( "Passage - x11y17z1" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z1.c",
  "south" : DIR+"/rooms/x11y16z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
