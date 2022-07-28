inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 14, 4 }));
  set_short( "Hallway - x23y14z4" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y15z4.c",
  "south" : DIR+"/rooms/x23y13z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
