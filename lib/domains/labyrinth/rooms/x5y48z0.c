inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 0 }));
  set_short( "Corridor - x5y48z0" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z0.c",
  "south" : DIR+"/rooms/x5y47z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
