inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 9 }));
  set_short( "Corridor - x9y24z9" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y24z9.c",
  "south" : DIR+"/rooms/x9y23z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
