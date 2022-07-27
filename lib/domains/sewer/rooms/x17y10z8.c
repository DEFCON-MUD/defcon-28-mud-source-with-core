inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 8 }));
  set_short( "Corridor - x17y10z8" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z8.c",
  "south" : DIR+"/rooms/x17y9z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
