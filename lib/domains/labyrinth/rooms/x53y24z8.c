inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 8 }));
  set_short( "Corridor - x53y24z8" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z8.c",
  "east" : DIR+"/rooms/x54y24z8.c",
  "north" : DIR+"/rooms/x53y25z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
