inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 12, 7 }));
  set_short( "Corridor - x30y12z7" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y12z7.c",
  "east" : DIR+"/rooms/x31y12z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
