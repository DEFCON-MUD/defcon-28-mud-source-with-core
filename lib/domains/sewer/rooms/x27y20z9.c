inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 9 }));
  set_short( "Hallway - x27y20z9" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y20z9.c",
  "north" : DIR+"/rooms/x27y21z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
