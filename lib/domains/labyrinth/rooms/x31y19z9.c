inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 19, 9 }));
  set_short( "Corridor - x31y19z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y20z9.c",
  "south" : DIR+"/rooms/x31y18z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
