inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 1 }));
  set_short( "Corridor - x45y50z1" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y50z1.c",
  "south" : DIR+"/rooms/x45y49z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
