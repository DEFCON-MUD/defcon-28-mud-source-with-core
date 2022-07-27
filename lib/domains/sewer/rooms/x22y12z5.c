inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 12, 5 }));
  set_short( "Corridor - x22y12z5" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y12z5.c",
  "east" : DIR+"/rooms/x23y12z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
