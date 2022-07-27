inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 2 }));
  set_short( "Corridor - x35y52z2" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y53z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
