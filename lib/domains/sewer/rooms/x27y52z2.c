inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 2 }));
  set_short( "Hallway - x27y52z2" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z2.c",
  "north" : DIR+"/rooms/x27y53z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
