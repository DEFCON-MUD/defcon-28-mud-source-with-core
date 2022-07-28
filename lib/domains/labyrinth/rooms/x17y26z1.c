inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 1 }));
  set_short( "Hallway - x17y26z1" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y26z1.c",
  "north" : DIR+"/rooms/x17y27z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
