inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 9 }));
  set_short( "Hallway - x17y48z9" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y48z9.c",
  "south" : DIR+"/rooms/x17y47z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
