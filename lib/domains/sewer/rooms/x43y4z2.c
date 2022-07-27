inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 2 }));
  set_short( "Hallway - x43y4z2" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y4z2.c",
  "south" : DIR+"/rooms/x43y3z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
