inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 7, 6 }));
  set_short( "Corridor - x3y7z6" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y8z6.c",
  "south" : DIR+"/rooms/x3y6z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
