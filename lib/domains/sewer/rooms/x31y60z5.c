inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 5 }));
  set_short( "Hallway - x31y60z5" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y60z5.c",
  "north" : DIR+"/rooms/x31y61z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
