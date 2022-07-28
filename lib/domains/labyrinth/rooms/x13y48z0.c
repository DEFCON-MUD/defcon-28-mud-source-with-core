inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 48, 0 }));
  set_short( "Hallway - x13y48z0" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y48z0.c",
  "north" : DIR+"/rooms/x13y49z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
