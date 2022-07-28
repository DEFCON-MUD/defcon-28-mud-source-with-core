inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 25, 8 }));
  set_short( "Hallway - x45y25z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y26z8.c",
  "south" : DIR+"/rooms/x45y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
