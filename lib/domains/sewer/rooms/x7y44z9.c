inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 9 }));
  set_short( "Hallway - x7y44z9" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y44z9.c",
  "north" : DIR+"/rooms/x7y45z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
