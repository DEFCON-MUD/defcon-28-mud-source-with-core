inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 41, 6 }));
  set_short( "Passage - x43y41z6" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y42z6.c",
  "south" : DIR+"/rooms/x43y40z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
