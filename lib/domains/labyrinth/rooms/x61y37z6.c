inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 6 }));
  set_short( "Corridor - x61y37z6" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z6.c",
  "south" : DIR+"/rooms/x61y36z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
