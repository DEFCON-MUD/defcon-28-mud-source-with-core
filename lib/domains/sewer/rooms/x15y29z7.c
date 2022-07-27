inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 29, 7 }));
  set_short( "Corridor - x15y29z7" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y30z7.c",
  "south" : DIR+"/rooms/x15y28z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
