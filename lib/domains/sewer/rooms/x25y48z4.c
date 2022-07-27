inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 4 }));
  set_short( "Hallway - x25y48z4" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y48z4.c",
  "east" : DIR+"/rooms/x26y48z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
