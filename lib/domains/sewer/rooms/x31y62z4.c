inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 4 }));
  set_short( "Hallway - x31y62z4" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y62z4.c",
  "south" : DIR+"/rooms/x31y61z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
