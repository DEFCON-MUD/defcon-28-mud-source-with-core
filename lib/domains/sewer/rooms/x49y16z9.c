inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 9 }));
  set_short( "Hallway - x49y16z9" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z9.c",
  "north" : DIR+"/rooms/x49y17z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
