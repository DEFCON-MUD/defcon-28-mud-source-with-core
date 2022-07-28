inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 48, 1 }));
  set_short( "Passage - x55y48z1" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y49z1.c",
  "south" : DIR+"/rooms/x55y47z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
