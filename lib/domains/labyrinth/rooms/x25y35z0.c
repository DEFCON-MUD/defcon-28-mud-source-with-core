inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 35, 0 }));
  set_short( "Corridor - x25y35z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y36z0.c",
  "south" : DIR+"/rooms/x25y34z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
