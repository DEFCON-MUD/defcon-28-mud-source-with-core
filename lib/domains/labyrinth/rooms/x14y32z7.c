inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 32, 7 }));
  set_short( "Corridor - x14y32z7" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y32z7.c",
  "east" : DIR+"/rooms/x15y32z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
