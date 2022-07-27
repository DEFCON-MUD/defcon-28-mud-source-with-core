inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 2 }));
  set_short( "Corridor - x17y44z2" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z2.c",
  "south" : DIR+"/rooms/x17y43z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
