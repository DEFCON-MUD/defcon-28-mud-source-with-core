inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 30, 5 }));
  set_short( "Hallway - x17y30z5" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y30z5.c",
  "north" : DIR+"/rooms/x17y31z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
