inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 4 }));
  set_short( "Corridor - x7y18z4" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y18z4.c",
  "south" : DIR+"/rooms/x7y17z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
