inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 5 }));
  set_short( "Corridor - x3y40z5" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y40z5.c",
  "north" : DIR+"/rooms/x3y41z5.c",
  "south" : DIR+"/rooms/x3y39z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
