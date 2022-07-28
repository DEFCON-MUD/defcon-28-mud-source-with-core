inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 7 }));
  set_short( "Hallway - x23y48z7" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z7.c",
  "north" : DIR+"/rooms/x23y49z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
