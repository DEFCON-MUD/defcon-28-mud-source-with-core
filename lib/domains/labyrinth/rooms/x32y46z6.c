inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 46, 6 }));
  set_short( "Hallway - x32y46z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y46z6.c",
  "east" : DIR+"/rooms/x33y46z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
