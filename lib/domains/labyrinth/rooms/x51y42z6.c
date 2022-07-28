inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 6 }));
  set_short( "Hallway - x51y42z6" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y42z6.c",
  "south" : DIR+"/rooms/x51y41z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
