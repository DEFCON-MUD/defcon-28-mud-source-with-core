inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 54, 4 }));
  set_short( "Corridor - x38y54z4" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y54z4.c",
  "east" : DIR+"/rooms/x39y54z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
