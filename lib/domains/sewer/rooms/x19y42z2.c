inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 42, 2 }));
  set_short( "Passage - x19y42z2" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y42z2.c",
  "east" : DIR+"/rooms/x20y42z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
