inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 11, 8 }));
  set_short( "Hallway - x21y11z8" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y12z8.c",
  "south" : DIR+"/rooms/x21y10z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
