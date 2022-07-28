inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 18, 5 }));
  set_short( "Hallway - x11y18z5" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y18z5.c",
  "south" : DIR+"/rooms/x11y17z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
