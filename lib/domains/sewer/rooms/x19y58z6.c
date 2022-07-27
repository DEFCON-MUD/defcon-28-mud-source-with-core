inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 6 }));
  set_short( "Passage - x19y58z6" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z6.c",
  "north" : DIR+"/rooms/x19y59z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
