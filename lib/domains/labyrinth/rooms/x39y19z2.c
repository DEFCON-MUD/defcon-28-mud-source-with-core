inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 19, 2 }));
  set_short( "Hallway - x39y19z2" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y20z2.c",
  "south" : DIR+"/rooms/x39y18z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
