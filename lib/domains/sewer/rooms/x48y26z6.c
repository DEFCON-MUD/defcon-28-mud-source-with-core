inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 26, 6 }));
  set_short( "Hallway - x48y26z6" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y26z6.c",
  "east" : DIR+"/rooms/x49y26z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
