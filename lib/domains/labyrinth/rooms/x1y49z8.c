inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 49, 8 }));
  set_short( "Passage - x1y49z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y50z8.c",
  "south" : DIR+"/rooms/x1y48z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
