inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 5 }));
  set_short( "Passage - x1y18z5" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y19z5.c",
  "south" : DIR+"/rooms/x1y17z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
