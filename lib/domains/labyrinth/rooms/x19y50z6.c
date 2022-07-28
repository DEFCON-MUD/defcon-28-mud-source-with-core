inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 6 }));
  set_short( "Corridor - x19y50z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y51z6.c",
  "south" : DIR+"/rooms/x19y49z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
