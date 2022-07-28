inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 0 }));
  set_short( "Passage - x55y54z0" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y55z0.c",
  "south" : DIR+"/rooms/x55y53z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
