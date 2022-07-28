inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 42, 8 }));
  set_short( "Hallway - x21y42z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y42z8.c",
  "north" : DIR+"/rooms/x21y43z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
