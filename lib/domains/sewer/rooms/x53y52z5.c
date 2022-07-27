inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 5 }));
  set_short( "Passage - x53y52z5" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y52z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
