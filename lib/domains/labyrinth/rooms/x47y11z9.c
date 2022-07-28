inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 11, 9 }));
  set_short( "Hallway - x47y11z9" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y12z9.c",
  "south" : DIR+"/rooms/x47y10z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
