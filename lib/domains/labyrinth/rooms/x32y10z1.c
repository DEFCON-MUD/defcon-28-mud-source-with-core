inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 10, 1 }));
  set_short( "Hallway - x32y10z1" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y10z1.c",
  "east" : DIR+"/rooms/x33y10z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
