inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 4 }));
  set_short( "Passage - x55y48z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y48z4.c",
  "north" : DIR+"/rooms/x55y49z4.c",
  "south" : DIR+"/rooms/x55y47z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
