inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 42, 2 }));
  set_short( "Passage - x18y42z2" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y42z2.c",
  "east" : DIR+"/rooms/x19y42z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
