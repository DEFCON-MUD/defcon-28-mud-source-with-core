inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 6 }));
  set_short( "Corridor - x55y54z6" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y54z6.c",
  "north" : DIR+"/rooms/x55y55z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
